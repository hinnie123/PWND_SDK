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

// Function RecallTeleporter_DisappearFX.RecallTeleporter_DisappearFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecallTeleporter_DisappearFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_DisappearFX.RecallTeleporter_DisappearFX_C.UserConstructionScript");

	ARecallTeleporter_DisappearFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_DisappearFX.RecallTeleporter_DisappearFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARecallTeleporter_DisappearFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_DisappearFX.RecallTeleporter_DisappearFX_C.ReceiveBeginPlay");

	ARecallTeleporter_DisappearFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_DisappearFX.RecallTeleporter_DisappearFX_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_DisappearFX_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_DisappearFX.RecallTeleporter_DisappearFX_C.ReceiveTick");

	ARecallTeleporter_DisappearFX_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_DisappearFX.RecallTeleporter_DisappearFX_C.ExecuteUbergraph_RecallTeleporter_DisappearFX
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_DisappearFX_C::ExecuteUbergraph_RecallTeleporter_DisappearFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_DisappearFX.RecallTeleporter_DisappearFX_C.ExecuteUbergraph_RecallTeleporter_DisappearFX");

	ARecallTeleporter_DisappearFX_C_ExecuteUbergraph_RecallTeleporter_DisappearFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
