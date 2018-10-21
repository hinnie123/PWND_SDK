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

// Function BP_PostMatchAward.BP_PostMatchAward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PostMatchAward_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchAward.BP_PostMatchAward_C.Construct");

	UBP_PostMatchAward_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchAward.BP_PostMatchAward_C.Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Last                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatchAward_C::Spawn(float Delay, bool Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchAward.BP_PostMatchAward_C.Spawn");

	UBP_PostMatchAward_C_Spawn_Params params;
	params.Delay = Delay;
	params.Last = Last;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchAward.BP_PostMatchAward_C.SetAccolade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Place                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatchAward_C::SetAccolade(int Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchAward.BP_PostMatchAward_C.SetAccolade");

	UBP_PostMatchAward_C_SetAccolade_Params params;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchAward.BP_PostMatchAward_C.ExecuteUbergraph_BP_PostMatchAward
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatchAward_C::ExecuteUbergraph_BP_PostMatchAward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchAward.BP_PostMatchAward_C.ExecuteUbergraph_BP_PostMatchAward");

	UBP_PostMatchAward_C_ExecuteUbergraph_BP_PostMatchAward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
