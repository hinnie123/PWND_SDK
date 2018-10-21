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

// Function Base_CPP_Projectile.Base_CPP_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_CPP_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_CPP_Projectile.Base_CPP_Projectile_C.UserConstructionScript");

	ABase_CPP_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_CPP_Projectile.Base_CPP_Projectile_C.OnTuneProjectile
// (Event, Protected, BlueprintEvent)

void ABase_CPP_Projectile_C::OnTuneProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_CPP_Projectile.Base_CPP_Projectile_C.OnTuneProjectile");

	ABase_CPP_Projectile_C_OnTuneProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_CPP_Projectile.Base_CPP_Projectile_C.ExecuteUbergraph_Base_CPP_Projectile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_CPP_Projectile_C::ExecuteUbergraph_Base_CPP_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_CPP_Projectile.Base_CPP_Projectile_C.ExecuteUbergraph_Base_CPP_Projectile");

	ABase_CPP_Projectile_C_ExecuteUbergraph_Base_CPP_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
