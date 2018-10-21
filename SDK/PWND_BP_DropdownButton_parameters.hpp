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

// Function BP_DropdownButton.BP_DropDownButton_C.Assign Values
struct UBP_DropDownButton_C_Assign_Values_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_DropDownList_C*                          Mom;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropdownButton.BP_DropDownButton_C.Construct
struct UBP_DropDownButton_C_Construct_Params
{
};

// Function BP_DropdownButton.BP_DropDownButton_C.OnButtonPressed_Local
struct UBP_DropDownButton_C_OnButtonPressed_Local_Params
{
};

// Function BP_DropdownButton.BP_DropDownButton_C.ExecuteUbergraph_BP_DropDownButton
struct UBP_DropDownButton_C_ExecuteUbergraph_BP_DropDownButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
