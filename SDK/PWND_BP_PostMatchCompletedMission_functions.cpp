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

// Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.Set Mission Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Mission_Name                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Mission_Desc                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            coin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatchCompletedMission_C::Set_Mission_Info(const struct FText& Mission_Name, const struct FText& Mission_Desc, int XP, int coin, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.Set Mission Info");

	UBP_PostMatchCompletedMission_C_Set_Mission_Info_Params params;
	params.Mission_Name = Mission_Name;
	params.Mission_Desc = Mission_Desc;
	params.XP = XP;
	params.coin = coin;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PostMatchCompletedMission_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.Construct");

	UBP_PostMatchCompletedMission_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.ExecuteUbergraph_BP_PostMatchCompletedMission
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatchCompletedMission_C::ExecuteUbergraph_BP_PostMatchCompletedMission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.ExecuteUbergraph_BP_PostMatchCompletedMission");

	UBP_PostMatchCompletedMission_C_ExecuteUbergraph_BP_PostMatchCompletedMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
