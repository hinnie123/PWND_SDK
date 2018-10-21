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

// Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGooBomb_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.UserConstructionScript");

	AGooBomb_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGooBomb_Base_Weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.ReceiveTick");

	AGooBomb_Base_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void AGooBomb_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.OnWeaponFire");

	AGooBomb_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.ExecuteUbergraph_GooBomb_Base_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGooBomb_Base_Weapon_C::ExecuteUbergraph_GooBomb_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_Weapon.GooBomb_Base_Weapon_C.ExecuteUbergraph_GooBomb_Base_Weapon");

	AGooBomb_Base_Weapon_C_ExecuteUbergraph_GooBomb_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
