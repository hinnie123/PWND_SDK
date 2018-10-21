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

// Function Base_PickupHealth.Base_PickupHealth_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_PickupHealth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PickupHealth.Base_PickupHealth_C.UserConstructionScript");

	ABase_PickupHealth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PickupHealth.Base_PickupHealth_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_PickupHealth_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PickupHealth.Base_PickupHealth_C.ReceiveTick");

	ABase_PickupHealth_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PickupHealth.Base_PickupHealth_C.OnPickedUp
// (Event, Public, BlueprintEvent)

void ABase_PickupHealth_C::OnPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PickupHealth.Base_PickupHealth_C.OnPickedUp");

	ABase_PickupHealth_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_PickupHealth.Base_PickupHealth_C.ExecuteUbergraph_Base_PickupHealth
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_PickupHealth_C::ExecuteUbergraph_Base_PickupHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_PickupHealth.Base_PickupHealth_C.ExecuteUbergraph_Base_PickupHealth");

	ABase_PickupHealth_C_ExecuteUbergraph_Base_PickupHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
