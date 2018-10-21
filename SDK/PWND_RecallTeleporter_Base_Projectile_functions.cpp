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

// Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecallTeleporter_Base_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.UserConstructionScript");

	ARecallTeleporter_Base_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.OnStuck
// (Event, Public, BlueprintEvent)

void ARecallTeleporter_Base_Projectile_C::OnStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.OnStuck");

	ARecallTeleporter_Base_Projectile_C_OnStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.OnArmedUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsArmed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_Projectile_C::OnArmedUpdated(bool* bIsArmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.OnArmedUpdated");

	ARecallTeleporter_Base_Projectile_C_OnArmedUpdated_Params params;
	params.bIsArmed = bIsArmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.OnDetonate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bDestroy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_Projectile_C::OnDetonate(struct FVector* Location, struct FHitResult* Hit, bool* bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.OnDetonate");

	ARecallTeleporter_Base_Projectile_C_OnDetonate_Params params;
	params.Location = Location;
	params.Hit = Hit;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARecallTeleporter_Base_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.ReceiveBeginPlay");

	ARecallTeleporter_Base_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.OnTeamUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 NewTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_Projectile_C::OnTeamUpdated(unsigned char* NewTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.OnTeamUpdated");

	ARecallTeleporter_Base_Projectile_C_OnTeamUpdated_Params params;
	params.NewTeamNum = NewTeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_Projectile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.ReceiveTick");

	ARecallTeleporter_Base_Projectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.ExecuteUbergraph_RecallTeleporter_Base_Projectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_Projectile_C::ExecuteUbergraph_RecallTeleporter_Base_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_Projectile.RecallTeleporter_Base_Projectile_C.ExecuteUbergraph_RecallTeleporter_Base_Projectile");

	ARecallTeleporter_Base_Projectile_C_ExecuteUbergraph_RecallTeleporter_Base_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
