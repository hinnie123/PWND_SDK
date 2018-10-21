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

// Function HUDManager.HUDManager_C.ShowMeHUDManager
struct UHUDManager_C_ShowMeHUDManager_Params
{
};

// Function HUDManager.HUDManager_C.HideMeHUDManager
struct UHUDManager_C_HideMeHUDManager_Params
{
};

// Function HUDManager.HUDManager_C.Get_Respawn_Text_Text_1
struct UHUDManager_C_Get_Respawn_Text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUDManager.HUDManager_C.Construct
struct UHUDManager_C_Construct_Params
{
};

// Function HUDManager.HUDManager_C.Tick
struct UHUDManager_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUDManager.HUDManager_C.ExecuteUbergraph_HUDManager
struct UHUDManager_C_ExecuteUbergraph_HUDManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
