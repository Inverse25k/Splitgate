#pragma once

// SplitGate (4.1.0) SDK
#define PI (3.141592653589793f)
#define M_PI	3.14159265358979323846264338327950288419716939937510
#define M_RADPI    57.295779513082f

#define rva(addr, size) (reinterpret_cast<unsigned char*>(addr + *reinterpret_cast<int*>(addr + (size - 4)) + size))
inline int width, height;

#include <set>
#include <string>
#include <xlocale>
#include <windows.h>
#include "no_imports.h"

#include "SDK/SG_Basic.hpp"

#include "SDK/SG_AudioPlatformConfiguration_structs.hpp"
#include "SDK/SG_AudioPlatformConfiguration_classes.hpp"
#include "SDK/SG_AudioPlatformConfiguration_parameters.hpp"
#include "SDK/SG_CoreUObject_structs.hpp"
#include "SDK/SG_CoreUObject_classes.hpp"
#include "SDK/SG_CoreUObject_parameters.hpp"
#include "SDK/SG_Chaos_structs.hpp"
#include "SDK/SG_Chaos_classes.hpp"
#include "SDK/SG_Chaos_parameters.hpp"
#include "SDK/SG_PacketHandler_structs.hpp"
#include "SDK/SG_PacketHandler_classes.hpp"
#include "SDK/SG_PacketHandler_parameters.hpp"
#include "SDK/SG_UDS_FeatureToggle_structs.hpp"
#include "SDK/SG_UDS_FeatureToggle_classes.hpp"
#include "SDK/SG_UDS_FeatureToggle_parameters.hpp"
#include "SDK/SG_UDS_SkyLightMode_structs.hpp"
#include "SDK/SG_UDS_SkyLightMode_classes.hpp"
#include "SDK/SG_UDS_SkyLightMode_parameters.hpp"
#include "SDK/SG_UDS_NoiseType_structs.hpp"
#include "SDK/SG_UDS_NoiseType_classes.hpp"
#include "SDK/SG_UDS_NoiseType_parameters.hpp"
#include "SDK/SG_SlateCore_structs.hpp"
#include "SDK/SG_SlateCore_classes.hpp"
#include "SDK/SG_SlateCore_parameters.hpp"
#include "SDK/SG_PropertyAccess_structs.hpp"
#include "SDK/SG_PropertyAccess_classes.hpp"
#include "SDK/SG_PropertyAccess_parameters.hpp"
#include "SDK/SG_InputCore_structs.hpp"
#include "SDK/SG_InputCore_classes.hpp"
#include "SDK/SG_InputCore_parameters.hpp"
#include "SDK/SG_PropertyPath_structs.hpp"
#include "SDK/SG_PropertyPath_classes.hpp"
#include "SDK/SG_PropertyPath_parameters.hpp"
#include "SDK/SG_Slate_structs.hpp"
#include "SDK/SG_Slate_classes.hpp"
#include "SDK/SG_Slate_parameters.hpp"
#include "SDK/SG_DeveloperSettings_structs.hpp"
#include "SDK/SG_DeveloperSettings_classes.hpp"
#include "SDK/SG_DeveloperSettings_parameters.hpp"
#include "SDK/SG_PhysicsCore_structs.hpp"
#include "SDK/SG_PhysicsCore_classes.hpp"
#include "SDK/SG_PhysicsCore_parameters.hpp"
#include "SDK/SG_Engine_structs.hpp"
#include "SDK/SG_Engine_classes.hpp"
#include "SDK/SG_Engine_parameters.hpp"
#include "SDK/SG_NavigationSystem_structs.hpp"
#include "SDK/SG_NavigationSystem_classes.hpp"
#include "SDK/SG_NavigationSystem_parameters.hpp"
#include "SDK/SG_GameplayTasks_structs.hpp"
#include "SDK/SG_GameplayTasks_classes.hpp"
#include "SDK/SG_GameplayTasks_parameters.hpp"
#include "SDK/SG_AudioMixer_structs.hpp"
#include "SDK/SG_AudioMixer_classes.hpp"
#include "SDK/SG_AudioMixer_parameters.hpp"
#include "SDK/SG_MovieScene_structs.hpp"
#include "SDK/SG_MovieScene_classes.hpp"
#include "SDK/SG_MovieScene_parameters.hpp"
#include "SDK/SG_MainMenu_Inspect_structs.hpp"
#include "SDK/SG_MainMenu_Inspect_classes.hpp"
#include "SDK/SG_MainMenu_Inspect_parameters.hpp"
#include "SDK/SG_MainMenu_Content_Impact_structs.hpp"
#include "SDK/SG_MainMenu_Content_Impact_classes.hpp"
#include "SDK/SG_MainMenu_Content_Impact_parameters.hpp"
#include "SDK/SG_MovieSceneTracks_structs.hpp"
#include "SDK/SG_MovieSceneTracks_classes.hpp"
#include "SDK/SG_MovieSceneTracks_parameters.hpp"
#include "SDK/SG_PortalWarsGlobals_structs.hpp"
#include "SDK/SG_PortalWarsGlobals_classes.hpp"
#include "SDK/SG_PortalWarsGlobals_parameters.hpp"
#include "SDK/SG_GameplayCameras_structs.hpp"
#include "SDK/SG_GameplayCameras_classes.hpp"
#include "SDK/SG_GameplayCameras_parameters.hpp"
#include "SDK/SG_UMG_structs.hpp"
#include "SDK/SG_UMG_classes.hpp"
#include "SDK/SG_UMG_parameters.hpp"
#include "SDK/SG_AkAudio_structs.hpp"
#include "SDK/SG_AkAudio_classes.hpp"
#include "SDK/SG_AkAudio_parameters.hpp"
#include "SDK/SG_OnlineSubsystem1047_structs.hpp"
#include "SDK/SG_OnlineSubsystem1047_classes.hpp"
#include "SDK/SG_OnlineSubsystem1047_parameters.hpp"
#include "SDK/SG_AnimationCore_structs.hpp"
#include "SDK/SG_AnimationCore_classes.hpp"
#include "SDK/SG_AnimationCore_parameters.hpp"
#include "SDK/SG_GameplayTags_structs.hpp"
#include "SDK/SG_GameplayTags_classes.hpp"
#include "SDK/SG_GameplayTags_parameters.hpp"
#include "SDK/SG_LevelSequence_structs.hpp"
#include "SDK/SG_LevelSequence_classes.hpp"
#include "SDK/SG_LevelSequence_parameters.hpp"
#include "SDK/SG_OnlineSubsystem_structs.hpp"
#include "SDK/SG_OnlineSubsystem_classes.hpp"
#include "SDK/SG_OnlineSubsystem_parameters.hpp"
#include "SDK/SG_AIModule_structs.hpp"
#include "SDK/SG_AIModule_classes.hpp"
#include "SDK/SG_AIModule_parameters.hpp"
#include "SDK/SG_OnlineSubsystemUtils_structs.hpp"
#include "SDK/SG_OnlineSubsystemUtils_classes.hpp"
#include "SDK/SG_OnlineSubsystemUtils_parameters.hpp"
#include "SDK/SG_SetBlendOutAnim_structs.hpp"
#include "SDK/SG_SetBlendOutAnim_classes.hpp"
#include "SDK/SG_SetBlendOutAnim_parameters.hpp"
#include "SDK/SG_PortalWars_structs.hpp"
#include "SDK/SG_PortalWars_classes.hpp"
#include "SDK/SG_PortalWars_parameters.hpp"
#include "SDK/SG_B_Spline_Impact_Road_structs.hpp"
#include "SDK/SG_B_Spline_Impact_Road_classes.hpp"
#include "SDK/SG_B_Spline_Impact_Road_parameters.hpp"
#include "SDK/SG_B_Spline_Impact_Road2_structs.hpp"
#include "SDK/SG_B_Spline_Impact_Road2_classes.hpp"
#include "SDK/SG_B_Spline_Impact_Road2_parameters.hpp"
#include "SDK/SG_BP_LightBeam_structs.hpp"
#include "SDK/SG_BP_LightBeam_classes.hpp"
#include "SDK/SG_BP_LightBeam_parameters.hpp"
#include "SDK/SG_AnimGraphRuntime_structs.hpp"
#include "SDK/SG_AnimGraphRuntime_classes.hpp"
#include "SDK/SG_AnimGraphRuntime_parameters.hpp"
#include "SDK/SG_Ultra_Dynamic_Sky_BP_structs.hpp"
#include "SDK/SG_Ultra_Dynamic_Sky_BP_classes.hpp"
#include "SDK/SG_Ultra_Dynamic_Sky_BP_parameters.hpp"
#include "SDK/SG_IntroMediaSoundActor_BP_structs.hpp"
#include "SDK/SG_IntroMediaSoundActor_BP_classes.hpp"
#include "SDK/SG_IntroMediaSoundActor_BP_parameters.hpp"
#include "SDK/SG_PortalWarsCharacter_BP_structs.hpp"
#include "SDK/SG_PortalWarsCharacter_BP_classes.hpp"
#include "SDK/SG_PortalWarsCharacter_BP_parameters.hpp"
#include "SDK/SG_InspectItem_BP_structs.hpp"
#include "SDK/SG_InspectItem_BP_classes.hpp"
#include "SDK/SG_InspectItem_BP_parameters.hpp"
#include "SDK/SG_MainMenu_structs.hpp"
#include "SDK/SG_MainMenu_classes.hpp"
#include "SDK/SG_MainMenu_parameters.hpp"
#include "SDK/SG_PortalWarsMainMenuCharacter_BP_structs.hpp"
#include "SDK/SG_PortalWarsMainMenuCharacter_BP_classes.hpp"
#include "SDK/SG_PortalWarsMainMenuCharacter_BP_parameters.hpp"
#include "SDK/SG_PortalLauncherBP_structs.hpp"
#include "SDK/SG_PortalLauncherBP_classes.hpp"
#include "SDK/SG_PortalLauncherBP_parameters.hpp"
#include "SDK/SG_PortalBP_structs.hpp"
#include "SDK/SG_PortalBP_classes.hpp"
#include "SDK/SG_PortalBP_parameters.hpp"
#include "SDK/SG_EMPGrenadeLauncher_BP_structs.hpp"
#include "SDK/SG_EMPGrenadeLauncher_BP_classes.hpp"
#include "SDK/SG_EMPGrenadeLauncher_BP_parameters.hpp"
#include "SDK/SG_EMPGrenade_BP_structs.hpp"
#include "SDK/SG_EMPGrenade_BP_classes.hpp"
#include "SDK/SG_EMPGrenade_BP_parameters.hpp"
#include "SDK/SG_EMPGrenadePickup_BP_structs.hpp"
#include "SDK/SG_EMPGrenadePickup_BP_classes.hpp"
#include "SDK/SG_EMPGrenadePickup_BP_parameters.hpp"
#include "SDK/SG_SAW_3P_AnimBP_V3_structs.hpp"
#include "SDK/SG_SAW_3P_AnimBP_V3_classes.hpp"
#include "SDK/SG_SAW_3P_AnimBP_V3_parameters.hpp"
#include "SDK/SG_SAW_MM_AnimBP_structs.hpp"
#include "SDK/SG_SAW_MM_AnimBP_classes.hpp"
#include "SDK/SG_SAW_MM_AnimBP_parameters.hpp"
#include "SDK/SG_MeleeCamShake_structs.hpp"
#include "SDK/SG_MeleeCamShake_classes.hpp"
#include "SDK/SG_MeleeCamShake_parameters.hpp"
#include "SDK/SG_SprintCamShakeBP_structs.hpp"
#include "SDK/SG_SprintCamShakeBP_classes.hpp"
#include "SDK/SG_SprintCamShakeBP_parameters.hpp"
#include "SDK/SG_MeleeHitCamShake_structs.hpp"
#include "SDK/SG_MeleeHitCamShake_classes.hpp"
#include "SDK/SG_MeleeHitCamShake_parameters.hpp"
#include "SDK/SG_Fists_DmgType_structs.hpp"
#include "SDK/SG_Fists_DmgType_classes.hpp"
#include "SDK/SG_Fists_DmgType_parameters.hpp"
#include "SDK/SG_Fists_BP_structs.hpp"
#include "SDK/SG_Fists_BP_classes.hpp"
#include "SDK/SG_Fists_BP_parameters.hpp"
#include "SDK/SG_Melee_DmgType_structs.hpp"
#include "SDK/SG_Melee_DmgType_classes.hpp"
#include "SDK/SG_Melee_DmgType_parameters.hpp"
#include "SDK/SG_Suicide_DmgType_structs.hpp"
#include "SDK/SG_Suicide_DmgType_classes.hpp"
#include "SDK/SG_Suicide_DmgType_parameters.hpp"
#include "SDK/SG_Portal_DmgType_structs.hpp"
#include "SDK/SG_Portal_DmgType_classes.hpp"
#include "SDK/SG_Portal_DmgType_parameters.hpp"
#include "SDK/SG_MainMenuGameMode_BP_structs.hpp"
#include "SDK/SG_MainMenuGameMode_BP_classes.hpp"
#include "SDK/SG_MainMenuGameMode_BP_parameters.hpp"
#include "SDK/SG_MainMenuPlayerController_BP_structs.hpp"
#include "SDK/SG_MainMenuPlayerController_BP_classes.hpp"
#include "SDK/SG_MainMenuPlayerController_BP_parameters.hpp"
#include "SDK/SG_MainMenu_WidgetBP_structs.hpp"
#include "SDK/SG_MainMenu_WidgetBP_classes.hpp"
#include "SDK/SG_MainMenu_WidgetBP_parameters.hpp"
#include "SDK/SG_Dialog_EscapeMenu_structs.hpp"
#include "SDK/SG_Dialog_EscapeMenu_classes.hpp"
#include "SDK/SG_Dialog_EscapeMenu_parameters.hpp"
#include "SDK/SG_Dialog_Settings_structs.hpp"
#include "SDK/SG_Dialog_Settings_classes.hpp"
#include "SDK/SG_Dialog_Settings_parameters.hpp"
#include "SDK/SG_Training_WidgetBP_structs.hpp"
#include "SDK/SG_Training_WidgetBP_classes.hpp"
#include "SDK/SG_Training_WidgetBP_parameters.hpp"
#include "SDK/SG_Settings_WidgetBP_structs.hpp"
#include "SDK/SG_Settings_WidgetBP_classes.hpp"
#include "SDK/SG_Settings_WidgetBP_parameters.hpp"
#include "SDK/SG_SocialInvite_WidgetBP_structs.hpp"
#include "SDK/SG_SocialInvite_WidgetBP_classes.hpp"
#include "SDK/SG_SocialInvite_WidgetBP_parameters.hpp"
#include "SDK/SG_Play_WidgetBP_structs.hpp"
#include "SDK/SG_Play_WidgetBP_classes.hpp"
#include "SDK/SG_Play_WidgetBP_parameters.hpp"
#include "SDK/SG_MainMenuNavBar_structs.hpp"
#include "SDK/SG_MainMenuNavBar_classes.hpp"
#include "SDK/SG_MainMenuNavBar_parameters.hpp"
#include "SDK/SG_MKBControlSettings_WidgetBP_structs.hpp"
#include "SDK/SG_MKBControlSettings_WidgetBP_classes.hpp"
#include "SDK/SG_MKBControlSettings_WidgetBP_parameters.hpp"
#include "SDK/SG_FriendsList_WidgetBP_structs.hpp"
#include "SDK/SG_FriendsList_WidgetBP_classes.hpp"
#include "SDK/SG_FriendsList_WidgetBP_parameters.hpp"
#include "SDK/SG_PlaySelection_WidgetBP_structs.hpp"
#include "SDK/SG_PlaySelection_WidgetBP_classes.hpp"
#include "SDK/SG_PlaySelection_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShop_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShop_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShop_WidgetBP_parameters.hpp"
#include "SDK/SG_ControllerControlSettings_WidgetBP_structs.hpp"
#include "SDK/SG_ControllerControlSettings_WidgetBP_classes.hpp"
#include "SDK/SG_ControllerControlSettings_WidgetBP_parameters.hpp"
#include "SDK/SG_Career_WidgetBP_structs.hpp"
#include "SDK/SG_Career_WidgetBP_classes.hpp"
#include "SDK/SG_Career_WidgetBP_parameters.hpp"
#include "SDK/SG_Stats_WidgetBP_structs.hpp"
#include "SDK/SG_Stats_WidgetBP_classes.hpp"
#include "SDK/SG_Stats_WidgetBP_parameters.hpp"
#include "SDK/SG_Challenges_WidgetBP_structs.hpp"
#include "SDK/SG_Challenges_WidgetBP_classes.hpp"
#include "SDK/SG_Challenges_WidgetBP_parameters.hpp"
#include "SDK/SG_Locker_WidgetBP_structs.hpp"
#include "SDK/SG_Locker_WidgetBP_classes.hpp"
#include "SDK/SG_Locker_WidgetBP_parameters.hpp"
#include "SDK/SG_RewardCenter_WidgetBP_structs.hpp"
#include "SDK/SG_RewardCenter_WidgetBP_classes.hpp"
#include "SDK/SG_RewardCenter_WidgetBP_parameters.hpp"
#include "SDK/SG_LockerInspect_WidgetBP_structs.hpp"
#include "SDK/SG_LockerInspect_WidgetBP_classes.hpp"
#include "SDK/SG_LockerInspect_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengesSmall_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengesSmall_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengesSmall_WidgetBP_parameters.hpp"
#include "SDK/SG_ControllerSelectSettings_WidgetBP_structs.hpp"
#include "SDK/SG_ControllerSelectSettings_WidgetBP_classes.hpp"
#include "SDK/SG_ControllerSelectSettings_WidgetBP_parameters.hpp"
#include "SDK/SG_DailyCheckIn_WidgetBP_structs.hpp"
#include "SDK/SG_DailyCheckIn_WidgetBP_classes.hpp"
#include "SDK/SG_DailyCheckIn_WidgetBP_parameters.hpp"
#include "SDK/SG_NavBar_structs.hpp"
#include "SDK/SG_NavBar_classes.hpp"
#include "SDK/SG_NavBar_parameters.hpp"
#include "SDK/SG_SubNavBar_structs.hpp"
#include "SDK/SG_SubNavBar_classes.hpp"
#include "SDK/SG_SubNavBar_parameters.hpp"
#include "SDK/SG_CustomGames_WidgetBP_structs.hpp"
#include "SDK/SG_CustomGames_WidgetBP_classes.hpp"
#include "SDK/SG_CustomGames_WidgetBP_parameters.hpp"
#include "SDK/SG_PlaylistSelection_WidgetBP_structs.hpp"
#include "SDK/SG_PlaylistSelection_WidgetBP_classes.hpp"
#include "SDK/SG_PlaylistSelection_WidgetBP_parameters.hpp"
#include "SDK/SG_RecentPlayers_WidgetBP_structs.hpp"
#include "SDK/SG_RecentPlayers_WidgetBP_classes.hpp"
#include "SDK/SG_RecentPlayers_WidgetBP_parameters.hpp"
#include "SDK/SG_FriendsListSub_WidgetBP_structs.hpp"
#include "SDK/SG_FriendsListSub_WidgetBP_classes.hpp"
#include "SDK/SG_FriendsListSub_WidgetBP_parameters.hpp"
#include "SDK/SG_BlockedPlayers_WidgetBP_structs.hpp"
#include "SDK/SG_BlockedPlayers_WidgetBP_classes.hpp"
#include "SDK/SG_BlockedPlayers_WidgetBP_parameters.hpp"
#include "SDK/SG_XboxButtonLayout_WidgetBP_structs.hpp"
#include "SDK/SG_XboxButtonLayout_WidgetBP_classes.hpp"
#include "SDK/SG_XboxButtonLayout_WidgetBP_parameters.hpp"
#include "SDK/SG_PS4ButtonLayout_WidgetBP_structs.hpp"
#include "SDK/SG_PS4ButtonLayout_WidgetBP_classes.hpp"
#include "SDK/SG_PS4ButtonLayout_WidgetBP_parameters.hpp"
#include "SDK/SG_CheckInDialog_WidgetBP_structs.hpp"
#include "SDK/SG_CheckInDialog_WidgetBP_classes.hpp"
#include "SDK/SG_CheckInDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_NavBarRightButton_structs.hpp"
#include "SDK/SG_NavBarRightButton_classes.hpp"
#include "SDK/SG_NavBarRightButton_parameters.hpp"
#include "SDK/SG_ReferralPass_WidgetBP_structs.hpp"
#include "SDK/SG_ReferralPass_WidgetBP_classes.hpp"
#include "SDK/SG_ReferralPass_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengesMedium_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengesMedium_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengesMedium_WidgetBP_parameters.hpp"
#include "SDK/SG_CurrencyStore_WidgetBP_structs.hpp"
#include "SDK/SG_CurrencyStore_WidgetBP_classes.hpp"
#include "SDK/SG_CurrencyStore_WidgetBP_parameters.hpp"
#include "SDK/SG_ServerBrowser_WidgetBP_structs.hpp"
#include "SDK/SG_ServerBrowser_WidgetBP_classes.hpp"
#include "SDK/SG_ServerBrowser_WidgetBP_parameters.hpp"
#include "SDK/SG_Host_WidgetBP_structs.hpp"
#include "SDK/SG_Host_WidgetBP_classes.hpp"
#include "SDK/SG_Host_WidgetBP_parameters.hpp"
#include "SDK/SG_InviteMenu_WidgetBP_structs.hpp"
#include "SDK/SG_InviteMenu_WidgetBP_classes.hpp"
#include "SDK/SG_InviteMenu_WidgetBP_parameters.hpp"
#include "SDK/SG_AddFriends_WidgetBP_structs.hpp"
#include "SDK/SG_AddFriends_WidgetBP_classes.hpp"
#include "SDK/SG_AddFriends_WidgetBP_parameters.hpp"
#include "SDK/SG_RankLeaderboard_WidgetBP_structs.hpp"
#include "SDK/SG_RankLeaderboard_WidgetBP_classes.hpp"
#include "SDK/SG_RankLeaderboard_WidgetBP_parameters.hpp"
#include "SDK/SG_PlaylistGameModeSelect_WidgetBP_structs.hpp"
#include "SDK/SG_PlaylistGameModeSelect_WidgetBP_classes.hpp"
#include "SDK/SG_PlaylistGameModeSelect_WidgetBP_parameters.hpp"
#include "SDK/SG_PlayerActions_WidgetBP_structs.hpp"
#include "SDK/SG_PlayerActions_WidgetBP_classes.hpp"
#include "SDK/SG_PlayerActions_WidgetBP_parameters.hpp"
#include "SDK/SG_Party_WidgetBP_structs.hpp"
#include "SDK/SG_Party_WidgetBP_classes.hpp"
#include "SDK/SG_Party_WidgetBP_parameters.hpp"
#include "SDK/SG_Replays_WidgetBP_structs.hpp"
#include "SDK/SG_Replays_WidgetBP_classes.hpp"
#include "SDK/SG_Replays_WidgetBP_parameters.hpp"
#include "SDK/SG_GamepadBindingRight_structs.hpp"
#include "SDK/SG_GamepadBindingRight_classes.hpp"
#include "SDK/SG_GamepadBindingRight_parameters.hpp"
#include "SDK/SG_GamepadBindingLeft_structs.hpp"
#include "SDK/SG_GamepadBindingLeft_classes.hpp"
#include "SDK/SG_GamepadBindingLeft_parameters.hpp"
#include "SDK/SG_CheckInBigReward_WidgetBP_structs.hpp"
#include "SDK/SG_CheckInBigReward_WidgetBP_classes.hpp"
#include "SDK/SG_CheckInBigReward_WidgetBP_parameters.hpp"
#include "SDK/SG_UISettings_WidgetBP_structs.hpp"
#include "SDK/SG_UISettings_WidgetBP_classes.hpp"
#include "SDK/SG_UISettings_WidgetBP_parameters.hpp"
#include "SDK/SG_AudioSettings_WidgetBP_structs.hpp"
#include "SDK/SG_AudioSettings_WidgetBP_classes.hpp"
#include "SDK/SG_AudioSettings_WidgetBP_parameters.hpp"
#include "SDK/SG_KeybindSettings_WidgetBP_structs.hpp"
#include "SDK/SG_KeybindSettings_WidgetBP_classes.hpp"
#include "SDK/SG_KeybindSettings_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeInspect_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeInspect_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeInspect_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopInspect_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopInspect_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopInspect_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengesLarge_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengesLarge_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengesLarge_WidgetBP_parameters.hpp"
#include "SDK/SG_ErrorMenu_structs.hpp"
#include "SDK/SG_ErrorMenu_classes.hpp"
#include "SDK/SG_ErrorMenu_parameters.hpp"
#include "SDK/SG_DailyPlayStreak_WidgetBP_structs.hpp"
#include "SDK/SG_DailyPlayStreak_WidgetBP_classes.hpp"
#include "SDK/SG_DailyPlayStreak_WidgetBP_parameters.hpp"
#include "SDK/SG_CurrencyPurchaseDialog_WidgetBP_structs.hpp"
#include "SDK/SG_CurrencyPurchaseDialog_WidgetBP_classes.hpp"
#include "SDK/SG_CurrencyPurchaseDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_JoinServerDialog_WidgetBP_structs.hpp"
#include "SDK/SG_JoinServerDialog_WidgetBP_classes.hpp"
#include "SDK/SG_JoinServerDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengePanel_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengePanel_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengePanel_WidgetBP_parameters.hpp"
#include "SDK/SG_VideoSettings_WidgetBP_structs.hpp"
#include "SDK/SG_VideoSettings_WidgetBP_classes.hpp"
#include "SDK/SG_VideoSettings_WidgetBP_parameters.hpp"
#include "SDK/SG_GreenButtonBase_structs.hpp"
#include "SDK/SG_GreenButtonBase_classes.hpp"
#include "SDK/SG_GreenButtonBase_parameters.hpp"
#include "SDK/SG_ItemShopBattlePassSection_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopBattlePassSection_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopBattlePassSection_WidgetBP_parameters.hpp"
#include "SDK/SG_Dialog_RedeemKey_structs.hpp"
#include "SDK/SG_Dialog_RedeemKey_classes.hpp"
#include "SDK/SG_Dialog_RedeemKey_parameters.hpp"
#include "SDK/SG_BattlePass_WidgetBP_structs.hpp"
#include "SDK/SG_BattlePass_WidgetBP_classes.hpp"
#include "SDK/SG_BattlePass_WidgetBP_parameters.hpp"
#include "SDK/SG_MKBSettings_WidgetBP_structs.hpp"
#include "SDK/SG_MKBSettings_WidgetBP_classes.hpp"
#include "SDK/SG_MKBSettings_WidgetBP_parameters.hpp"
#include "SDK/SG_InviteEntry_WidgetBP_structs.hpp"
#include "SDK/SG_InviteEntry_WidgetBP_classes.hpp"
#include "SDK/SG_InviteEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_FriendRequestEntry_WidgetBP_structs.hpp"
#include "SDK/SG_FriendRequestEntry_WidgetBP_classes.hpp"
#include "SDK/SG_FriendRequestEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ReferFriend_WidgetBP_structs.hpp"
#include "SDK/SG_ReferFriend_WidgetBP_classes.hpp"
#include "SDK/SG_ReferFriend_WidgetBP_parameters.hpp"
#include "SDK/SG_RankList_WidgetBP_structs.hpp"
#include "SDK/SG_RankList_WidgetBP_classes.hpp"
#include "SDK/SG_RankList_WidgetBP_parameters.hpp"
#include "SDK/SG_StatsPlaylist_WidgetBP_structs.hpp"
#include "SDK/SG_StatsPlaylist_WidgetBP_classes.hpp"
#include "SDK/SG_StatsPlaylist_WidgetBP_parameters.hpp"
#include "SDK/SG_ControllerSettings_WidgetBP_structs.hpp"
#include "SDK/SG_ControllerSettings_WidgetBP_classes.hpp"
#include "SDK/SG_ControllerSettings_WidgetBP_parameters.hpp"
#include "SDK/SG_NewsFeed_WidgetBP_structs.hpp"
#include "SDK/SG_NewsFeed_WidgetBP_classes.hpp"
#include "SDK/SG_NewsFeed_WidgetBP_parameters.hpp"
#include "SDK/SG_FeatureButtonBase_structs.hpp"
#include "SDK/SG_FeatureButtonBase_classes.hpp"
#include "SDK/SG_FeatureButtonBase_parameters.hpp"
#include "SDK/SG_PlaylistEntry_WidgetBP_structs.hpp"
#include "SDK/SG_PlaylistEntry_WidgetBP_classes.hpp"
#include "SDK/SG_PlaylistEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ReportPlayer_WidgetBP_structs.hpp"
#include "SDK/SG_ReportPlayer_WidgetBP_classes.hpp"
#include "SDK/SG_ReportPlayer_WidgetBP_parameters.hpp"
#include "SDK/SG_PartyInspect_WidgetBP_structs.hpp"
#include "SDK/SG_PartyInspect_WidgetBP_classes.hpp"
#include "SDK/SG_PartyInspect_WidgetBP_parameters.hpp"
#include "SDK/SG_RenameReplayDialog_WidgetBP_structs.hpp"
#include "SDK/SG_RenameReplayDialog_WidgetBP_classes.hpp"
#include "SDK/SG_RenameReplayDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_PrivacySettings_WidgetBP_structs.hpp"
#include "SDK/SG_PrivacySettings_WidgetBP_classes.hpp"
#include "SDK/SG_PrivacySettings_WidgetBP_parameters.hpp"
#include "SDK/SG_GameplaySettings_WidgetBP_structs.hpp"
#include "SDK/SG_GameplaySettings_WidgetBP_classes.hpp"
#include "SDK/SG_GameplaySettings_WidgetBP_parameters.hpp"
#include "SDK/SG_HeaderBase_structs.hpp"
#include "SDK/SG_HeaderBase_classes.hpp"
#include "SDK/SG_HeaderBase_parameters.hpp"
#include "SDK/SG_StatsOverview_WidgetBP_structs.hpp"
#include "SDK/SG_StatsOverview_WidgetBP_classes.hpp"
#include "SDK/SG_StatsOverview_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeButtonLarge_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeButtonLarge_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeButtonLarge_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeButtonSmall_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeButtonSmall_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeButtonSmall_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeButtonMedium_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeButtonMedium_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeButtonMedium_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeButtonWeapon_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeButtonWeapon_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeButtonWeapon_WidgetBP_parameters.hpp"
#include "SDK/SG_GamepadBindingOverlay_WidgetBP_structs.hpp"
#include "SDK/SG_GamepadBindingOverlay_WidgetBP_classes.hpp"
#include "SDK/SG_GamepadBindingOverlay_WidgetBP_parameters.hpp"
#include "SDK/SG_RankLeaderboardEntry_WidgetBP_structs.hpp"
#include "SDK/SG_RankLeaderboardEntry_WidgetBP_classes.hpp"
#include "SDK/SG_RankLeaderboardEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ColorPicker_structs.hpp"
#include "SDK/SG_ColorPicker_classes.hpp"
#include "SDK/SG_ColorPicker_parameters.hpp"
#include "SDK/SG_LoginMenu_WidgetBP_structs.hpp"
#include "SDK/SG_LoginMenu_WidgetBP_classes.hpp"
#include "SDK/SG_LoginMenu_WidgetBP_parameters.hpp"
#include "SDK/SG_DiscardSettingsDialog_WidgetBP_structs.hpp"
#include "SDK/SG_DiscardSettingsDialog_WidgetBP_classes.hpp"
#include "SDK/SG_DiscardSettingsDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_ServerEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ServerEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ServerEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_LockerVerticalItemEntry_WidgetBP_structs.hpp"
#include "SDK/SG_LockerVerticalItemEntry_WidgetBP_classes.hpp"
#include "SDK/SG_LockerVerticalItemEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopSection_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopSection_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopSection_WidgetBP_parameters.hpp"
#include "SDK/SG_Lootbox_WidgetBP_structs.hpp"
#include "SDK/SG_Lootbox_WidgetBP_classes.hpp"
#include "SDK/SG_Lootbox_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopBattlePassEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopBattlePassEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopBattlePassEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_GamepadBindingRestoreDialog_WidgetBP_structs.hpp"
#include "SDK/SG_GamepadBindingRestoreDialog_WidgetBP_classes.hpp"
#include "SDK/SG_GamepadBindingRestoreDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_KeybindEntry_structs.hpp"
#include "SDK/SG_KeybindEntry_classes.hpp"
#include "SDK/SG_KeybindEntry_parameters.hpp"
#include "SDK/SG_LockerHorizontalItemEntry_WidgetBP_structs.hpp"
#include "SDK/SG_LockerHorizontalItemEntry_WidgetBP_classes.hpp"
#include "SDK/SG_LockerHorizontalItemEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_GamepadBindingMissingDialog_WidgetBP_structs.hpp"
#include "SDK/SG_GamepadBindingMissingDialog_WidgetBP_classes.hpp"
#include "SDK/SG_GamepadBindingMissingDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_RewardPreview_structs.hpp"
#include "SDK/SG_RewardPreview_classes.hpp"
#include "SDK/SG_RewardPreview_parameters.hpp"
#include "SDK/SG_PartyEntry_WidgetBP_structs.hpp"
#include "SDK/SG_PartyEntry_WidgetBP_classes.hpp"
#include "SDK/SG_PartyEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_NotificationOverlay_WidgetBP_structs.hpp"
#include "SDK/SG_NotificationOverlay_WidgetBP_classes.hpp"
#include "SDK/SG_NotificationOverlay_WidgetBP_parameters.hpp"
#include "SDK/SG_RankListEntry_WidgetBP_structs.hpp"
#include "SDK/SG_RankListEntry_WidgetBP_classes.hpp"
#include "SDK/SG_RankListEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_LockerButtonPlayer_WidgetBP_structs.hpp"
#include "SDK/SG_LockerButtonPlayer_WidgetBP_classes.hpp"
#include "SDK/SG_LockerButtonPlayer_WidgetBP_parameters.hpp"
#include "SDK/SG_CurrencyStoreEntrySmall_WidgetBP_structs.hpp"
#include "SDK/SG_CurrencyStoreEntrySmall_WidgetBP_classes.hpp"
#include "SDK/SG_CurrencyStoreEntrySmall_WidgetBP_parameters.hpp"
#include "SDK/SG_PlayerCard_WidgetBP_structs.hpp"
#include "SDK/SG_PlayerCard_WidgetBP_classes.hpp"
#include "SDK/SG_PlayerCard_WidgetBP_parameters.hpp"
#include "SDK/SG_PlayButton2_structs.hpp"
#include "SDK/SG_PlayButton2_classes.hpp"
#include "SDK/SG_PlayButton2_parameters.hpp"
#include "SDK/SG_CurrencyStoreEntryBig_WidgetBP_structs.hpp"
#include "SDK/SG_CurrencyStoreEntryBig_WidgetBP_classes.hpp"
#include "SDK/SG_CurrencyStoreEntryBig_WidgetBP_parameters.hpp"
#include "SDK/SG_CurrencyPurchaseEntry_WidgetBP_structs.hpp"
#include "SDK/SG_CurrencyPurchaseEntry_WidgetBP_classes.hpp"
#include "SDK/SG_CurrencyPurchaseEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_CurrencyStoreEntryMedium_WidgetBP_structs.hpp"
#include "SDK/SG_CurrencyStoreEntryMedium_WidgetBP_classes.hpp"
#include "SDK/SG_CurrencyStoreEntryMedium_WidgetBP_parameters.hpp"
#include "SDK/SG_ControllerBindingCategory_structs.hpp"
#include "SDK/SG_ControllerBindingCategory_classes.hpp"
#include "SDK/SG_ControllerBindingCategory_parameters.hpp"
#include "SDK/SG_PlayButton_structs.hpp"
#include "SDK/SG_PlayButton_classes.hpp"
#include "SDK/SG_PlayButton_parameters.hpp"
#include "SDK/SG_GameModeEntry_WidgetBP_structs.hpp"
#include "SDK/SG_GameModeEntry_WidgetBP_classes.hpp"
#include "SDK/SG_GameModeEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ColorblindTestImage_structs.hpp"
#include "SDK/SG_ColorblindTestImage_classes.hpp"
#include "SDK/SG_ColorblindTestImage_parameters.hpp"
#include "SDK/SG_SpinSlider_structs.hpp"
#include "SDK/SG_SpinSlider_classes.hpp"
#include "SDK/SG_SpinSlider_parameters.hpp"
#include "SDK/SG_ChallengeEntryMedium_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeEntryMedium_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeEntryMedium_WidgetBP_parameters.hpp"
#include "SDK/SG_PartyInspectPlayerEntry_WidgetBP_structs.hpp"
#include "SDK/SG_PartyInspectPlayerEntry_WidgetBP_classes.hpp"
#include "SDK/SG_PartyInspectPlayerEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeEntrySmall_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeEntrySmall_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeEntrySmall_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengePanelEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengePanelEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengePanelEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_StatsEntry_WidgetBP_structs.hpp"
#include "SDK/SG_StatsEntry_WidgetBP_classes.hpp"
#include "SDK/SG_StatsEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_DropsMenu_WidgetBP_structs.hpp"
#include "SDK/SG_DropsMenu_WidgetBP_classes.hpp"
#include "SDK/SG_DropsMenu_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemPurchaseDialog_WidgetBP_structs.hpp"
#include "SDK/SG_ItemPurchaseDialog_WidgetBP_classes.hpp"
#include "SDK/SG_ItemPurchaseDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_LockerButtonSmall_WidgetBP_structs.hpp"
#include "SDK/SG_LockerButtonSmall_WidgetBP_classes.hpp"
#include "SDK/SG_LockerButtonSmall_WidgetBP_parameters.hpp"
#include "SDK/SG_CopyButton_structs.hpp"
#include "SDK/SG_CopyButton_classes.hpp"
#include "SDK/SG_CopyButton_parameters.hpp"
#include "SDK/SG_RadioGroup_structs.hpp"
#include "SDK/SG_RadioGroup_classes.hpp"
#include "SDK/SG_RadioGroup_parameters.hpp"
#include "SDK/SG_Demo_WidgetBP_structs.hpp"
#include "SDK/SG_Demo_WidgetBP_classes.hpp"
#include "SDK/SG_Demo_WidgetBP_parameters.hpp"
#include "SDK/SG_RewardCenterSectionHeader_structs.hpp"
#include "SDK/SG_RewardCenterSectionHeader_classes.hpp"
#include "SDK/SG_RewardCenterSectionHeader_parameters.hpp"
#include "SDK/SG_BattlePassPanel_WidgetBP_structs.hpp"
#include "SDK/SG_BattlePassPanel_WidgetBP_classes.hpp"
#include "SDK/SG_BattlePassPanel_WidgetBP_parameters.hpp"
#include "SDK/SG_ButtonBase2_structs.hpp"
#include "SDK/SG_ButtonBase2_classes.hpp"
#include "SDK/SG_ButtonBase2_parameters.hpp"
#include "SDK/SG_ButtonBase_structs.hpp"
#include "SDK/SG_ButtonBase_classes.hpp"
#include "SDK/SG_ButtonBase_parameters.hpp"
#include "SDK/SG_ChallengeEntryFeatured_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeEntryFeatured_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeEntryFeatured_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeEntryFeaturedLarge_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeEntryFeaturedLarge_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeEntryFeaturedLarge_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopPurchasePanel_structs.hpp"
#include "SDK/SG_ItemShopPurchasePanel_classes.hpp"
#include "SDK/SG_ItemShopPurchasePanel_parameters.hpp"
#include "SDK/SG_PasswordInput_structs.hpp"
#include "SDK/SG_PasswordInput_classes.hpp"
#include "SDK/SG_PasswordInput_parameters.hpp"
#include "SDK/SG_RedButtonBase_structs.hpp"
#include "SDK/SG_RedButtonBase_classes.hpp"
#include "SDK/SG_RedButtonBase_parameters.hpp"
#include "SDK/SG_CustomGameCreatedBy_WidgetBP_structs.hpp"
#include "SDK/SG_CustomGameCreatedBy_WidgetBP_classes.hpp"
#include "SDK/SG_CustomGameCreatedBy_WidgetBP_parameters.hpp"
#include "SDK/SG_GamepadSelectCarousel_structs.hpp"
#include "SDK/SG_GamepadSelectCarousel_classes.hpp"
#include "SDK/SG_GamepadSelectCarousel_parameters.hpp"
#include "SDK/SG_KeybindOverlay_WidgetBP_structs.hpp"
#include "SDK/SG_KeybindOverlay_WidgetBP_classes.hpp"
#include "SDK/SG_KeybindOverlay_WidgetBP_parameters.hpp"
#include "SDK/SG_ReplayEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ReplayEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ReplayEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ViewButton_structs.hpp"
#include "SDK/SG_ViewButton_classes.hpp"
#include "SDK/SG_ViewButton_parameters.hpp"
#include "SDK/SG_FeedActionButton_structs.hpp"
#include "SDK/SG_FeedActionButton_classes.hpp"
#include "SDK/SG_FeedActionButton_parameters.hpp"
#include "SDK/SG_ActionPlayerEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ActionPlayerEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ActionPlayerEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeInspectEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeInspectEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeInspectEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_NavButton_structs.hpp"
#include "SDK/SG_NavButton_classes.hpp"
#include "SDK/SG_NavButton_parameters.hpp"
#include "SDK/SG_SideNavBar_structs.hpp"
#include "SDK/SG_SideNavBar_classes.hpp"
#include "SDK/SG_SideNavBar_parameters.hpp"
#include "SDK/SG_CheckBox_structs.hpp"
#include "SDK/SG_CheckBox_classes.hpp"
#include "SDK/SG_CheckBox_parameters.hpp"
#include "SDK/SG_ItemShopInspectEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopInspectEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopInspectEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ServerBrowserCarousel_structs.hpp"
#include "SDK/SG_ServerBrowserCarousel_classes.hpp"
#include "SDK/SG_ServerBrowserCarousel_parameters.hpp"
#include "SDK/SG_RadioEntry_structs.hpp"
#include "SDK/SG_RadioEntry_classes.hpp"
#include "SDK/SG_RadioEntry_parameters.hpp"
#include "SDK/SG_CheckInReward_WidgetBP_structs.hpp"
#include "SDK/SG_CheckInReward_WidgetBP_classes.hpp"
#include "SDK/SG_CheckInReward_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopPurchaseButton_structs.hpp"
#include "SDK/SG_ItemShopPurchaseButton_classes.hpp"
#include "SDK/SG_ItemShopPurchaseButton_parameters.hpp"
#include "SDK/SG_FriendRequestNotificationEntry_WidgetBP_structs.hpp"
#include "SDK/SG_FriendRequestNotificationEntry_WidgetBP_classes.hpp"
#include "SDK/SG_FriendRequestNotificationEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_BlueButtonBase_structs.hpp"
#include "SDK/SG_BlueButtonBase_classes.hpp"
#include "SDK/SG_BlueButtonBase_parameters.hpp"
#include "SDK/SG_ReferralPassEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ReferralPassEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ReferralPassEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_GamepadCustomizeButton_structs.hpp"
#include "SDK/SG_GamepadCustomizeButton_classes.hpp"
#include "SDK/SG_GamepadCustomizeButton_parameters.hpp"
#include "SDK/SG_BattlePassEntry_WidgetBP_structs.hpp"
#include "SDK/SG_BattlePassEntry_WidgetBP_classes.hpp"
#include "SDK/SG_BattlePassEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_FriendRequestDialog_WidgetBP_structs.hpp"
#include "SDK/SG_FriendRequestDialog_WidgetBP_classes.hpp"
#include "SDK/SG_FriendRequestDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_GoldButtonBase_structs.hpp"
#include "SDK/SG_GoldButtonBase_classes.hpp"
#include "SDK/SG_GoldButtonBase_parameters.hpp"
#include "SDK/SG_ClaimChallengeIndicator_WidgetBP_structs.hpp"
#include "SDK/SG_ClaimChallengeIndicator_WidgetBP_classes.hpp"
#include "SDK/SG_ClaimChallengeIndicator_WidgetBP_parameters.hpp"
#include "SDK/SG_ReportCategoryDropdown_structs.hpp"
#include "SDK/SG_ReportCategoryDropdown_classes.hpp"
#include "SDK/SG_ReportCategoryDropdown_parameters.hpp"
#include "SDK/SG_CrosshairSelect_structs.hpp"
#include "SDK/SG_CrosshairSelect_classes.hpp"
#include "SDK/SG_CrosshairSelect_parameters.hpp"
#include "SDK/SG_PausePlayerEntry_WidgetBP_structs.hpp"
#include "SDK/SG_PausePlayerEntry_WidgetBP_classes.hpp"
#include "SDK/SG_PausePlayerEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_SideNavButton_structs.hpp"
#include "SDK/SG_SideNavButton_classes.hpp"
#include "SDK/SG_SideNavButton_parameters.hpp"
#include "SDK/SG_InviteNotificationEntry_WidgetBP_structs.hpp"
#include "SDK/SG_InviteNotificationEntry_WidgetBP_classes.hpp"
#include "SDK/SG_InviteNotificationEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_NewsFeedEntry_WidgetBP_structs.hpp"
#include "SDK/SG_NewsFeedEntry_WidgetBP_classes.hpp"
#include "SDK/SG_NewsFeedEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_LockerParentItemEntry_WidgetBP_structs.hpp"
#include "SDK/SG_LockerParentItemEntry_WidgetBP_classes.hpp"
#include "SDK/SG_LockerParentItemEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_ControllerBindingAction_structs.hpp"
#include "SDK/SG_ControllerBindingAction_classes.hpp"
#include "SDK/SG_ControllerBindingAction_parameters.hpp"
#include "SDK/SG_WarningText_structs.hpp"
#include "SDK/SG_WarningText_classes.hpp"
#include "SDK/SG_WarningText_parameters.hpp"
#include "SDK/SG_CancelButton_structs.hpp"
#include "SDK/SG_CancelButton_classes.hpp"
#include "SDK/SG_CancelButton_parameters.hpp"
#include "SDK/SG_EnvironmentReference_BP_structs.hpp"
#include "SDK/SG_EnvironmentReference_BP_classes.hpp"
#include "SDK/SG_EnvironmentReference_BP_parameters.hpp"
#include "SDK/SG_LightRedButtonBase_structs.hpp"
#include "SDK/SG_LightRedButtonBase_classes.hpp"
#include "SDK/SG_LightRedButtonBase_parameters.hpp"
#include "SDK/SG_TextInput_structs.hpp"
#include "SDK/SG_TextInput_classes.hpp"
#include "SDK/SG_TextInput_parameters.hpp"
#include "SDK/SG_SocialPlayerEntry_WidgetBP_structs.hpp"
#include "SDK/SG_SocialPlayerEntry_WidgetBP_classes.hpp"
#include "SDK/SG_SocialPlayerEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_DropIndicator_WidgetBP_structs.hpp"
#include "SDK/SG_DropIndicator_WidgetBP_classes.hpp"
#include "SDK/SG_DropIndicator_WidgetBP_parameters.hpp"
#include "SDK/SG_AlertButton_structs.hpp"
#include "SDK/SG_AlertButton_classes.hpp"
#include "SDK/SG_AlertButton_parameters.hpp"
#include "SDK/SG_NumericCarousel_structs.hpp"
#include "SDK/SG_NumericCarousel_classes.hpp"
#include "SDK/SG_NumericCarousel_parameters.hpp"
#include "SDK/SG_AutoCalibrateSettings_structs.hpp"
#include "SDK/SG_AutoCalibrateSettings_classes.hpp"
#include "SDK/SG_AutoCalibrateSettings_parameters.hpp"
#include "SDK/SG_LockerButtonLarge_WidgetBP_structs.hpp"
#include "SDK/SG_LockerButtonLarge_WidgetBP_classes.hpp"
#include "SDK/SG_LockerButtonLarge_WidgetBP_parameters.hpp"
#include "SDK/SG_LockerButtonMedium_WidgetBP_structs.hpp"
#include "SDK/SG_LockerButtonMedium_WidgetBP_classes.hpp"
#include "SDK/SG_LockerButtonMedium_WidgetBP_parameters.hpp"
#include "SDK/SG_CurrencyRetryButton_structs.hpp"
#include "SDK/SG_CurrencyRetryButton_classes.hpp"
#include "SDK/SG_CurrencyRetryButton_parameters.hpp"
#include "SDK/SG_ChunkInstall_WidgetBP_structs.hpp"
#include "SDK/SG_ChunkInstall_WidgetBP_classes.hpp"
#include "SDK/SG_ChunkInstall_WidgetBP_parameters.hpp"
#include "SDK/SG_ServerEntryRow_WidgetBP_structs.hpp"
#include "SDK/SG_ServerEntryRow_WidgetBP_classes.hpp"
#include "SDK/SG_ServerEntryRow_WidgetBP_parameters.hpp"
#include "SDK/SG_ReplayEntryRow_WidgetBP_structs.hpp"
#include "SDK/SG_ReplayEntryRow_WidgetBP_classes.hpp"
#include "SDK/SG_ReplayEntryRow_WidgetBP_parameters.hpp"
#include "SDK/SG_FriendRequestTextInput_structs.hpp"
#include "SDK/SG_FriendRequestTextInput_classes.hpp"
#include "SDK/SG_FriendRequestTextInput_parameters.hpp"
#include "SDK/SG_ReferFriendDialog_WidgetBP_structs.hpp"
#include "SDK/SG_ReferFriendDialog_WidgetBP_classes.hpp"
#include "SDK/SG_ReferFriendDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_SettingsSectionHeader_structs.hpp"
#include "SDK/SG_SettingsSectionHeader_classes.hpp"
#include "SDK/SG_SettingsSectionHeader_parameters.hpp"
#include "SDK/SG_RichTextImageDecorator_structs.hpp"
#include "SDK/SG_RichTextImageDecorator_classes.hpp"
#include "SDK/SG_RichTextImageDecorator_parameters.hpp"
#include "SDK/SG_PlayerWallet_WidgetBP_structs.hpp"
#include "SDK/SG_PlayerWallet_WidgetBP_classes.hpp"
#include "SDK/SG_PlayerWallet_WidgetBP_parameters.hpp"
#include "SDK/SG_Dropdown_structs.hpp"
#include "SDK/SG_Dropdown_classes.hpp"
#include "SDK/SG_Dropdown_parameters.hpp"
#include "SDK/SG_RewardCenterButton_structs.hpp"
#include "SDK/SG_RewardCenterButton_classes.hpp"
#include "SDK/SG_RewardCenterButton_parameters.hpp"
#include "SDK/SG_SubNavButton_structs.hpp"
#include "SDK/SG_SubNavButton_classes.hpp"
#include "SDK/SG_SubNavButton_parameters.hpp"
#include "SDK/SG_PortalWarsGlobals_BP_structs.hpp"
#include "SDK/SG_PortalWarsGlobals_BP_classes.hpp"
#include "SDK/SG_PortalWarsGlobals_BP_parameters.hpp"
#include "SDK/SG_GameModeInfo_structs.hpp"
#include "SDK/SG_GameModeInfo_classes.hpp"
#include "SDK/SG_GameModeInfo_parameters.hpp"
#include "SDK/SG_ReportTextInput_structs.hpp"
#include "SDK/SG_ReportTextInput_classes.hpp"
#include "SDK/SG_ReportTextInput_parameters.hpp"
#include "SDK/SG_Reticle_structs.hpp"
#include "SDK/SG_Reticle_classes.hpp"
#include "SDK/SG_Reticle_parameters.hpp"
#include "SDK/SG_NotificationButton_structs.hpp"
#include "SDK/SG_NotificationButton_classes.hpp"
#include "SDK/SG_NotificationButton_parameters.hpp"
#include "SDK/SG_SettingsButton_structs.hpp"
#include "SDK/SG_SettingsButton_classes.hpp"
#include "SDK/SG_SettingsButton_parameters.hpp"
#include "SDK/SG_IntroVideoWidget_structs.hpp"
#include "SDK/SG_IntroVideoWidget_classes.hpp"
#include "SDK/SG_IntroVideoWidget_parameters.hpp"
#include "SDK/SG_BattlePassPanelRewardEntry_structs.hpp"
#include "SDK/SG_BattlePassPanelRewardEntry_classes.hpp"
#include "SDK/SG_BattlePassPanelRewardEntry_parameters.hpp"
#include "SDK/SG_FeedIndicator_structs.hpp"
#include "SDK/SG_FeedIndicator_classes.hpp"
#include "SDK/SG_FeedIndicator_parameters.hpp"
#include "SDK/SG_ItemShopPurchaseEntry_structs.hpp"
#include "SDK/SG_ItemShopPurchaseEntry_classes.hpp"
#include "SDK/SG_ItemShopPurchaseEntry_parameters.hpp"
#include "SDK/SG_NavBarLeftButton_structs.hpp"
#include "SDK/SG_NavBarLeftButton_classes.hpp"
#include "SDK/SG_NavBarLeftButton_parameters.hpp"
#include "SDK/SG_CustomScrollHorizontal_WidgetBP_structs.hpp"
#include "SDK/SG_CustomScrollHorizontal_WidgetBP_classes.hpp"
#include "SDK/SG_CustomScrollHorizontal_WidgetBP_parameters.hpp"
#include "SDK/SG_PurchaseDialogBackground_structs.hpp"
#include "SDK/SG_PurchaseDialogBackground_classes.hpp"
#include "SDK/SG_PurchaseDialogBackground_parameters.hpp"
#include "SDK/SG_LoadingScreen_structs.hpp"
#include "SDK/SG_LoadingScreen_classes.hpp"
#include "SDK/SG_LoadingScreen_parameters.hpp"
#include "SDK/SG_PortalWarsGameInstance_BP_structs.hpp"
#include "SDK/SG_PortalWarsGameInstance_BP_classes.hpp"
#include "SDK/SG_PortalWarsGameInstance_BP_parameters.hpp"
#include "SDK/SG_PortalWarsLocalPlayer_BP_structs.hpp"
#include "SDK/SG_PortalWarsLocalPlayer_BP_classes.hpp"
#include "SDK/SG_PortalWarsLocalPlayer_BP_parameters.hpp"
#include "SDK/SG_MenuBackground_structs.hpp"
#include "SDK/SG_MenuBackground_classes.hpp"
#include "SDK/SG_MenuBackground_parameters.hpp"
#include "SDK/SG_NotificationManager_BP_structs.hpp"
#include "SDK/SG_NotificationManager_BP_classes.hpp"
#include "SDK/SG_NotificationManager_BP_parameters.hpp"
#include "SDK/SG_PostGameOverview_WidgetBP_structs.hpp"
#include "SDK/SG_PostGameOverview_WidgetBP_classes.hpp"
#include "SDK/SG_PostGameOverview_WidgetBP_parameters.hpp"
#include "SDK/SG_ChallengeDialog_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeDialog_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_PlayStreakNotification_WidgetBP_structs.hpp"
#include "SDK/SG_PlayStreakNotification_WidgetBP_classes.hpp"
#include "SDK/SG_PlayStreakNotification_WidgetBP_parameters.hpp"
#include "SDK/SG_PlayStreakDialog_WidgetBP_structs.hpp"
#include "SDK/SG_PlayStreakDialog_WidgetBP_classes.hpp"
#include "SDK/SG_PlayStreakDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_RankUpdate_WidgetBP_structs.hpp"
#include "SDK/SG_RankUpdate_WidgetBP_classes.hpp"
#include "SDK/SG_RankUpdate_WidgetBP_parameters.hpp"
#include "SDK/SG_RewardReceived_WidgetBP_structs.hpp"
#include "SDK/SG_RewardReceived_WidgetBP_classes.hpp"
#include "SDK/SG_RewardReceived_WidgetBP_parameters.hpp"
#include "SDK/SG_RewardInspect_WidgetBP_structs.hpp"
#include "SDK/SG_RewardInspect_WidgetBP_classes.hpp"
#include "SDK/SG_RewardInspect_WidgetBP_parameters.hpp"
#include "SDK/SG_ProgressionUpdateDialog_WidgetBP_structs.hpp"
#include "SDK/SG_ProgressionUpdateDialog_WidgetBP_classes.hpp"
#include "SDK/SG_ProgressionUpdateDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_UnlockDialog_WidgetBP_structs.hpp"
#include "SDK/SG_UnlockDialog_WidgetBP_classes.hpp"
#include "SDK/SG_UnlockDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_Dialog_GamepadReconnect_structs.hpp"
#include "SDK/SG_Dialog_GamepadReconnect_classes.hpp"
#include "SDK/SG_Dialog_GamepadReconnect_parameters.hpp"
#include "SDK/SG_InspectItem_WidgetBP_structs.hpp"
#include "SDK/SG_InspectItem_WidgetBP_classes.hpp"
#include "SDK/SG_InspectItem_WidgetBP_parameters.hpp"
#include "SDK/SG_LimitedTimeOfferDialog_WidgetBP_structs.hpp"
#include "SDK/SG_LimitedTimeOfferDialog_WidgetBP_classes.hpp"
#include "SDK/SG_LimitedTimeOfferDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_XPUpdate_WidgetBP_structs.hpp"
#include "SDK/SG_XPUpdate_WidgetBP_classes.hpp"
#include "SDK/SG_XPUpdate_WidgetBP_parameters.hpp"
#include "SDK/SG_PlayerEntry_structs.hpp"
#include "SDK/SG_PlayerEntry_classes.hpp"
#include "SDK/SG_PlayerEntry_parameters.hpp"
#include "SDK/SG_CareerProgress_WidgetBP_structs.hpp"
#include "SDK/SG_CareerProgress_WidgetBP_classes.hpp"
#include "SDK/SG_CareerProgress_WidgetBP_parameters.hpp"
#include "SDK/SG_LimitedTimeOfferSection_structs.hpp"
#include "SDK/SG_LimitedTimeOfferSection_classes.hpp"
#include "SDK/SG_LimitedTimeOfferSection_parameters.hpp"
#include "SDK/SG_XPProgressionIcon_WidgetBP_structs.hpp"
#include "SDK/SG_XPProgressionIcon_WidgetBP_classes.hpp"
#include "SDK/SG_XPProgressionIcon_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopEntryBig_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopEntryBig_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopEntryBig_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopEntryMedium_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopEntryMedium_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopEntryMedium_WidgetBP_parameters.hpp"
#include "SDK/SG_Dialog_Message_structs.hpp"
#include "SDK/SG_Dialog_Message_classes.hpp"
#include "SDK/SG_Dialog_Message_parameters.hpp"
#include "SDK/SG_MenuButtonBase_structs.hpp"
#include "SDK/SG_MenuButtonBase_classes.hpp"
#include "SDK/SG_MenuButtonBase_parameters.hpp"
#include "SDK/SG_BattlePassPurchaseButton_structs.hpp"
#include "SDK/SG_BattlePassPurchaseButton_classes.hpp"
#include "SDK/SG_BattlePassPurchaseButton_parameters.hpp"
#include "SDK/SG_BattlePassPurchaseDialog_WidgetBP_structs.hpp"
#include "SDK/SG_BattlePassPurchaseDialog_WidgetBP_classes.hpp"
#include "SDK/SG_BattlePassPurchaseDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_CustomScrollVertical_WidgetBP_structs.hpp"
#include "SDK/SG_CustomScrollVertical_WidgetBP_classes.hpp"
#include "SDK/SG_CustomScrollVertical_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopEntrySmall_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopEntrySmall_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopEntrySmall_WidgetBP_parameters.hpp"
#include "SDK/SG_ItemShopEntryFeatured_WidgetBP_structs.hpp"
#include "SDK/SG_ItemShopEntryFeatured_WidgetBP_classes.hpp"
#include "SDK/SG_ItemShopEntryFeatured_WidgetBP_parameters.hpp"
#include "SDK/SG_Dialog_PlaylistActive_structs.hpp"
#include "SDK/SG_Dialog_PlaylistActive_classes.hpp"
#include "SDK/SG_Dialog_PlaylistActive_parameters.hpp"
#include "SDK/SG_XPBoostEntry_WidgetBP_structs.hpp"
#include "SDK/SG_XPBoostEntry_WidgetBP_classes.hpp"
#include "SDK/SG_XPBoostEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_SeasonRewards_WidgetBP_structs.hpp"
#include "SDK/SG_SeasonRewards_WidgetBP_classes.hpp"
#include "SDK/SG_SeasonRewards_WidgetBP_parameters.hpp"
#include "SDK/SG_DiscountWidget_structs.hpp"
#include "SDK/SG_DiscountWidget_classes.hpp"
#include "SDK/SG_DiscountWidget_parameters.hpp"
#include "SDK/SG_PlayStreakReward_WidgetBP_structs.hpp"
#include "SDK/SG_PlayStreakReward_WidgetBP_classes.hpp"
#include "SDK/SG_PlayStreakReward_WidgetBP_parameters.hpp"
#include "SDK/SG_SessionMessages_structs.hpp"
#include "SDK/SG_SessionMessages_classes.hpp"
#include "SDK/SG_SessionMessages_parameters.hpp"
#include "SDK/SG_Serialization_structs.hpp"
#include "SDK/SG_Serialization_classes.hpp"
#include "SDK/SG_Serialization_parameters.hpp"
#include "SDK/SG_Dialog_GameSessionReconnect_structs.hpp"
#include "SDK/SG_Dialog_GameSessionReconnect_classes.hpp"
#include "SDK/SG_Dialog_GameSessionReconnect_parameters.hpp"
#include "SDK/SG_Renderer_structs.hpp"
#include "SDK/SG_Renderer_classes.hpp"
#include "SDK/SG_Renderer_parameters.hpp"
#include "SDK/SG_EngineMessages_structs.hpp"
#include "SDK/SG_EngineMessages_classes.hpp"
#include "SDK/SG_EngineMessages_parameters.hpp"
#include "SDK/SG_BackButton_structs.hpp"
#include "SDK/SG_BackButton_classes.hpp"
#include "SDK/SG_BackButton_parameters.hpp"
#include "SDK/SG_ChallengeEntryLarge_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeEntryLarge_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeEntryLarge_WidgetBP_parameters.hpp"
#include "SDK/SG_MediaUtils_structs.hpp"
#include "SDK/SG_MediaUtils_classes.hpp"
#include "SDK/SG_MediaUtils_parameters.hpp"
#include "SDK/SG_ImageWrapper_structs.hpp"
#include "SDK/SG_ImageWrapper_classes.hpp"
#include "SDK/SG_ImageWrapper_parameters.hpp"
#include "SDK/SG_VivoxCore_structs.hpp"
#include "SDK/SG_VivoxCore_classes.hpp"
#include "SDK/SG_VivoxCore_parameters.hpp"
#include "SDK/SG_ChallengeCompleteEntry_WidgetBP_structs.hpp"
#include "SDK/SG_ChallengeCompleteEntry_WidgetBP_classes.hpp"
#include "SDK/SG_ChallengeCompleteEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_Reward_WidgetBP_structs.hpp"
#include "SDK/SG_Reward_WidgetBP_classes.hpp"
#include "SDK/SG_Reward_WidgetBP_parameters.hpp"
#include "SDK/SG_PurchaseButton_structs.hpp"
#include "SDK/SG_PurchaseButton_classes.hpp"
#include "SDK/SG_PurchaseButton_parameters.hpp"
#include "SDK/SG_PriceWidgetVertical_structs.hpp"
#include "SDK/SG_PriceWidgetVertical_classes.hpp"
#include "SDK/SG_PriceWidgetVertical_parameters.hpp"
#include "SDK/SG_PriceEntry_structs.hpp"
#include "SDK/SG_PriceEntry_classes.hpp"
#include "SDK/SG_PriceEntry_parameters.hpp"
#include "SDK/SG_RepairButton_structs.hpp"
#include "SDK/SG_RepairButton_classes.hpp"
#include "SDK/SG_RepairButton_parameters.hpp"
#include "SDK/SG_MagicLeapARPin_structs.hpp"
#include "SDK/SG_MagicLeapARPin_classes.hpp"
#include "SDK/SG_MagicLeapARPin_parameters.hpp"
#include "SDK/SG_DmgTypeBP_Environmental_structs.hpp"
#include "SDK/SG_DmgTypeBP_Environmental_classes.hpp"
#include "SDK/SG_DmgTypeBP_Environmental_parameters.hpp"
#include "SDK/SG_ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/SG_ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/SG_ClothingSystemRuntimeInterface_parameters.hpp"
#include "SDK/SG_Overlay_structs.hpp"
#include "SDK/SG_Overlay_classes.hpp"
#include "SDK/SG_Overlay_parameters.hpp"
#include "SDK/SG_MoviePlayer_structs.hpp"
#include "SDK/SG_MoviePlayer_classes.hpp"
#include "SDK/SG_MoviePlayer_parameters.hpp"
#include "SDK/SG_OnlineServices_structs.hpp"
#include "SDK/SG_OnlineServices_classes.hpp"
#include "SDK/SG_OnlineServices_parameters.hpp"
#include "SDK/SG_BattlePassPurchaseEntry_WidgetBP_structs.hpp"
#include "SDK/SG_BattlePassPurchaseEntry_WidgetBP_classes.hpp"
#include "SDK/SG_BattlePassPurchaseEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_JsonUtilities_structs.hpp"
#include "SDK/SG_JsonUtilities_classes.hpp"
#include "SDK/SG_JsonUtilities_parameters.hpp"
#include "SDK/SG_RewardReceivedEntry_WidgetBP_structs.hpp"
#include "SDK/SG_RewardReceivedEntry_WidgetBP_classes.hpp"
#include "SDK/SG_RewardReceivedEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_MeshDescription_structs.hpp"
#include "SDK/SG_MeshDescription_classes.hpp"
#include "SDK/SG_MeshDescription_parameters.hpp"
#include "SDK/SG_StaticMeshDescription_structs.hpp"
#include "SDK/SG_StaticMeshDescription_classes.hpp"
#include "SDK/SG_StaticMeshDescription_parameters.hpp"
#include "SDK/SG_InteractiveToolsFramework_structs.hpp"
#include "SDK/SG_InteractiveToolsFramework_classes.hpp"
#include "SDK/SG_InteractiveToolsFramework_parameters.hpp"
#include "SDK/SG_AssetRegistry_structs.hpp"
#include "SDK/SG_AssetRegistry_classes.hpp"
#include "SDK/SG_AssetRegistry_parameters.hpp"
#include "SDK/SG_NetCore_structs.hpp"
#include "SDK/SG_NetCore_classes.hpp"
#include "SDK/SG_NetCore_parameters.hpp"
#include "SDK/SG_ChaosSolverEngine_structs.hpp"
#include "SDK/SG_ChaosSolverEngine_classes.hpp"
#include "SDK/SG_ChaosSolverEngine_parameters.hpp"
#include "SDK/SG_FieldSystemEngine_structs.hpp"
#include "SDK/SG_FieldSystemEngine_classes.hpp"
#include "SDK/SG_FieldSystemEngine_parameters.hpp"
#include "SDK/SG_FPPAnimBlueprint_structs.hpp"
#include "SDK/SG_FPPAnimBlueprint_classes.hpp"
#include "SDK/SG_FPPAnimBlueprint_parameters.hpp"
#include "SDK/SG_GeometryCollectionEngine_structs.hpp"
#include "SDK/SG_GeometryCollectionEngine_classes.hpp"
#include "SDK/SG_GeometryCollectionEngine_parameters.hpp"
#include "SDK/SG_EquipButton_structs.hpp"
#include "SDK/SG_EquipButton_classes.hpp"
#include "SDK/SG_EquipButton_parameters.hpp"
#include "SDK/SG_ImageWriteQueue_structs.hpp"
#include "SDK/SG_ImageWriteQueue_classes.hpp"
#include "SDK/SG_ImageWriteQueue_parameters.hpp"
#include "SDK/SG_BuildPatchServices_structs.hpp"
#include "SDK/SG_BuildPatchServices_classes.hpp"
#include "SDK/SG_BuildPatchServices_parameters.hpp"
#include "SDK/SG_InviteManager_BP_structs.hpp"
#include "SDK/SG_InviteManager_BP_classes.hpp"
#include "SDK/SG_InviteManager_BP_parameters.hpp"
#include "SDK/SG_StreakProgressionIcon_WidgetBP_structs.hpp"
#include "SDK/SG_StreakProgressionIcon_WidgetBP_classes.hpp"
#include "SDK/SG_StreakProgressionIcon_WidgetBP_parameters.hpp"
#include "SDK/SG_CinematicCamera_structs.hpp"
#include "SDK/SG_CinematicCamera_classes.hpp"
#include "SDK/SG_CinematicCamera_parameters.hpp"
#include "SDK/SG_EngineSettings_structs.hpp"
#include "SDK/SG_EngineSettings_classes.hpp"
#include "SDK/SG_EngineSettings_parameters.hpp"
#include "SDK/SG_SAW_3P_IK_AnimBP_V3_structs.hpp"
#include "SDK/SG_SAW_3P_IK_AnimBP_V3_classes.hpp"
#include "SDK/SG_SAW_3P_IK_AnimBP_V3_parameters.hpp"
#include "SDK/SG_MaterialShaderQualitySettings_structs.hpp"
#include "SDK/SG_MaterialShaderQualitySettings_classes.hpp"
#include "SDK/SG_MaterialShaderQualitySettings_parameters.hpp"
#include "SDK/SG_TimeManagement_structs.hpp"
#include "SDK/SG_TimeManagement_classes.hpp"
#include "SDK/SG_TimeManagement_parameters.hpp"
#include "SDK/SG_Landscape_structs.hpp"
#include "SDK/SG_Landscape_classes.hpp"
#include "SDK/SG_Landscape_parameters.hpp"
#include "SDK/SG_Foliage_structs.hpp"
#include "SDK/SG_Foliage_classes.hpp"
#include "SDK/SG_Foliage_parameters.hpp"
#include "SDK/SG_HeadMountedDisplay_structs.hpp"
#include "SDK/SG_HeadMountedDisplay_classes.hpp"
#include "SDK/SG_HeadMountedDisplay_parameters.hpp"
#include "SDK/SG_AugmentedReality_structs.hpp"
#include "SDK/SG_AugmentedReality_classes.hpp"
#include "SDK/SG_AugmentedReality_parameters.hpp"
#include "SDK/SG_MRMesh_structs.hpp"
#include "SDK/SG_MRMesh_classes.hpp"
#include "SDK/SG_MRMesh_parameters.hpp"
#include "SDK/SG_PostGameCard_WidgetBP_structs.hpp"
#include "SDK/SG_PostGameCard_WidgetBP_classes.hpp"
#include "SDK/SG_PostGameCard_WidgetBP_parameters.hpp"
#include "SDK/SG_EyeTracker_structs.hpp"
#include "SDK/SG_EyeTracker_classes.hpp"
#include "SDK/SG_EyeTracker_parameters.hpp"
#include "SDK/SG_AudioAnalyzer_structs.hpp"
#include "SDK/SG_AudioAnalyzer_classes.hpp"
#include "SDK/SG_AudioAnalyzer_parameters.hpp"
#include "SDK/SG_MovieSceneCapture_structs.hpp"
#include "SDK/SG_MovieSceneCapture_classes.hpp"
#include "SDK/SG_MovieSceneCapture_parameters.hpp"
#include "SDK/SG_AudioExtensions_structs.hpp"
#include "SDK/SG_AudioExtensions_classes.hpp"
#include "SDK/SG_AudioExtensions_parameters.hpp"
#include "SDK/SG_SoundFields_structs.hpp"
#include "SDK/SG_SoundFields_classes.hpp"
#include "SDK/SG_SoundFields_parameters.hpp"
#include "SDK/SG_UnlockNoteEntry_WidgetBP_structs.hpp"
#include "SDK/SG_UnlockNoteEntry_WidgetBP_classes.hpp"
#include "SDK/SG_UnlockNoteEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_AcceptInviteDialog_WidgetBP_structs.hpp"
#include "SDK/SG_AcceptInviteDialog_WidgetBP_classes.hpp"
#include "SDK/SG_AcceptInviteDialog_WidgetBP_parameters.hpp"
#include "SDK/SG_AudioSynesthesia_structs.hpp"
#include "SDK/SG_AudioSynesthesia_classes.hpp"
#include "SDK/SG_AudioSynesthesia_parameters.hpp"
#include "SDK/SG_DialogBackground_structs.hpp"
#include "SDK/SG_DialogBackground_classes.hpp"
#include "SDK/SG_DialogBackground_parameters.hpp"
#include "SDK/SG_PhysXVehicles_structs.hpp"
#include "SDK/SG_PhysXVehicles_classes.hpp"
#include "SDK/SG_PhysXVehicles_parameters.hpp"
#include "SDK/SG_AppleImageUtils_structs.hpp"
#include "SDK/SG_AppleImageUtils_classes.hpp"
#include "SDK/SG_AppleImageUtils_parameters.hpp"
#include "SDK/SG_GooglePAD_structs.hpp"
#include "SDK/SG_GooglePAD_classes.hpp"
#include "SDK/SG_GooglePAD_parameters.hpp"
#include "SDK/SG_CustomMeshComponent_structs.hpp"
#include "SDK/SG_CustomMeshComponent_classes.hpp"
#include "SDK/SG_CustomMeshComponent_parameters.hpp"
#include "SDK/SG_UdpMessaging_structs.hpp"
#include "SDK/SG_UdpMessaging_classes.hpp"
#include "SDK/SG_UdpMessaging_parameters.hpp"
#include "SDK/SG_TcpMessaging_structs.hpp"
#include "SDK/SG_TcpMessaging_classes.hpp"
#include "SDK/SG_TcpMessaging_parameters.hpp"
#include "SDK/SG_WmfMediaFactory_structs.hpp"
#include "SDK/SG_WmfMediaFactory_classes.hpp"
#include "SDK/SG_WmfMediaFactory_parameters.hpp"
#include "SDK/SG_CableComponent_structs.hpp"
#include "SDK/SG_CableComponent_classes.hpp"
#include "SDK/SG_CableComponent_parameters.hpp"
#include "SDK/SG_ImgMediaFactory_structs.hpp"
#include "SDK/SG_ImgMediaFactory_classes.hpp"
#include "SDK/SG_ImgMediaFactory_parameters.hpp"
#include "SDK/SG_AssetTags_structs.hpp"
#include "SDK/SG_AssetTags_classes.hpp"
#include "SDK/SG_AssetTags_parameters.hpp"
#include "SDK/SG_ActorLayerUtilities_structs.hpp"
#include "SDK/SG_ActorLayerUtilities_classes.hpp"
#include "SDK/SG_ActorLayerUtilities_parameters.hpp"
#include "SDK/SG_Border_structs.hpp"
#include "SDK/SG_Border_classes.hpp"
#include "SDK/SG_Border_parameters.hpp"
#include "SDK/SG_ActorSequence_structs.hpp"
#include "SDK/SG_ActorSequence_classes.hpp"
#include "SDK/SG_ActorSequence_parameters.hpp"
#include "SDK/SG_ImgMediaEngine_structs.hpp"
#include "SDK/SG_ImgMediaEngine_classes.hpp"
#include "SDK/SG_ImgMediaEngine_parameters.hpp"
#include "SDK/SG_XPUpdateEntry_WidgetBP_structs.hpp"
#include "SDK/SG_XPUpdateEntry_WidgetBP_classes.hpp"
#include "SDK/SG_XPUpdateEntry_WidgetBP_parameters.hpp"
#include "SDK/SG_MediaAssets_structs.hpp"
#include "SDK/SG_MediaAssets_classes.hpp"
#include "SDK/SG_MediaAssets_parameters.hpp"
#include "SDK/SG_MagicLeapARPinInfoActor_structs.hpp"
#include "SDK/SG_MagicLeapARPinInfoActor_classes.hpp"
#include "SDK/SG_MagicLeapARPinInfoActor_parameters.hpp"
#include "SDK/SG_MagicLeapSharedWorld_structs.hpp"
#include "SDK/SG_MagicLeapSharedWorld_classes.hpp"
#include "SDK/SG_MagicLeapSharedWorld_parameters.hpp"
#include "SDK/SG_ImgMedia_structs.hpp"
#include "SDK/SG_ImgMedia_classes.hpp"
#include "SDK/SG_ImgMedia_parameters.hpp"
#include "SDK/SG_EditableMesh_structs.hpp"
#include "SDK/SG_EditableMesh_classes.hpp"
#include "SDK/SG_EditableMesh_parameters.hpp"
#include "SDK/SG_FullLootSequence_structs.hpp"
#include "SDK/SG_FullLootSequence_classes.hpp"
#include "SDK/SG_FullLootSequence_parameters.hpp"
#include "SDK/SG_ClothingSystemRuntimeCommon_structs.hpp"
#include "SDK/SG_ClothingSystemRuntimeCommon_classes.hpp"
#include "SDK/SG_ClothingSystemRuntimeCommon_parameters.hpp"
#include "SDK/SG_ClothingSystemRuntimeNv_structs.hpp"
#include "SDK/SG_ClothingSystemRuntimeNv_classes.hpp"
#include "SDK/SG_ClothingSystemRuntimeNv_parameters.hpp"
#include "SDK/SG_GeometryCache_structs.hpp"
#include "SDK/SG_GeometryCache_classes.hpp"
#include "SDK/SG_GeometryCache_parameters.hpp"
#include "SDK/SG_ProceduralMeshComponent_structs.hpp"
#include "SDK/SG_ProceduralMeshComponent_classes.hpp"
#include "SDK/SG_ProceduralMeshComponent_parameters.hpp"
#include "SDK/SG_GeometryCacheTracks_structs.hpp"
#include "SDK/SG_GeometryCacheTracks_classes.hpp"
#include "SDK/SG_GeometryCacheTracks_parameters.hpp"
#include "SDK/SG_ChaosCloth_structs.hpp"
#include "SDK/SG_ChaosCloth_classes.hpp"
#include "SDK/SG_ChaosCloth_parameters.hpp"
#include "SDK/SG_SignificanceManager_structs.hpp"
#include "SDK/SG_SignificanceManager_classes.hpp"
#include "SDK/SG_SignificanceManager_parameters.hpp"
#include "SDK/SG_AutomationUtils_structs.hpp"
#include "SDK/SG_AutomationUtils_classes.hpp"
#include "SDK/SG_AutomationUtils_parameters.hpp"
#include "SDK/SG_VariantManagerContent_structs.hpp"
#include "SDK/SG_VariantManagerContent_classes.hpp"
#include "SDK/SG_VariantManagerContent_parameters.hpp"
#include "SDK/SG_DatasmithContent_structs.hpp"
#include "SDK/SG_DatasmithContent_classes.hpp"
#include "SDK/SG_DatasmithContent_parameters.hpp"
#include "SDK/SG_FacialAnimation_structs.hpp"
#include "SDK/SG_FacialAnimation_classes.hpp"
#include "SDK/SG_FacialAnimation_parameters.hpp"
#include "SDK/SG_AnimationSharing_structs.hpp"
#include "SDK/SG_AnimationSharing_classes.hpp"
#include "SDK/SG_AnimationSharing_parameters.hpp"
#include "SDK/SG_LightPropagationVolumeRuntime_structs.hpp"
#include "SDK/SG_LightPropagationVolumeRuntime_classes.hpp"
#include "SDK/SG_LightPropagationVolumeRuntime_parameters.hpp"
#include "SDK/SG_OodleNetworkHandlerComponent_structs.hpp"
#include "SDK/SG_OodleNetworkHandlerComponent_classes.hpp"
#include "SDK/SG_OodleNetworkHandlerComponent_parameters.hpp"
#include "SDK/SG_GeometryCollectionTracks_structs.hpp"
#include "SDK/SG_GeometryCollectionTracks_classes.hpp"
#include "SDK/SG_GeometryCollectionTracks_parameters.hpp"
#include "SDK/SG_TemplateSequence_structs.hpp"
#include "SDK/SG_TemplateSequence_classes.hpp"
#include "SDK/SG_TemplateSequence_parameters.hpp"
#include "SDK/SG_MediaCompositing_structs.hpp"
#include "SDK/SG_MediaCompositing_classes.hpp"
#include "SDK/SG_MediaCompositing_parameters.hpp"
#include "SDK/SG_RedeemButton_structs.hpp"
#include "SDK/SG_RedeemButton_classes.hpp"
#include "SDK/SG_RedeemButton_parameters.hpp"
#include "SDK/SG_DiscordRpc_structs.hpp"
#include "SDK/SG_DiscordRpc_classes.hpp"
#include "SDK/SG_DiscordRpc_parameters.hpp"
#include "SDK/SG_Synthesis_structs.hpp"
#include "SDK/SG_Synthesis_classes.hpp"
#include "SDK/SG_Synthesis_parameters.hpp"
#include "SDK/SG_BPProgressionIcon_WidgetBP_structs.hpp"
#include "SDK/SG_BPProgressionIcon_WidgetBP_classes.hpp"
#include "SDK/SG_BPProgressionIcon_WidgetBP_parameters.hpp"
#include "SDK/SG_EQU8_structs.hpp"
#include "SDK/SG_EQU8_classes.hpp"
#include "SDK/SG_EQU8_parameters.hpp"
#include "SDK/SG_NVIDIAGfeSDK_structs.hpp"
#include "SDK/SG_NVIDIAGfeSDK_classes.hpp"
#include "SDK/SG_NVIDIAGfeSDK_parameters.hpp"
#include "SDK/SG_BattlePassRedeemableButton_structs.hpp"
#include "SDK/SG_BattlePassRedeemableButton_classes.hpp"
#include "SDK/SG_BattlePassRedeemableButton_parameters.hpp"
#include "SDK/SG_OWGameEvents_structs.hpp"
#include "SDK/SG_OWGameEvents_classes.hpp"
#include "SDK/SG_OWGameEvents_parameters.hpp"
#include "SDK/SG_MotoSynth_structs.hpp"
#include "SDK/SG_MotoSynth_classes.hpp"
#include "SDK/SG_MotoSynth_parameters.hpp"
#include "SDK/SG_NameTag_structs.hpp"
#include "SDK/SG_NameTag_classes.hpp"
#include "SDK/SG_NameTag_parameters.hpp"
#include "SDK/SG_OnlineSubsystemSteam_structs.hpp"
#include "SDK/SG_OnlineSubsystemSteam_classes.hpp"
#include "SDK/SG_OnlineSubsystemSteam_parameters.hpp"

