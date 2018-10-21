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

// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.GetSpecialMovementTarget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 TargetVelocity                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ARecallTeleporter_Base_Weapon_C::GetSpecialMovementTarget(struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.GetSpecialMovementTarget");

	ARecallTeleporter_Base_Weapon_C_GetSpecialMovementTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;

	return params.ReturnValue;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.IsAbilityActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARecallTeleporter_Base_Weapon_C::IsAbilityActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.IsAbilityActive");

	ARecallTeleporter_Base_Weapon_C_IsAbilityActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.IsSpecialMovementTwoStage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool*                          bFirstStage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARecallTeleporter_Base_Weapon_C::IsSpecialMovementTwoStage(bool* bFirstStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.IsSpecialMovementTwoStage");

	ARecallTeleporter_Base_Weapon_C_IsSpecialMovementTwoStage_Params params;
	params.bFirstStage = bFirstStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnRep_ReplicatedTeleport
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ARecallTeleporter_Base_Weapon_C::OnRep_ReplicatedTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnRep_ReplicatedTeleport");

	ARecallTeleporter_Base_Weapon_C_OnRep_ReplicatedTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.PerformTeleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              TeleportTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_Weapon_C::PerformTeleport(const struct FTransform& TeleportTarget, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.PerformTeleport");

	ARecallTeleporter_Base_Weapon_C_PerformTeleport_Params params;
	params.TeleportTarget = TeleportTarget;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ProjectileFire
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ChargePct                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APwndProjectile*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APwndProjectile* ARecallTeleporter_Base_Weapon_C::ProjectileFire(float* ChargePct)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ProjectileFire");

	ARecallTeleporter_Base_Weapon_C_ProjectileFire_Params params;
	params.ChargePct = ChargePct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowReloadTimerAdvance
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARecallTeleporter_Base_Weapon_C::AllowReloadTimerAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowReloadTimerAdvance");

	ARecallTeleporter_Base_Weapon_C_AllowReloadTimerAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowReloadStart
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARecallTeleporter_Base_Weapon_C::AllowReloadStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowReloadStart");

	ARecallTeleporter_Base_Weapon_C_AllowReloadStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowFire
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARecallTeleporter_Base_Weapon_C::AllowFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.AllowFire");

	ARecallTeleporter_Base_Weapon_C_AllowFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecallTeleporter_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.UserConstructionScript");

	ARecallTeleporter_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnDrawHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndHUD**               HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCanvas**                Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               ViewRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D*              CanvasOrigin                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D*              CanvasSize                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ARecallTeleporter_Base_Weapon_C::OnDrawHUD(class APwndHUD** HUD, class UCanvas** Canvas, struct FVector* ViewLocation, struct FRotator* ViewRotation, struct FVector2D* CanvasOrigin, struct FVector2D* CanvasSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnDrawHUD");

	ARecallTeleporter_Base_Weapon_C_OnDrawHUD_Params params;
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


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void ARecallTeleporter_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.OnWeaponFire");

	ARecallTeleporter_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_Weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ReceiveTick");

	ARecallTeleporter_Base_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ClientPlayTeleportFXOnCarried
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ARecallTeleporter_Base_Weapon_C::ClientPlayTeleportFXOnCarried()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ClientPlayTeleportFXOnCarried");

	ARecallTeleporter_Base_Weapon_C_ClientPlayTeleportFXOnCarried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ExecuteUbergraph_RecallTeleporter_Base_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_Weapon_C::ExecuteUbergraph_RecallTeleporter_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Weapon.RecallTeleporter_Base_Weapon_C.ExecuteUbergraph_RecallTeleporter_Base_Weapon");

	ARecallTeleporter_Base_Weapon_C_ExecuteUbergraph_RecallTeleporter_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
