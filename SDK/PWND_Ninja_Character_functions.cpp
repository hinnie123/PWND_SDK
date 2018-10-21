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

// Function Ninja_Character.Ninja_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANinja_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Character.Ninja_Character_C.UserConstructionScript");

	ANinja_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Character.Ninja_Character_C.OnWeaponFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndWeapon**            FiredWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Character_C::OnWeaponFire(class APwndWeapon** FiredWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Character.Ninja_Character_C.OnWeaponFire");

	ANinja_Character_C_OnWeaponFire_Params params;
	params.FiredWeapon = FiredWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Character.Ninja_Character_C.ExecuteUbergraph_Ninja_Character
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Character_C::ExecuteUbergraph_Ninja_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Character.Ninja_Character_C.ExecuteUbergraph_Ninja_Character");

	ANinja_Character_C_ExecuteUbergraph_Ninja_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
