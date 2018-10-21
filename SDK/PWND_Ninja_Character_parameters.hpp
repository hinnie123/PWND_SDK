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

// Function Ninja_Character.Ninja_Character_C.UserConstructionScript
struct ANinja_Character_C_UserConstructionScript_Params
{
};

// Function Ninja_Character.Ninja_Character_C.OnWeaponFire
struct ANinja_Character_C_OnWeaponFire_Params
{
	class APwndWeapon**                                FiredWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Character.Ninja_Character_C.ExecuteUbergraph_Ninja_Character
struct ANinja_Character_C_ExecuteUbergraph_Ninja_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
