#pragma once

#include "../stdafx.h"

class hooking {
public:

    static inline uintptr_t BaseAddress = (uintptr_t)GetModuleHandleA(NULL);

    static inline void memcpy_(void* _Dst, void const* _Src, size_t _Size)
    {
        auto csrc = (char*)_Src;
        auto cdest = (char*)_Dst;

        for (int i = 0; i < _Size; i++)
        {
            cdest[i] = csrc[i];
        }
    }

    static inline void SwapVtable(void* obj, uint32_t index, void* hook) {
        auto currVt = *(void**)(obj);

        auto vtable = *(void***)(obj);
        int i = 0;

        for (; vtable[i]; i++)
            __noop();

        auto newVt = new uintptr_t[i];

        memcpy_(newVt, currVt, i * 0x8);

        newVt[index] = (uintptr_t)hook;

        *(uintptr_t**)(obj) = newVt;
    }

    static inline struct HookContext
    {
        BYTE original_code[64];
        SIZE_T dst_ptr;
        BYTE far_jmp[6];
    };

    static inline HookContext* presenthook64;

    static inline const void* DetourFunc64(BYTE* const src, const BYTE* dest, const unsigned int jumplength)
    {
        // Allocate a memory page that is going to contain executable code.
        MEMORY_BASIC_INFORMATION mbi;
        for (SIZE_T addr = (SIZE_T)src; addr > (SIZE_T)src - 0x80000000; addr = (SIZE_T)mbi.BaseAddress - 1)
        {
            if (!VirtualQuery((LPCVOID)addr, &mbi, sizeof(mbi)))
            {
                break;
            }

            if (mbi.State == MEM_FREE)
            {
                if (presenthook64 = (HookContext*)VirtualAlloc(mbi.BaseAddress, 0x1000, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE))
                {
                    break;
                }
            }
        }

        // If allocating a memory page failed, the function failed.
        if (!presenthook64)
        {
            return NULL;
        }

        // Save original code and apply detour. The detour code is:
        // push rax
        // movabs rax, 0xCCCCCCCCCCCCCCCC
        // xchg rax, [rsp]
        // ret
        BYTE detour[] = { 0x50, 0x48, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x48, 0x87, 0x04, 0x24, 0xC3 };
        const unsigned int length = jumplength;
        memcpy(presenthook64->original_code, src, length);
        memcpy(&presenthook64->original_code[length], detour, sizeof(detour));
        *(SIZE_T*)&presenthook64->original_code[length + 3] = (SIZE_T)src + length;

        // Build a far jump to the destination function.
        *(WORD*)&presenthook64->far_jmp = 0x25FF;
        *(DWORD*)(presenthook64->far_jmp + 2) = (DWORD)((SIZE_T)presenthook64 - (SIZE_T)src + FIELD_OFFSET(HookContext, dst_ptr) - 6);
        presenthook64->dst_ptr = (SIZE_T)dest;

        // Write the hook to the original function.
        DWORD flOld = 0;
        VirtualProtect(src, 6, PAGE_EXECUTE_READWRITE, &flOld);
        memcpy(src, presenthook64->far_jmp, sizeof(presenthook64->far_jmp));
        VirtualProtect(src, 6, flOld, &flOld);

        // Return a pointer to the original code.
        return presenthook64->original_code;
    }

    static PIMAGE_NT_HEADERS getHeader(HMODULE mxdule) {
        return (PIMAGE_NT_HEADERS)((PBYTE)mxdule + PIMAGE_DOS_HEADER(mxdule)->e_lfanew);
    }

    static inline DWORD loopCount = NULL;

    static PBYTE FindPattern(PBYTE start, DWORD size, LPCSTR pattern, LPCSTR mask) {

        auto checkMask = [](PBYTE buffer, LPCSTR pattern, LPCSTR mask) -> BOOL
        {
            for (auto x = buffer; *mask; pattern++, mask++, x++) {
                auto addr = *(BYTE*)(pattern);
                if (addr != *x && *mask != '?')
                    return FALSE;
            }

            return TRUE;
        };

        for (auto x = 0; x < size - strlen(mask); x++) {

            auto addr = (PBYTE)start + x;
            if (checkMask(addr, pattern, mask)) {
                return addr;
            }
        }
    }

    static PBYTE FindPattern(HMODULE mxdule, LPCSTR pattern, LPCSTR mask, DWORD occurence) {

        size_t size = getHeader(mxdule)->OptionalHeader.SizeOfImage;

        auto checkMask = [](PBYTE buffer, LPCSTR pattern, LPCSTR mask) -> BOOL
        {
            for (auto x = buffer; *mask; pattern++, mask++, x++) {
                auto addr = *(BYTE*)(pattern);
                if (addr != *x && *mask != '?')
                    return FALSE;
            }

            return TRUE;
        };

        if (occurence)
            occurence -= 1;

        for (auto x = 0; x < size - strlen(mask); x++) {

            auto addr = (PBYTE)mxdule + x;

            if (checkMask(addr, pattern, mask)) {

                if (!occurence || loopCount == occurence && addr) {
                    loopCount = NULL; // resets the count. (Incase we need to use it again)
                    return addr;
                }

                if (loopCount < occurence) {
                    addr = FindPattern((PBYTE)mxdule + x, (PBYTE)size - addr, pattern, mask);
                    ++loopCount;
                    continue;
                }
            }
        }

        return NULL;
    }

