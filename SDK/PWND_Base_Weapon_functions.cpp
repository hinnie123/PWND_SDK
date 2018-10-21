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

// Function Base_Weapon.Base_Weapon_C.GetMuzzleFlashAttachComp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bFirstPerson                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Comp                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABase_Weapon_C::GetMuzzleFlashAttachComp(bool bFirstPerson, class USceneComponent** Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.GetMuzzleFlashAttachComp");

	ABase_Weapon_C_GetMuzzleFlashAttachComp_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Comp != nullptr)
		*Comp = params.Comp;
}


// Function Base_Weapon.Base_Weapon_C.SpawnFX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  FXClass                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APwndFX*                 PrevInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bKillFX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachParent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APwndFX*                 SpawnedFX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABase_Weapon_C::SpawnFX(class UClass* FXClass, class APwndFX* PrevInstance, bool bKillFX, class USceneComponent* AttachParent, const struct FName& SocketName, class APwndFX** SpawnedFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.SpawnFX");

	ABase_Weapon_C_SpawnFX_Params params;
	params.FXClass = FXClass;
	params.PrevInstance = PrevInstance;
	params.bKillFX = bKillFX;
	params.AttachParent = AttachParent;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedFX != nullptr)
		*SpawnedFX = params.SpawnedFX;
}


// Function Base_Weapon.Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.UserConstructionScript");

	ABase_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Weapon.Base_Weapon_C.OnPlayRocketJump
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Impulse                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FReplicatedRocketJump*  ReplicatedRocketJump           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABase_Weapon_C::OnPlayRocketJump(struct FVector* Impulse, struct FReplicatedRocketJump* ReplicatedRocketJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.OnPlayRocketJump");

	ABase_Weapon_C_OnPlayRocketJump_Params params;
	params.Impulse = Impulse;
	params.ReplicatedRocketJump = ReplicatedRocketJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Weapon.Base_Weapon_C.OnWeaponStartReload
// (Event, Public, BlueprintEvent)

void ABase_Weapon_C::OnWeaponStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.OnWeaponStartReload");

	ABase_Weapon_C_OnWeaponStartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Weapon.Base_Weapon_C.AbilityWeaponFired
// (BlueprintCallable, BlueprintEvent)

void ABase_Weapon_C::AbilityWeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.AbilityWeaponFired");

	ABase_Weapon_C_AbilityWeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Weapon.Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void ABase_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.OnWeaponFire");

	ABase_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Weapon.Base_Weapon_C.OnPostEventTrigger
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<EeEventTrigger>*   Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>*        Others                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABase_Weapon_C::OnPostEventTrigger(TEnumAsByte<EeEventTrigger>* Trigger, float* Count, TArray<class UObject*>* Others)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.OnPostEventTrigger");

	ABase_Weapon_C_OnPostEventTrigger_Params params;
	params.Trigger = Trigger;
	params.Count = Count;
	params.Others = Others;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Weapon.Base_Weapon_C.ExecuteUbergraph_Base_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Weapon_C::ExecuteUbergraph_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Weapon.Base_Weapon_C.ExecuteUbergraph_Base_Weapon");

	ABase_Weapon_C_ExecuteUbergraph_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
