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

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetArcHitOverrideDamageTypeClass
struct ANinja_Sword_Weapon_C_GetArcHitOverrideDamageTypeClass_Params
{
	struct FHitResult                                  Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetNextComboIndex
struct ANinja_Sword_Weapon_C_GetNextComboIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ComputeProjectileRoll
struct ANinja_Sword_Weapon_C_ComputeProjectileRoll_Params
{
	float                                              Roll;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetTarget
struct ANinja_Sword_Weapon_C_GetTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.AdjustRotationInput
struct ANinja_Sword_Weapon_C_AdjustRotationInput_Params
{
	struct FRotator                                    RotationInput;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     StartTrace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ControlRot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AimingDilation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ExecutePullIn
struct ANinja_Sword_Weapon_C_ExecutePullIn_Params
{
	class AActor*                                      PullInTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetSpreadType
struct ANinja_Sword_Weapon_C_GetSpreadType_Params
{
	int*                                               TotalShots;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeSpreadType>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetWeaponFireType
struct ANinja_Sword_Weapon_C_GetWeaponFireType_Params
{
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Shot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalShots;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeWeaponFireType>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.UserConstructionScript
struct ANinja_Sword_Weapon_C_UserConstructionScript_Params
{
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ReceiveTick
struct ANinja_Sword_Weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnWeaponShotCountChanged
struct ANinja_Sword_Weapon_C_OnWeaponShotCountChanged_Params
{
	bool*                                              bCharging;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldShotCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewShotCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnWeaponFire
struct ANinja_Sword_Weapon_C_OnWeaponFire_Params
{
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ArcFire
struct ANinja_Sword_Weapon_C_ArcFire_Params
{
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnDrawHUD
struct ANinja_Sword_Weapon_C_OnDrawHUD_Params
{
	class APwndHUD**                                   HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCanvas**                                    Canvas;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   ViewRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D*                                  CanvasOrigin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D*                                  CanvasSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.HandleArcHit
struct ANinja_Sword_Weapon_C_HandleArcHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPwndWeaponArcFire*                         Arc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Origin;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rot;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             ChargePct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnClientHandleArcHitResponse
struct ANinja_Sword_Weapon_C_OnClientHandleArcHitResponse_Params
{
	bool*                                              bDidHit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnMulticastHandleArcHit
struct ANinja_Sword_Weapon_C_OnMulticastHandleArcHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rot;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ServerFireProjectile
struct ANinja_Sword_Weapon_C_ServerFireProjectile_Params
{
	float                                              Roll;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnGrapplingHookFired
struct ANinja_Sword_Weapon_C_OnGrapplingHookFired_Params
{
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ApplyWeaponSkin
struct ANinja_Sword_Weapon_C_ApplyWeaponSkin_Params
{
	class UPwndWeaponSkin**                            Skin;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnPhasingFired
struct ANinja_Sword_Weapon_C_OnPhasingFired_Params
{
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnTeleportUsed
struct ANinja_Sword_Weapon_C_OnTeleportUsed_Params
{
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnCharacterSkinAppliedHACK
struct ANinja_Sword_Weapon_C_OnCharacterSkinAppliedHACK_Params
{
	class UPwndCharacterSkin**                         Skin;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ExecuteUbergraph_Ninja_Sword_Weapon
struct ANinja_Sword_Weapon_C_ExecuteUbergraph_Ninja_Sword_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
