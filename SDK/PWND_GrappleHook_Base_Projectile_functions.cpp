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

// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ExecutePullIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PullInTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Projectile_C::ExecutePullIn(class AActor* PullInTarget, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ExecutePullIn");

	AGrappleHook_Base_Projectile_C_ExecutePullIn_Params params;
	params.PullInTarget = PullInTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrappleHook_Base_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.UserConstructionScript");

	AGrappleHook_Base_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.OnDetonate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bDestroy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Projectile_C::OnDetonate(struct FVector* Location, struct FHitResult* Hit, bool* bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.OnDetonate");

	AGrappleHook_Base_Projectile_C_OnDetonate_Params params;
	params.Location = Location;
	params.Hit = Hit;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrappleHook_Base_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ReceiveBeginPlay");

	AGrappleHook_Base_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.OnTeamUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 NewTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Projectile_C::OnTeamUpdated(unsigned char* NewTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.OnTeamUpdated");

	AGrappleHook_Base_Projectile_C_OnTeamUpdated_Params params;
	params.NewTeamNum = NewTeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ExecuteUbergraph_GrappleHook_Base_Projectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrappleHook_Base_Projectile_C::ExecuteUbergraph_GrappleHook_Base_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ExecuteUbergraph_GrappleHook_Base_Projectile");

	AGrappleHook_Base_Projectile_C_ExecuteUbergraph_GrappleHook_Base_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
