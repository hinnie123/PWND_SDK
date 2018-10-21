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

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.FindSelectedItemButton
struct UBP_CustomizeScreen_C_FindSelectedItemButton_Params
{
	class UButton_Cindy_Customize_Item_C*              ButtonRef;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.GetFirstItemCost
struct UBP_CustomizeScreen_C_GetFirstItemCost_Params
{
	struct FGuid                                       GuidInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CostGuid;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Select Rarity Color
struct UBP_CustomizeScreen_C_Select_Rarity_Color_Params
{
	TEnumAsByte<EeItemRarity>                          Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Character Selected
struct UBP_CustomizeScreen_C_Character_Selected_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UButton_CindyCharList_C*                     ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Initialize Character Select
struct UBP_CustomizeScreen_C_Initialize_Character_Select_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.SetEquippedScreen
struct UBP_CustomizeScreen_C_SetEquippedScreen_Params
{
	struct FGuid                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Construct
struct UBP_CustomizeScreen_C_Construct_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintLeave_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__ButtonHintLeave_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.LoadChoiceMenu
struct UBP_CustomizeScreen_C_LoadChoiceMenu_Params
{
	TArray<struct FPurchasableEquipItem>               Items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.SetLoadout_Event
struct UBP_CustomizeScreen_C_SetLoadout_Event_Params
{
	class APwndLoadoutVisualizerHelper*                Helper;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndLoadoutVisualizer*                      Visualizer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadoutChanged;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndLoadout                                Loadout;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPwndLoadout                                PrevLoadout;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Update Visualizer 2
struct UBP_CustomizeScreen_C_Update_Visualizer_2_Params
{
	struct FPwndLoadout                                Loadout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Tick
struct UBP_CustomizeScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.PurchaseEvent
struct UBP_CustomizeScreen_C_PurchaseEvent_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Visualize Single Item
struct UBP_CustomizeScreen_C_Visualize_Single_Item_Params
{
	struct FGuid                                       LoadoutPiece;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Item Hover
struct UBP_CustomizeScreen_C_Item_Hover_Params
{
	struct FPurchasableEquipItem                       Item_GUID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Is_Owned;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton_Cindy_Customize_Item_C*              Self_reference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Item UnHover
struct UBP_CustomizeScreen_C_Item_UnHover_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_54_OnButtonPressedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__Button_78_K2Node_ComponentBoundEvent_54_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_72_OnButtonReleasedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__Button_78_K2Node_ComponentBoundEvent_72_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_193_OnButtonPressedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__Button_79_K2Node_ComponentBoundEvent_193_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonRotRight_K2Node_ComponentBoundEvent_230_OnButtonReleasedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__ButtonRotRight_K2Node_ComponentBoundEvent_230_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Set Percent
struct UBP_CustomizeScreen_C_Set_Percent_Params
{
	bool                                               ShowBar;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Owned;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__Button_Customize_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Toggle Character Info
struct UBP_CustomizeScreen_C_Toggle_Character_Info_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintCharacterInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__ButtonHintCharacterInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintHideCharacterInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__ButtonHintHideCharacterInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_VoicePreview_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomizeScreen_C_BndEvt__Button_VoicePreview_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.PurchaseItemCallBack
struct UBP_CustomizeScreen_C_PurchaseItemCallBack_Params
{
	bool*                                              bSucceeded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      ErrorMessage;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnBack
struct UBP_CustomizeScreen_C_OnBack_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnEnterScreen
struct UBP_CustomizeScreen_C_OnEnterScreen_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnSocialPressed
struct UBP_CustomizeScreen_C_OnSocialPressed_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BindSocialButton
struct UBP_CustomizeScreen_C_BindSocialButton_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.UnbindOnSocialClicked
struct UBP_CustomizeScreen_C_UnbindOnSocialClicked_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ExitScreen
struct UBP_CustomizeScreen_C_ExitScreen_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ResetScreenStage
struct UBP_CustomizeScreen_C_ResetScreenStage_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnUpdatedInventoryReceived
struct UBP_CustomizeScreen_C_OnUpdatedInventoryReceived_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnExitScreen
struct UBP_CustomizeScreen_C_OnExitScreen_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh Current Item
struct UBP_CustomizeScreen_C_Refresh_Current_Item_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh All Items In list
struct UBP_CustomizeScreen_C_Refresh_All_Items_In_list_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnAccept
struct UBP_CustomizeScreen_C_OnAccept_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnLeftFaceButton
struct UBP_CustomizeScreen_C_OnLeftFaceButton_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.CategoryClicked_Event_1
struct UBP_CustomizeScreen_C_CategoryClicked_Event_1_Params
{
	TArray<struct FPurchasableEquipItem>               Items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton_Cindy_Customize_Cat_C*               ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.GoToCharacterStage
struct UBP_CustomizeScreen_C_GoToCharacterStage_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.GoToCategorySelectionStage
struct UBP_CustomizeScreen_C_GoToCategorySelectionStage_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.EquipCurrentItem
struct UBP_CustomizeScreen_C_EquipCurrentItem_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Back Functionality
struct UBP_CustomizeScreen_C_Back_Functionality_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Unlock_Functionality
struct UBP_CustomizeScreen_C_Unlock_Functionality_Params
{
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ItemSelected
struct UBP_CustomizeScreen_C_ItemSelected_Params
{
	class UButton_Cindy_Customize_Item_C*              ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ItemClicked
struct UBP_CustomizeScreen_C_ItemClicked_Params
{
	struct FPurchasableEquipItem                       Item_GUID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Is_Owned;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton_Cindy_Customize_Item_C*              ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               wasMouseClick;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh Category Complete
struct UBP_CustomizeScreen_C_Refresh_Category_Complete_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ExecuteUbergraph_BP_CustomizeScreen
struct UBP_CustomizeScreen_C_ExecuteUbergraph_BP_CustomizeScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.LoudoutChage__DelegateSignature
struct UBP_CustomizeScreen_C_LoudoutChage__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
