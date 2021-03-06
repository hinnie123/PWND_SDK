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

// Function Pwngineer_AnimBP.Pwngineer_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPwngineer_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_AnimBP.Pwngineer_AnimBP_C.BlueprintUpdateAnimation");

	UPwngineer_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pwngineer_AnimBP.Pwngineer_AnimBP_C.ExecuteUbergraph_Pwngineer_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPwngineer_AnimBP_C::ExecuteUbergraph_Pwngineer_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pwngineer_AnimBP.Pwngineer_AnimBP_C.ExecuteUbergraph_Pwngineer_AnimBP");

	UPwngineer_AnimBP_C_ExecuteUbergraph_Pwngineer_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
