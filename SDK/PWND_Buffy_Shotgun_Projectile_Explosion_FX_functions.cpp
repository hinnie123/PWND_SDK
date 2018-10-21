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

// Function Buffy_Shotgun_Projectile_Explosion_FX.Buffy_Shotgun_Projectile_Explosion_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuffy_Shotgun_Projectile_Explosion_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buffy_Shotgun_Projectile_Explosion_FX.Buffy_Shotgun_Projectile_Explosion_FX_C.UserConstructionScript");

	ABuffy_Shotgun_Projectile_Explosion_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buffy_Shotgun_Projectile_Explosion_FX.Buffy_Shotgun_Projectile_Explosion_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuffy_Shotgun_Projectile_Explosion_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buffy_Shotgun_Projectile_Explosion_FX.Buffy_Shotgun_Projectile_Explosion_FX_C.ReceiveBeginPlay");

	ABuffy_Shotgun_Projectile_Explosion_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buffy_Shotgun_Projectile_Explosion_FX.Buffy_Shotgun_Projectile_Explosion_FX_C.ExecuteUbergraph_Buffy_Shotgun_Projectile_Explosion_FX
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuffy_Shotgun_Projectile_Explosion_FX_C::ExecuteUbergraph_Buffy_Shotgun_Projectile_Explosion_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buffy_Shotgun_Projectile_Explosion_FX.Buffy_Shotgun_Projectile_Explosion_FX_C.ExecuteUbergraph_Buffy_Shotgun_Projectile_Explosion_FX");

	ABuffy_Shotgun_Projectile_Explosion_FX_C_ExecuteUbergraph_Buffy_Shotgun_Projectile_Explosion_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
