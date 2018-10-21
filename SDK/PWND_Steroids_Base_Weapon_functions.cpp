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

// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.IsAbilityActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASteroids_Base_Weapon_C::IsAbilityActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.IsAbilityActive");

	ASteroids_Base_Weapon_C_IsAbilityActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASteroids_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.UserConstructionScript");

	ASteroids_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void ASteroids_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.OnWeaponFire");

	ASteroids_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.CustomFire
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         ChargePct                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASteroids_Base_Weapon_C::CustomFire(float* ChargePct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.CustomFire");

	ASteroids_Base_Weapon_C_CustomFire_Params params;
	params.ChargePct = ChargePct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.ExecuteUbergraph_Steroids_Base_Weapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASteroids_Base_Weapon_C::ExecuteUbergraph_Steroids_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_Weapon.Steroids_Base_Weapon_C.ExecuteUbergraph_Steroids_Base_Weapon");

	ASteroids_Base_Weapon_C_ExecuteUbergraph_Steroids_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
