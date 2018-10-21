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

// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFiestaBoyz_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.UserConstructionScript");

	AFiestaBoyz_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFiestaBoyz_Base_Weapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.ReceiveBeginPlay");

	AFiestaBoyz_Base_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void AFiestaBoyz_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponFire");

	AFiestaBoyz_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponAmmoCountChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           OldAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFiestaBoyz_Base_Weapon_C::OnWeaponAmmoCountChanged(int* OldAmmoCount, int* NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponAmmoCountChanged");

	AFiestaBoyz_Base_Weapon_C_OnWeaponAmmoCountChanged_Params params;
	params.OldAmmoCount = OldAmmoCount;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnUpgraded
// (Event, Protected, BlueprintEvent)

void AFiestaBoyz_Base_Weapon_C::OnUpgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnUpgraded");

	AFiestaBoyz_Base_Weapon_C_OnUpgraded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponStartReload
// (Event, Public, BlueprintEvent)

void AFiestaBoyz_Base_Weapon_C::OnWeaponStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.OnWeaponStartReload");

	AFiestaBoyz_Base_Weapon_C_OnWeaponStartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.ExecuteUbergraph_FiestaBoyz_Base_Weapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFiestaBoyz_Base_Weapon_C::ExecuteUbergraph_FiestaBoyz_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiestaBoyz_Base_Weapon.FiestaBoyz_Base_Weapon_C.ExecuteUbergraph_FiestaBoyz_Base_Weapon");

	AFiestaBoyz_Base_Weapon_C_ExecuteUbergraph_FiestaBoyz_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
