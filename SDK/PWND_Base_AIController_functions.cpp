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

// Function Base_AIController.Base_AIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AIController.Base_AIController_C.UserConstructionScript");

	ABase_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AIController.Base_AIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABase_AIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AIController.Base_AIController_C.ReceiveBeginPlay");

	ABase_AIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AIController.Base_AIController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_AIController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AIController.Base_AIController_C.ReceiveTick");

	ABase_AIController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AIController.Base_AIController_C.ExecuteUbergraph_Base_AIController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_AIController_C::ExecuteUbergraph_Base_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AIController.Base_AIController_C.ExecuteUbergraph_Base_AIController");

	ABase_AIController_C_ExecuteUbergraph_Base_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
