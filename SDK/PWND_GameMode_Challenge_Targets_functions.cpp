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

// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Targets_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.UserConstructionScript");

	AGameMode_Challenge_Targets_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Set Game
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Targets_C::Set_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Set Game");

	AGameMode_Challenge_Targets_C_Set_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Challenge_Targets_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.ReceiveTick");

	AGameMode_Challenge_Targets_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Add To Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeToAdd                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Challenge_Targets_C::Add_To_Time(float TimeToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Add To Time");

	AGameMode_Challenge_Targets_C_Add_To_Time_Params params;
	params.TimeToAdd = TimeToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Target Destroyed
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Challenge_Targets_C::Target_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Target Destroyed");

	AGameMode_Challenge_Targets_C_Target_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.ExecuteUbergraph_GameMode_Challenge_Targets
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Challenge_Targets_C::ExecuteUbergraph_GameMode_Challenge_Targets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.ExecuteUbergraph_GameMode_Challenge_Targets");

	AGameMode_Challenge_Targets_C_ExecuteUbergraph_GameMode_Challenge_Targets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
