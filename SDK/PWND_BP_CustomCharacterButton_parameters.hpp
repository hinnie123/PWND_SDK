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

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.BndEvt__Button_Char_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UBP_CustomCharacterButton_C_BndEvt__Button_Char_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.BndEvt__Button_Char_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature
struct UBP_CustomCharacterButton_C_BndEvt__Button_Char_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.Set GUID
struct UBP_CustomCharacterButton_C_Set_GUID_Params
{
	struct FGuid                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               New;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.Construct
struct UBP_CustomCharacterButton_C_Construct_Params
{
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomCharacterButton_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.Unhover
struct UBP_CustomCharacterButton_C_Unhover_Params
{
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.MakeHovered
struct UBP_CustomCharacterButton_C_MakeHovered_Params
{
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.Async Continue
struct UBP_CustomCharacterButton_C_Async_Continue_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  LoadedIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.OnButtonPressed_Local
struct UBP_CustomCharacterButton_C_OnButtonPressed_Local_Params
{
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.ExecuteUbergraph_BP_CustomCharacterButton
struct UBP_CustomCharacterButton_C_ExecuteUbergraph_BP_CustomCharacterButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.CharacterUnhovered__DelegateSignature
struct UBP_CustomCharacterButton_C_CharacterUnhovered__DelegateSignature_Params
{
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.CharacterHovered__DelegateSignature
struct UBP_CustomCharacterButton_C_CharacterHovered__DelegateSignature_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UBP_CustomCharacterButton_C*                 Self_reference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomCharacterButton.BP_CustomCharacterButton_C.CharacterSelected__DelegateSignature
struct UBP_CustomCharacterButton_C_CharacterSelected__DelegateSignature_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
