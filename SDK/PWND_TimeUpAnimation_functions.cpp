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

// Function TimeUpAnimation.TimeUpAnimation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTimeUpAnimation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeUpAnimation.TimeUpAnimation_C.Construct");

	UTimeUpAnimation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeUpAnimation.TimeUpAnimation_C.ExecuteUbergraph_TimeUpAnimation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTimeUpAnimation_C::ExecuteUbergraph_TimeUpAnimation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeUpAnimation.TimeUpAnimation_C.ExecuteUbergraph_TimeUpAnimation");

	UTimeUpAnimation_C_ExecuteUbergraph_TimeUpAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeUpAnimation.TimeUpAnimation_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTimeUpAnimation_C::ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeUpAnimation.TimeUpAnimation_C.ButtonClicked__DelegateSignature");

	UTimeUpAnimation_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
