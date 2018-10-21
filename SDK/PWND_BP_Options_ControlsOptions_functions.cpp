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

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.ScrollWidgetIntoView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MenuNavigable*       WidgetInQuestion               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::ScrollWidgetIntoView(class UUI_MenuNavigable* WidgetInQuestion, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.ScrollWidgetIntoView");

	UBP_Options_ControlsOptions_C_ScrollWidgetIntoView_Params params;
	params.WidgetInQuestion = WidgetInQuestion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.CloseSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            widgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::CloseSetting(int widgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.CloseSetting");

	UBP_Options_ControlsOptions_C_CloseSetting_Params params;
	params.widgetIndex = widgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.isSettingOpen
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::isSettingOpen(bool* bResult, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.isSettingOpen");

	UBP_Options_ControlsOptions_C_isSettingOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.GetFirstNonTitleOptionButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 outputWidget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::GetFirstNonTitleOptionButton(class UWidget** outputWidget, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.GetFirstNonTitleOptionButton");

	UBP_Options_ControlsOptions_C_GetFirstNonTitleOptionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outputWidget != nullptr)
		*outputWidget = params.outputWidget;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.GetPreviousNonTitleOptionButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 outputWidget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::GetPreviousNonTitleOptionButton(int Index, class UWidget** outputWidget, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.GetPreviousNonTitleOptionButton");

	UBP_Options_ControlsOptions_C_GetPreviousNonTitleOptionButton_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outputWidget != nullptr)
		*outputWidget = params.outputWidget;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Populate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_OptionsScreen_C*     Options_Screen                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::Populate(class UBP_OptionsScreen_C* Options_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Populate");

	UBP_Options_ControlsOptions_C_Populate_Params params;
	params.Options_Screen = Options_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Change Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Option_button_index            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Custom_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::Change_Value(int Option_button_index, int Value, bool Custom_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Change Value");

	UBP_Options_ControlsOptions_C_Change_Value_Params params;
	params.Option_button_index = Option_button_index;
	params.Value = Value;
	params.Custom_Value = Custom_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Set Option Value to Custom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::Set_Option_Value_to_Custom(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Set Option Value to Custom");

	UBP_Options_ControlsOptions_C_Set_Option_Value_to_Custom_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.SetAttentionOnTopElementOfPage
// (BlueprintCallable, BlueprintEvent)

void UBP_Options_ControlsOptions_C::SetAttentionOnTopElementOfPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.SetAttentionOnTopElementOfPage");

	UBP_Options_ControlsOptions_C_SetAttentionOnTopElementOfPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.ExecuteUbergraph_BP_Options_ControlsOptions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Options_ControlsOptions_C::ExecuteUbergraph_BP_Options_ControlsOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.ExecuteUbergraph_BP_Options_ControlsOptions");

	UBP_Options_ControlsOptions_C_ExecuteUbergraph_BP_Options_ControlsOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
