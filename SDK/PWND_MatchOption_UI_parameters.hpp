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

// Function MatchOption_UI.MatchOption_UI_C.Construct
struct UMatchOption_UI_C_Construct_Params
{
};

// Function MatchOption_UI.MatchOption_UI_C.Set Option Desc
struct UMatchOption_UI_C_Set_Option_Desc_Params
{
	struct FText                                       Desc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MatchOption_UI.MatchOption_UI_C.BndEvt__Button_Training_K2Node_ComponentBoundEvent_78_OnButtonPressedEvent__DelegateSignature
struct UMatchOption_UI_C_BndEvt__Button_Training_K2Node_ComponentBoundEvent_78_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function MatchOption_UI.MatchOption_UI_C.BndEvt__Button_Training_K2Node_ComponentBoundEvent_267_OnButtonReleasedEvent__DelegateSignature
struct UMatchOption_UI_C_BndEvt__Button_Training_K2Node_ComponentBoundEvent_267_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MatchOption_UI.MatchOption_UI_C.Assign Texture
struct UMatchOption_UI_C_Assign_Texture_Params
{
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchOption_UI.MatchOption_UI_C.Set Lower Text
struct UMatchOption_UI_C_Set_Lower_Text_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MatchOption_UI.MatchOption_UI_C.Set Upper Text
struct UMatchOption_UI_C_Set_Upper_Text_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MatchOption_UI.MatchOption_UI_C.Set Values
struct UMatchOption_UI_C_Set_Values_Params
{
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MatchOption_UI.MatchOption_UI_C.OnRemoveAttention
struct UMatchOption_UI_C_OnRemoveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchOption_UI.MatchOption_UI_C.OnReceiveAttention
struct UMatchOption_UI_C_OnReceiveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchOption_UI.MatchOption_UI_C.Set Header Color
struct UMatchOption_UI_C_Set_Header_Color_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MatchOption_UI.MatchOption_UI_C.DisableOption
struct UMatchOption_UI_C_DisableOption_Params
{
};

// Function MatchOption_UI.MatchOption_UI_C.ExecuteUbergraph_MatchOption_UI
struct UMatchOption_UI_C_ExecuteUbergraph_MatchOption_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchOption_UI.MatchOption_UI_C.Selected__DelegateSignature
struct UMatchOption_UI_C_Selected__DelegateSignature_Params
{
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
