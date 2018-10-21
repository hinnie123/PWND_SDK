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

// Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALockdownShield_Base_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.UserConstructionScript");

	ALockdownShield_Base_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.OnDetonate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bDestroy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Projectile_C::OnDetonate(struct FVector* Location, struct FHitResult* Hit, bool* bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.OnDetonate");

	ALockdownShield_Base_Projectile_C_OnDetonate_Params params;
	params.Location = Location;
	params.Hit = Hit;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.ExecuteUbergraph_LockdownShield_Base_Projectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Projectile_C::ExecuteUbergraph_LockdownShield_Base_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.ExecuteUbergraph_LockdownShield_Base_Projectile");

	ALockdownShield_Base_Projectile_C_ExecuteUbergraph_LockdownShield_Base_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
