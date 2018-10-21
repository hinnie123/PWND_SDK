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

// Function Base_AbilityWeapon.Base_AbilityWeapon_C.GetMuzzleFlashAttachComp
struct ABase_AbilityWeapon_C_GetMuzzleFlashAttachComp_Params
{
	bool                                               bFirstPerson;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Comp;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_AbilityWeapon.Base_AbilityWeapon_C.UserConstructionScript
struct ABase_AbilityWeapon_C_UserConstructionScript_Params
{
};

// Function Base_AbilityWeapon.Base_AbilityWeapon_C.OnUpgraded
struct ABase_AbilityWeapon_C_OnUpgraded_Params
{
};

// Function Base_AbilityWeapon.Base_AbilityWeapon_C.OnWeaponFailedFire
struct ABase_AbilityWeapon_C_OnWeaponFailedFire_Params
{
};

// Function Base_AbilityWeapon.Base_AbilityWeapon_C.ExecuteUbergraph_Base_AbilityWeapon
struct ABase_AbilityWeapon_C_ExecuteUbergraph_Base_AbilityWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
