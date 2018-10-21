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

// Function Transition_Effect.Transition_Effect_C.Play Effect
// (BlueprintCallable, BlueprintEvent)

void UTransition_Effect_C::Play_Effect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Transition_Effect.Transition_Effect_C.Play Effect");

	UTransition_Effect_C_Play_Effect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Transition_Effect.Transition_Effect_C.ExecuteUbergraph_Transition_Effect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTransition_Effect_C::ExecuteUbergraph_Transition_Effect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Transition_Effect.Transition_Effect_C.ExecuteUbergraph_Transition_Effect");

	UTransition_Effect_C_ExecuteUbergraph_Transition_Effect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
