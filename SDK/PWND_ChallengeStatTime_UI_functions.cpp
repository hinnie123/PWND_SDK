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

// Function ChallengeStatTime_UI.ChallengeStatTime_UI_C.SetTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Time                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeStatTime_UI_C::SetTime(const struct FText& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeStatTime_UI.ChallengeStatTime_UI_C.SetTime");

	UChallengeStatTime_UI_C_SetTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeStatTime_UI.ChallengeStatTime_UI_C.ExecuteUbergraph_ChallengeStatTime_UI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeStatTime_UI_C::ExecuteUbergraph_ChallengeStatTime_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeStatTime_UI.ChallengeStatTime_UI_C.ExecuteUbergraph_ChallengeStatTime_UI");

	UChallengeStatTime_UI_C_ExecuteUbergraph_ChallengeStatTime_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
