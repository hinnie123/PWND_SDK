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

// Function BP_InGameTip.BP_InGameTip_C.ReplaceControlText
struct UBP_InGameTip_C_ReplaceControlText_Params
{
	struct FText                                       Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       New_Text;                                                 // (Parm, OutParm)
};

// Function BP_InGameTip.BP_InGameTip_C.IsTriggerActive
struct UBP_InGameTip_C_IsTriggerActive_Params
{
	TEnumAsByte<EeInGameTipsTrigger>                   Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InGameTip.BP_InGameTip_C.IsTipActive
struct UBP_InGameTip_C_IsTipActive_Params
{
	struct FInGameTipsStructure                        Tip;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       TipName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TipText;                                                  // (Parm, OutParm)
};

// Function BP_InGameTip.BP_InGameTip_C.Construct
struct UBP_InGameTip_C_Construct_Params
{
};

// Function BP_InGameTip.BP_InGameTip_C.ToggleTip
struct UBP_InGameTip_C_ToggleTip_Params
{
	struct FText                                       TipText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_InGameTip.BP_InGameTip_C.UpdateTip
struct UBP_InGameTip_C_UpdateTip_Params
{
};

// Function BP_InGameTip.BP_InGameTip_C.CustomEvent_1
struct UBP_InGameTip_C_CustomEvent_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeEventTrigger>                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPostedEventTrigger                         Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_InGameTip.BP_InGameTip_C.OnAbilityUsed_Event_1
struct UBP_InGameTip_C_OnAbilityUsed_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isPrimary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_InGameTip.BP_InGameTip_C.ExecuteUbergraph_BP_InGameTip
struct UBP_InGameTip_C_ExecuteUbergraph_BP_InGameTip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
