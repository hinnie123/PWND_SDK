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

// Function BP_PlayerController.BP_PlayerController_C.InflictHealEvent
struct ABP_PlayerController_C_InflictHealEvent_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedHealEvent                    Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.ReceiveHealEvent
struct ABP_PlayerController_C_ReceiveHealEvent_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedHealEvent                    Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InitDamageEffect
struct ABP_PlayerController_C_InitDamageEffect_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.ReceiveDamageEvent
struct ABP_PlayerController_C_ReceiveDamageEvent_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedDamageEvent                  Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.UpdateDamageEffect
struct ABP_PlayerController_C_UpdateDamageEffect_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.UpdateGameStateSounds
struct ABP_PlayerController_C_UpdateGameStateSounds_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.PostEventTriggerEvent
struct ABP_PlayerController_C_PostEventTriggerEvent_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeEventTrigger>                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPostedEventTrigger                         Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.StuntAwardedEvent
struct ABP_PlayerController_C_StuntAwardedEvent_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPwndStuntSequence*                          Stunt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Rating_Instigator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StuntType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.InflictDamageEvent
struct ABP_PlayerController_C_InflictDamageEvent_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedDamageEvent                  Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.UserConstructionScript
struct ABP_PlayerController_C_UserConstructionScript_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
struct ABP_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnInflictDamage_Event_1
struct ABP_PlayerController_C_OnInflictDamage_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedDamageEvent                  Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.OnStuntAwarded_Event_1
struct ABP_PlayerController_C_OnStuntAwarded_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPwndStuntSequence*                          Stunt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     RatingInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StuntType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnPostEventTrigger_Event_1
struct ABP_PlayerController_C_OnPostEventTrigger_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeEventTrigger>                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPostedEventTrigger                         Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.OnRespawnStart
struct ABP_PlayerController_C_OnRespawnStart_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
struct ABP_PlayerController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnPawnActionStateUpdated
struct ABP_PlayerController_C_OnPawnActionStateUpdated_Params
{
	class APwndCharacter**                             Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EePawnActionState>*                    NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EePawnActionState>*                    OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnPawnCompletedActionStateUpdated
struct ABP_PlayerController_C_OnPawnCompletedActionStateUpdated_Params
{
	class APwndCharacter**                             Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EePawnActionState>*                    State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndCharacterActionCompletion*             ActionCompleted;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerController.BP_PlayerController_C.OnReceiveDamage_Event_1
struct ABP_PlayerController_C_OnReceiveDamage_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedDamageEvent                  Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.OnInflictHeal_Event_1
struct ABP_PlayerController_C_OnInflictHeal_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedHealEvent                    Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.OnReceiveHeal_Event_1
struct ABP_PlayerController_C_OnReceiveHeal_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedHealEvent                    Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.OnArrivedToLobby
struct ABP_PlayerController_C_OnArrivedToLobby_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.MonkeyPlayerTick
struct ABP_PlayerController_C_MonkeyPlayerTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.LobbyCheckForDupe
struct ABP_PlayerController_C_LobbyCheckForDupe_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
struct ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
