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

// Function TrainingResults_UI.TrainingResults_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTrainingResults_UI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingResults_UI.TrainingResults_UI_C.Construct");

	UTrainingResults_UI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingResults_UI.TrainingResults_UI_C.Next
// (BlueprintCallable, BlueprintEvent)

void UTrainingResults_UI_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingResults_UI.TrainingResults_UI_C.Next");

	UTrainingResults_UI_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingResults_UI.TrainingResults_UI_C.COMPLETE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingResults_UI_C::COMPLETE(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingResults_UI.TrainingResults_UI_C.COMPLETE");

	UTrainingResults_UI_C_COMPLETE_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingResults_UI.TrainingResults_UI_C.Unlocks
// (BlueprintCallable, BlueprintEvent)

void UTrainingResults_UI_C::Unlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingResults_UI.TrainingResults_UI_C.Unlocks");

	UTrainingResults_UI_C_Unlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingResults_UI.TrainingResults_UI_C.ExecuteUbergraph_TrainingResults_UI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingResults_UI_C::ExecuteUbergraph_TrainingResults_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingResults_UI.TrainingResults_UI_C.ExecuteUbergraph_TrainingResults_UI");

	UTrainingResults_UI_C_ExecuteUbergraph_TrainingResults_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
