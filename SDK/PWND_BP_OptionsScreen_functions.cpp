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

// Function BP_OptionsScreen.BP_OptionsScreen_C.HasOptionSettingsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            pageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            widgetIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsScreen_C::HasOptionSettingsOpen(int pageIndex, bool* Result, int* widgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.HasOptionSettingsOpen");

	UBP_OptionsScreen_C_HasOptionSettingsOpen_Params params;
	params.pageIndex = pageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (widgetIndex != nullptr)
		*widgetIndex = params.widgetIndex;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Transition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_OptionsScreen_C::Transition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Transition");

	UBP_OptionsScreen_C_Transition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_OptionsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Construct");

	UBP_OptionsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.SetMenu
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsScreen_C::SetMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.SetMenu");

	UBP_OptionsScreen_C_SetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Value Changed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsScreen_C::Value_Changed_Event(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Value Changed_Event");

	UBP_OptionsScreen_C_Value_Changed_Event_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Populate Sub Menus
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsScreen_C::Populate_Sub_Menus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Populate Sub Menus");

	UBP_OptionsScreen_C_Populate_Sub_Menus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.InternalSettingsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                WidgetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsCutomValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsScreen_C::InternalSettingsUpdated(struct FString* WidgetName, int* Value, bool* bIsCutomValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.InternalSettingsUpdated");

	UBP_OptionsScreen_C_InternalSettingsUpdated_Params params;
	params.WidgetName = WidgetName;
	params.Value = Value;
	params.bIsCutomValue = bIsCutomValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Change Button Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Data_Table                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Data_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Custom_Character_Value         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsScreen_C::Change_Button_Value(int Data_Table, int Data_Index, int Value, bool Custom_Character_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Change Button Value");

	UBP_OptionsScreen_C_Change_Button_Value_Params params;
	params.Data_Table = Data_Table;
	params.Data_Index = Data_Index;
	params.Value = Value;
	params.Custom_Character_Value = Custom_Character_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Exit Without Saving
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsScreen_C::Exit_Without_Saving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Exit Without Saving");

	UBP_OptionsScreen_C_Exit_Without_Saving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Exit With Saving
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsScreen_C::Exit_With_Saving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Exit With Saving");

	UBP_OptionsScreen_C_Exit_With_Saving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Cindy_Save_K2Node_ComponentBoundEvent_678_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsScreen_C::BndEvt__Button_Cindy_Save_K2Node_ComponentBoundEvent_678_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Cindy_Save_K2Node_ComponentBoundEvent_678_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsScreen_C_BndEvt__Button_Cindy_Save_K2Node_ComponentBoundEvent_678_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Cindy_Defaults_K2Node_ComponentBoundEvent_688_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsScreen_C::BndEvt__Button_Cindy_Defaults_K2Node_ComponentBoundEvent_688_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Cindy_Defaults_K2Node_ComponentBoundEvent_688_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsScreen_C_BndEvt__Button_Cindy_Defaults_K2Node_ComponentBoundEvent_688_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Set Default
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsScreen_C::Set_Default()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Set Default");

	UBP_OptionsScreen_C_Set_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsScreen_C::BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsScreen_C_BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.BeginExitFlow
// (Event, Public, BlueprintEvent)

void UBP_OptionsScreen_C::BeginExitFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.BeginExitFlow");

	UBP_OptionsScreen_C_BeginExitFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionsScreen_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.CustomEvent");

	UBP_OptionsScreen_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_OverrideCustom_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsScreen_C::BndEvt__Button_OverrideCustom_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_OverrideCustom_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsScreen_C_BndEvt__Button_OverrideCustom_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.ResetDeleteOverridesButton
// (Event, Public, BlueprintEvent)

void UBP_OptionsScreen_C::ResetDeleteOverridesButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.ResetDeleteOverridesButton");

	UBP_OptionsScreen_C_ResetDeleteOverridesButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.WidgetOverrided
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                WidgetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_OptionsScreen_C::WidgetOverrided(struct FString* WidgetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.WidgetOverrided");

	UBP_OptionsScreen_C_WidgetOverrided_Params params;
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.CloseOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            pageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            widgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsScreen_C::CloseOption(int pageIndex, int widgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.CloseOption");

	UBP_OptionsScreen_C_CloseOption_Params params;
	params.pageIndex = pageIndex;
	params.widgetIndex = widgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.OnNewWidgetReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUI_MenuNavigable**      WidgetWithAttention            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsScreen_C::OnNewWidgetReceiveAttention(class UUI_MenuNavigable** WidgetWithAttention)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.OnNewWidgetReceiveAttention");

	UBP_OptionsScreen_C_OnNewWidgetReceiveAttention_Params params;
	params.WidgetWithAttention = WidgetWithAttention;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Video_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsScreen_C::BndEvt__Button_CindyTab_Video_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Video_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsScreen_C_BndEvt__Button_CindyTab_Video_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Sound_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsScreen_C::BndEvt__Button_CindyTab_Sound_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Sound_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsScreen_C_BndEvt__Button_CindyTab_Sound_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Controls_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_OptionsScreen_C::BndEvt__Button_CindyTab_Controls_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Controls_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UBP_OptionsScreen_C_BndEvt__Button_CindyTab_Controls_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.ExecuteUbergraph_BP_OptionsScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsScreen_C::ExecuteUbergraph_BP_OptionsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.ExecuteUbergraph_BP_OptionsScreen");

	UBP_OptionsScreen_C_ExecuteUbergraph_BP_OptionsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsScreen.BP_OptionsScreen_C.Value Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionsScreen_C::Value_Changed__DelegateSignature(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsScreen.BP_OptionsScreen_C.Value Changed__DelegateSignature");

	UBP_OptionsScreen_C_Value_Changed__DelegateSignature_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
