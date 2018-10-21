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

// Function PwnBot_Base_Character.PwnBot_Base_Character_C.AllowPwn
struct APwnBot_Base_Character_C_AllowPwn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PwnBot_Base_Character.PwnBot_Base_Character_C.UserConstructionScript
struct APwnBot_Base_Character_C_UserConstructionScript_Params
{
};

// Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceiveBeginPlay
struct APwnBot_Base_Character_C_ReceiveBeginPlay_Params
{
};

// Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceiveTick
struct APwnBot_Base_Character_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PwnBot_Base_Character.PwnBot_Base_Character_C.ReceivePossessed
struct APwnBot_Base_Character_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PwnBot_Base_Character.PwnBot_Base_Character_C.ExecuteUbergraph_PwnBot_Base_Character
struct APwnBot_Base_Character_C_ExecuteUbergraph_PwnBot_Base_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
