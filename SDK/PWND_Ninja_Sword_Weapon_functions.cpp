// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetArcHitOverrideDamageTypeClass
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rot                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         ChargePct                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ANinja_Sword_Weapon_C::GetArcHitOverrideDamageTypeClass(float* ChargePct, struct FHitResult* Hit, struct FVector* Origin, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetArcHitOverrideDamageTypeClass");

	ANinja_Sword_Weapon_C_GetArcHitOverrideDamageTypeClass_Params params;
	params.ChargePct = ChargePct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (Origin != nullptr)
		*Origin = params.Origin;
	if (Rot != nullptr)
		*Rot = params.Rot;

	return params.ReturnValue;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetNextComboIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::GetNextComboIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetNextComboIndex");

	ANinja_Sword_Weapon_C_GetNextComboIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ComputeProjectileRoll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Roll                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::ComputeProjectileRoll(float* Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ComputeProjectileRoll");

	ANinja_Sword_Weapon_C_ComputeProjectileRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Roll != nullptr)
		*Roll = params.Roll;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::GetTarget(class AActor** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetTarget");

	ANinja_Sword_Weapon_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTarget != nullptr)
		*NewTarget = params.NewTarget;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.AdjustRotationInput
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                RotationInput                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 StartTrace                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ControlRot                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AimingDilation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ANinja_Sword_Weapon_C::AdjustRotationInput(float* DeltaTime, float* AimingDilation, struct FRotator* RotationInput, struct FVector* StartTrace, struct FRotator* ControlRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.AdjustRotationInput");

	ANinja_Sword_Weapon_C_AdjustRotationInput_Params params;
	params.DeltaTime = DeltaTime;
	params.AimingDilation = AimingDilation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RotationInput != nullptr)
		*RotationInput = params.RotationInput;
	if (StartTrace != nullptr)
		*StartTrace = params.StartTrace;
	if (ControlRot != nullptr)
		*ControlRot = params.ControlRot;

	return params.ReturnValue;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ExecutePullIn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PullInTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::ExecutePullIn(class AActor* PullInTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ExecutePullIn");

	ANinja_Sword_Weapon_C_ExecutePullIn_Params params;
	params.PullInTarget = PullInTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetSpreadType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           TotalShots                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeSpreadType>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EeSpreadType> ANinja_Sword_Weapon_C::GetSpreadType(int* TotalShots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetSpreadType");

	ANinja_Sword_Weapon_C_GetSpreadType_Params params;
	params.TotalShots = TotalShots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetWeaponFireType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ChargePct                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Shot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalShots                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeWeaponFireType>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EeWeaponFireType> ANinja_Sword_Weapon_C::GetWeaponFireType(float* ChargePct, int* Shot, int* TotalShots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.GetWeaponFireType");

	ANinja_Sword_Weapon_C_GetWeaponFireType_Params params;
	params.ChargePct = ChargePct;
	params.Shot = Shot;
	params.TotalShots = TotalShots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANinja_Sword_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.UserConstructionScript");

	ANinja_Sword_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ReceiveTick");

	ANinja_Sword_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnWeaponShotCountChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCharging                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldShotCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewShotCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::OnWeaponShotCountChanged(bool* bCharging, int* OldShotCount, int* NewShotCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnWeaponShotCountChanged");

	ANinja_Sword_Weapon_C_OnWeaponShotCountChanged_Params params;
	params.bCharging = bCharging;
	params.OldShotCount = OldShotCount;
	params.NewShotCount = NewShotCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void ANinja_Sword_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnWeaponFire");

	ANinja_Sword_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ArcFire
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         ChargePct                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::ArcFire(float* ChargePct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ArcFire");

	ANinja_Sword_Weapon_C_ArcFire_Params params;
	params.ChargePct = ChargePct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnDrawHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndHUD**               HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCanvas**                Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               ViewRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D*              CanvasOrigin                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D*              CanvasSize                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ANinja_Sword_Weapon_C::OnDrawHUD(class APwndHUD** HUD, class UCanvas** Canvas, struct FVector* ViewLocation, struct FRotator* ViewRotation, struct FVector2D* CanvasOrigin, struct FVector2D* CanvasSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnDrawHUD");

	ANinja_Sword_Weapon_C_OnDrawHUD_Params params;
	params.HUD = HUD;
	params.Canvas = Canvas;
	params.ViewLocation = ViewLocation;
	params.ViewRotation = ViewRotation;
	params.CanvasOrigin = CanvasOrigin;
	params.CanvasSize = CanvasSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.HandleArcHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPwndWeaponArcFire*     Arc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rot                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         ChargePct                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::HandleArcHit(struct FHitResult* Hit, struct FPwndWeaponArcFire* Arc, struct FVector* Origin, struct FRotator* Rot, float* ChargePct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.HandleArcHit");

	ANinja_Sword_Weapon_C_HandleArcHit_Params params;
	params.Hit = Hit;
	params.Arc = Arc;
	params.Origin = Origin;
	params.Rot = Rot;
	params.ChargePct = ChargePct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnClientHandleArcHitResponse
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool*                          bDidHit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANinja_Sword_Weapon_C::OnClientHandleArcHitResponse(bool* bDidHit, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnClientHandleArcHitResponse");

	ANinja_Sword_Weapon_C_OnClientHandleArcHitResponse_Params params;
	params.bDidHit = bDidHit;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnMulticastHandleArcHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rot                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANinja_Sword_Weapon_C::OnMulticastHandleArcHit(struct FHitResult* Hit, struct FVector* Origin, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnMulticastHandleArcHit");

	ANinja_Sword_Weapon_C_OnMulticastHandleArcHit_Params params;
	params.Hit = Hit;
	params.Origin = Origin;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ServerFireProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Roll                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::ServerFireProjectile(float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ServerFireProjectile");

	ANinja_Sword_Weapon_C_ServerFireProjectile_Params params;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnGrapplingHookFired
// (BlueprintCallable, BlueprintEvent)

void ANinja_Sword_Weapon_C::OnGrapplingHookFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnGrapplingHookFired");

	ANinja_Sword_Weapon_C_OnGrapplingHookFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ApplyWeaponSkin
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPwndWeaponSkin**        Skin                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::ApplyWeaponSkin(class UPwndWeaponSkin** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ApplyWeaponSkin");

	ANinja_Sword_Weapon_C_ApplyWeaponSkin_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnPhasingFired
// (BlueprintCallable, BlueprintEvent)

void ANinja_Sword_Weapon_C::OnPhasingFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnPhasingFired");

	ANinja_Sword_Weapon_C_OnPhasingFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnTeleportUsed
// (BlueprintCallable, BlueprintEvent)

void ANinja_Sword_Weapon_C::OnTeleportUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnTeleportUsed");

	ANinja_Sword_Weapon_C_OnTeleportUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnCharacterSkinAppliedHACK
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPwndCharacterSkin**     Skin                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::OnCharacterSkinAppliedHACK(class UPwndCharacterSkin** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.OnCharacterSkinAppliedHACK");

	ANinja_Sword_Weapon_C_OnCharacterSkinAppliedHACK_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ExecuteUbergraph_Ninja_Sword_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Weapon_C::ExecuteUbergraph_Ninja_Sword_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Weapon.Ninja_Sword_Weapon_C.ExecuteUbergraph_Ninja_Sword_Weapon");

	ANinja_Sword_Weapon_C_ExecuteUbergraph_Ninja_Sword_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
