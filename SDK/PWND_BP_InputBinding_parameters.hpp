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

// Function BP_InputBinding.BP_InputBinding_C.WidgetUpdated
struct UBP_InputBinding_C_WidgetUpdated_Params
{
	struct FString*                                    Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    NewKeyBind;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bIsCutomValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InputBinding.BP_InputBinding_C.InputBindingConfirmed
struct UBP_InputBinding_C_InputBindingConfirmed_Params
{
	struct FString*                                    Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    NewKeyBind;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_InputBinding.BP_InputBinding_C.InputBindingNeedsConfirmation
struct UBP_InputBinding_C_InputBindingNeedsConfirmation_Params
{
	struct FString*                                    Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_InputBinding.BP_InputBinding_C.Assign Widget
struct UBP_InputBinding_C_Assign_Widget_Params
{
	struct FString                                     Slot_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Slot_Num;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Display_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UBP_InputBinding_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
struct UBP_InputBinding_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_InputBinding.BP_InputBinding_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature
struct UBP_InputBinding_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_InputBinding.BP_InputBinding_C.ExecuteUbergraph_BP_InputBinding
struct UBP_InputBinding_C_ExecuteUbergraph_BP_InputBinding_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
