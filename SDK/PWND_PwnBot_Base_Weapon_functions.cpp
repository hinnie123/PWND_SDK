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

// Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.GetLoadoutViewAccessories
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> APwnBot_Base_Weapon_C::GetLoadoutViewAccessories()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.GetLoadoutViewAccessories");

	APwnBot_Base_Weapon_C_GetLoadoutViewAccessories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APwnBot_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.UserConstructionScript");

	APwnBot_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void APwnBot_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.OnWeaponFire");

	APwnBot_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.ExecuteUbergraph_PwnBot_Base_Weapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwnBot_Base_Weapon_C::ExecuteUbergraph_PwnBot_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwnBot_Base_Weapon.PwnBot_Base_Weapon_C.ExecuteUbergraph_PwnBot_Base_Weapon");

	APwnBot_Base_Weapon_C_ExecuteUbergraph_PwnBot_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
