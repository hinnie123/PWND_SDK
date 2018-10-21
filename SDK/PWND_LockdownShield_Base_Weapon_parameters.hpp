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

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.UserConstructionScript
struct ALockdownShield_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveBeginPlay
struct ALockdownShield_Base_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveTick
struct ALockdownShield_Base_Weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponFire
struct ALockdownShield_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponAmmoCountChanged
struct ALockdownShield_Base_Weapon_C_OnWeaponAmmoCountChanged_Params
{
	int*                                               OldAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponStartReload
struct ALockdownShield_Base_Weapon_C_OnWeaponStartReload_Params
{
};

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnUpgraded
struct ALockdownShield_Base_Weapon_C_OnUpgraded_Params
{
};

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveEndPlay
struct ALockdownShield_Base_Weapon_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ExecuteUbergraph_LockdownShield_Base_Weapon
struct ALockdownShield_Base_Weapon_C_ExecuteUbergraph_LockdownShield_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
