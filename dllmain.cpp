#include "stdafx.h"

void main() {
	//system("color b");
	//printf("\n\n  [ Eternal Splitgate ]  \n");

	//printf("  BaseAddress: 0x%x\n", BaseAddress);

	/***************-UWORLD-**********************/
	uintptr_t UWorld = hook->PatternScan(hook->BaseAddress, "48 8B 1D ? ? ? ? 48 85 DB 74 3B");
	int32_t Offset = *(int32_t*)(UWorld + 3); ue->GWorld = (SDK::UWorld**)(UWorld + Offset + 7);
	//printf("  UWorld: 0x%x\n", ue->GWorld - (SDK::UWorld**)GetModuleHandleW(nullptr));
	/********************************************/

	/***************-GObjects-**********************/
	uintptr_t address = hook->PatternScan(hook->BaseAddress, "48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 1C D1 EB 03 49 8B DD");
	uintptr_t offset = *reinterpret_cast<uint32_t*>(address + 3);
	SDK::UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(address + 7 + offset);
	//printf("  GObjects: 0x%x\n", SDK::UObject::GObjects - (SDK::FUObjectArray*)GetModuleHandleW(nullptr));
	/**********************************************/

	/***************-GNames-**********************/
	uintptr_t faddress = hook->PatternScan(hook->BaseAddress, "41 b8 ? ? ? ? e8 ? ? ? ? 48 8b c3 48 83 c4 ? 5b c3 48 8b 42");
	SDK::FName::GNames = reinterpret_cast<SDK::TNameEntryArray*>(faddress - 0x3F);
	//printf("  GNames: 0x%x\n", SDK::FName::GNames - (SDK::TNameEntryArray*)GetModuleHandleW(nullptr));
	/**********************************************/

	/***************-BoneMatrix-*******************/
	ue->GetBoneMatrix = reinterpret_cast<uintptr_t>(hooking::FindPattern(GetModuleHandleW(nullptr), "\xE8\x00\x00\x00\x00\x48\x8B\x47\x30\xF3\x0F\x10\x45\x00", ("x????xxxxxxxx?"), 0));
	ue->GetBoneMatrix = reinterpret_cast<uintptr_t>(rva(ue->GetBoneMatrix, 5));
	//printf("  GetBoneMatrix: 0x%x\n", ue->GetBoneMatrix - (uintptr_t)GetModuleHandleW(nullptr));
	/*********************************************/

	/***************-Post render-**********************/
	SDK::UWorld* GWorld = *ue->GWorld;
	auto GameInstance = GWorld->OwningGameInstance;
	auto LocalPlayer = GameInstance->LocalPlayers[0];
	auto ViewportClient = LocalPlayer->ViewportClient;
	// swapping vtables
	auto vTable = *(void***)(ViewportClient);
	origin_renderer = (PostRender_t)vTable[100];
	hook->SwapVtable((void*)ViewportClient, 100, MainRenderer);
	//printf("  ViewportClient: 0x%x\n", ViewportClient - (SDK::UGameViewportClient*)GetModuleHandleW(nullptr));
	/**********************************************/

	if (!ue->SetObjects()) return;

	if (GameInstance->IsA(SDK::UGameInstance::StaticClass())) {
		auto local_player = GameInstance->LocalPlayers[0];
		if (local_player) {
			auto save = ((SDK::UPortalWarsLocalPlayer*)local_player)->GetUserSaveGame();
			save->bHasCompletedTutorial = true;
			save->bHasWatchedIntroVideo = true;
		}
	}

}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		freopen("conin$", "r", stdin);
		freopen("conout$", "w", stdout);
		freopen("conout$", "w", stderr);
		main();
	}
	return TRUE;
}