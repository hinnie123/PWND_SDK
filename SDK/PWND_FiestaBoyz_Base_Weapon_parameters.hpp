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

// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.UserConstructionScript
struct AFiestaBoyz_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.ReceiveBeginPlay
struct AFiestaBoyz_Base_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponFire
struct AFiestaBoyz_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponAmmoCountChanged
struct AFiestaBoyz_Base_Weapon_C_OnWeaponAmmoCountChanged_Params
{
	int*                                               OldAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnUpgraded
struct AFiestaBoyz_Base_Weapon_C_OnUpgraded_Params
{
};

// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponStartReload
struct AFiestaBoyz_Base_Weapon_C_OnWeaponStartReload_Params
{
};

// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.ExecuteUbergraph_FiestaBoyz_Base_Weapon
struct AFiestaBoyz_Base_Weapon_C_ExecuteUbergraph_FiestaBoyz_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
