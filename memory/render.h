#pragma once

#include "../stdafx.h"
#include "../Canvas/ZeroGUI.h"
#include "../menu/menu.h"

static bool unhooked = false;

static inline void MainLoop(SDK::UCanvas* pCanvas)
{
	if (!ue->SetObjects()) return;

	if (SDK::Syscall::NtGetAsyncKeyState(Settings::Misc::unhooked_key)) unhooked = true;
	if (unhooked) return;

	auto MyPlayer = (SDK::APortalWarsCharacter*)ue->PlayerController->K2_GetPawn();
	if (!MyPlayer) return;

	auto CamManager = ue->PlayerController->PlayerCameraManager;

	SDK::TArray<SDK::AActor*> actors{};
	ue->GPStatics->STATIC_GetAllActorsOfClass(ue->World, (SDK::AActor*)SDK::APortalWarsCharacter::StaticClass(), &actors);

	if (MyPlayer->IsAlive()) {
		bool iscollision = false;
		if (SDK::Syscall::NtGetAsyncKeyState(Settings::exploits::noclip)) iscollision = !iscollision;

		if (iscollision && MyPlayer->bActorEnableCollision) MyPlayer->bActorEnableCollision = false;
		else if (!iscollision && !MyPlayer->bActorEnableCollision) MyPlayer->bActorEnableCollision = true;
		
		*(float*)(MyPlayer + 0xC5C) = 0.f;
		*(float*)(MyPlayer + 0xC60) = 1000.f;
		*(float*)(MyPlayer + 0xC64) = 1000.f;

		auto weapon = *(uintptr_t*)((uintptr_t)MyPlayer + 0x7E0);

		SDK::AGun* MyGun;

		if (weapon) {
			if (Settings::exploits::norecoil)
			{
				*(float*)(weapon + 0x348) = 0.f; // no recoil
				*(float*)(weapon + 0x34C) = 0.f; // no recoil
			}
			if (Settings::exploits::rapid)
			{
				*(float*)(weapon + 0x2D0) = 0.00001f; // Rapid Fire
			}
			if (Settings::exploits::nospread)
			{
				if (false && MyGun->IsA(SDK::ALineTraceGun::StaticClass()))
				{
					SDK::FLineTraceGunData data = SDK::Read<SDK::FLineTraceGunData>(reinterpret_cast<uintptr_t>(MyGun) + 0x670);
					data.WeaponSpread = 0.f;
					data.WeaponSpreadZoomed = 0.f;
					for (int i = 0; i < data.SpreadPattern.Num(); i++) // shotgun bullet manipulation
					{
						data.SpreadPattern[i].X = 0.f;
						data.SpreadPattern[i].Y = 0.f;
					}
					SDK::Write<SDK::FLineTraceGunData>(reinterpret_cast<uintptr_t>(MyGun) + 0x670, data);
				}
			}
			//if (Settings::exploits::high_jump)
			//{
			//	SDK::Write<float>(MyPlayer) + 0x158, Settings::exploits::high_jumpValue;
			//}

			if (SDK::Syscall::NtGetAsyncKeyState(Settings::exploits::airstuck)) { //Alt Keybind
				*reinterpret_cast<float*>(reinterpret_cast<PBYTE>(MyPlayer) + 0x98) = 0; //CustomTimeDilation Offset
			}
			else {
				*reinterpret_cast<float*>(reinterpret_cast<PBYTE>(MyPlayer) + 0x98) = 1; //CustomTimeDilation Offset
			}
			//*(SDK::EAmmoType*)(weapon + 0x2CC) = SDK::EAmmoType::Battery; // use bullets for all weapons
 		}
	}

	float LastDistance = FLT_MAX;
	SDK::APortalWarsCharacter* ClosestEnemy = nullptr;

	for (int i = 0; i < actors.Num(); i++) {
		SDK::APortalWarsCharacter* Enemy = (SDK::APortalWarsCharacter*)actors[i];
		if (!Enemy || Enemy == MyPlayer) continue;

		auto EnemyMesh = Enemy->Mesh;
		if (!EnemyMesh) continue;

		if (!Enemy->IsAlive()) continue;

		SDK::FVector EnemyLocation = Enemy->K2_GetActorLocation();
		if (EnemyLocation.X == 0.f && EnemyLocation.Y == 0.f && EnemyLocation.Z == 0.f) continue;

		SDK::FVector2D ScreenLocation{};
		if (!ue->WorldToScreen(EnemyLocation, &ScreenLocation)) continue;

		ue->PlayerController->FOV(Settings::vis::FOV);

		if (Settings::player::box)
			ue->DrawBoundingBox(pCanvas, Enemy, SDK::FLinearColor(255.f, 0.f, 0.f, 255.f));

		if (Settings::Aimbot::aimbot)
		{
			auto weapon = *(uintptr_t*)((uintptr_t)MyPlayer + 0x7E0);

			if (SDK::Read<float>((weapon)+0x440 + 0x00) != Settings::Aimbot::AimFOV)
				SDK::Write<float>((weapon)+0x440 + 0x00, Settings::Aimbot::AimFOV); // AutoAimRadius

			if (SDK::Read<float>((weapon)+0x440 + 0x04) != Settings::Aimbot::AimFOV)
				SDK::Write<float>((weapon)+0x440 + 0x04, Settings::Aimbot::AimFOV); // AutoAimRadiusZoomed

			if (SDK::Read<float>((weapon)+0x440 + 0x10) != Settings::Aimbot::AimFOV)
				SDK::Write<float>((weapon)+0x440 + 0x10, Settings::Aimbot::AimFOV); // AutoAimMinRadiusRange

			if (SDK::Read<float>((weapon)+0x440 + 0x14) != Settings::Aimbot::AimFOV)
				SDK::Write<float>((weapon)+0x440 + 0x14, Settings::Aimbot::AimFOV); // AutoAimMaxRadiusRange
		}

		auto namePosX = ScreenLocation.X;
		auto namePosY = ScreenLocation.Y;

		if (Settings::player::snapline)
			pCanvas->K2_DrawLine(SDK::FVector2D(960, 0), SDK::FVector2D(namePosX - 12, namePosY - 5), 0.7, SDK::FLinearColor(255.f, 0.f, 0.f, 255.f));

		float X = ScreenLocation.X - pCanvas->ClipX / 2.f;
		float Y = ScreenLocation.Y - pCanvas->ClipY / 2.f;
		float CrosshairDistance = ue->MathLib->STATIC_Sqrt(X * X + Y * Y);

		if (CrosshairDistance <= FLT_MAX && CrosshairDistance <= LastDistance) {
			if (CrosshairDistance >= 250.f)
				continue;

			LastDistance = CrosshairDistance;
			ClosestEnemy = Enemy;
		}
	}
}

static inline void MainRenderer(SDK::UObject* pObject, SDK::UCanvas* pCanvas)
{
	if (pCanvas)
	{
		MainLoop(pCanvas);
		ZeroGUI::SetupCanvas(pCanvas);
		GUI->Tick();
	}

	return origin_renderer(pObject, pCanvas);
}
