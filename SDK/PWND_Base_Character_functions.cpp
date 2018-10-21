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

// Function Base_Character.Base_Character_C.RenderTempWorldUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABase_Character_C::RenderTempWorldUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.RenderTempWorldUI");

	ABase_Character_C_RenderTempWorldUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.TickHealthFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::TickHealthFX(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.TickHealthFX");

	ABase_Character_C_TickHealthFX_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.IsLocalPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocalPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::IsLocalPlayer(bool* IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.IsLocalPlayer");

	ABase_Character_C_IsLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = params.IsLocalPlayer;
}


// Function Base_Character.Base_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.UserConstructionScript");

	ABase_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnRocketJumpFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanRocketJump                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRocketJumpFailed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::OnRocketJumpFailed(bool* bCanRocketJump, bool* bRocketJumpFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnRocketJumpFailed");

	ABase_Character_C_OnRocketJumpFailed_Params params;
	params.bCanRocketJump = bCanRocketJump;
	params.bRocketJumpFailed = bRocketJumpFailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnSpecialMovementFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bAllowSpecialMove              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSpecialMoveFailed             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::OnSpecialMovementFailed(bool* bAllowSpecialMove, bool* bSpecialMoveFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnSpecialMovementFailed");

	ABase_Character_C_OnSpecialMovementFailed_Params params;
	params.bAllowSpecialMove = bAllowSpecialMove;
	params.bSpecialMoveFailed = bSpecialMoveFailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABase_Character_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.ReceiveBeginPlay");

	ABase_Character_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.ReceiveTick");

	ABase_Character_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnUpdateGibbed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsGibbed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::OnUpdateGibbed(bool* bIsGibbed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnUpdateGibbed");

	ABase_Character_C_OnUpdateGibbed_Params params;
	params.bIsGibbed = bIsGibbed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnRocketJump
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FReplicatedRocketJump*  JumpInfo                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABase_Character_C::OnRocketJump(struct FReplicatedRocketJump* JumpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnRocketJump");

	ABase_Character_C_OnRocketJump_Params params;
	params.JumpInfo = JumpInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnDamageReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPwndReplicatedDamageEvent* DamageEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABase_Character_C::OnDamageReceived(struct FPwndReplicatedDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnDamageReceived");

	ABase_Character_C_OnDamageReceived_Params params;
	params.DamageEvent = DamageEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnWeaponFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndWeapon**            FiredWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::OnWeaponFire(class APwndWeapon** FiredWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnWeaponFire");

	ABase_Character_C_OnWeaponFire_Params params;
	params.FiredWeapon = FiredWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnHeatStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EeHeatStatus>*     NewHeatStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeHeatStatus>*     OldHeatStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::OnHeatStatusChanged(TEnumAsByte<EeHeatStatus>* NewHeatStatus, TEnumAsByte<EeHeatStatus>* OldHeatStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnHeatStatusChanged");

	ABase_Character_C_OnHeatStatusChanged_Params params;
	params.NewHeatStatus = NewHeatStatus;
	params.OldHeatStatus = OldHeatStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnCompletedActionStateUpdated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<EePawnActionState>* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndCharacterActionCompletion* ActionCompleted                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABase_Character_C::OnCompletedActionStateUpdated(TEnumAsByte<EePawnActionState>* State, bool* bSuccess, struct FPwndCharacterActionCompletion* ActionCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnCompletedActionStateUpdated");

	ABase_Character_C_OnCompletedActionStateUpdated_Params params;
	params.State = State;
	params.bSuccess = bSuccess;
	params.ActionCompleted = ActionCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.OnAwardRank
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           NewRank                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLocal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::OnAwardRank(int* NewRank, bool* bLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.OnAwardRank");

	ABase_Character_C_OnAwardRank_Params params;
	params.NewRank = NewRank;
	params.bLocal = bLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Character.Base_Character_C.ExecuteUbergraph_Base_Character
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Character_C::ExecuteUbergraph_Base_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Character.Base_Character_C.ExecuteUbergraph_Base_Character");

	ABase_Character_C_ExecuteUbergraph_Base_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