namespace SDK
{
	namespace Syscall
	{
		static inline auto GetSyscallIndex(std::string ModuleName, std::string SyscallFunctionName, void* Function) -> bool
		{
			auto ModuleBaseAddress = LI_FN(GetModuleHandleA)(ModuleName.c_str());
			if (!ModuleBaseAddress)
				ModuleBaseAddress = LI_FN(LoadLibraryA)(ModuleName.c_str());
			if (!ModuleBaseAddress)
				return false;

			auto GetFunctionAddress = LI_FN(GetProcAddress)(ModuleBaseAddress, SyscallFunctionName.c_str());
			if (!GetFunctionAddress)
				return false;

			auto SyscallIndex = *(DWORD*)((PBYTE)GetFunctionAddress + 4);

			*(DWORD*)((PBYTE)Function + 4) = SyscallIndex;

			return true;
		}

		typedef struct _UNICODE_STRING {
			USHORT Length;
			USHORT MaximumLength;
#ifdef MIDL_PASS
			[size_is(MaximumLength / 2), length_is((Length) / 2)] USHORT* Buffer;
#else // MIDL_PASS
			_Field_size_bytes_part_opt_(MaximumLength, Length) PWCH   Buffer;
#endif // MIDL_PASS
		} UNICODE_STRING;
		typedef UNICODE_STRING* PUNICODE_STRING;
		typedef const UNICODE_STRING* PCUNICODE_STRING;

