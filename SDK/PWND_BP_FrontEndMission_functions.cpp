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

// Function BP_FrontEndMission.BP_FrontEndMission_C.SetReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Coin_Reward                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            XP_Reward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndMission_C::SetReward(int Coin_Reward, int XP_Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndMission.BP_FrontEndMission_C.SetReward");

	UBP_FrontEndMission_C_SetReward_Params params;
	params.Coin_Reward = Coin_Reward;
	params.XP_Reward = XP_Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndMission.BP_FrontEndMission_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ProgressType                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          CurrentProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndMission_C::SetProgress(const struct FText& ProgressType, float CurrentProgress, float MaxProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndMission.BP_FrontEndMission_C.SetProgress");

	UBP_FrontEndMission_C_SetProgress_Params params;
	params.ProgressType = ProgressType;
	params.CurrentProgress = CurrentProgress;
	params.MaxProgress = MaxProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndMission.BP_FrontEndMission_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewDesc                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FrontEndMission_C::SetDescription(const struct FText& NewDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndMission.BP_FrontEndMission_C.SetDescription");

	UBP_FrontEndMission_C_SetDescription_Params params;
	params.NewDesc = NewDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndMission.BP_FrontEndMission_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewTitle                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FrontEndMission_C::SetTitle(const struct FText& NewTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndMission.BP_FrontEndMission_C.SetTitle");

	UBP_FrontEndMission_C_SetTitle_Params params;
	params.NewTitle = NewTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndMission.BP_FrontEndMission_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_FrontEndMission_C::BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndMission.BP_FrontEndMission_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_FrontEndMission_C_BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndMission.BP_FrontEndMission_C.ExecuteUbergraph_BP_FrontEndMission
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndMission_C::ExecuteUbergraph_BP_FrontEndMission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndMission.BP_FrontEndMission_C.ExecuteUbergraph_BP_FrontEndMission");

	UBP_FrontEndMission_C_ExecuteUbergraph_BP_FrontEndMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndMission.BP_FrontEndMission_C.DismissMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_FrontEndMission_C::DismissMission__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndMission.BP_FrontEndMission_C.DismissMission__DelegateSignature");

	UBP_FrontEndMission_C_DismissMission__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
