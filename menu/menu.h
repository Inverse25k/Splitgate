#pragma once

#include "../stdafx.h"
#include "../Canvas/ZeroGUI.h"

class Menu {
private:
	FVector2D pos;
public:
	void Tick()
	{
		ZeroGUI::Input::Handle();

		if (GetAsyncKeyState(VK_INSERT) & 1) Settings::ShowSexyMenu = !Settings::ShowSexyMenu;

		if (ZeroGUI::Window("NXT-G3N Splitgate", &pos, FVector2D{ 500.0f, 400.0f }, Settings::ShowSexyMenu))
		{
			static int tab = 0;
			if (ZeroGUI::ButtonTab("Aimbot", FVector2D{ 110, 25 }, tab == 0)) tab = 0;
			if (ZeroGUI::ButtonTab("Visuals", FVector2D{ 110, 25 }, tab == 1)) tab = 1;
			if (ZeroGUI::ButtonTab("Exploits", FVector2D{ 110, 25 }, tab == 2)) tab = 2;
			ZeroGUI::NextColumn(130.0f);

			if (tab == 0)
			{
				ZeroGUI::Checkbox("pSilent", &Settings::Aimbot::aimbot);
				if (Settings::Aimbot::aimbot)
				{
					ZeroGUI::SliderFloat("FOV", &Settings::Aimbot::AimFOV, 0.0f, 360.0f);
				}

				ZeroGUI::Hotkey("Airstuck", FVector2D{ 80, 25 }, &Settings::exploits::airstuck); ZeroGUI::SameLine(); ZeroGUI::Text(" Airstuck");
			}
			else if (tab == 1)
			{
				ZeroGUI::Checkbox("Box", &Settings::player::box);
				ZeroGUI::Checkbox("Lines", &Settings::player::snapline);
				ZeroGUI::SliderFloat("Player FOV", &Settings::vis::FOV, 0.0f, 120.0f);
			}
			else if (tab == 2)
			{
				ZeroGUI::Checkbox("No Recoil", &Settings::exploits::norecoil);
				ZeroGUI::Checkbox("No Spread", &Settings::exploits::nospread);
				ZeroGUI::Checkbox("Rapid Fire", &Settings::exploits::rapid);
				ZeroGUI::Hotkey("Noclip", FVector2D{ 80, 25 }, &Settings::exploits::noclip); ZeroGUI::SameLine(); ZeroGUI::Text(" Walk Through Walls");
			}
		}
		ZeroGUI::Render();
	}
};

Menu* GUI = new Menu();
