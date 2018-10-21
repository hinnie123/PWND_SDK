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

// Function ChallengeUnlocked_UI.ChallengeUnlocked_UI_C.BndEvt__Button_173_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UChallengeUnlocked_UI_C::BndEvt__Button_173_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeUnlocked_UI.ChallengeUnlocked_UI_C.BndEvt__Button_173_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature");

	UChallengeUnlocked_UI_C_BndEvt__Button_173_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeUnlocked_UI.ChallengeUnlocked_UI_C.ExecuteUbergraph_ChallengeUnlocked_UI
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeUnlocked_UI_C::ExecuteUbergraph_ChallengeUnlocked_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeUnlocked_UI.ChallengeUnlocked_UI_C.ExecuteUbergraph_ChallengeUnlocked_UI");

	UChallengeUnlocked_UI_C_ExecuteUbergraph_ChallengeUnlocked_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
