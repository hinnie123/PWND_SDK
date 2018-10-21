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

// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStickyBomb_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.UserConstructionScript");

	AStickyBomb_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void AStickyBomb_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponFire");

	AStickyBomb_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponStartCharging
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInitialCharge                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStickyBomb_Base_Weapon_C::OnWeaponStartCharging(bool* bInitialCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponStartCharging");

	AStickyBomb_Base_Weapon_C_OnWeaponStartCharging_Params params;
	params.bInitialCharge = bInitialCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponStopCharging
// (Event, Public, BlueprintEvent)

void AStickyBomb_Base_Weapon_C::OnWeaponStopCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.OnWeaponStopCharging");

	AStickyBomb_Base_Weapon_C_OnWeaponStopCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.ExecuteUbergraph_StickyBomb_Base_Weapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStickyBomb_Base_Weapon_C::ExecuteUbergraph_StickyBomb_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Weapon.StickyBomb_Base_Weapon_C.ExecuteUbergraph_StickyBomb_Base_Weapon");

	AStickyBomb_Base_Weapon_C_ExecuteUbergraph_StickyBomb_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
