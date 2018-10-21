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

// Function BP_VOIP_Talking.BP_VOIP_Talking_C.RemoveFromChatbox
struct UBP_VOIP_Talking_C_RemoveFromChatbox_Params
{
	struct FString                                     SearchName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_VOIP_Talking.BP_VOIP_Talking_C.AddToChatBox
struct UBP_VOIP_Talking_C_AddToChatBox_Params
{
	struct FString                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_VOIP_Talking.BP_VOIP_Talking_C.Construct
struct UBP_VOIP_Talking_C_Construct_Params
{
};

// Function BP_VOIP_Talking.BP_VOIP_Talking_C.Tick
struct UBP_VOIP_Talking_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VOIP_Talking.BP_VOIP_Talking_C.On VOIP Talking
struct UBP_VOIP_Talking_C_On_VOIP_Talking_Params
{
	bool                                               isTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_VOIP_Talking.BP_VOIP_Talking_C.ExecuteUbergraph_BP_VOIP_Talking
struct UBP_VOIP_Talking_C_ExecuteUbergraph_BP_VOIP_Talking_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
