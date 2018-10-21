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

// Function BP_AchievementPopUp.BP_AchievementPopUp_C.Set Achievement Info
struct UBP_AchievementPopUp_C_Set_Achievement_Info_Params
{
	struct FText                                       Achievement_Name;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Achievement_Desc;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Credit_Reward;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Reward_Image;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Notification_GUID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_AchievementPopUp.BP_AchievementPopUp_C.ExecuteUbergraph_BP_AchievementPopUp
struct UBP_AchievementPopUp_C_ExecuteUbergraph_BP_AchievementPopUp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AchievementPopUp.BP_AchievementPopUp_C.MessageEnd__DelegateSignature
struct UBP_AchievementPopUp_C_MessageEnd__DelegateSignature_Params
{
	struct FGuid                                       Notification_GUID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
