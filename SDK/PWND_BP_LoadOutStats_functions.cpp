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

// Function BP_LoadOutStats.BP_LoadOutStats_C.Update Loadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPwndLoadout            Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LoadOutStats_C::Update_Loadout(const struct FPwndLoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadOutStats.BP_LoadOutStats_C.Update Loadout");

	UBP_LoadOutStats_C_Update_Loadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadOutStats.BP_LoadOutStats_C.Update Character
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_LoadOutStats_C::Update_Character(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadOutStats.BP_LoadOutStats_C.Update Character");

	UBP_LoadOutStats_C_Update_Character_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadOutStats.BP_LoadOutStats_C.HideInfoGuide
// (BlueprintCallable, BlueprintEvent)

void UBP_LoadOutStats_C::HideInfoGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadOutStats.BP_LoadOutStats_C.HideInfoGuide");

	UBP_LoadOutStats_C_HideInfoGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadOutStats.BP_LoadOutStats_C.ExecuteUbergraph_BP_LoadOutStats
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadOutStats_C::ExecuteUbergraph_BP_LoadOutStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadOutStats.BP_LoadOutStats_C.ExecuteUbergraph_BP_LoadOutStats");

	UBP_LoadOutStats_C_ExecuteUbergraph_BP_LoadOutStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
