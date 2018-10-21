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

// Function BP_LootSummary.BP_LootSummary_C.Construct
struct UBP_LootSummary_C_Construct_Params
{
};

// Function BP_LootSummary.BP_LootSummary_C.Assign Button
struct UBP_LootSummary_C_Assign_Button_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSummary.BP_LootSummary_C.Clicked
struct UBP_LootSummary_C_Clicked_Params
{
};

// Function BP_LootSummary.BP_LootSummary_C.Hovered_event_1
struct UBP_LootSummary_C_Hovered_event_1_Params
{
};

// Function BP_LootSummary.BP_LootSummary_C.Unhovered_event_1
struct UBP_LootSummary_C_Unhovered_event_1_Params
{
};

// Function BP_LootSummary.BP_LootSummary_C.Hide Details
struct UBP_LootSummary_C_Hide_Details_Params
{
};

// Function BP_LootSummary.BP_LootSummary_C.Update Loot Summary
struct UBP_LootSummary_C_Update_Loot_Summary_Params
{
	bool                                               Duplicate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LootSummary.BP_LootSummary_C.Show Details
struct UBP_LootSummary_C_Show_Details_Params
{
};

// Function BP_LootSummary.BP_LootSummary_C.OnButtonPressed_Local
struct UBP_LootSummary_C_OnButtonPressed_Local_Params
{
};

// Function BP_LootSummary.BP_LootSummary_C.OnReceiveAttention
struct UBP_LootSummary_C_OnReceiveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSummary.BP_LootSummary_C.OnRemoveAttention
struct UBP_LootSummary_C_OnRemoveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSummary.BP_LootSummary_C.ExecuteUbergraph_BP_LootSummary
struct UBP_LootSummary_C_ExecuteUbergraph_BP_LootSummary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSummary.BP_LootSummary_C.LootSelected__DelegateSignature
struct UBP_LootSummary_C_LootSelected__DelegateSignature_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Duplicate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
