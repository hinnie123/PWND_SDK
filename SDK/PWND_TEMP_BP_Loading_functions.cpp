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

// Function TEMP_BP_Loading.TEMP_BP_Loading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTEMP_BP_Loading_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEMP_BP_Loading.TEMP_BP_Loading_C.Construct");

	UTEMP_BP_Loading_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEMP_BP_Loading.TEMP_BP_Loading_C.ExecuteUbergraph_TEMP_BP_Loading
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTEMP_BP_Loading_C::ExecuteUbergraph_TEMP_BP_Loading(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEMP_BP_Loading.TEMP_BP_Loading_C.ExecuteUbergraph_TEMP_BP_Loading");

	UTEMP_BP_Loading_C_ExecuteUbergraph_TEMP_BP_Loading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
