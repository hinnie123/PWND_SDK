#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.UserConstructionScript
struct AGamemode_Challenge_BaseGame_C_UserConstructionScript_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.COMPLETE
struct AGamemode_Challenge_BaseGame_C_COMPLETE_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.SaveGame
struct AGamemode_Challenge_BaseGame_C_SaveGame_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.End
struct AGamemode_Challenge_BaseGame_C_End_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.PlayerExitsStart
struct AGamemode_Challenge_BaseGame_C_PlayerExitsStart_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.Restart
struct AGamemode_Challenge_BaseGame_C_Restart_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.Print Numbers
struct AGamemode_Challenge_BaseGame_C_Print_Numbers_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.Set Player location
struct AGamemode_Challenge_BaseGame_C_Set_Player_location_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.ReceiveBeginPlay
struct AGamemode_Challenge_BaseGame_C_ReceiveBeginPlay_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.ResetChallenge
struct AGamemode_Challenge_BaseGame_C_ResetChallenge_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.StopCharacter
struct AGamemode_Challenge_BaseGame_C_StopCharacter_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.EnableMovement
struct AGamemode_Challenge_BaseGame_C_EnableMovement_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.DisableMovement
struct AGamemode_Challenge_BaseGame_C_DisableMovement_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.PrintSecertTimerNumber
struct AGamemode_Challenge_BaseGame_C_PrintSecertTimerNumber_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.Collectable Grabbed
struct AGamemode_Challenge_BaseGame_C_Collectable_Grabbed_Params
{
	int                                                KeyNumber;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.PauseGame
struct AGamemode_Challenge_BaseGame_C_PauseGame_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.UnPauseGame
struct AGamemode_Challenge_BaseGame_C_UnPauseGame_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.Telemetry
struct AGamemode_Challenge_BaseGame_C_Telemetry_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.TelemetryKilledByObstacles
struct AGamemode_Challenge_BaseGame_C_TelemetryKilledByObstacles_Params
{
	struct FString                                     Obstalces;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.SetCharacter
struct AGamemode_Challenge_BaseGame_C_SetCharacter_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.Delete Projectiles
struct AGamemode_Challenge_BaseGame_C_Delete_Projectiles_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.StartingTelemetry
struct AGamemode_Challenge_BaseGame_C_StartingTelemetry_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.LeftMatchTelemetry
struct AGamemode_Challenge_BaseGame_C_LeftMatchTelemetry_Params
{
	bool                                               PauseMenu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CompletedMenu;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.Show Tier Rankings
struct AGamemode_Challenge_BaseGame_C_Show_Tier_Rankings_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.Hide Tier Rankings
struct AGamemode_Challenge_BaseGame_C_Hide_Tier_Rankings_Params
{
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.ExecuteUbergraph_Gamemode_Challenge_BaseGame
struct AGamemode_Challenge_BaseGame_C_ExecuteUbergraph_Gamemode_Challenge_BaseGame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C.RestartLevelSequence__DelegateSignature
struct AGamemode_Challenge_BaseGame_C_RestartLevelSequence__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
