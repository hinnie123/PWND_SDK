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

// Function Pwnd_Announcer.Pwnd_Announcer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APwnd_Announcer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwnd_Announcer.Pwnd_Announcer_C.UserConstructionScript");

	APwnd_Announcer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwnd_Announcer.Pwnd_Announcer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APwnd_Announcer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwnd_Announcer.Pwnd_Announcer_C.ReceiveBeginPlay");

	APwnd_Announcer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwnd_Announcer.Pwnd_Announcer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnd_Announcer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwnd_Announcer.Pwnd_Announcer_C.ReceiveTick");

	APwnd_Announcer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwnd_Announcer.Pwnd_Announcer_C.ExecuteUbergraph_Pwnd_Announcer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnd_Announcer_C::ExecuteUbergraph_Pwnd_Announcer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwnd_Announcer.Pwnd_Announcer_C.ExecuteUbergraph_Pwnd_Announcer");

	APwnd_Announcer_C_ExecuteUbergraph_Pwnd_Announcer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
