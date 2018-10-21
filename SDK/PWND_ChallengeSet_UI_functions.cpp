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

// Function ChallengeSet_UI.ChallengeSet_UI_C.GetChallengeButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            zeroBasedIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UChallengeButton_UI_C*   ChallengeButton                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeSet_UI_C::GetChallengeButton(int zeroBasedIndex, class UChallengeButton_UI_C** ChallengeButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSet_UI.ChallengeSet_UI_C.GetChallengeButton");

	UChallengeSet_UI_C_GetChallengeButton_Params params;
	params.zeroBasedIndex = zeroBasedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChallengeButton != nullptr)
		*ChallengeButton = params.ChallengeButton;
}


// Function ChallengeSet_UI.ChallengeSet_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeSet_UI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSet_UI.ChallengeSet_UI_C.Construct");

	UChallengeSet_UI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSet_UI.ChallengeSet_UI_C.LoadLevelButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CharIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_A                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeSet_UI_C::LoadLevelButtons(int Index, int CharIndex, bool Set_A)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSet_UI.ChallengeSet_UI_C.LoadLevelButtons");

	UChallengeSet_UI_C_LoadLevelButtons_Params params;
	params.Index = Index;
	params.CharIndex = CharIndex;
	params.Set_A = Set_A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSet_UI.ChallengeSet_UI_C.AddKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Keys                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeSet_UI_C::AddKeys(int Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSet_UI.ChallengeSet_UI_C.AddKeys");

	UChallengeSet_UI_C_AddKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSet_UI.ChallengeSet_UI_C.Load Leaderboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeSet_UI_C::Load_Leaderboard(const struct FString& Level, const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSet_UI.ChallengeSet_UI_C.Load Leaderboard");

	UChallengeSet_UI_C_Load_Leaderboard_Params params;
	params.Level = Level;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSet_UI.ChallengeSet_UI_C.ExecuteUbergraph_ChallengeSet_UI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeSet_UI_C::ExecuteUbergraph_ChallengeSet_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSet_UI.ChallengeSet_UI_C.ExecuteUbergraph_ChallengeSet_UI");

	UChallengeSet_UI_C_ExecuteUbergraph_ChallengeSet_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSet_UI.ChallengeSet_UI_C.LoadLeaderboard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeSet_UI_C::LoadLeaderboard__DelegateSignature(const struct FString& Level, const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSet_UI.ChallengeSet_UI_C.LoadLeaderboard__DelegateSignature");

	UChallengeSet_UI_C_LoadLeaderboard__DelegateSignature_Params params;
	params.Level = Level;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
