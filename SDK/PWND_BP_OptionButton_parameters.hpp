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

// Function BP_OptionButton.BP_OptionButton_C.CloseSetting
struct UBP_OptionButton_C_CloseSetting_Params
{
};

// Function BP_OptionButton.BP_OptionButton_C.IsOpen
struct UBP_OptionButton_C_IsOpen_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionButton.BP_OptionButton_C.Update Settings
struct UBP_OptionButton_C_Update_Settings_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Custom_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionButton.BP_OptionButton_C.SetButton
struct UBP_OptionButton_C_SetButton_Params
{
	struct FText                                       OptionsTitle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                OptionsType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OptionText1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       OptionText2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       OptionText3;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Texture1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text4;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text5;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text6;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_OptionButton.BP_OptionButton_C.Set Options Screen Parent
struct UBP_OptionButton_C_Set_Options_Screen_Parent_Params
{
	class UBP_OptionsScreen_C*                         Options_Screen;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionButton.BP_OptionButton_C.Make Text Array
struct UBP_OptionButton_C_Make_Text_Array_Params
{
};

// Function BP_OptionButton.BP_OptionButton_C.SelectionMade_Event
struct UBP_OptionButton_C_SelectionMade_Event_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionButton.BP_OptionButton_C.Set Option to Custom
struct UBP_OptionButton_C_Set_Option_to_Custom_Params
{
};

// Function BP_OptionButton.BP_OptionButton_C.Construct
struct UBP_OptionButton_C_Construct_Params
{
};

// Function BP_OptionButton.BP_OptionButton_C.OnButtonPressed_Local
struct UBP_OptionButton_C_OnButtonPressed_Local_Params
{
};

// Function BP_OptionButton.BP_OptionButton_C.OnLeftPressed_Local
struct UBP_OptionButton_C_OnLeftPressed_Local_Params
{
};

// Function BP_OptionButton.BP_OptionButton_C.OnRightPressed_Local
struct UBP_OptionButton_C_OnRightPressed_Local_Params
{
};

// Function BP_OptionButton.BP_OptionButton_C.ExecuteUbergraph_BP_OptionButton
struct UBP_OptionButton_C_ExecuteUbergraph_BP_OptionButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionButton.BP_OptionButton_C.ButtonSelectionChanged__DelegateSignature
struct UBP_OptionButton_C_ButtonSelectionChanged__DelegateSignature_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
