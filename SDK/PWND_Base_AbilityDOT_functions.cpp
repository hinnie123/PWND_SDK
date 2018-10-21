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

// Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBase_AbilityDOT_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveBeginPlay");

	UBase_AbilityDOT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_AbilityDOT_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveEndPlay");

	UBase_AbilityDOT_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_AbilityDOT_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveTick");

	UBase_AbilityDOT_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_AbilityDOT.Base_AbilityDOT_C.ExecuteUbergraph_Base_AbilityDOT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBase_AbilityDOT_C::ExecuteUbergraph_Base_AbilityDOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_AbilityDOT.Base_AbilityDOT_C.ExecuteUbergraph_Base_AbilityDOT");

	UBase_AbilityDOT_C_ExecuteUbergraph_Base_AbilityDOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
