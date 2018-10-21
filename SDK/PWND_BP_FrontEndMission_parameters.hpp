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

// Function BP_FrontEndMission.BP_FrontEndMission_C.SetReward
struct UBP_FrontEndMission_C_SetReward_Params
{
	int                                                Coin_Reward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                XP_Reward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndMission.BP_FrontEndMission_C.SetProgress
struct UBP_FrontEndMission_C_SetProgress_Params
{
	struct FText                                       ProgressType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              CurrentProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndMission.BP_FrontEndMission_C.SetDescription
struct UBP_FrontEndMission_C_SetDescription_Params
{
	struct FText                                       NewDesc;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_FrontEndMission.BP_FrontEndMission_C.SetTitle
struct UBP_FrontEndMission_C_SetTitle_Params
{
	struct FText                                       NewTitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_FrontEndMission.BP_FrontEndMission_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_FrontEndMission_C_BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FrontEndMission.BP_FrontEndMission_C.ExecuteUbergraph_BP_FrontEndMission
struct UBP_FrontEndMission_C_ExecuteUbergraph_BP_FrontEndMission_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndMission.BP_FrontEndMission_C.DismissMission__DelegateSignature
struct UBP_FrontEndMission_C_DismissMission__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
