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

// Function ChallengeButton_UI.ChallengeButton_UI_C.Set Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            CharIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeButton_UI_C::Set_Button(const struct FText& Name, const struct FString& Location, int CharIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.Set Button");

	UChallengeButton_UI_C_Set_Button_Params params;
	params.Name = Name;
	params.Location = Location;
	params.CharIndex = CharIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UChallengeButton_UI_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.Reset");

	UChallengeButton_UI_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.Set Best Time & Key
// (BlueprintCallable, BlueprintEvent)

void UChallengeButton_UI_C::Set_Best_Time___Key()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.Set Best Time & Key");

	UChallengeButton_UI_C_Set_Best_Time___Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChallengeButton_UI_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UChallengeButton_UI_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.BndEvt__Button_Leaderboards_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChallengeButton_UI_C::BndEvt__Button_Leaderboards_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.BndEvt__Button_Leaderboards_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UChallengeButton_UI_C_BndEvt__Button_Leaderboards_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.Check Character
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeButton_UI_C::Check_Character(int CharIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.Check Character");

	UChallengeButton_UI_C_Check_Character_Params params;
	params.CharIndex = CharIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeButton_UI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.Construct");

	UChallengeButton_UI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.OnReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeButton_UI_C::OnReceiveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.OnReceiveAttention");

	UChallengeButton_UI_C_OnReceiveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.OnRemoveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeButton_UI_C::OnRemoveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.OnRemoveAttention");

	UChallengeButton_UI_C_OnRemoveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.OnButtonPressed_Local
// (Event, Public, BlueprintEvent)

void UChallengeButton_UI_C::OnButtonPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.OnButtonPressed_Local");

	UChallengeButton_UI_C_OnButtonPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.ExecuteUbergraph_ChallengeButton_UI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeButton_UI_C::ExecuteUbergraph_ChallengeButton_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.ExecuteUbergraph_ChallengeButton_UI");

	UChallengeButton_UI_C_ExecuteUbergraph_ChallengeButton_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.LoadLeaderboard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeButton_UI_C::LoadLeaderboard__DelegateSignature(const struct FString& Level, const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.LoadLeaderboard__DelegateSignature");

	UChallengeButton_UI_C_LoadLeaderboard__DelegateSignature_Params params;
	params.Level = Level;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeButton_UI.ChallengeButton_UI_C.NotifyKeyNum__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Keys                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeButton_UI_C::NotifyKeyNum__DelegateSignature(int Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeButton_UI.ChallengeButton_UI_C.NotifyKeyNum__DelegateSignature");

	UChallengeButton_UI_C_NotifyKeyNum__DelegateSignature_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