		static inline VOID RtlInitUnicodeString_(PUNICODE_STRING DestinationString, PCWSTR SourceString)
		{
			SIZE_T Size;
			CONST SIZE_T MaxSize = (USHRT_MAX & ~1) - sizeof(UNICODE_NULL); // an even number

			if (SourceString)
			{
				Size = wcslen(SourceString) * sizeof(WCHAR);
				__analysis_assume(Size <= MaxSize);

				if (Size > MaxSize)
					Size = MaxSize;
				DestinationString->Length = (USHORT)Size;
				DestinationString->MaximumLength = (USHORT)Size + sizeof(UNICODE_NULL);
			}
			else
			{
				DestinationString->Length = 0;
				DestinationString->MaximumLength = 0;
			}

			DestinationString->Buffer = (PWCHAR)SourceString;
		}

		extern "C"
		{
			SHORT _NtUserGetAsyncKeyState(int VKey);
		};

		inline SHORT NtGetAsyncKeyState(int key)
		{
			static bool doneonce;
			if (!doneonce)
			{
				if (!GetSyscallIndex(("win32u.dll"), ("NtUserGetAsyncKeyState"), _NtUserGetAsyncKeyState))
					return 0;
				doneonce = true;
			}
			return _NtUserGetAsyncKeyState(key);
		}
	}

