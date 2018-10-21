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

// Function BP_DropDownBase.BP_DropDownBase_C.IsOpen
struct UBP_DropDownBase_C_IsOpen_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.OnGetMenuContent_1
struct UBP_DropDownBase_C_OnGetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_DropDownBase_C_BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_DropDownBase.BP_DropDownBase_C.Set Selected
struct UBP_DropDownBase_C_Set_Selected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.Assign options
struct UBP_DropDownBase_C_Assign_options_Params
{
	TArray<struct FText>                               New_Options;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_DropDownBase.BP_DropDownBase_C.Option Selected
struct UBP_DropDownBase_C_Option_Selected_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.Assign Parent
struct UBP_DropDownBase_C_Assign_Parent_Params
{
	class UUserWidget*                                 Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.ListUpdated
struct UBP_DropDownBase_C_ListUpdated_Params
{
	TArray<struct FText>*                              UpdatedList;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString*                                    IndexString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_DropDownBase.BP_DropDownBase_C.Close List
struct UBP_DropDownBase_C_Close_List_Params
{
};

// Function BP_DropDownBase.BP_DropDownBase_C.Hide Base
struct UBP_DropDownBase_C_Hide_Base_Params
{
};

// Function BP_DropDownBase.BP_DropDownBase_C.Drop Down Focus Changed
struct UBP_DropDownBase_C_Drop_Down_Focus_Changed_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.Construct
struct UBP_DropDownBase_C_Construct_Params
{
};

// Function BP_DropDownBase.BP_DropDownBase_C.ToggleDropDown
struct UBP_DropDownBase_C_ToggleDropDown_Params
{
};

// Function BP_DropDownBase.BP_DropDownBase_C.Open Drop Down
struct UBP_DropDownBase_C_Open_Drop_Down_Params
{
};

// Function BP_DropDownBase.BP_DropDownBase_C.PassFrontEndScreenReference
struct UBP_DropDownBase_C_PassFrontEndScreenReference_Params
{
	class UFrontEnd_BaseScreen*                        OwningScreen;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.GiveAttentionToTopElement
struct UBP_DropDownBase_C_GiveAttentionToTopElement_Params
{
};

// Function BP_DropDownBase.BP_DropDownBase_C.PassWidgetToGiveAttentionToAfterClose
struct UBP_DropDownBase_C_PassWidgetToGiveAttentionToAfterClose_Params
{
	class UUI_MenuNavigable*                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.ExecuteUbergraph_BP_DropDownBase
struct UBP_DropDownBase_C_ExecuteUbergraph_BP_DropDownBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownBase.BP_DropDownBase_C.SelectionMade__DelegateSignature
struct UBP_DropDownBase_C_SelectionMade__DelegateSignature_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
