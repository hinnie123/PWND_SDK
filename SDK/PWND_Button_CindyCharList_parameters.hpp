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

// Function Button_CindyCharList.Button_CindyCharList_C.Set GUID
struct UButton_CindyCharList_C_Set_GUID_Params
{
	struct FGuid                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               New;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyCharList.Button_CindyCharList_C.Construct
struct UButton_CindyCharList_C_Construct_Params
{
};

// Function Button_CindyCharList.Button_CindyCharList_C.Async Continue
struct UButton_CindyCharList_C_Async_Continue_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  LoadedIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyCharList.Button_CindyCharList_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UButton_CindyCharList_C_BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Button_CindyCharList.Button_CindyCharList_C.OnButtonPressed_Local
struct UButton_CindyCharList_C_OnButtonPressed_Local_Params
{
};

// Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_HoverStateSet
struct UButton_CindyCharList_C_Cosmetic_HoverStateSet_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_NormalStateSet
struct UButton_CindyCharList_C_Cosmetic_NormalStateSet_Params
{
};

// Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_SelectedStateSet
struct UButton_CindyCharList_C_Cosmetic_SelectedStateSet_Params
{
};

// Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_SelectedHoverStateSet
struct UButton_CindyCharList_C_Cosmetic_SelectedHoverStateSet_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyCharList.Button_CindyCharList_C.ExecuteUbergraph_Button_CindyCharList
struct UButton_CindyCharList_C_ExecuteUbergraph_Button_CindyCharList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_CindyCharList.Button_CindyCharList_C.CharacterSelected__DelegateSignature
struct UButton_CindyCharList_C_CharacterSelected__DelegateSignature_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UButton_CindyCharList_C*                     ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
