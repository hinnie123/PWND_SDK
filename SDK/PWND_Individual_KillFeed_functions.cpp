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

// Function Individual_KillFeed.Individual_KillFeed_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Person                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeSpan                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIndividual_KillFeed_C::Init(const struct FText& Action, class UObject* Person, float LifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Individual_KillFeed.Individual_KillFeed_C.Init");

	UIndividual_KillFeed_C_Init_Params params;
	params.Action = Action;
	params.Person = Person;
	params.LifeSpan = LifeSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
