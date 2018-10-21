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

// Function BP_DropDownList.BP_DropDownList_C.DoesListElementHaveAttention
struct UBP_DropDownList_C_DoesListElementHaveAttention_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownList.BP_DropDownList_C.Create List
struct UBP_DropDownList_C_Create_List_Params
{
	TArray<struct FText>                               Contents;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_DropDownList.BP_DropDownList_C.Option Selected
struct UBP_DropDownList_C_Option_Selected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownList.BP_DropDownList_C.OnFocusLost
struct UBP_DropDownList_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DropDownList.BP_DropDownList_C.Pass Front End Screen Reference
struct UBP_DropDownList_C_Pass_Front_End_Screen_Reference_Params
{
	class UFrontEnd_BaseScreen*                        OwningScreen;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropDownList.BP_DropDownList_C.ProvideAttentionToTopElement
struct UBP_DropDownList_C_ProvideAttentionToTopElement_Params
{
};

// Function BP_DropDownList.BP_DropDownList_C.ExecuteUbergraph_BP_DropDownList
struct UBP_DropDownList_C_ExecuteUbergraph_BP_DropDownList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
