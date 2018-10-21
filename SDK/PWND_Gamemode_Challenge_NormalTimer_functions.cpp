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

// Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGamemode_Challenge_NormalTimer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.UserConstructionScript");

	AGamemode_Challenge_NormalTimer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGamemode_Challenge_NormalTimer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.ReceiveTick");

	AGamemode_Challenge_NormalTimer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.ExecuteUbergraph_Gamemode_Challenge_NormalTimer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGamemode_Challenge_NormalTimer_C::ExecuteUbergraph_Gamemode_Challenge_NormalTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.ExecuteUbergraph_Gamemode_Challenge_NormalTimer");

	AGamemode_Challenge_NormalTimer_C_ExecuteUbergraph_Gamemode_Challenge_NormalTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
