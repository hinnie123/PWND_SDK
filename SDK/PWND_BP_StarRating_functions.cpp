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

// Function BP_StarRating.BP_StarRating_C.Set Stars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StarRating_C::Set_Stars(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StarRating.BP_StarRating_C.Set Stars");

	UBP_StarRating_C_Set_Stars_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StarRating.BP_StarRating_C.ExecuteUbergraph_BP_StarRating
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StarRating_C::ExecuteUbergraph_BP_StarRating(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StarRating.BP_StarRating_C.ExecuteUbergraph_BP_StarRating");

	UBP_StarRating_C_ExecuteUbergraph_BP_StarRating_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
