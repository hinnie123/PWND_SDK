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

// Function BP_BindingOverlay.BP_BindingOverlay_C.Set Action
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BindingOverlay_C::Set_Action(const struct FText& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BindingOverlay.BP_BindingOverlay_C.Set Action");

	UBP_BindingOverlay_C_Set_Action_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BindingOverlay.BP_BindingOverlay_C.ExecuteUbergraph_BP_BindingOverlay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BindingOverlay_C::ExecuteUbergraph_BP_BindingOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BindingOverlay.BP_BindingOverlay_C.ExecuteUbergraph_BP_BindingOverlay");

	UBP_BindingOverlay_C_ExecuteUbergraph_BP_BindingOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
