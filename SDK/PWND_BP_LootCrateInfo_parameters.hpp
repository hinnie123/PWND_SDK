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

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_LootCrateInfo_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_LootCrateInfo_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.Add Crate
struct UBP_LootCrateInfo_C_Add_Crate_Params
{
	struct FGuidInventoryItem                          Crate_GUID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.Construct
struct UBP_LootCrateInfo_C_Construct_Params
{
};

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.Open_Crate
struct UBP_LootCrateInfo_C_Open_Crate_Params
{
};

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.NotifyOutOfCrates
struct UBP_LootCrateInfo_C_NotifyOutOfCrates_Params
{
};

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.Update Crate Display
struct UBP_LootCrateInfo_C_Update_Crate_Display_Params
{
	struct FText                                       CrateName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       CrateDescription;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.ExecuteUbergraph_BP_LootCrateInfo
struct UBP_LootCrateInfo_C_ExecuteUbergraph_BP_LootCrateInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.OutOfCratesDispatcher__DelegateSignature
struct UBP_LootCrateInfo_C_OutOfCratesDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
