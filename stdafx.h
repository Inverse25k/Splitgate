#pragma once

#include <Windows.h>
#include <iostream>
#include <Psapi.h>
#include <vector>
#include <string>
#include <algorithm>

#include <d3d11.h>
#pragma comment(lib, "d3d11.lib")

#include "SDK.hpp"

#include ".asm/no_inlinesyscalls.h"
#include ".asm/spoof.h"

#include "memory/memory.h"
#include "memory/render.h"
#include "menu/menu.h"

#include "Canvas/ZeroGUI.h"
#include "Canvas/ZeroInput.h"