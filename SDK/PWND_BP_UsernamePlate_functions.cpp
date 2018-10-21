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

// Function BP_UsernamePlate.BP_UsernamePlate_C.UpdateUsername
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UsernamePlate_C::UpdateUsername(const struct FText& UserName, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UsernamePlate.BP_UsernamePlate_C.UpdateUsername");

	UBP_UsernamePlate_C_UpdateUsername_Params params;
	params.UserName = UserName;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UsernamePlate.BP_UsernamePlate_C.ExecuteUbergraph_BP_UsernamePlate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UsernamePlate_C::ExecuteUbergraph_BP_UsernamePlate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UsernamePlate.BP_UsernamePlate_C.ExecuteUbergraph_BP_UsernamePlate");

	UBP_UsernamePlate_C_ExecuteUbergraph_BP_UsernamePlate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
