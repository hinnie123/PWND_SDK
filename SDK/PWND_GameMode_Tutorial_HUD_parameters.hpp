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

// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.UserConstructionScript
struct AGameMode_Tutorial_HUD_C_UserConstructionScript_Params
{
};

// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ReceiveDrawHUD
struct AGameMode_Tutorial_HUD_C_ReceiveDrawHUD_Params
{
	int*                                               SizeX;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SizeY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.SetTutorialHUDText
struct AGameMode_Tutorial_HUD_C_SetTutorialHUDText_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UFont*                                       Font;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ClearTutorialHUDText
struct AGameMode_Tutorial_HUD_C_ClearTutorialHUDText_Params
{
};

// Function GameMode_Tutorial_HUD.GameMode_Tutorial_HUD_C.ExecuteUbergraph_GameMode_Tutorial_HUD
struct AGameMode_Tutorial_HUD_C_ExecuteUbergraph_GameMode_Tutorial_HUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
