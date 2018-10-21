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

// Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void USteroids_Base_DOT_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveBeginPlay");

	USteroids_Base_DOT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USteroids_Base_DOT_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveEndPlay");

	USteroids_Base_DOT_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USteroids_Base_DOT_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.ReceiveTick");

	USteroids_Base_DOT_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneAOE
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndAOE**               AOE                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USteroids_Base_DOT_C::OnTuneAOE(class APwndAOE** AOE)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneAOE");

	USteroids_Base_DOT_C_OnTuneAOE_Params params;
	params.AOE = AOE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneDOT
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPwndDOTComponent**      DOT                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USteroids_Base_DOT_C::OnTuneDOT(class UPwndDOTComponent** DOT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneDOT");

	USteroids_Base_DOT_C_OnTuneDOT_Params params;
	params.DOT = DOT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneProjectile
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndProjectile**        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USteroids_Base_DOT_C::OnTuneProjectile(class APwndProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneProjectile");

	USteroids_Base_DOT_C_OnTuneProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndCharacter**         Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USteroids_Base_DOT_C::OnTuneCharacter(class APwndCharacter** Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneCharacter");

	USteroids_Base_DOT_C_OnTuneCharacter_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneInventory
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndInventory**         Inv                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USteroids_Base_DOT_C::OnTuneInventory(class APwndInventory** Inv)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.OnTuneInventory");

	USteroids_Base_DOT_C_OnTuneInventory_Params params;
	params.Inv = Inv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steroids_Base_DOT.Steroids_Base_DOT_C.ExecuteUbergraph_Steroids_Base_DOT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USteroids_Base_DOT_C::ExecuteUbergraph_Steroids_Base_DOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steroids_Base_DOT.Steroids_Base_DOT_C.ExecuteUbergraph_Steroids_Base_DOT");

	USteroids_Base_DOT_C_ExecuteUbergraph_Steroids_Base_DOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
