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

// Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.UserConstructionScript
struct AGooBomb_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.ReceiveTick
struct AGooBomb_Base_Weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.OnWeaponFire
struct AGooBomb_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.ExecuteUbergraph_GooBomb_Base_Weapon
struct AGooBomb_Base_Weapon_C_ExecuteUbergraph_GooBomb_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