	template<typename type>
	type Read(uintptr_t address)
	{
		if (reinterpret_cast<type*>(address) != nullptr)
			return *reinterpret_cast<type*>(address);

		return type{};
	}

	template<typename type>
	bool Write(uintptr_t address, const type& value)
	{
		if (reinterpret_cast<type*>(address) != nullptr)
		{
			*reinterpret_cast<type*>(address) = value;
			return true;
		}

		return false;
	}

	class Vector3
	{
	public:
		Vector3() : x(0.f), y(0.f), z(0.f)
		{

		}

		Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
		{

		}
		~Vector3()
		{

		}

		float x;
		float y;
		float z;

		inline float Dot(Vector3 v)
		{
			return x * v.x + y * v.y + z * v.z;
		}

		inline float Distance(Vector3 v)
		{
			return float(sqrtf(powf(v.x - x, 2.0) + powf(v.y - y, 2.0) + powf(v.z - z, 2.0)));
		}

		Vector3 operator+(Vector3 v)
		{
			return Vector3(x + v.x, y + v.y, z + v.z);
		}

		Vector3 operator-(Vector3 v)
		{
			return Vector3(x - v.x, y - v.y, z - v.z);
		}
		inline float Length()
		{
			return sqrtf((x * x) + (y * y) + (z * z));
		}

	};

