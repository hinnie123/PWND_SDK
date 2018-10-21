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

// Function PwndStuntSeq_Carry.PwndStuntSeq_Carry_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPwndStuntSeq_Carry_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndStuntSeq_Carry.PwndStuntSeq_Carry_C.OnTick");

	UPwndStuntSeq_Carry_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PwndStuntSeq_Carry.PwndStuntSeq_Carry_C.ExecuteUbergraph_PwndStuntSeq_Carry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPwndStuntSeq_Carry_C::ExecuteUbergraph_PwndStuntSeq_Carry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PwndStuntSeq_Carry.PwndStuntSeq_Carry_C.ExecuteUbergraph_PwndStuntSeq_Carry");

	UPwndStuntSeq_Carry_C_ExecuteUbergraph_PwndStuntSeq_Carry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
