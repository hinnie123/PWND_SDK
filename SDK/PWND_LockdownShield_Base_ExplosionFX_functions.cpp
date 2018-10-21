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

// Function LockdownShield_Base_ExplosionFX.LockdownShield_Base_ExplosionFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALockdownShield_Base_ExplosionFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_ExplosionFX.LockdownShield_Base_ExplosionFX_C.UserConstructionScript");

	ALockdownShield_Base_ExplosionFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_ExplosionFX.LockdownShield_Base_ExplosionFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALockdownShield_Base_ExplosionFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_ExplosionFX.LockdownShield_Base_ExplosionFX_C.ReceiveBeginPlay");

	ALockdownShield_Base_ExplosionFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_ExplosionFX.LockdownShield_Base_ExplosionFX_C.ExecuteUbergraph_LockdownShield_Base_ExplosionFX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_ExplosionFX_C::ExecuteUbergraph_LockdownShield_Base_ExplosionFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_ExplosionFX.LockdownShield_Base_ExplosionFX_C.ExecuteUbergraph_LockdownShield_Base_ExplosionFX");

	ALockdownShield_Base_ExplosionFX_C_ExecuteUbergraph_LockdownShield_Base_ExplosionFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