	struct Vector2
	{
	public:
		float x;
		float y;
		inline Vector2() : x(0), y(0) {}
		inline Vector2(float x, float y) : x(x), y(y) {}
		inline float Distance(Vector2 v)
		{
			return sqrtf(((v.x - x) * (v.x - x) + (v.y - y) * (v.y - y)));
		}
		inline Vector2 operator+(const Vector2& v) const
		{
			return Vector2(x + v.x, y + v.y);
		}
		inline Vector2 operator-(const Vector2& v) const
		{
			return Vector2(x - v.x, y - v.y);
		}
	};
}

namespace Settings {
	// Main
	static inline bool ShowSexyMenu = true;

	// AIMBOT TAB
	struct Aimbot
	{
		inline static bool aimbot = true;
		inline static float AimFOV = 120.0f;
	};

	struct exploits
	{
		inline static bool norecoil = false;
		inline static bool rapid = false;
		inline static bool nospread = false;
		inline static int noclip = 0x70;
		inline static int airstuck = 0x12;
	};

	// VISUALS TAB
	struct player
	{
		inline static bool enable = false;
		inline static bool box = false;
		inline static bool snapline = false;
	};

	struct vis
	{
		inline static float FOV = 50.0f;
		inline static bool ShowFOV = true;
	};

