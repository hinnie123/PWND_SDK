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

// Function ChallengeRank_UI.ChallengeRank_UI_C.SetRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Rank                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeRank_UI_C::SetRank(const struct FText& Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeRank_UI.ChallengeRank_UI_C.SetRank");

	UChallengeRank_UI_C_SetRank_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeRank_UI.ChallengeRank_UI_C.ExecuteUbergraph_ChallengeRank_UI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeRank_UI_C::ExecuteUbergraph_ChallengeRank_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeRank_UI.ChallengeRank_UI_C.ExecuteUbergraph_ChallengeRank_UI");

	UChallengeRank_UI_C_ExecuteUbergraph_ChallengeRank_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
