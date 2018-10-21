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

// Function GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGooBomb_Base_Projectile_Explosion_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C.UserConstructionScript");

	AGooBomb_Base_Projectile_Explosion_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGooBomb_Base_Projectile_Explosion_FX_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C.OnSetActive");

	AGooBomb_Base_Projectile_Explosion_FX_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGooBomb_Base_Projectile_Explosion_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C.ReceiveBeginPlay");

	AGooBomb_Base_Projectile_Explosion_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C.ExecuteUbergraph_GooBomb_Base_Projectile_Explosion_FX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGooBomb_Base_Projectile_Explosion_FX_C::ExecuteUbergraph_GooBomb_Base_Projectile_Explosion_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Projectile_Explosion_FX.GooBomb_Base_Projectile_Explosion_FX_C.ExecuteUbergraph_GooBomb_Base_Projectile_Explosion_FX");

	AGooBomb_Base_Projectile_Explosion_FX_C_ExecuteUbergraph_GooBomb_Base_Projectile_Explosion_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
