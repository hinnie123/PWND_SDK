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

// Function Law_Character.Law_Character_C.UserConstructionScript
struct ALaw_Character_C_UserConstructionScript_Params
{
};

// Function Law_Character.Law_Character_C.K2_OnMovementModeChanged
struct ALaw_Character_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Law_Character.Law_Character_C.ReceiveTick
struct ALaw_Character_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Law_Character.Law_Character_C.OnRocketJump
struct ALaw_Character_C_OnRocketJump_Params
{
	struct FReplicatedRocketJump*                      JumpInfo;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Law_Character.Law_Character_C.PostEventTrigger_EventHandler
struct ALaw_Character_C_PostEventTrigger_EventHandler_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeEventTrigger>                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPostedEventTrigger                         Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Law_Character.Law_Character_C.ReceivePossessed
struct ALaw_Character_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Law_Character.Law_Character_C.ExecuteUbergraph_Law_Character
struct ALaw_Character_C_ExecuteUbergraph_Law_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
