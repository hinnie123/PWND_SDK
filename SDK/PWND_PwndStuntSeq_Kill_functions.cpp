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

// Function PwndStuntSeq_Kill.PwndStuntSeq_Kill_C.OnPostEventTrigger
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<EeEventTrigger>*   Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>*        Others                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPwndStuntSeq_Kill_C::OnPostEventTrigger(TEnumAsByte<EeEventTrigger>* Trigger, float* Count, TArray<class UObject*>* Others)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndStuntSeq_Kill.PwndStuntSeq_Kill_C.OnPostEventTrigger");

	UPwndStuntSeq_Kill_C_OnPostEventTrigger_Params params;
	params.Trigger = Trigger;
	params.Count = Count;
	params.Others = Others;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwndStuntSeq_Kill.PwndStuntSeq_Kill_C.ExecuteUbergraph_PwndStuntSeq_Kill
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPwndStuntSeq_Kill_C::ExecuteUbergraph_PwndStuntSeq_Kill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndStuntSeq_Kill.PwndStuntSeq_Kill_C.ExecuteUbergraph_PwndStuntSeq_Kill");

	UPwndStuntSeq_Kill_C_ExecuteUbergraph_PwndStuntSeq_Kill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
