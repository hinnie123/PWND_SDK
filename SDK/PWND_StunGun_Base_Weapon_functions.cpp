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

// Function StunGun_Base_Weapon.StunGun_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStunGun_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StunGun_Base_Weapon.StunGun_Base_Weapon_C.UserConstructionScript");

	AStunGun_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StunGun_Base_Weapon.StunGun_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void AStunGun_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function StunGun_Base_Weapon.StunGun_Base_Weapon_C.OnWeaponFire");

	AStunGun_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StunGun_Base_Weapon.StunGun_Base_Weapon_C.ExecuteUbergraph_StunGun_Base_Weapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStunGun_Base_Weapon_C::ExecuteUbergraph_StunGun_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StunGun_Base_Weapon.StunGun_Base_Weapon_C.ExecuteUbergraph_StunGun_Base_Weapon");

	AStunGun_Base_Weapon_C_ExecuteUbergraph_StunGun_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
