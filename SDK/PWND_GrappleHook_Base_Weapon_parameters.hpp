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

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.SetSplineTarget
struct AGrappleHook_Base_Weapon_C_SetSplineTarget_Params
{
	class AActor*                                      SplineTargetActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.UpdateSpline
struct AGrappleHook_Base_Weapon_C_UpdateSpline_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ProjectileFire
struct AGrappleHook_Base_Weapon_C_ProjectileFire_Params
{
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndProjectile*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.GetReloadTime
struct AGrappleHook_Base_Weapon_C_GetReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowReloadStart
struct AGrappleHook_Base_Weapon_C_AllowReloadStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowReloadTimerAdvance
struct AGrappleHook_Base_Weapon_C_AllowReloadTimerAdvance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowFire
struct AGrappleHook_Base_Weapon_C_AllowFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.UserConstructionScript
struct AGrappleHook_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.StopFire
struct AGrappleHook_Base_Weapon_C_StopFire_Params
{
	float*                                             Timestamp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromServerCallback;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.OnWeaponFire
struct AGrappleHook_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveTick
struct AGrappleHook_Base_Weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.StartFire
struct AGrappleHook_Base_Weapon_C_StartFire_Params
{
	float*                                             Timestamp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromServerCallback;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.CustomFire
struct AGrappleHook_Base_Weapon_C_CustomFire_Params
{
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveEndPlay
struct AGrappleHook_Base_Weapon_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveDestroyed
struct AGrappleHook_Base_Weapon_C_ReceiveDestroyed_Params
{
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.MulticastPlayImpactSound
struct AGrappleHook_Base_Weapon_C_MulticastPlayImpactSound_Params
{
	unsigned char                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ExecuteUbergraph_GrappleHook_Base_Weapon
struct AGrappleHook_Base_Weapon_C_ExecuteUbergraph_GrappleHook_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
