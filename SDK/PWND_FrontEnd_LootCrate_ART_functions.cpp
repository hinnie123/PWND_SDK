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

// Function FrontEnd_LootCrate_ART.FrontEnd_LootCrate_ART_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontEnd_LootCrate_ART_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate_ART.FrontEnd_LootCrate_ART_C.ReceiveBeginPlay");

	AFrontEnd_LootCrate_ART_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate_ART.FrontEnd_LootCrate_ART_C.ExecuteUbergraph_FrontEnd_LootCrate_ART
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_LootCrate_ART_C::ExecuteUbergraph_FrontEnd_LootCrate_ART(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate_ART.FrontEnd_LootCrate_ART_C.ExecuteUbergraph_FrontEnd_LootCrate_ART");

	AFrontEnd_LootCrate_ART_C_ExecuteUbergraph_FrontEnd_LootCrate_ART_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
