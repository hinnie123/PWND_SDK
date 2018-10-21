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

// Function Base_Weapon.Base_Weapon_C.GetMuzzleFlashAttachComp
struct ABase_Weapon_C_GetMuzzleFlashAttachComp_Params
{
	bool                                               bFirstPerson;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Comp;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Weapon.Base_Weapon_C.SpawnFX
struct ABase_Weapon_C_SpawnFX_Params
{
	class UClass*                                      FXClass;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndFX*                                     PrevInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKillFX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachParent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndFX*                                     SpawnedFX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Weapon.Base_Weapon_C.UserConstructionScript
struct ABase_Weapon_C_UserConstructionScript_Params
{
};

// Function Base_Weapon.Base_Weapon_C.OnPlayRocketJump
struct ABase_Weapon_C_OnPlayRocketJump_Params
{
	struct FVector*                                    Impulse;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FReplicatedRocketJump*                      ReplicatedRocketJump;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Base_Weapon.Base_Weapon_C.OnWeaponStartReload
struct ABase_Weapon_C_OnWeaponStartReload_Params
{
};

// Function Base_Weapon.Base_Weapon_C.AbilityWeaponFired
struct ABase_Weapon_C_AbilityWeaponFired_Params
{
};

// Function Base_Weapon.Base_Weapon_C.OnWeaponFire
struct ABase_Weapon_C_OnWeaponFire_Params
{
};

// Function Base_Weapon.Base_Weapon_C.OnPostEventTrigger
struct ABase_Weapon_C_OnPostEventTrigger_Params
{
	TEnumAsByte<EeEventTrigger>*                       Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>*                            Others;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Base_Weapon.Base_Weapon_C.ExecuteUbergraph_Base_Weapon
struct ABase_Weapon_C_ExecuteUbergraph_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
