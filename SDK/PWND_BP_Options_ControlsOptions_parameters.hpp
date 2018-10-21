#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.ScrollWidgetIntoView
struct UBP_Options_ControlsOptions_C_ScrollWidgetIntoView_Params
{
	class UUI_MenuNavigable*                           WidgetInQuestion;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.CloseSetting
struct UBP_Options_ControlsOptions_C_CloseSetting_Params
{
	int                                                widgetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.isSettingOpen
struct UBP_Options_ControlsOptions_C_isSettingOpen_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.GetFirstNonTitleOptionButton
struct UBP_Options_ControlsOptions_C_GetFirstNonTitleOptionButton_Params
{
	class UWidget*                                     outputWidget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.GetPreviousNonTitleOptionButton
struct UBP_Options_ControlsOptions_C_GetPreviousNonTitleOptionButton_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     outputWidget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Populate
struct UBP_Options_ControlsOptions_C_Populate_Params
{
	class UBP_OptionsScreen_C*                         Options_Screen;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Change Value
struct UBP_Options_ControlsOptions_C_Change_Value_Params
{
	int                                                Option_button_index;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Custom_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.Set Option Value to Custom
struct UBP_Options_ControlsOptions_C_Set_Option_Value_to_Custom_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.SetAttentionOnTopElementOfPage
struct UBP_Options_ControlsOptions_C_SetAttentionOnTopElementOfPage_Params
{
};

// Function BP_Options_ControlsOptions.BP_Options_ControlsOptions_C.ExecuteUbergraph_BP_Options_ControlsOptions
struct UBP_Options_ControlsOptions_C_ExecuteUbergraph_BP_Options_ControlsOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
