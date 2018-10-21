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

// Function KillFeed.KillFeed_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeSpan                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillFeed_C::Init(class UObject* Killer, class UObject* Killed, float LifeSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.Init");

	UKillFeed_C_Init_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.LifeSpan = LifeSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillFeed.KillFeed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKillFeed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.Construct");

	UKillFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillFeed_C::ExecuteUbergraph_KillFeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed");

	UKillFeed_C_ExecuteUbergraph_KillFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
