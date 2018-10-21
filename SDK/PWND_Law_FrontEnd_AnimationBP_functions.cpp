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

// Function Law_FrontEnd_AnimationBP.Law_FrontEnd_AnimationBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULaw_FrontEnd_AnimationBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_FrontEnd_AnimationBP.Law_FrontEnd_AnimationBP_C.BlueprintUpdateAnimation");

	ULaw_FrontEnd_AnimationBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_FrontEnd_AnimationBP.Law_FrontEnd_AnimationBP_C.ExecuteUbergraph_Law_FrontEnd_AnimationBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULaw_FrontEnd_AnimationBP_C::ExecuteUbergraph_Law_FrontEnd_AnimationBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_FrontEnd_AnimationBP.Law_FrontEnd_AnimationBP_C.ExecuteUbergraph_Law_FrontEnd_AnimationBP");

	ULaw_FrontEnd_AnimationBP_C_ExecuteUbergraph_Law_FrontEnd_AnimationBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
