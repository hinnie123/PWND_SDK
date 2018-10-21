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

// Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_AI_Controller_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.UserConstructionScript");

	ABase_AI_Controller_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABase_AI_Controller_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ReceiveBeginPlay");

	ABase_AI_Controller_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_AI_Controller_Player_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ReceiveTick");

	ABase_AI_Controller_Player_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ExecuteUbergraph_Base_AI_Controller_Player
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_AI_Controller_Player_C::ExecuteUbergraph_Base_AI_Controller_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ExecuteUbergraph_Base_AI_Controller_Player");

	ABase_AI_Controller_Player_C_ExecuteUbergraph_Base_AI_Controller_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
