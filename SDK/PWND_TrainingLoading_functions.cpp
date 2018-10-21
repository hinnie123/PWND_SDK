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

// Function TrainingLoading.TrainingLoading_C.Set Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Training_Name                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Training                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingLoading_C::Set_Text(const struct FText& Training_Name, const struct FString& Location, bool Training)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingLoading.TrainingLoading_C.Set Text");

	UTrainingLoading_C_Set_Text_Params params;
	params.Training_Name = Training_Name;
	params.Location = Location;
	params.Training = Training;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingLoading.TrainingLoading_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingLoading_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingLoading.TrainingLoading_C.Tick");

	UTrainingLoading_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingLoading.TrainingLoading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTrainingLoading_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingLoading.TrainingLoading_C.Construct");

	UTrainingLoading_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingLoading.TrainingLoading_C.ExitAnimationCompleted
// (BlueprintCallable, BlueprintEvent)

void UTrainingLoading_C::ExitAnimationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingLoading.TrainingLoading_C.ExitAnimationCompleted");

	UTrainingLoading_C_ExitAnimationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingLoading.TrainingLoading_C.OnCloseRequested
// (Event, Public, BlueprintEvent)

void UTrainingLoading_C::OnCloseRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingLoading.TrainingLoading_C.OnCloseRequested");

	UTrainingLoading_C_OnCloseRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingLoading.TrainingLoading_C.ExecuteUbergraph_TrainingLoading
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingLoading_C::ExecuteUbergraph_TrainingLoading(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingLoading.TrainingLoading_C.ExecuteUbergraph_TrainingLoading");

	UTrainingLoading_C_ExecuteUbergraph_TrainingLoading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingLoading.TrainingLoading_C.LoadingCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTrainingLoading_C::LoadingCancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingLoading.TrainingLoading_C.LoadingCancelled__DelegateSignature");

	UTrainingLoading_C_LoadingCancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
