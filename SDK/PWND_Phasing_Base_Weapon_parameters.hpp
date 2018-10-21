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

// Function Phasing_Base_Weapon.Phasing_Base_Weapon_C.IsAbilityActive
struct APhasing_Base_Weapon_C_IsAbilityActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Phasing_Base_Weapon.Phasing_Base_Weapon_C.UserConstructionScript
struct APhasing_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function Phasing_Base_Weapon.Phasing_Base_Weapon_C.ReceiveTick
struct APhasing_Base_Weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phasing_Base_Weapon.Phasing_Base_Weapon_C.OnWeaponFire
struct APhasing_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function Phasing_Base_Weapon.Phasing_Base_Weapon_C.CustomFire
struct APhasing_Base_Weapon_C_CustomFire_Params
{
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phasing_Base_Weapon.Phasing_Base_Weapon_C.ExecuteUbergraph_Phasing_Base_Weapon
struct APhasing_Base_Weapon_C_ExecuteUbergraph_Phasing_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
