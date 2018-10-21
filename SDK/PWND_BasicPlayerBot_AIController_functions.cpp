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

// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.UpdateBlackboard
// (Public, BlueprintCallable, BlueprintEvent)

void ABasicPlayerBot_AIController_C::UpdateBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.UpdateBlackboard");

	ABasicPlayerBot_AIController_C_UpdateBlackboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABasicPlayerBot_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.UserConstructionScript");

	ABasicPlayerBot_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABasicPlayerBot_AIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ReceiveBeginPlay");

	ABasicPlayerBot_AIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasicPlayerBot_AIController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ReceiveTick");

	ABasicPlayerBot_AIController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ExecuteUbergraph_BasicPlayerBot_AIController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABasicPlayerBot_AIController_C::ExecuteUbergraph_BasicPlayerBot_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ExecuteUbergraph_BasicPlayerBot_AIController");

	ABasicPlayerBot_AIController_C_ExecuteUbergraph_BasicPlayerBot_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
