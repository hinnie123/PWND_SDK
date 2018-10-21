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

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.SortRingArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_TrainingRing_C*> Rings_Array                    (Parm, OutParm, ZeroConstructor)

void AGameMode_Challenge_Rings_C::SortRingArray(TArray<class ABP_TrainingRing_C*>* Rings_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.SortRingArray");

	AGameMode_Challenge_Rings_C_SortRingArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rings_Array != nullptr)
		*Rings_Array = params.Rings_Array;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Rings_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.UserConstructionScript");

	AGameMode_Challenge_Rings_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AGameMode_Challenge_Rings_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Timeline_0__FinishedFunc");

	AGameMode_Challenge_Rings_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AGameMode_Challenge_Rings_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Timeline_0__UpdateFunc");

	AGameMode_Challenge_Rings_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Ring Passed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Challenge_Rings_C::Ring_Passed(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Ring Passed");

	AGameMode_Challenge_Rings_C_Ring_Passed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Challenge_Rings_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.ReceiveTick");

	AGameMode_Challenge_Rings_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Set Rings
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Rings_C::Set_Rings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Set Rings");

	AGameMode_Challenge_Rings_C_Set_Rings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Ring Success Event
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Rings_C::Ring_Success_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Ring Success Event");

	AGameMode_Challenge_Rings_C_Ring_Success_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.RingTImeAddedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeAdded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Challenge_Rings_C::RingTImeAddedEvent(float TimeAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.RingTImeAddedEvent");

	AGameMode_Challenge_Rings_C_RingTImeAddedEvent_Params params;
	params.TimeAdded = TimeAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.PlayAnimation
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Rings_C::PlayAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.PlayAnimation");

	AGameMode_Challenge_Rings_C_PlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Final Check
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Rings_C::Final_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Final Check");

	AGameMode_Challenge_Rings_C_Final_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Set Score
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Rings_C::Set_Score()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Set Score");

	AGameMode_Challenge_Rings_C_Set_Score_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.ExecuteUbergraph_GameMode_Challenge_Rings
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Challenge_Rings_C::ExecuteUbergraph_GameMode_Challenge_Rings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.ExecuteUbergraph_GameMode_Challenge_Rings");

	AGameMode_Challenge_Rings_C_ExecuteUbergraph_GameMode_Challenge_Rings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
