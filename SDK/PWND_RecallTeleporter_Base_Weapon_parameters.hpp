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

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.GetSpecialMovementTarget
struct ARecallTeleporter_Base_Weapon_C_GetSpecialMovementTarget_Params
{
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.IsAbilityActive
struct ARecallTeleporter_Base_Weapon_C_IsAbilityActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.IsSpecialMovementTwoStage
struct ARecallTeleporter_Base_Weapon_C_IsSpecialMovementTwoStage_Params
{
	bool*                                              bFirstStage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnRep_ReplicatedTeleport
struct ARecallTeleporter_Base_Weapon_C_OnRep_ReplicatedTeleport_Params
{
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.PerformTeleport
struct ARecallTeleporter_Base_Weapon_C_PerformTeleport_Params
{
	struct FTransform                                  TeleportTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ProjectileFire
struct ARecallTeleporter_Base_Weapon_C_ProjectileFire_Params
{
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndProjectile*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowReloadTimerAdvance
struct ARecallTeleporter_Base_Weapon_C_AllowReloadTimerAdvance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowReloadStart
struct ARecallTeleporter_Base_Weapon_C_AllowReloadStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowFire
struct ARecallTeleporter_Base_Weapon_C_AllowFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.UserConstructionScript
struct ARecallTeleporter_Base_Weapon_C_UserConstructionScript_Params
{
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnDrawHUD
struct ARecallTeleporter_Base_Weapon_C_OnDrawHUD_Params
{
	class APwndHUD**                                   HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCanvas**                                    Canvas;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   ViewRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D*                                  CanvasOrigin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D*                                  CanvasSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnWeaponFire
struct ARecallTeleporter_Base_Weapon_C_OnWeaponFire_Params
{
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ReceiveTick
struct ARecallTeleporter_Base_Weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ClientPlayTeleportFXOnCarried
struct ARecallTeleporter_Base_Weapon_C_ClientPlayTeleportFXOnCarried_Params
{
};

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ExecuteUbergraph_RecallTeleporter_Base_Weapon
struct ARecallTeleporter_Base_Weapon_C_ExecuteUbergraph_RecallTeleporter_Base_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
