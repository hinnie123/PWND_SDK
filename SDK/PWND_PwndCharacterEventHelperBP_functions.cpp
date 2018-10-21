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

// Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APwndCharacterEventHelperBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.UserConstructionScript");

	APwndCharacterEventHelperBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APwndCharacterEventHelperBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.ReceiveBeginPlay");

	APwndCharacterEventHelperBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeEventTrigger>    Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPostedEventTrigger     Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm)

void APwndCharacterEventHelperBP_C::CustomEvent_1(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.CustomEvent_1");

	APwndCharacterEventHelperBP_C_CustomEvent_1_Params params;
	params.Controller = Controller;
	params.Event = Event;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.ExecuteUbergraph_PwndCharacterEventHelperBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwndCharacterEventHelperBP_C::ExecuteUbergraph_PwndCharacterEventHelperBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndCharacterEventHelperBP.PwndCharacterEventHelperBP_C.ExecuteUbergraph_PwndCharacterEventHelperBP");

	APwndCharacterEventHelperBP_C_ExecuteUbergraph_PwndCharacterEventHelperBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
