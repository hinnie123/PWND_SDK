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

// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.SetSplineTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SplineTargetActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::SetSplineTarget(class AActor* SplineTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.SetSplineTarget");

	AGrappleHook_Base_Weapon_C_SetSplineTarget_Params params;
	params.SplineTargetActor = SplineTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.UpdateSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::UpdateSpline(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.UpdateSpline");

	AGrappleHook_Base_Weapon_C_UpdateSpline_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ProjectileFire
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ChargePct                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APwndProjectile*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APwndProjectile* AGrappleHook_Base_Weapon_C::ProjectileFire(float* ChargePct)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ProjectileFire");

	AGrappleHook_Base_Weapon_C_ProjectileFire_Params params;
	params.ChargePct = ChargePct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.GetReloadTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGrappleHook_Base_Weapon_C::GetReloadTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.GetReloadTime");

	AGrappleHook_Base_Weapon_C_GetReloadTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowReloadStart
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrappleHook_Base_Weapon_C::AllowReloadStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowReloadStart");

	AGrappleHook_Base_Weapon_C_AllowReloadStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowReloadTimerAdvance
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrappleHook_Base_Weapon_C::AllowReloadTimerAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowReloadTimerAdvance");

	AGrappleHook_Base_Weapon_C_AllowReloadTimerAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowFire
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrappleHook_Base_Weapon_C::AllowFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.AllowFire");

	AGrappleHook_Base_Weapon_C_AllowFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleHook_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.UserConstructionScript");

	AGrappleHook_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.StopFire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Timestamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromServerCallback            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::StopFire(float* Timestamp, bool* bFromServerCallback, bool* bReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.StopFire");

	AGrappleHook_Base_Weapon_C_StopFire_Params params;
	params.Timestamp = Timestamp;
	params.bFromServerCallback = bFromServerCallback;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void AGrappleHook_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.OnWeaponFire");

	AGrappleHook_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveTick");

	AGrappleHook_Base_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.StartFire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Timestamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromServerCallback            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::StartFire(float* Timestamp, bool* bFromServerCallback, bool* bReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.StartFire");

	AGrappleHook_Base_Weapon_C_StartFire_Params params;
	params.Timestamp = Timestamp;
	params.bFromServerCallback = bFromServerCallback;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.CustomFire
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         ChargePct                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::CustomFire(float* ChargePct)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.CustomFire");

	AGrappleHook_Base_Weapon_C_CustomFire_Params params;
	params.ChargePct = ChargePct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveEndPlay");

	AGrappleHook_Base_Weapon_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGrappleHook_Base_Weapon_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ReceiveDestroyed");

	AGrappleHook_Base_Weapon_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.MulticastPlayImpactSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::MulticastPlayImpactSound(unsigned char Type, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.MulticastPlayImpactSound");

	AGrappleHook_Base_Weapon_C_MulticastPlayImpactSound_Params params;
	params.Type = Type;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ExecuteUbergraph_GrappleHook_Base_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Weapon_C::ExecuteUbergraph_GrappleHook_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Weapon.GrappleHook_Base_Weapon_C.ExecuteUbergraph_GrappleHook_Base_Weapon");

	AGrappleHook_Base_Weapon_C_ExecuteUbergraph_GrappleHook_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
