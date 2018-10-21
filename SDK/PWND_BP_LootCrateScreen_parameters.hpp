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

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Get Character GUID
struct UBP_LootCrateScreen_C_Get_Character_GUID_Params
{
	struct FGuid                                       InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Item;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Get Highest Rarity
struct UBP_LootCrateScreen_C_Get_Highest_Rarity_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_OpenCrate_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__Button_OpenCrate_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Construct
struct UBP_LootCrateScreen_C_Construct_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__MyLootcrateInfo_K2Node_ComponentBoundEvent_0_OutOfCratesDispatcher__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__MyLootcrateInfo_K2Node_ComponentBoundEvent_0_OutOfCratesDispatcher__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnReceiveLootCrateData
struct UBP_LootCrateScreen_C_OnReceiveLootCrateData_Params
{
	TArray<struct FGuidInventoryItem>*                 lootCrates;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnCrateSuccessfullyOpened
struct UBP_LootCrateScreen_C_OnCrateSuccessfullyOpened_Params
{
	TArray<struct FGuidInventoryItem>*                 itemsOpened;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FGuidInventoryItem>*                 itemsAwarded;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnCrateFailedToOpen
struct UBP_LootCrateScreen_C_OnCrateFailedToOpen_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.LootSelected
struct UBP_LootCrateScreen_C_LootSelected_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Duplicate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.DetailBack
struct UBP_LootCrateScreen_C_DetailBack_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_BuyCrate_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__Button_BuyCrate_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BoughtCrates
struct UBP_LootCrateScreen_C_BoughtCrates_Params
{
	int                                                NumOfCrates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToMainCrateScreen
struct UBP_LootCrateScreen_C_ReturnToMainCrateScreen_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToStoreChoice
struct UBP_LootCrateScreen_C_ReturnToStoreChoice_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Gold Selected
struct UBP_LootCrateScreen_C_Gold_Selected_Params
{
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BuyMoreEvent
struct UBP_LootCrateScreen_C_BuyMoreEvent_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Clear Loot Items
struct UBP_LootCrateScreen_C_Clear_Loot_Items_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.SetInitialPos
struct UBP_LootCrateScreen_C_SetInitialPos_Params
{
	struct FTransform                                  CamTransform;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      DefaultRefPos;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Details Screen
struct UBP_LootCrateScreen_C_Details_Screen_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Items Screen
struct UBP_LootCrateScreen_C_Items_Screen_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Store Screen
struct UBP_LootCrateScreen_C_Store_Screen_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Top Screen
struct UBP_LootCrateScreen_C_Top_Screen_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Crates_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__Button_Crates_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Gold_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__Button_Gold_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateLeft_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__RotateLeft_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateRight_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__RotateRight_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__RotateLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
struct UBP_LootCrateScreen_C_BndEvt__RotateRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Equip Selected Item
struct UBP_LootCrateScreen_C_Equip_Selected_Item_Params
{
	struct FGuid                                       Item_GUID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Character_GUID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Preview Voice Line
struct UBP_LootCrateScreen_C_Preview_Voice_Line_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnBack
struct UBP_LootCrateScreen_C_OnBack_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Close Store Screen
struct UBP_LootCrateScreen_C_Close_Store_Screen_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnEnterScreen
struct UBP_LootCrateScreen_C_OnEnterScreen_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary1
struct UBP_LootCrateScreen_C_OnClicked_LootSummary1_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary2
struct UBP_LootCrateScreen_C_OnClicked_LootSummary2_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary3
struct UBP_LootCrateScreen_C_OnClicked_LootSummary3_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary4
struct UBP_LootCrateScreen_C_OnClicked_LootSummary4_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Public_OnAcceptPressed
struct UBP_LootCrateScreen_C_Public_OnAcceptPressed_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Public_OnLeftFaceButtonPressed
struct UBP_LootCrateScreen_C_Public_OnLeftFaceButtonPressed_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ResetDetailsEquipFlag
struct UBP_LootCrateScreen_C_ResetDetailsEquipFlag_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.CloseDetailsEquipFlag
struct UBP_LootCrateScreen_C_CloseDetailsEquipFlag_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReEvaluateLootDetailEquippedStatus
struct UBP_LootCrateScreen_C_ReEvaluateLootDetailEquippedStatus_Params
{
	struct FGuid                                       characterGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ExecuteUbergraph_BP_LootCrateScreen
struct UBP_LootCrateScreen_C_ExecuteUbergraph_BP_LootCrateScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.CrateRarity__DelegateSignature
struct UBP_LootCrateScreen_C_CrateRarity__DelegateSignature_Params
{
	TEnumAsByte<EeItemRarity>                          Highest_Rarity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.CratesAdded__DelegateSignature
struct UBP_LootCrateScreen_C_CratesAdded__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OutOfCrates__DelegateSignature
struct UBP_LootCrateScreen_C_OutOfCrates__DelegateSignature_Params
{
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.MoveCamToPos__DelegateSignature
struct UBP_LootCrateScreen_C_MoveCamToPos__DelegateSignature_Params
{
	struct FTransform                                  Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      ActorRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToSequenceStart__DelegateSignature
struct UBP_LootCrateScreen_C_ReturnToSequenceStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
