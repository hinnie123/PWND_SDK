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

// Function SR_Widget.SR_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USR_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Construct");

	USR_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USR_Widget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Tick");

	USR_Widget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.ShowEnding
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::ShowEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.ShowEnding");

	USR_Widget_C_ShowEnding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Item Grabbed
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Item_Grabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Item Grabbed");

	USR_Widget_C_Item_Grabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Reset UI
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Reset_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Reset UI");

	USR_Widget_C_Reset_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.OKPressed
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::OKPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.OKPressed");

	USR_Widget_C_OKPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.CancelPressed
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::CancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.CancelPressed");

	USR_Widget_C_CancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Set Record Time Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Keys_Found                     (BlueprintVisible, BlueprintReadOnly, Parm)

void USR_Widget_C::Set_Record_Time_Text(const struct FText& Keys_Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Set Record Time Text");

	USR_Widget_C_Set_Record_Time_Text_Params params;
	params.Keys_Found = Keys_Found;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Set Key visibiltiy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Key_Number                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USR_Widget_C::Set_Key_visibiltiy(int Key_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Set Key visibiltiy");

	USR_Widget_C_Set_Key_visibiltiy_Params params;
	params.Key_Number = Key_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Set Timer Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Millisecond                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Decisecond                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Centisecond                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Second                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Ten_Seconds                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USR_Widget_C::Set_Timer_Text(int Millisecond, int Decisecond, int Centisecond, int Second, int Ten_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Set Timer Text");

	USR_Widget_C_Set_Timer_Text_Params params;
	params.Millisecond = Millisecond;
	params.Decisecond = Decisecond;
	params.Centisecond = Centisecond;
	params.Second = Second;
	params.Ten_Seconds = Ten_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.SetMaxNumberOfTargets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxNumberOfTargets             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USR_Widget_C::SetMaxNumberOfTargets(int MaxNumberOfTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.SetMaxNumberOfTargets");

	USR_Widget_C_SetMaxNumberOfTargets_Params params;
	params.MaxNumberOfTargets = MaxNumberOfTargets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.TargetsDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TargetsDestroyed               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USR_Widget_C::TargetsDestroyed(int TargetsDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.TargetsDestroyed");

	USR_Widget_C_TargetsDestroyed_Params params;
	params.TargetsDestroyed = TargetsDestroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Transition
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Transition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Transition");

	USR_Widget_C_Transition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Set Hud
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USR_Widget_C::Set_Hud(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Set Hud");

	USR_Widget_C_Set_Hud_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.HidLevelName
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::HidLevelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.HidLevelName");

	USR_Widget_C_HidLevelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.HidHud
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::HidHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.HidHud");

	USR_Widget_C_HidHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.RingTImeAddedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TimeAdded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USR_Widget_C::RingTImeAddedEvent(const struct FString& TimeAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.RingTImeAddedEvent");

	USR_Widget_C_RingTImeAddedEvent_Params params;
	params.TimeAdded = TimeAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.PlayTimeUpAnimation
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::PlayTimeUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.PlayTimeUpAnimation");

	USR_Widget_C_PlayTimeUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Set ChallengeModeObjectText
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Set_ChallengeModeObjectText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Set ChallengeModeObjectText");

	USR_Widget_C_Set_ChallengeModeObjectText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.BndEvt__Button_Cindy_C_30_K2Node_ComponentBoundEvent_585_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USR_Widget_C::BndEvt__Button_Cindy_C_30_K2Node_ComponentBoundEvent_585_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.BndEvt__Button_Cindy_C_30_K2Node_ComponentBoundEvent_585_OnButtonClickedEvent__DelegateSignature");

	USR_Widget_C_BndEvt__Button_Cindy_C_30_K2Node_ComponentBoundEvent_585_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.BndEvt__Button_Menu_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USR_Widget_C::BndEvt__Button_Menu_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.BndEvt__Button_Menu_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature");

	USR_Widget_C_BndEvt__Button_Menu_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.BndEvt__Button_Retry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USR_Widget_C::BndEvt__Button_Retry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.BndEvt__Button_Retry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USR_Widget_C_BndEvt__Button_Retry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.PlaySkipAnimationUp
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::PlaySkipAnimationUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.PlaySkipAnimationUp");

	USR_Widget_C_PlaySkipAnimationUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Hide
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Hide");

	USR_Widget_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Visible
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Visible()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Visible");

	USR_Widget_C_Visible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Check If Final Level
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Check_If_Final_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Check If Final Level");

	USR_Widget_C_Check_If_Final_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Show Menu
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Show_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Show Menu");

	USR_Widget_C_Show_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.CheckCharacter
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::CheckCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.CheckCharacter");

	USR_Widget_C_CheckCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Reset
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Reset");

	USR_Widget_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.NextChallenge
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::NextChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.NextChallenge");

	USR_Widget_C_NextChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.CloseButtonsAnimation
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::CloseButtonsAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.CloseButtonsAnimation");

	USR_Widget_C_CloseButtonsAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.OpenButtonsAnimation
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::OpenButtonsAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.OpenButtonsAnimation");

	USR_Widget_C_OpenButtonsAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Set Level Name
// (BlueprintCallable, BlueprintEvent)

void USR_Widget_C::Set_Level_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Set Level Name");

	USR_Widget_C_Set_Level_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.Set Ranking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LevelTime                      (BlueprintVisible, BlueprintReadOnly, Parm)

void USR_Widget_C::Set_Ranking(const struct FText& LevelTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.Set Ranking");

	USR_Widget_C_Set_Ranking_Params params;
	params.LevelTime = LevelTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.ExecuteUbergraph_SR_Widget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USR_Widget_C::ExecuteUbergraph_SR_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.ExecuteUbergraph_SR_Widget");

	USR_Widget_C_ExecuteUbergraph_SR_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SR_Widget.SR_Widget_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USR_Widget_C::ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SR_Widget.SR_Widget_C.ButtonClicked__DelegateSignature");

	USR_Widget_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
