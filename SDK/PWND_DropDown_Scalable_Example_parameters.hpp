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

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Construct
struct UDropDown_Scalable_Example_C_Construct_Params
{
};

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.BndEvt__Button_Cindy_183_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UDropDown_Scalable_Example_C_BndEvt__Button_Cindy_183_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.OnListElementSelected
struct UDropDown_Scalable_Example_C_OnListElementSelected_Params
{
	struct FDropDownElement*                           SelectedListItem;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Set Texts
struct UDropDown_Scalable_Example_C_Set_Texts_Params
{
	TArray<struct FText>                               Contents;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Toggle
struct UDropDown_Scalable_Example_C_Toggle_Params
{
};

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.Set Selected Text
struct UDropDown_Scalable_Example_C_Set_Selected_Text_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.ExecuteUbergraph_DropDown_Scalable_Example
struct UDropDown_Scalable_Example_C_ExecuteUbergraph_DropDown_Scalable_Example_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropDown_Scalable_Example.DropDown_Scalable_Example_C.SelectionMade__DelegateSignature
struct UDropDown_Scalable_Example_C_SelectionMade__DelegateSignature_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
