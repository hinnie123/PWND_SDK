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

// Function FinishLine.FinishLine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFinishLine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.UserConstructionScript");

	AFinishLine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AFinishLine_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.Timeline_1__FinishedFunc");

	AFinishLine_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AFinishLine_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.Timeline_1__UpdateFunc");

	AFinishLine_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AFinishLine_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.Timeline_0__FinishedFunc");

	AFinishLine_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AFinishLine_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.Timeline_0__UpdateFunc");

	AFinishLine_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void AFinishLine_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.Deactivate");

	AFinishLine_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFinishLine_C::BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AFinishLine_C_BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.Animation
// (BlueprintCallable, BlueprintEvent)

void AFinishLine_C::Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.Animation");

	AFinishLine_C_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AFinishLine_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.Activate");

	AFinishLine_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.Check Ranking
// (BlueprintCallable, BlueprintEvent)

void AFinishLine_C::Check_Ranking()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.Check Ranking");

	AFinishLine_C_Check_Ranking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinishLine.FinishLine_C.ExecuteUbergraph_FinishLine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFinishLine_C::ExecuteUbergraph_FinishLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FinishLine.FinishLine_C.ExecuteUbergraph_FinishLine");

	AFinishLine_C_ExecuteUbergraph_FinishLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
