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

// Function CameraLootcrate_BP.CameraLootcrate_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACameraLootcrate_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLootcrate_BP.CameraLootcrate_BP_C.UserConstructionScript");

	ACameraLootcrate_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraLootcrate_BP.CameraLootcrate_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACameraLootcrate_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLootcrate_BP.CameraLootcrate_BP_C.Timeline_0__FinishedFunc");

	ACameraLootcrate_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraLootcrate_BP.CameraLootcrate_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACameraLootcrate_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLootcrate_BP.CameraLootcrate_BP_C.Timeline_0__UpdateFunc");

	ACameraLootcrate_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraLootcrate_BP.CameraLootcrate_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACameraLootcrate_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLootcrate_BP.CameraLootcrate_BP_C.ReceiveBeginPlay");

	ACameraLootcrate_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraLootcrate_BP.CameraLootcrate_BP_C.Move
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocationToTravel               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACameraLootcrate_BP_C::Move(const struct FVector& LocationToTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLootcrate_BP.CameraLootcrate_BP_C.Move");

	ACameraLootcrate_BP_C_Move_Params params;
	params.LocationToTravel = LocationToTravel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraLootcrate_BP.CameraLootcrate_BP_C.Reset
// (BlueprintCallable, BlueprintEvent)

void ACameraLootcrate_BP_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLootcrate_BP.CameraLootcrate_BP_C.Reset");

	ACameraLootcrate_BP_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraLootcrate_BP.CameraLootcrate_BP_C.ExecuteUbergraph_CameraLootcrate_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACameraLootcrate_BP_C::ExecuteUbergraph_CameraLootcrate_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraLootcrate_BP.CameraLootcrate_BP_C.ExecuteUbergraph_CameraLootcrate_BP");

	ACameraLootcrate_BP_C_ExecuteUbergraph_CameraLootcrate_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
