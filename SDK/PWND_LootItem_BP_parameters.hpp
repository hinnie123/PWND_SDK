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

// Function LootItem_BP.LootItem_BP_C.UserConstructionScript
struct ALootItem_BP_C_UserConstructionScript_Params
{
};

// Function LootItem_BP.LootItem_BP_C.Update Actor Loot Summary
struct ALootItem_BP_C_Update_Actor_Loot_Summary_Params
{
	bool                                               Duplicate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function LootItem_BP.LootItem_BP_C.Assign Button
struct ALootItem_BP_C_Assign_Button_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootItem_BP.LootItem_BP_C.Clicked
struct ALootItem_BP_C_Clicked_Params
{
};

// Function LootItem_BP.LootItem_BP_C.OnUnhovered_Event_1
struct ALootItem_BP_C_OnUnhovered_Event_1_Params
{
};

// Function LootItem_BP.LootItem_BP_C.ResetCam
struct ALootItem_BP_C_ResetCam_Params
{
};

// Function LootItem_BP.LootItem_BP_C.OnHovered_Event_1
struct ALootItem_BP_C_OnHovered_Event_1_Params
{
};

// Function LootItem_BP.LootItem_BP_C.Assign GeneralUseCaseButton
struct ALootItem_BP_C_Assign_GeneralUseCaseButton_Params
{
	class UUI_GeneralUseCaseButton*                    GeneralUseCaseButton;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootItem_BP.LootItem_BP_C.OnButtonPressed
struct ALootItem_BP_C_OnButtonPressed_Params
{
};

// Function LootItem_BP.LootItem_BP_C.ExecuteUbergraph_LootItem_BP
struct ALootItem_BP_C_ExecuteUbergraph_LootItem_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootItem_BP.LootItem_BP_C.Move__DelegateSignature
struct ALootItem_BP_C_Move__DelegateSignature_Params
{
};

// Function LootItem_BP.LootItem_BP_C.Selected__DelegateSignature
struct ALootItem_BP_C_Selected__DelegateSignature_Params
{
};

// Function LootItem_BP.LootItem_BP_C.UnHovered__DelegateSignature
struct ALootItem_BP_C_UnHovered__DelegateSignature_Params
{
};

// Function LootItem_BP.LootItem_BP_C.Hovered__DelegateSignature
struct ALootItem_BP_C_Hovered__DelegateSignature_Params
{
};

// Function LootItem_BP.LootItem_BP_C.LootSelected__DelegateSignature
struct ALootItem_BP_C_LootSelected__DelegateSignature_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Duplicate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
