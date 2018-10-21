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

// Function Ninja_Sword_Damage_Indicator.Ninja_Sword_Damage_Indicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNinja_Sword_Damage_Indicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Damage_Indicator.Ninja_Sword_Damage_Indicator_C.Construct");

	UNinja_Sword_Damage_Indicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Damage_Indicator.Ninja_Sword_Damage_Indicator_C.ExecuteUbergraph_Ninja_Sword_Damage_Indicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNinja_Sword_Damage_Indicator_C::ExecuteUbergraph_Ninja_Sword_Damage_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Damage_Indicator.Ninja_Sword_Damage_Indicator_C.ExecuteUbergraph_Ninja_Sword_Damage_Indicator");

	UNinja_Sword_Damage_Indicator_C_ExecuteUbergraph_Ninja_Sword_Damage_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