	// MISC TAB
	struct Misc
	{
		inline static bool unhooked = false;
		inline static int unhooked_key = 0x2E;
	};
}

enum e_bones
{
	root = 0,
	pelvis = 1,
	spine_01 = 2,
	spine_02 = 3,
	spine_03 = 4,
	clavicle_l = 5,
	upperarm_l = 6,
	lowerarm_l = 7,
	hand_l = 8,
	index_01_l = 9,
	index_02_l = 10,
	index_03_l = 11,
	middle_01_l = 12,
	middle_02_l = 13,
	middle_03_l = 14,
	pinky_01_l = 15,
	pinky_02_l = 16,
	pinky_03_l = 17,
	ring_01_l = 18,
	ring_02_l = 19,
	ring_03_l = 20,
	thumb_01_l = 21,
	thumb_02_l = 22,
	thumb_03_l = 23,
	lowerarm_twist_01_l = 24,
	upperarm_twist_01_l = 25,
	clavicle_r = 26,
	upperarm_r = 27,
	lowerarm_r = 28,
	hand_r = 29,
	index_01_r = 30,
	index_02_r = 31,
	index_03_r = 32,
	middle_01_r = 33,
	middle_02_r = 34,
	middle_03_r = 35,
	pinky_01_r = 36,
	pinky_02_r = 37,
	pinky_03_r = 38,
	ring_01_r = 39,
	ring_02_r = 40,
	ring_03_r = 41,
	thumb_01_r = 42,
	thumb_02_r = 43,
	thumb_03_r = 44,
	lowerarm_twist_01_r = 45,
	upperarm_twist_01_r = 46,
	neck_01 = 47,
	head = 48,
	thigh_l = 49,
	calf_l = 50,
	calf_twist_01_l = 51,
	foot_l = 52,
	ball_l = 53,
	thigh_twist_01_l = 54,
	thigh_r = 55,
	calf_r = 56,
	calf_twist_01_r = 57,
	foot_r = 58,
	ball_r = 59,
	thigh_twist_01_r = 60,
	ik_foot_root = 61,
	ik_foot_l = 62,
	ik_foot_r = 63,
	ik_hand_root = 64,
	ik_hand_gun = 65,
	ik_hand_l = 66,
	ik_hand_r = 67,
	vb_knee_target_l = 68,
	vb_knee_target_r = 69,
	vb_rhs_ik_hand_gun = 70,
};

