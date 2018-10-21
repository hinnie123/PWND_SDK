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

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Construct
struct UButton_Cindy_Customize_Cat_C_Construct_Params
{
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Assign Values
struct UButton_Cindy_Customize_Cat_C_Assign_Values_Params
{
	struct FText                                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Curr_Equipped;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Num_Unlocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num_Total;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FPurchasableEquipItem>               Items_in_Category;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Category_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.OnButtonPressed_Local
struct UButton_Cindy_Customize_Cat_C_OnButtonPressed_Local_Params
{
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_SelectedStateSet
struct UButton_Cindy_Customize_Cat_C_Cosmetic_SelectedStateSet_Params
{
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_HoverStateSet
struct UButton_Cindy_Customize_Cat_C_Cosmetic_HoverStateSet_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_NormalStateSet
struct UButton_Cindy_Customize_Cat_C_Cosmetic_NormalStateSet_Params
{
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_SelectedHoverStateSet
struct UButton_Cindy_Customize_Cat_C_Cosmetic_SelectedHoverStateSet_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Manual Set Hover
struct UButton_Cindy_Customize_Cat_C_Manual_Set_Hover_Params
{
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.ExecuteUbergraph_Button_Cindy_Customize_Cat
struct UButton_Cindy_Customize_Cat_C_ExecuteUbergraph_Button_Cindy_Customize_Cat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.CategoryClicked__DelegateSignature
struct UButton_Cindy_Customize_Cat_C_CategoryClicked__DelegateSignature_Params
{
	TArray<struct FPurchasableEquipItem>               Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton_Cindy_Customize_Cat_C*               ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
