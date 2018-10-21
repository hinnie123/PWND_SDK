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

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Construct
struct UButton_Cindy_Customize_Item_C_Construct_Params
{
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Assign Item
struct UButton_Cindy_Customize_Item_C_Assign_Item_Params
{
	struct FPurchasableEquipItem                       Item_GUID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Equipped;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_New;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Set Equipped
struct UButton_Cindy_Customize_Item_C_Set_Equipped_Params
{
	bool                                               Is_Equipped;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnReceiveAttention
struct UButton_Cindy_Customize_Item_C_OnReceiveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnRemoveAttention
struct UButton_Cindy_Customize_Item_C_OnRemoveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.SetPurchased
struct UButton_Cindy_Customize_Item_C_SetPurchased_Params
{
	bool                                               Owned;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnReceiveSelection
struct UButton_Cindy_Customize_Item_C_OnReceiveSelection_Params
{
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UButton_Cindy_Customize_Item_C_BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ExecuteUbergraph_Button_Cindy_Customize_Item
struct UButton_Cindy_Customize_Item_C_ExecuteUbergraph_Button_Cindy_Customize_Item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemSelected__DelegateSignature
struct UButton_Cindy_Customize_Item_C_ItemSelected__DelegateSignature_Params
{
	class UButton_Cindy_Customize_Item_C*              ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemClicked__DelegateSignature
struct UButton_Cindy_Customize_Item_C_ItemClicked__DelegateSignature_Params
{
	struct FPurchasableEquipItem                       Item_GUID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Is_Owned;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton_Cindy_Customize_Item_C*              ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               wasMouseClick;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemUnHovered__DelegateSignature
struct UButton_Cindy_Customize_Item_C_ItemUnHovered__DelegateSignature_Params
{
};

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemHovered__DelegateSignature
struct UButton_Cindy_Customize_Item_C_ItemHovered__DelegateSignature_Params
{
	struct FPurchasableEquipItem                       Item_GUID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Is_Owned;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton_Cindy_Customize_Item_C*              Self_reference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
