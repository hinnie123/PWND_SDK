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

// Function Law_Character.Law_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALaw_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_Character.Law_Character_C.UserConstructionScript");

	ALaw_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_Character.Law_Character_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALaw_Character_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_Character.Law_Character_C.K2_OnMovementModeChanged");

	ALaw_Character_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_Character.Law_Character_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALaw_Character_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_Character.Law_Character_C.ReceiveTick");

	ALaw_Character_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_Character.Law_Character_C.OnRocketJump
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FReplicatedRocketJump*  JumpInfo                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ALaw_Character_C::OnRocketJump(struct FReplicatedRocketJump* JumpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_Character.Law_Character_C.OnRocketJump");

	ALaw_Character_C_OnRocketJump_Params params;
	params.JumpInfo = JumpInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_Character.Law_Character_C.PostEventTrigger_EventHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeEventTrigger>    Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPostedEventTrigger     Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ALaw_Character_C::PostEventTrigger_EventHandler(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_Character.Law_Character_C.PostEventTrigger_EventHandler");

	ALaw_Character_C_PostEventTrigger_EventHandler_Params params;
	params.Controller = Controller;
	params.Event = Event;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_Character.Law_Character_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALaw_Character_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_Character.Law_Character_C.ReceivePossessed");

	ALaw_Character_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_Character.Law_Character_C.ExecuteUbergraph_Law_Character
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALaw_Character_C::ExecuteUbergraph_Law_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_Character.Law_Character_C.ExecuteUbergraph_Law_Character");

	ALaw_Character_C_ExecuteUbergraph_Law_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
