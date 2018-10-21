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

// Function BP_LootDetail.BP_LootDetail_C.IsCharacterListVisible
struct UBP_LootDetail_C_IsCharacterListVisible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.IsCharacterListOpen
struct UBP_LootDetail_C_IsCharacterListOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.For Every Character
struct UBP_LootDetail_C_For_Every_Character_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.Update Loot Details
struct UBP_LootDetail_C_Update_Loot_Details_Params
{
	struct FText                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Duplicate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Current_Equip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               AlreadyEquipped;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_Equip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_LootDetail_C_BndEvt__Button_Equip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_LootDetail_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.Call DetailBack
struct UBP_LootDetail_C_Call_DetailBack_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_PREVIEW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_LootDetail_C_BndEvt__Button_PREVIEW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.Character Selected
struct UBP_LootDetail_C_Character_Selected_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.Construct
struct UBP_LootDetail_C_Construct_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.Public_Equip_Functionality
struct UBP_LootDetail_C_Public_Equip_Functionality_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.PassScreenForNavigationHookup
struct UBP_LootDetail_C_PassScreenForNavigationHookup_Params
{
	class UFrontEnd_BaseScreen*                        FrontEndScreen;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.Open Character List
struct UBP_LootDetail_C_Open_Character_List_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.Close Character List
struct UBP_LootDetail_C_Close_Character_List_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.UpdateEquippedStatus
struct UBP_LootDetail_C_UpdateEquippedStatus_Params
{
	bool                                               AlreadyEquipped;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.ExecuteUbergraph_BP_LootDetail
struct UBP_LootDetail_C_ExecuteUbergraph_BP_LootDetail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.PreviewVO__DelegateSignature
struct UBP_LootDetail_C_PreviewVO__DelegateSignature_Params
{
};

// Function BP_LootDetail.BP_LootDetail_C.ItemEquip__DelegateSignature
struct UBP_LootDetail_C_ItemEquip__DelegateSignature_Params
{
	struct FGuid                                       Item_GUID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Character_GUID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LootDetail.BP_LootDetail_C.DetailsBack__DelegateSignature
struct UBP_LootDetail_C_DetailsBack__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
