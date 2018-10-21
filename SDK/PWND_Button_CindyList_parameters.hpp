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

// Function Button_CindyList.Button_CindyList_C.Construct
struct UButton_CindyList_C_Construct_Params
{
};

// Function Button_CindyList.Button_CindyList_C.OnReceiveAttention
struct UButton_CindyList_C_OnReceiveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyList.Button_CindyList_C.OnRemoveAttention
struct UButton_CindyList_C_OnRemoveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyList.Button_CindyList_C.DisableButton
struct UButton_CindyList_C_DisableButton_Params
{
	bool                                               disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyList.Button_CindyList_C.Set Number
struct UButton_CindyList_C_Set_Number_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyList.Button_CindyList_C.Cosmetic_DisabledStateSet
struct UButton_CindyList_C_Cosmetic_DisabledStateSet_Params
{
};

// Function Button_CindyList.Button_CindyList_C.Cosmetic_DisabledHoverStateSet
struct UButton_CindyList_C_Cosmetic_DisabledHoverStateSet_Params
{
};

// Function Button_CindyList.Button_CindyList_C.Cosmetic_HoverStateSet
struct UButton_CindyList_C_Cosmetic_HoverStateSet_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyList.Button_CindyList_C.Cosmetic_NormalStateSet
struct UButton_CindyList_C_Cosmetic_NormalStateSet_Params
{
};

// Function Button_CindyList.Button_CindyList_C.Cosmetic_PressedStateSet
struct UButton_CindyList_C_Cosmetic_PressedStateSet_Params
{
};

// Function Button_CindyList.Button_CindyList_C.Cosmetic_SelectedHoverStateSet
struct UButton_CindyList_C_Cosmetic_SelectedHoverStateSet_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyList.Button_CindyList_C.Cosmetic_SelectedStateSet
struct UButton_CindyList_C_Cosmetic_SelectedStateSet_Params
{
};

// Function Button_CindyList.Button_CindyList_C.ExecuteUbergraph_Button_CindyList
struct UButton_CindyList_C_ExecuteUbergraph_Button_CindyList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
