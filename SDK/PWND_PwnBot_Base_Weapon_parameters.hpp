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

// Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.GetLoadoutViewAccessories
struct APwnBot_Base_Weapon_C_GetLoadoutViewAccessories_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.UserConstructionScript
struct APwnBot_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.OnWeaponFire
struct APwnBot_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.ExecuteUbergraph_PwnBot_Base_Weapon
struct APwnBot_Base_Weapon_C_ExecuteUbergraph_PwnBot_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
