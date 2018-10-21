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

// Function BP_ActionPanel_PWNEE_Buffy.BP_ActionPanel_PWNEE_Buffy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ActionPanel_PWNEE_Buffy_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionPanel_PWNEE_Buffy.BP_ActionPanel_PWNEE_Buffy_C.Construct");

	UBP_ActionPanel_PWNEE_Buffy_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionPanel_PWNEE_Buffy.BP_ActionPanel_PWNEE_Buffy_C.ExecuteUbergraph_BP_ActionPanel_PWNEE_Buffy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ActionPanel_PWNEE_Buffy_C::ExecuteUbergraph_BP_ActionPanel_PWNEE_Buffy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionPanel_PWNEE_Buffy.BP_ActionPanel_PWNEE_Buffy_C.ExecuteUbergraph_BP_ActionPanel_PWNEE_Buffy");

	UBP_ActionPanel_PWNEE_Buffy_C_ExecuteUbergraph_BP_ActionPanel_PWNEE_Buffy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
