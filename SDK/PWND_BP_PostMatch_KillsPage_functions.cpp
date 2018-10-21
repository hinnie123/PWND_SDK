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

// Function BP_PostMatch_KillsPage.BP_PostMatch_KillsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PostMatch_KillsPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_KillsPage.BP_PostMatch_KillsPage_C.Construct");

	UBP_PostMatch_KillsPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_KillsPage.BP_PostMatch_KillsPage_C.ExecuteUbergraph_BP_PostMatch_KillsPage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_KillsPage_C::ExecuteUbergraph_BP_PostMatch_KillsPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_KillsPage.BP_PostMatch_KillsPage_C.ExecuteUbergraph_BP_PostMatch_KillsPage");

	UBP_PostMatch_KillsPage_C_ExecuteUbergraph_BP_PostMatch_KillsPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
