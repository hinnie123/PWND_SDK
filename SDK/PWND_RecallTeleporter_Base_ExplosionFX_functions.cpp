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

// Function RecallTeleporter_Base_ExplosionFX.RecallTeleporter_Base_ExplosionFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecallTeleporter_Base_ExplosionFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_ExplosionFX.RecallTeleporter_Base_ExplosionFX_C.UserConstructionScript");

	ARecallTeleporter_Base_ExplosionFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_ExplosionFX.RecallTeleporter_Base_ExplosionFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARecallTeleporter_Base_ExplosionFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_ExplosionFX.RecallTeleporter_Base_ExplosionFX_C.ReceiveBeginPlay");

	ARecallTeleporter_Base_ExplosionFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecallTeleporter_Base_ExplosionFX.RecallTeleporter_Base_ExplosionFX_C.ExecuteUbergraph_RecallTeleporter_Base_ExplosionFX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecallTeleporter_Base_ExplosionFX_C::ExecuteUbergraph_RecallTeleporter_Base_ExplosionFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecallTeleporter_Base_ExplosionFX.RecallTeleporter_Base_ExplosionFX_C.ExecuteUbergraph_RecallTeleporter_Base_ExplosionFX");

	ARecallTeleporter_Base_ExplosionFX_C_ExecuteUbergraph_RecallTeleporter_Base_ExplosionFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
