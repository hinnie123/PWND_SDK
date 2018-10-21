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

// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.GetBot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndCharacter*          Bot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::GetBot(class APwndCharacter** Bot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.GetBot");

	APwngineer_Primary01_Base_Weapon_C_GetBot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bot != nullptr)
		*Bot = params.Bot;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      InIcon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::SetIcon(class UMaterialInterface* InIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.SetIcon");

	APwngineer_Primary01_Base_Weapon_C_SetIcon_Params params;
	params.InIcon = InIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.SetTextLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void APwngineer_Primary01_Base_Weapon_C::SetTextLine(int Index, const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.SetTextLine");

	APwngineer_Primary01_Base_Weapon_C_SetTextLine_Params params;
	params.Index = Index;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.RenderLCD_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 inCanvas                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::RenderLCD_Internal(class UCanvas* inCanvas, const struct FVector2D& InSize, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.RenderLCD_Internal");

	APwngineer_Primary01_Base_Weapon_C_RenderLCD_Internal_Params params;
	params.inCanvas = inCanvas;
	params.InSize = InSize;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.UpdateLCD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::UpdateLCD(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.UpdateLCD");

	APwngineer_Primary01_Base_Weapon_C_UpdateLCD_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.RenderLCD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::RenderLCD(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.RenderLCD");

	APwngineer_Primary01_Base_Weapon_C_RenderLCD_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APwngineer_Primary01_Base_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.UserConstructionScript");

	APwngineer_Primary01_Base_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APwngineer_Primary01_Base_Weapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ReceiveBeginPlay");

	APwngineer_Primary01_Base_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ReceiveTick");

	APwngineer_Primary01_Base_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponFire
// (Event, Public, BlueprintEvent)

void APwngineer_Primary01_Base_Weapon_C::OnWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponFire");

	APwngineer_Primary01_Base_Weapon_C_OnWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponAmmoCountChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           OldAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::OnWeaponAmmoCountChanged(int* OldAmmoCount, int* NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponAmmoCountChanged");

	APwngineer_Primary01_Base_Weapon_C_OnWeaponAmmoCountChanged_Params params;
	params.OldAmmoCount = OldAmmoCount;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStartReload
// (Event, Public, BlueprintEvent)

void APwngineer_Primary01_Base_Weapon_C::OnWeaponStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStartReload");

	APwngineer_Primary01_Base_Weapon_C_OnWeaponStartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnUpgraded
// (Event, Protected, BlueprintEvent)

void APwngineer_Primary01_Base_Weapon_C::OnUpgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnUpgraded");

	APwngineer_Primary01_Base_Weapon_C_OnUpgraded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStartCharging
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInitialCharge                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::OnWeaponStartCharging(bool* bInitialCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStartCharging");

	APwngineer_Primary01_Base_Weapon_C_OnWeaponStartCharging_Params params;
	params.bInitialCharge = bInitialCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStopCharging
// (Event, Public, BlueprintEvent)

void APwngineer_Primary01_Base_Weapon_C::OnWeaponStopCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.OnWeaponStopCharging");

	APwngineer_Primary01_Base_Weapon_C_OnWeaponStopCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ExecuteUbergraph_Pwngineer_Primary01_Base_Weapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APwngineer_Primary01_Base_Weapon_C::ExecuteUbergraph_Pwngineer_Primary01_Base_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C.ExecuteUbergraph_Pwngineer_Primary01_Base_Weapon");

	APwngineer_Primary01_Base_Weapon_C_ExecuteUbergraph_Pwngineer_Primary01_Base_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
