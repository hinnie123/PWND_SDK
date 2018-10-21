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

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Set Option1
struct UBP_OptionsType_Toggle_C_Set_Option1_Params
{
};

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Set Option2
struct UBP_OptionsType_Toggle_C_Set_Option2_Params
{
};

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.BndEvt__Button_ON_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsType_Toggle_C_BndEvt__Button_ON_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.BndEvt__Button_OFF_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
struct UBP_OptionsType_Toggle_C_BndEvt__Button_OFF_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.SetText
struct UBP_OptionsType_Toggle_C_SetText_Params
{
	struct FText                                       _0;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       _1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_OptionsScreen_C*                         OptionsScreen;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.Toggle
struct UBP_OptionsType_Toggle_C_Toggle_Params
{
};

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.ActivateToggle
struct UBP_OptionsType_Toggle_C_ActivateToggle_Params
{
};

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.ExecuteUbergraph_BP_OptionsType_Toggle
struct UBP_OptionsType_Toggle_C_ExecuteUbergraph_BP_OptionsType_Toggle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsType_Toggle.BP_OptionsType_Toggle_C.SelectionMade__DelegateSignature
struct UBP_OptionsType_Toggle_C_SelectionMade__DelegateSignature_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
