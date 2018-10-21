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

// Function ChallengeUI_TV_Transitions.ChallengeUI_TV_Transitions_C.Play Fade in
// (BlueprintCallable, BlueprintEvent)

void UChallengeUI_TV_Transitions_C::Play_Fade_in()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeUI_TV_Transitions.ChallengeUI_TV_Transitions_C.Play Fade in");

	UChallengeUI_TV_Transitions_C_Play_Fade_in_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeUI_TV_Transitions.ChallengeUI_TV_Transitions_C.Play Fade out
// (BlueprintCallable, BlueprintEvent)

void UChallengeUI_TV_Transitions_C::Play_Fade_out()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeUI_TV_Transitions.ChallengeUI_TV_Transitions_C.Play Fade out");

	UChallengeUI_TV_Transitions_C_Play_Fade_out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeUI_TV_Transitions.ChallengeUI_TV_Transitions_C.ExecuteUbergraph_ChallengeUI_TV_Transitions
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeUI_TV_Transitions_C::ExecuteUbergraph_ChallengeUI_TV_Transitions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeUI_TV_Transitions.ChallengeUI_TV_Transitions_C.ExecuteUbergraph_ChallengeUI_TV_Transitions");

	UChallengeUI_TV_Transitions_C_ExecuteUbergraph_ChallengeUI_TV_Transitions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeUI_TV_Transitions.ChallengeUI_TV_Transitions_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChallengeUI_TV_Transitions_C::ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeUI_TV_Transitions.ChallengeUI_TV_Transitions_C.ButtonClicked__DelegateSignature");

	UChallengeUI_TV_Transitions_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
