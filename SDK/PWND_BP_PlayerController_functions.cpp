// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController.BP_PlayerController_C.InflictHealEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndReplicatedHealEvent Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InflictHealEvent(class APwndPlayerController* Controller, const struct FPwndReplicatedHealEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InflictHealEvent");

	ABP_PlayerController_C_InflictHealEvent_Params params;
	params.Controller = Controller;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveHealEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndReplicatedHealEvent Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::ReceiveHealEvent(class APwndPlayerController* Controller, const struct FPwndReplicatedHealEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveHealEvent");

	ABP_PlayerController_C_ReceiveHealEvent_Params params;
	params.Controller = Controller;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InitDamageEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::InitDamageEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InitDamageEffect");

	ABP_PlayerController_C_InitDamageEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveDamageEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndReplicatedDamageEvent Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::ReceiveDamageEvent(class APwndPlayerController* Controller, const struct FPwndReplicatedDamageEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveDamageEvent");

	ABP_PlayerController_C_ReceiveDamageEvent_Params params;
	params.Controller = Controller;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.UpdateDamageEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::UpdateDamageEffect(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.UpdateDamageEffect");

	ABP_PlayerController_C_UpdateDamageEffect_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.UpdateGameStateSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::UpdateGameStateSounds(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.UpdateGameStateSounds");

	ABP_PlayerController_C_UpdateGameStateSounds_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.PostEventTriggerEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeEventTrigger>    Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPostedEventTrigger     Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::PostEventTriggerEvent(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.PostEventTriggerEvent");

	ABP_PlayerController_C_PostEventTriggerEvent_Params params;
	params.Controller = Controller;
	params.Event = Event;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.StuntAwardedEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPwndStuntSequence*      Stunt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Rating_Instigator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StuntType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::StuntAwardedEvent(class APwndPlayerController* Controller, class UPwndStuntSequence* Stunt, int Rating, class UObject* Rating_Instigator, class UObject* Other, const struct FName& StuntType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.StuntAwardedEvent");

	ABP_PlayerController_C_StuntAwardedEvent_Params params;
	params.Controller = Controller;
	params.Stunt = Stunt;
	params.Rating = Rating;
	params.Rating_Instigator = Rating_Instigator;
	params.Other = Other;
	params.StuntType = StuntType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InflictDamageEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndReplicatedDamageEvent Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InflictDamageEvent(class APwndPlayerController* Controller, const struct FPwndReplicatedDamageEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InflictDamageEvent");

	ABP_PlayerController_C_InflictDamageEvent_Params params;
	params.Controller = Controller;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.UserConstructionScript");

	ABP_PlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay");

	ABP_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnInflictDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndReplicatedDamageEvent Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::OnInflictDamage_Event_1(class APwndPlayerController* Controller, const struct FPwndReplicatedDamageEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnInflictDamage_Event_1");

	ABP_PlayerController_C_OnInflictDamage_Event_1_Params params;
	params.Controller = Controller;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnStuntAwarded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPwndStuntSequence*      Stunt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 RatingInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StuntType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnStuntAwarded_Event_1(class APwndPlayerController* Controller, class UPwndStuntSequence* Stunt, int Rating, class UObject* RatingInstigator, class UObject* Other, const struct FName& StuntType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnStuntAwarded_Event_1");

	ABP_PlayerController_C_OnStuntAwarded_Event_1_Params params;
	params.Controller = Controller;
	params.Stunt = Stunt;
	params.Rating = Rating;
	params.RatingInstigator = RatingInstigator;
	params.Other = Other;
	params.StuntType = StuntType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnPostEventTrigger_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeEventTrigger>    Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPostedEventTrigger     Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::OnPostEventTrigger_Event_1(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnPostEventTrigger_Event_1");

	ABP_PlayerController_C_OnPostEventTrigger_Event_1_Params params;
	params.Controller = Controller;
	params.Event = Event;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnRespawnStart
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::OnRespawnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnRespawnStart");

	ABP_PlayerController_C_OnRespawnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveTick");

	ABP_PlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnPawnActionStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APwndCharacter**         Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EePawnActionState>* NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EePawnActionState>* OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnPawnActionStateUpdated(class APwndCharacter** Char, TEnumAsByte<EePawnActionState>* NewState, TEnumAsByte<EePawnActionState>* OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnPawnActionStateUpdated");

	ABP_PlayerController_C_OnPawnActionStateUpdated_Params params;
	params.Char = Char;
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnPawnCompletedActionStateUpdated
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class APwndCharacter**         Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EePawnActionState>* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndCharacterActionCompletion* ActionCompleted                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerController_C::OnPawnCompletedActionStateUpdated(class APwndCharacter** Char, TEnumAsByte<EePawnActionState>* State, bool* bSuccess, struct FPwndCharacterActionCompletion* ActionCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnPawnCompletedActionStateUpdated");

	ABP_PlayerController_C_OnPawnCompletedActionStateUpdated_Params params;
	params.Char = Char;
	params.State = State;
	params.bSuccess = bSuccess;
	params.ActionCompleted = ActionCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnReceiveDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndReplicatedDamageEvent Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::OnReceiveDamage_Event_1(class APwndPlayerController* Controller, const struct FPwndReplicatedDamageEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnReceiveDamage_Event_1");

	ABP_PlayerController_C_OnReceiveDamage_Event_1_Params params;
	params.Controller = Controller;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnInflictHeal_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndReplicatedHealEvent Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::OnInflictHeal_Event_1(class APwndPlayerController* Controller, const struct FPwndReplicatedHealEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnInflictHeal_Event_1");

	ABP_PlayerController_C_OnInflictHeal_Event_1_Params params;
	params.Controller = Controller;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnReceiveHeal_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndReplicatedHealEvent Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::OnReceiveHeal_Event_1(class APwndPlayerController* Controller, const struct FPwndReplicatedHealEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnReceiveHeal_Event_1");

	ABP_PlayerController_C_OnReceiveHeal_Event_1_Params params;
	params.Controller = Controller;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnArrivedToLobby
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnArrivedToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnArrivedToLobby");

	ABP_PlayerController_C_OnArrivedToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.MonkeyPlayerTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::MonkeyPlayerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.MonkeyPlayerTick");

	ABP_PlayerController_C_MonkeyPlayerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.LobbyCheckForDupe
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::LobbyCheckForDupe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.LobbyCheckForDupe");

	ABP_PlayerController_C_LobbyCheckForDupe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");

	ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
