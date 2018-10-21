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

// Function PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APopGun_FP_MuzzleFlash_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C.UserConstructionScript");

	APopGun_FP_MuzzleFlash_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APopGun_FP_MuzzleFlash_FX_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C.OnSetActive");

	APopGun_FP_MuzzleFlash_FX_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APopGun_FP_MuzzleFlash_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C.ReceiveBeginPlay");

	APopGun_FP_MuzzleFlash_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C.ExecuteUbergraph_PopGun_FP_MuzzleFlash_FX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APopGun_FP_MuzzleFlash_FX_C::ExecuteUbergraph_PopGun_FP_MuzzleFlash_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopGun_FP_MuzzleFlash_FX.PopGun_FP_MuzzleFlash_FX_C.ExecuteUbergraph_PopGun_FP_MuzzleFlash_FX");

	APopGun_FP_MuzzleFlash_FX_C_ExecuteUbergraph_PopGun_FP_MuzzleFlash_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
