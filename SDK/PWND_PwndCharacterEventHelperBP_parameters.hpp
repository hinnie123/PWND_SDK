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

// Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.UserConstructionScript
struct APwndCharacterEventHelperBP_C_UserConstructionScript_Params
{
};

// Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.ReceiveBeginPlay
struct APwndCharacterEventHelperBP_C_ReceiveBeginPlay_Params
{
};

// Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.CustomEvent_1
struct APwndCharacterEventHelperBP_C_CustomEvent_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeEventTrigger>                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPostedEventTrigger                         Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.ExecuteUbergraph_PwndCharacterEventHelperBP
struct APwndCharacterEventHelperBP_C_ExecuteUbergraph_PwndCharacterEventHelperBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
