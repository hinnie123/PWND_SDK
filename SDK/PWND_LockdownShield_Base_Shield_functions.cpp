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

// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALockdownShield_Base_Shield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.UserConstructionScript");

	ALockdownShield_Base_Shield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALockdownShield_Base_Shield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveBeginPlay");

	ALockdownShield_Base_Shield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Shield_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveTick");

	ALockdownShield_Base_Shield_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Shield_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveActorBeginOverlap");

	ALockdownShield_Base_Shield_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ExecuteUbergraph_LockdownShield_Base_Shield
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALockdownShield_Base_Shield_C::ExecuteUbergraph_LockdownShield_Base_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ExecuteUbergraph_LockdownShield_Base_Shield");

	ALockdownShield_Base_Shield_C_ExecuteUbergraph_LockdownShield_Base_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
