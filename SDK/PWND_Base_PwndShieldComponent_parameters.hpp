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

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldColors
struct UBase_PwndShieldComponent_C_UpdateShieldColors_Params
{
};

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldDamage
struct UBase_PwndShieldComponent_C_UpdateShieldDamage_Params
{
	float                                              NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.UpdateShieldMaterials
struct UBase_PwndShieldComponent_C_UpdateShieldMaterials_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ReceiveBeginPlay
struct UBase_PwndShieldComponent_C_ReceiveBeginPlay_Params
{
};

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ReceiveTick
struct UBase_PwndShieldComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelHealthChanged
struct UBase_PwndShieldComponent_C_OnPanelHealthChanged_Params
{
	int*                                               OldHealth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewHealth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealthPct;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelSetActive
struct UBase_PwndShieldComponent_C_OnPanelSetActive_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.OnPanelDestroyed
struct UBase_PwndShieldComponent_C_OnPanelDestroyed_Params
{
	bool*                                              bDestroyed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_PwndShieldComponent.Base_PwndShieldComponent_C.ExecuteUbergraph_Base_PwndShieldComponent
struct UBase_PwndShieldComponent_C_ExecuteUbergraph_Base_PwndShieldComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
