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

// Function G11_Pent.G11_Pent_C.OnPanelDamaged
// (Event, Public, BlueprintEvent)

void UG11_Pent_C::OnPanelDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function G11_Pent.G11_Pent_C.OnPanelDamaged");

	UG11_Pent_C_OnPanelDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function G11_Pent.G11_Pent_C.ExecuteUbergraph_G11_Pent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UG11_Pent_C::ExecuteUbergraph_G11_Pent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function G11_Pent.G11_Pent_C.ExecuteUbergraph_G11_Pent");

	UG11_Pent_C_ExecuteUbergraph_G11_Pent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