    uintptr_t PatternScan(uintptr_t moduleAdress, const char* signature)
    {
        static auto patternToByte = [](const char* pattern)
        {
            auto       bytes = std::vector<int>{};
            const auto start = const_cast<char*>(pattern);
            const auto end = const_cast<char*>(pattern) + strlen(pattern);

            for (auto current = start; current < end; ++current)
            {
                if (*current == '?')
                {
                    ++current;

                    if (*current == '?')
                        ++current;

                    bytes.push_back(-1);
                }
                else { bytes.push_back(strtoul(current, &current, 16)); }
            }
            return bytes;
        };

        const auto dosHeader = (PIMAGE_DOS_HEADER)moduleAdress;
        const auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)moduleAdress + dosHeader->e_lfanew);

        const auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
        auto       patternBytes = patternToByte(signature);
        const auto scanBytes = reinterpret_cast<std::uint8_t*>(moduleAdress);

        const auto dd = patternBytes.size();
        const auto d = patternBytes.data();

        for (auto i = 0ul; i < sizeOfImage - dd; ++i)
        {
            bool found = true;
            for (auto j = 0ul; j < dd; ++j)
            {
                if (scanBytes[i + j] != d[j] && d[j] != -1)
                {
                    found = false;
                    break;
                }
            }
            if (found) { return reinterpret_cast<uintptr_t>(&scanBytes[i]); }
        }
        return NULL;
    }

    uint8_t* Pattern_Scan(void* module, const char* signature) {
        static auto pattern_to_byte = [](const char* pattern) {
            auto bytes = std::vector<int>{};
            auto start = const_cast<char*>(pattern);
            auto end = const_cast<char*>(pattern) + strlen(pattern);

            for (auto current = start; current < end; ++current) {
                if (*current == '?') {
                    ++current;
                    if (*current == '?')
                        ++current;
                    bytes.push_back(-1);
                }
                else {
                    bytes.push_back(strtoul(current, &current, 16));
                }
            }
            return bytes;
        };

        auto dos_headers = reinterpret_cast<PIMAGE_DOS_HEADER>(module);
        auto nt_headers = reinterpret_cast<PIMAGE_NT_HEADERS>((std::uint8_t*)module + dos_headers->e_lfanew);

        auto size_of_image = nt_headers->OptionalHeader.SizeOfImage;
        auto pattern_bytes = pattern_to_byte(signature);
        auto scan_bytes = reinterpret_cast<std::uint8_t*>(module);

        auto s = pattern_bytes.size();
        auto d = pattern_bytes.data();

        for (auto i = 0ul; i < size_of_image - s; ++i) {
            bool found = true;
            for (auto j = 0ul; j < s; ++j) {
                if (scan_bytes[i + j] != d[j] && d[j] != -1) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return &scan_bytes[i];
            }
        }
        return nullptr;
    }

    PBYTE ScanPattern(uintptr_t moduleAdress, const char* signature)
    {
        static auto patternToByte = [](const char* pattern)
        {
            auto       bytes = std::vector<int>{};
            const auto start = const_cast<char*>(pattern);
            const auto end = const_cast<char*>(pattern) + strlen(pattern);

            for (auto current = start; current < end; ++current)
            {
                if (*current == '?')
                {
                    ++current;

                    if (*current == '?')
                        ++current;

                    bytes.push_back(-1);
                }
                else { bytes.push_back(strtoul(current, &current, 16)); }
            }
            return bytes;
        };

        const auto dosHeader = (PIMAGE_DOS_HEADER)moduleAdress;
        const auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)moduleAdress + dosHeader->e_lfanew);

        const auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
        auto       patternBytes = patternToByte(signature);
        const auto scanBytes = reinterpret_cast<std::uint8_t*>(moduleAdress);

        const auto dd = patternBytes.size();
        const auto d = patternBytes.data();

        for (auto i = 0ul; i < sizeOfImage - dd; ++i)
        {
            bool found = true;
            for (auto j = 0ul; j < dd; ++j)
            {
                if (scanBytes[i + j] != d[j] && d[j] != -1)
                {
                    found = false;
                    break;
                }
            }
            if (found) { return reinterpret_cast<PBYTE>(&scanBytes[i]); }
        }
        return NULL;
    }
};

inline hooking* hook = new hooking;
