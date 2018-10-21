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

// Function ChallengeKeys_UI.ChallengeKeys_UI_C.SetKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumKeys                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeKeys_UI_C::SetKeys(int NumKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeKeys_UI.ChallengeKeys_UI_C.SetKeys");

	UChallengeKeys_UI_C_SetKeys_Params params;
	params.NumKeys = NumKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeKeys_UI.ChallengeKeys_UI_C.ExecuteUbergraph_ChallengeKeys_UI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeKeys_UI_C::ExecuteUbergraph_ChallengeKeys_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeKeys_UI.ChallengeKeys_UI_C.ExecuteUbergraph_ChallengeKeys_UI");

	UChallengeKeys_UI_C_ExecuteUbergraph_ChallengeKeys_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