class unrealengine {
public:
	static inline uintptr_t GetBoneMatrix = 0;
	static inline SDK::UWorld** GWorld = NULL;
	static inline PBYTE GObjects = NULL;
	static inline SDK::UWorld* World = NULL;
	static inline SDK::FMinimalViewInfo* Camera;
	static inline SDK::APlayerController* PlayerController = NULL;
	static inline SDK::ULocalPlayer* LocalPlayer = NULL;
	static inline SDK::UKismetMathLibrary* MathLib = NULL;
	static inline SDK::UKismetSystemLibrary* KismetSystemLib = NULL;
	static inline SDK::UGameplayStatics* GPStatics = NULL;
	static inline SDK::APortalWarsCharacter* Targetx = NULL;
	static inline SDK::UFont* Font = NULL;
	static inline SDK::FMatrix* myMatrix = new SDK::FMatrix();

	static bool SetObjects()
	{
		//set Font
		if (!Font) Font = SDK::UObject::FindObject<SDK::UFont>("Font Roboto.Roboto");

		//set MathLib for math functions
		if (!MathLib) MathLib = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();

		//set SystemLib for math functions
		if (!KismetSystemLib) KismetSystemLib = (SDK::UKismetSystemLibrary*)SDK::UKismetSystemLibrary::StaticClass();

		//Set GPStatics for game functions
		if (!GPStatics) GPStatics = (SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass();
		if (!GPStatics) return false;

		//set world
		World = *GWorld;

		//check world
		if (!World) return false;

		//Set local player 
		if (World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.IsValidIndex(0)) LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
		if (!LocalPlayer) return false;

		//Set player contoller
		if (LocalPlayer) PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController) return false;

		//Everything went well
		return true;
	}

