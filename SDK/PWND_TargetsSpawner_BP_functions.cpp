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

// Function TargetsSpawner_BP.TargetsSpawner_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATargetsSpawner_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetsSpawner_BP.TargetsSpawner_BP_C.UserConstructionScript");

	ATargetsSpawner_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TargetsSpawner_BP.TargetsSpawner_BP_C.SpawnTarget
// (BlueprintCallable, BlueprintEvent)

void ATargetsSpawner_BP_C::SpawnTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetsSpawner_BP.TargetsSpawner_BP_C.SpawnTarget");

	ATargetsSpawner_BP_C_SpawnTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TargetsSpawner_BP.TargetsSpawner_BP_C.RestartChallengeItem
// (Public, BlueprintCallable, BlueprintEvent)

void ATargetsSpawner_BP_C::RestartChallengeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetsSpawner_BP.TargetsSpawner_BP_C.RestartChallengeItem");

	ATargetsSpawner_BP_C_RestartChallengeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TargetsSpawner_BP.TargetsSpawner_BP_C.ExecuteUbergraph_TargetsSpawner_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATargetsSpawner_BP_C::ExecuteUbergraph_TargetsSpawner_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetsSpawner_BP.TargetsSpawner_BP_C.ExecuteUbergraph_TargetsSpawner_BP");

	ATargetsSpawner_BP_C_ExecuteUbergraph_TargetsSpawner_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
