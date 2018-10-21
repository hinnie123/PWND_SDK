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

// Function Base_AbilityWeapon.Base_AbilityWeapon_C.GetMuzzleFlashAttachComp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bFirstPerson                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Comp                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABase_AbilityWeapon_C::GetMuzzleFlashAttachComp(bool bFirstPerson, class USceneComponent** Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityWeapon.Base_AbilityWeapon_C.GetMuzzleFlashAttachComp");

	ABase_AbilityWeapon_C_GetMuzzleFlashAttachComp_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Comp != nullptr)
		*Comp = params.Comp;
}


// Function Base_AbilityWeapon.Base_AbilityWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_AbilityWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityWeapon.Base_AbilityWeapon_C.UserConstructionScript");

	ABase_AbilityWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AbilityWeapon.Base_AbilityWeapon_C.OnUpgraded
// (Event, Protected, BlueprintEvent)

void ABase_AbilityWeapon_C::OnUpgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityWeapon.Base_AbilityWeapon_C.OnUpgraded");

	ABase_AbilityWeapon_C_OnUpgraded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AbilityWeapon.Base_AbilityWeapon_C.OnWeaponFailedFire
// (Event, Public, BlueprintEvent)

void ABase_AbilityWeapon_C::OnWeaponFailedFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityWeapon.Base_AbilityWeapon_C.OnWeaponFailedFire");

	ABase_AbilityWeapon_C_OnWeaponFailedFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AbilityWeapon.Base_AbilityWeapon_C.ExecuteUbergraph_Base_AbilityWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_AbilityWeapon_C::ExecuteUbergraph_Base_AbilityWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityWeapon.Base_AbilityWeapon_C.ExecuteUbergraph_Base_AbilityWeapon");

	ABase_AbilityWeapon_C_ExecuteUbergraph_Base_AbilityWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
