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

// Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_RocketJump_TP_MuzzleFlash_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.UserConstructionScript");

	ABase_RocketJump_TP_MuzzleFlash_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABase_RocketJump_TP_MuzzleFlash_FX_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.Timeline_0__FinishedFunc");

	ABase_RocketJump_TP_MuzzleFlash_FX_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABase_RocketJump_TP_MuzzleFlash_FX_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.Timeline_0__UpdateFunc");

	ABase_RocketJump_TP_MuzzleFlash_FX_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABase_RocketJump_TP_MuzzleFlash_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.ReceiveBeginPlay");

	ABase_RocketJump_TP_MuzzleFlash_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_RocketJump_TP_MuzzleFlash_FX_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.OnSetActive");

	ABase_RocketJump_TP_MuzzleFlash_FX_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.OnSetTeamNum
// (Event, Protected, BlueprintEvent)
// Parameters:
// unsigned char*                 OldTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_RocketJump_TP_MuzzleFlash_FX_C::OnSetTeamNum(unsigned char* OldTeamNum, unsigned char* NewTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.OnSetTeamNum");

	ABase_RocketJump_TP_MuzzleFlash_FX_C_OnSetTeamNum_Params params;
	params.OldTeamNum = OldTeamNum;
	params.NewTeamNum = NewTeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.ExecuteUbergraph_Base_RocketJump_TP_MuzzleFlash_FX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_RocketJump_TP_MuzzleFlash_FX_C::ExecuteUbergraph_Base_RocketJump_TP_MuzzleFlash_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_RocketJump_TP_MuzzleFlash_FX.Base_RocketJump_TP_MuzzleFlash_FX_C.ExecuteUbergraph_Base_RocketJump_TP_MuzzleFlash_FX");

	ABase_RocketJump_TP_MuzzleFlash_FX_C_ExecuteUbergraph_Base_RocketJump_TP_MuzzleFlash_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
