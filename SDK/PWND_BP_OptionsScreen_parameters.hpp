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

// Function BP_OptionsScreen.BP_OptionsScreen_C.HasOptionSettingsOpen
struct UBP_OptionsScreen_C_HasOptionSettingsOpen_Params
{
	int                                                pageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                widgetIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Transition
struct UBP_OptionsScreen_C_Transition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Construct
struct UBP_OptionsScreen_C_Construct_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.SetMenu
struct UBP_OptionsScreen_C_SetMenu_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Value Changed_Event
struct UBP_OptionsScreen_C_Value_Changed_Event_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Populate Sub Menus
struct UBP_OptionsScreen_C_Populate_Sub_Menus_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.InternalSettingsUpdated
struct UBP_OptionsScreen_C_InternalSettingsUpdated_Params
{
	struct FString*                                    WidgetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Value;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsCutomValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Change Button Value
struct UBP_OptionsScreen_C_Change_Button_Value_Params
{
	int                                                Data_Table;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Data_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Custom_Character_Value;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Exit Without Saving
struct UBP_OptionsScreen_C_Exit_Without_Saving_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Exit With Saving
struct UBP_OptionsScreen_C_Exit_With_Saving_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Cindy_Save_K2Node_ComponentBoundEvent_678_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsScreen_C_BndEvt__Button_Cindy_Save_K2Node_ComponentBoundEvent_678_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Cindy_Defaults_K2Node_ComponentBoundEvent_688_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsScreen_C_BndEvt__Button_Cindy_Defaults_K2Node_ComponentBoundEvent_688_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Set Default
struct UBP_OptionsScreen_C_Set_Default_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsScreen_C_BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.BeginExitFlow
struct UBP_OptionsScreen_C_BeginExitFlow_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.CustomEvent
struct UBP_OptionsScreen_C_CustomEvent_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_OverrideCustom_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsScreen_C_BndEvt__Button_OverrideCustom_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.ResetDeleteOverridesButton
struct UBP_OptionsScreen_C_ResetDeleteOverridesButton_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.WidgetOverrided
struct UBP_OptionsScreen_C_WidgetOverrided_Params
{
	struct FString*                                    WidgetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.CloseOption
struct UBP_OptionsScreen_C_CloseOption_Params
{
	int                                                pageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                widgetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.OnNewWidgetReceiveAttention
struct UBP_OptionsScreen_C_OnNewWidgetReceiveAttention_Params
{
	class UUI_MenuNavigable**                          WidgetWithAttention;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Video_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsScreen_C_BndEvt__Button_CindyTab_Video_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Sound_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsScreen_C_BndEvt__Button_CindyTab_Sound_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.BndEvt__Button_CindyTab_Controls_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsScreen_C_BndEvt__Button_CindyTab_Controls_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.ExecuteUbergraph_BP_OptionsScreen
struct UBP_OptionsScreen_C_ExecuteUbergraph_BP_OptionsScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsScreen.BP_OptionsScreen_C.Value Changed__DelegateSignature
struct UBP_OptionsScreen_C_Value_Changed__DelegateSignature_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
