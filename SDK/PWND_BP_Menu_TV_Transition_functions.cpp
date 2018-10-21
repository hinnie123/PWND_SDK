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

// Function BP_Menu_TV_Transition.BP_Menu_TV_Transition_C.Constrain Aspect Ratio
// (BlueprintCallable, BlueprintEvent)

void UBP_Menu_TV_Transition_C::Constrain_Aspect_Ratio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_TV_Transition.BP_Menu_TV_Transition_C.Constrain Aspect Ratio");

	UBP_Menu_TV_Transition_C_Constrain_Aspect_Ratio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_TV_Transition.BP_Menu_TV_Transition_C.Revert Aspect Ratio
// (BlueprintCallable, BlueprintEvent)

void UBP_Menu_TV_Transition_C::Revert_Aspect_Ratio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_TV_Transition.BP_Menu_TV_Transition_C.Revert Aspect Ratio");

	UBP_Menu_TV_Transition_C_Revert_Aspect_Ratio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_TV_Transition.BP_Menu_TV_Transition_C.ExecuteUbergraph_BP_Menu_TV_Transition
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Menu_TV_Transition_C::ExecuteUbergraph_BP_Menu_TV_Transition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_TV_Transition.BP_Menu_TV_Transition_C.ExecuteUbergraph_BP_Menu_TV_Transition");

	UBP_Menu_TV_Transition_C_ExecuteUbergraph_BP_Menu_TV_Transition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
