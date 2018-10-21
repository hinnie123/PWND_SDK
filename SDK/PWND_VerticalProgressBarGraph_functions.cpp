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

// Function VerticalProgressBarGraph.VerticalProgressBarGraph_C.OnBarAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget**            newBarWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           teamAffiliationIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVerticalProgressBarGraph_C::OnBarAdded(class UUserWidget** newBarWidget, int* teamAffiliationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VerticalProgressBarGraph.VerticalProgressBarGraph_C.OnBarAdded");

	UVerticalProgressBarGraph_C_OnBarAdded_Params params;
	params.newBarWidget = newBarWidget;
	params.teamAffiliationIndex = teamAffiliationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VerticalProgressBarGraph.VerticalProgressBarGraph_C.ExecuteUbergraph_VerticalProgressBarGraph
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVerticalProgressBarGraph_C::ExecuteUbergraph_VerticalProgressBarGraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VerticalProgressBarGraph.VerticalProgressBarGraph_C.ExecuteUbergraph_VerticalProgressBarGraph");

	UVerticalProgressBarGraph_C_ExecuteUbergraph_VerticalProgressBarGraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
