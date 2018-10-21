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

// Function PwndStuntSeq_Survival.PwndStuntSeq_Survival_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPwndStuntSeq_Survival_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndStuntSeq_Survival.PwndStuntSeq_Survival_C.OnTick");

	UPwndStuntSeq_Survival_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwndStuntSeq_Survival.PwndStuntSeq_Survival_C.ExecuteUbergraph_PwndStuntSeq_Survival
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPwndStuntSeq_Survival_C::ExecuteUbergraph_PwndStuntSeq_Survival(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndStuntSeq_Survival.PwndStuntSeq_Survival_C.ExecuteUbergraph_PwndStuntSeq_Survival");

	UPwndStuntSeq_Survival_C_ExecuteUbergraph_PwndStuntSeq_Survival_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
