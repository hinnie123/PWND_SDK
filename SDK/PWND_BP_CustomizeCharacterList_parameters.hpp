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

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.Construct
struct UBP_CustomizeCharacterList_C_Construct_Params
{
};

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.Set Info
struct UBP_CustomizeCharacterList_C_Set_Info_Params
{
	struct FGuid                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
struct UBP_CustomizeCharacterList_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnReceiveAttention
struct UBP_CustomizeCharacterList_C_OnReceiveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnRemoveAttention
struct UBP_CustomizeCharacterList_C_OnRemoveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnButtonPressed_Local
struct UBP_CustomizeCharacterList_C_OnButtonPressed_Local_Params
{
};

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.ExecuteUbergraph_BP_CustomizeCharacterList
struct UBP_CustomizeCharacterList_C_ExecuteUbergraph_BP_CustomizeCharacterList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.WorldSelected__DelegateSignature
struct UBP_CustomizeCharacterList_C_WorldSelected__DelegateSignature_Params
{
	struct FGuid                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_CustomizeCharacterList_C*                ButtonSelected;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.WorldHovered__DelegateSignature
struct UBP_CustomizeCharacterList_C_WorldHovered__DelegateSignature_Params
{
	struct FGuid                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
