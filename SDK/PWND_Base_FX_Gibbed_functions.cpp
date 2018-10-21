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

// Function Base_FX_Gibbed.Base_FX_Gibbed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_FX_Gibbed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Gibbed.Base_FX_Gibbed_C.UserConstructionScript");

	ABase_FX_Gibbed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Gibbed.Base_FX_Gibbed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABase_FX_Gibbed_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Gibbed.Base_FX_Gibbed_C.ReceiveBeginPlay");

	ABase_FX_Gibbed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Gibbed.Base_FX_Gibbed_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_FX_Gibbed_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Gibbed.Base_FX_Gibbed_C.OnSetActive");

	ABase_FX_Gibbed_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FX_Gibbed.Base_FX_Gibbed_C.ExecuteUbergraph_Base_FX_Gibbed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_FX_Gibbed_C::ExecuteUbergraph_Base_FX_Gibbed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Gibbed.Base_FX_Gibbed_C.ExecuteUbergraph_Base_FX_Gibbed");

	ABase_FX_Gibbed_C_ExecuteUbergraph_Base_FX_Gibbed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
