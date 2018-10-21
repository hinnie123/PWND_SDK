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

// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.UserConstructionScript
struct AStickyBomb_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponFire
struct AStickyBomb_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponStartCharging
struct AStickyBomb_Base_Weapon_C_OnWeaponStartCharging_Params
{
	bool*                                              bInitialCharge;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponStopCharging
struct AStickyBomb_Base_Weapon_C_OnWeaponStopCharging_Params
{
};

// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.ExecuteUbergraph_StickyBomb_Base_Weapon
struct AStickyBomb_Base_Weapon_C_ExecuteUbergraph_StickyBomb_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
