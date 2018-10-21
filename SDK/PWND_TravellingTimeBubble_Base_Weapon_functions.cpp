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

// Function TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATravellingTimeBubble_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C.UserConstructionScript");

	ATravellingTimeBubble_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void ATravellingTimeBubble_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C.OnWeaponFire");

	ATravellingTimeBubble_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C.OnUpgraded
// (Event, Protected, BlueprintEvent)

void ATravellingTimeBubble_Base_Weapon_C::OnUpgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C.OnUpgraded");

	ATravellingTimeBubble_Base_Weapon_C_OnUpgraded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C.ExecuteUbergraph_TravellingTimeBubble_Base_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATravellingTimeBubble_Base_Weapon_C::ExecuteUbergraph_TravellingTimeBubble_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TravellingTimeBubble_Base_Weapon.TravellingTimeBubble_Base_Weapon_C.ExecuteUbergraph_TravellingTimeBubble_Base_Weapon");

	ATravellingTimeBubble_Base_Weapon_C_ExecuteUbergraph_TravellingTimeBubble_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
