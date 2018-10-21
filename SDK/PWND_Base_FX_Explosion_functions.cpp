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

// Function Base_FX_Explosion.Base_FX_Explosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_FX_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Explosion.Base_FX_Explosion_C.UserConstructionScript");

	ABase_FX_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Explosion.Base_FX_Explosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABase_FX_Explosion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Explosion.Base_FX_Explosion_C.ReceiveBeginPlay");

	ABase_FX_Explosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Explosion.Base_FX_Explosion_C.ExecuteUbergraph_Base_FX_Explosion
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_FX_Explosion_C::ExecuteUbergraph_Base_FX_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Explosion.Base_FX_Explosion_C.ExecuteUbergraph_Base_FX_Explosion");

	ABase_FX_Explosion_C_ExecuteUbergraph_Base_FX_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
