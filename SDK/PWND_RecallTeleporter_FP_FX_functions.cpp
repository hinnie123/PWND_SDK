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

// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecallTeleporter_FP_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.UserConstructionScript");

	ARecallTeleporter_FP_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARecallTeleporter_FP_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveBeginPlay");

	ARecallTeleporter_FP_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_FP_FX_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveTick");

	ARecallTeleporter_FP_FX_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_FP_FX_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveEndPlay");

	ARecallTeleporter_FP_FX_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_FP_FX_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.OnSetActive");

	ARecallTeleporter_FP_FX_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ExecuteUbergraph_RecallTeleporter_FP_FX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_FP_FX_C::ExecuteUbergraph_RecallTeleporter_FP_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ExecuteUbergraph_RecallTeleporter_FP_FX");

	ARecallTeleporter_FP_FX_C_ExecuteUbergraph_RecallTeleporter_FP_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