	static inline int GetSocketIDFromBoneID(SDK::APortalWarsCharacter* pawn, int boneId) {
		auto allSockets = pawn->Mesh->GetAllSocketNames(); //get all socket names

		SDK::FName boneName = pawn->Mesh->GetBoneName(boneId);

		for (int i = 0; i < allSockets.Num(); i++)
		{
			SDK::FName socketName = allSockets[i];
			SDK::FName socketBoneName = pawn->Mesh->GetSocketBoneName(socketName);
			auto allBones = pawn->Mesh->GetNumBones();
			if (socketBoneName.GetName() == boneName.GetName() || socketBoneName == boneName) {
				return i;
			}
		}

		return 0;
	}

	static inline bool WorldToScreen(SDK::FVector location, SDK::FVector2D* screen)
	{
		SDK::UWorld* World = *GWorld;
		SDK::APlayerController* playerController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

		if (playerController)
		{
			return playerController->ProjectWorldLocationToScreen(location, false, screen);
		}

		return FALSE;
	}

	static BOOL WorldToScreen(uintptr_t PlayerController, SDK::FVector WorldLocation, SDK::FVector2D* out)
	{
		SDK::UWorld* World = *GWorld;
		SDK::APlayerController* playerController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

		if (playerController)
		{
			return playerController->ProjectWorldLocationToScreen(WorldLocation, false, out);
		}

		return FALSE;
	}

	static inline SDK::FVector GetBoneLocByIdx(PVOID mesh, int id) {
		if (!mesh) return { 0,0,0 };

		auto fGetBoneMatrix = ((SDK::FMatrix * (__fastcall*)(PVOID, SDK::FMatrix*, int))(GetBoneMatrix));
		fGetBoneMatrix(mesh, myMatrix, id);

		return SDK::FVector(myMatrix->M[3][0], myMatrix->M[3][1], myMatrix->M[3][2]);
	}

	static bool GetBoneLocation(uintptr_t CurrentActor, SDK::FVector* Output, int Id)
	{
		PVOID Mesh = SDK::Read<PVOID>(CurrentActor + 0x280);
		if (!Mesh) return false;

		auto fGetBoneMatrix = ((SDK::FMatrix * (__fastcall*)(PVOID, SDK::FMatrix*, int))(GetBoneMatrix));
		fGetBoneMatrix(Mesh, myMatrix, Id);

		Output->X = myMatrix->M[3][0];
		Output->Y = myMatrix->M[3][1];
		Output->Z = myMatrix->M[3][2];

		return true;
	}

	static inline SDK::FVector RotateCorner(SDK::FVector origin, SDK::FVector corner, float theta)
	{
		float x = corner.X - origin.X;
		float y = corner.Y - origin.Y;

		return {
			origin.X + (x * MathLib->STATIC_Cos(theta) - y * MathLib->STATIC_Sin(theta)),
			origin.Y + (x * MathLib->STATIC_Sin(theta) + y * MathLib->STATIC_Cos(theta)),
			corner.Z
		};
	}

	static inline void DrawBoundingBox(SDK::UCanvas* canvas, SDK::AActor* actor, SDK::FLinearColor color)
	{

		SDK::FVector origin, extent;
		actor->GetActorBounds(true, true, &origin, &extent);
		SDK::FRotator rotation = actor->K2_GetActorRotation();
		float yaw = MathLib->STATIC_DegreesToRadians((int)(rotation.Yaw + 450.0f) % 360);

		extent.Z = extent.Z;
		SDK::FVector t1 = origin, t2 = origin, t3 = origin, t4 = origin, b1 = origin, b2 = origin, b3 = origin, b4 = origin;
		t1.X -= 35.f;
		t1.Y -= 35.f;
		t1.Z -= extent.Z;
		t2.X += 35.f;
		t2.Y -= 35.f;
		t2.Z -= extent.Z;
		t3.X += 35.f;
		t3.Y += 35.f;
		t3.Z -= extent.Z;
		t4.X -= 35.f;
		t4.Y += 35.f;
		t4.Z -= extent.Z;

		t1 = RotateCorner(origin, t1, yaw);
		t2 = RotateCorner(origin, t2, yaw);
		t3 = RotateCorner(origin, t3, yaw);
		t4 = RotateCorner(origin, t4, yaw);

		SDK::FVector2D ts1, ts2, ts3, ts4;
		if (!WorldToScreen(t1, &ts1)
			|| !WorldToScreen(t2, &ts2)
			|| !WorldToScreen(t3, &ts3)
			|| !WorldToScreen(t4, &ts4))
		{
			return;
		}

		b1.X -= 35.f;
		b1.Y -= 35.f;
		b1.Z += extent.Z;
		b2.X += 35.f;
		b2.Y -= 35.f;
		b2.Z += extent.Z;
		b3.X += 35.f;
		b3.Y += 35.f;
		b3.Z += extent.Z;
		b4.X -= 35.f;
		b4.Y += 35.f;
		b4.Z += extent.Z;

		b1 = RotateCorner(origin, b1, yaw);
		b2 = RotateCorner(origin, b2, yaw);
		b3 = RotateCorner(origin, b3, yaw);
		b4 = RotateCorner(origin, b4, yaw);

		SDK::FVector2D bs1, bs2, bs3, bs4;
		if (!WorldToScreen(b1, &bs1)
			|| !WorldToScreen(b2, &bs2)
			|| !WorldToScreen(b3, &bs3)
			|| !WorldToScreen(b4, &bs4))
		{
			return;
		}

		canvas->K2_DrawLine(ts1, ts2, 1.f, color);
		canvas->K2_DrawLine(ts2, ts3, 1.f, color);
		canvas->K2_DrawLine(ts3, ts4, 1.f, color);
		canvas->K2_DrawLine(ts4, ts1, 1.f, color);
		canvas->K2_DrawLine(bs1, bs2, 1.f, color);
		canvas->K2_DrawLine(bs2, bs3, 1.f, color);
		canvas->K2_DrawLine(bs3, bs4, 1.f, color);
		canvas->K2_DrawLine(bs4, bs1, 1.f, color);


		canvas->K2_DrawLine(ts1, bs1, 1.f, color);
		canvas->K2_DrawLine(ts2, bs2, 1.f, color);
		canvas->K2_DrawLine(ts3, bs3, 1.f, color);
		canvas->K2_DrawLine(ts4, bs4, 1.f, color);
		canvas->K2_DrawLine(bs1, ts1, 1.f, color);
		canvas->K2_DrawLine(bs2, ts2, 1.f, color);
		canvas->K2_DrawLine(bs3, ts3, 1.f, color);
		canvas->K2_DrawLine(bs4, ts4, 1.f, color);

	}

	static inline void DrawCircle(SDK::UCanvas* canvas, int x, int y, int radius, int numsides, SDK::FLinearColor color)
	{
		float Step = M_PI * 2.0 / numsides;
		int Count = 0;
		SDK::FVector2D V[128];
		for (float a = 0; a < M_PI * 2.0; a += Step)
		{
			float X1 = radius * cosf(a) + x;
			float Y1 = radius * sinf(a) + y;
			float X2 = radius * cosf(a + Step) + x;
			float Y2 = radius * sinf(a + Step) + y;
			V[Count].X = X1;
			V[Count].Y = Y1;
			V[Count + 1].X = X2;
			V[Count + 1].Y = Y2;
			canvas->K2_DrawLine(SDK::FVector2D({ V[Count].X, V[Count].Y }), SDK::FVector2D({ X2, Y2 }), 1.0f, color);
		}
	}

	inline static void SeMemoryAimbottAim(SDK::APlayerCameraManager* MyCamera, SDK::USkeletalMeshComponent* Mesh)
	{
		if (!PlayerController || !MyCamera) return;

		SDK::FVector AimLocation = GetBoneLocByIdx(Mesh, e_bones::head);

		SDK::FVector MyLocation = MyCamera->CameraCache.POV.Location;
		SDK::FRotator MyRotation = MyCamera->CameraCache.POV.Rotation;

		// Check visibility
		if (!Mesh->IsVisible()) return;

		SDK::FRotator AimRotation = MathLib->STATIC_FindLookAtRotation(MyLocation, AimLocation);
		PlayerController->SetControlRotation(AimRotation);
	}
};

inline unrealengine* ue = new unrealengine;

typedef void (*PostRender_t)(SDK::UObject* pObject, SDK::UCanvas* pCanvas);
static inline PostRender_t origin_renderer;
