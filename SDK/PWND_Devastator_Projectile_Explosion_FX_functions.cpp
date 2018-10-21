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

// Function Devastator_Projectile_Explosion_FX.Devastator_Projectile_Explosion_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADevastator_Projectile_Explosion_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Devastator_Projectile_Explosion_FX.Devastator_Projectile_Explosion_FX_C.UserConstructionScript");

	ADevastator_Projectile_Explosion_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Devastator_Projectile_Explosion_FX.Devastator_Projectile_Explosion_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADevastator_Projectile_Explosion_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Devastator_Projectile_Explosion_FX.Devastator_Projectile_Explosion_FX_C.ReceiveBeginPlay");

	ADevastator_Projectile_Explosion_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Devastator_Projectile_Explosion_FX.Devastator_Projectile_Explosion_FX_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADevastator_Projectile_Explosion_FX_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Devastator_Projectile_Explosion_FX.Devastator_Projectile_Explosion_FX_C.ReceiveTick");

	ADevastator_Projectile_Explosion_FX_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Devastator_Projectile_Explosion_FX.Devastator_Projectile_Explosion_FX_C.ExecuteUbergraph_Devastator_Projectile_Explosion_FX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADevastator_Projectile_Explosion_FX_C::ExecuteUbergraph_Devastator_Projectile_Explosion_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Devastator_Projectile_Explosion_FX.Devastator_Projectile_Explosion_FX_C.ExecuteUbergraph_Devastator_Projectile_Explosion_FX");

	ADevastator_Projectile_Explosion_FX_C_ExecuteUbergraph_Devastator_Projectile_Explosion_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
