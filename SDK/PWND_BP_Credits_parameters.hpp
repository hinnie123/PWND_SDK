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

// Function BP_Credits.BP_Credits_C.Tick
struct UBP_Credits_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Credits.BP_Credits_C.BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature
struct UBP_Credits_C_BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_Credits.BP_Credits_C.ExecuteUbergraph_BP_Credits
struct UBP_Credits_C_ExecuteUbergraph_BP_Credits_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
