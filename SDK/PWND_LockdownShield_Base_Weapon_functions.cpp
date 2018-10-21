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

// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALockdownShield_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.UserConstructionScript");

	ALockdownShield_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALockdownShield_Base_Weapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveBeginPlay");

	ALockdownShield_Base_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveTick");

	ALockdownShield_Base_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void ALockdownShield_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponFire");

	ALockdownShield_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponAmmoCountChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           OldAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Weapon_C::OnWeaponAmmoCountChanged(int* OldAmmoCount, int* NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponAmmoCountChanged");

	ALockdownShield_Base_Weapon_C_OnWeaponAmmoCountChanged_Params params;
	params.OldAmmoCount = OldAmmoCount;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponStartReload
// (Event, Public, BlueprintEvent)

void ALockdownShield_Base_Weapon_C::OnWeaponStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnWeaponStartReload");

	ALockdownShield_Base_Weapon_C_OnWeaponStartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnUpgraded
// (Event, Protected, BlueprintEvent)

void ALockdownShield_Base_Weapon_C::OnUpgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.OnUpgraded");

	ALockdownShield_Base_Weapon_C_OnUpgraded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Weapon_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ReceiveEndPlay");

	ALockdownShield_Base_Weapon_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ExecuteUbergraph_LockdownShield_Base_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Weapon_C::ExecuteUbergraph_LockdownShield_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Weapon.LockdownShield_Base_Weapon_C.ExecuteUbergraph_LockdownShield_Base_Weapon");

	ALockdownShield_Base_Weapon_C_ExecuteUbergraph_LockdownShield_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
