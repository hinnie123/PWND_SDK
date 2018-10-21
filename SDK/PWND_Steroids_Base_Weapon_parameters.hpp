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

// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.IsAbilityActive
struct ASteroids_Base_Weapon_C_IsAbilityActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.UserConstructionScript
struct ASteroids_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.OnWeaponFire
struct ASteroids_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.CustomFire
struct ASteroids_Base_Weapon_C_CustomFire_Params
{
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.ExecuteUbergraph_Steroids_Base_Weapon
struct ASteroids_Base_Weapon_C_ExecuteUbergraph_Steroids_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
