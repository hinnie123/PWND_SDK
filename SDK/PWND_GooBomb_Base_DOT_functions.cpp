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

// Function GooBomb_Base_DOT.GooBomb_Base_DOT_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGooBomb_Base_DOT_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_DOT.GooBomb_Base_DOT_C.ReceiveTick");

	UGooBomb_Base_DOT_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooBomb_Base_DOT.GooBomb_Base_DOT_C.ExecuteUbergraph_GooBomb_Base_DOT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGooBomb_Base_DOT_C::ExecuteUbergraph_GooBomb_Base_DOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GooBomb_Base_DOT.GooBomb_Base_DOT_C.ExecuteUbergraph_GooBomb_Base_DOT");

	UGooBomb_Base_DOT_C_ExecuteUbergraph_GooBomb_Base_DOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
