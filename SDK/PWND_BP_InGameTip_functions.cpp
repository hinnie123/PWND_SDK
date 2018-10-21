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

// Function BP_InGameTip.BP_InGameTip_C.ReplaceControlText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Source                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   New_Text                       (Parm, OutParm)

void UBP_InGameTip_C::ReplaceControlText(const struct FText& Source, struct FText* New_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.ReplaceControlText");

	UBP_InGameTip_C_ReplaceControlText_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Text != nullptr)
		*New_Text = params.New_Text;
}


// Function BP_InGameTip.BP_InGameTip_C.IsTriggerActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EeInGameTipsTrigger> Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Param                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_InGameTip_C::IsTriggerActive(TEnumAsByte<EeInGameTipsTrigger> Trigger, int Param, bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.IsTriggerActive");

	UBP_InGameTip_C_IsTriggerActive_Params params;
	params.Trigger = Trigger;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function BP_InGameTip.BP_InGameTip_C.IsTipActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInGameTipsStructure    Tip                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   TipName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   TipText                        (Parm, OutParm)

void UBP_InGameTip_C::IsTipActive(const struct FInGameTipsStructure& Tip, const struct FName& TipName, bool* IsActive, struct FText* TipText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.IsTipActive");

	UBP_InGameTip_C_IsTipActive_Params params;
	params.Tip = Tip;
	params.TipName = TipName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
	if (TipText != nullptr)
		*TipText = params.TipText;
}


// Function BP_InGameTip.BP_InGameTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_InGameTip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.Construct");

	UBP_InGameTip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGameTip.BP_InGameTip_C.ToggleTip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TipText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_InGameTip_C::ToggleTip(const struct FText& TipText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.ToggleTip");

	UBP_InGameTip_C_ToggleTip_Params params;
	params.TipText = TipText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGameTip.BP_InGameTip_C.UpdateTip
// (BlueprintCallable, BlueprintEvent)

void UBP_InGameTip_C::UpdateTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.UpdateTip");

	UBP_InGameTip_C_UpdateTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGameTip.BP_InGameTip_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeEventTrigger>    Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPostedEventTrigger     Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_InGameTip_C::CustomEvent_1(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.CustomEvent_1");

	UBP_InGameTip_C_CustomEvent_1_Params params;
	params.Controller = Controller;
	params.Event = Event;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGameTip.BP_InGameTip_C.OnAbilityUsed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isPrimary                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InGameTip_C::OnAbilityUsed_Event_1(class APwndPlayerController* Controller, bool isPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.OnAbilityUsed_Event_1");

	UBP_InGameTip_C_OnAbilityUsed_Event_1_Params params;
	params.Controller = Controller;
	params.isPrimary = isPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InGameTip.BP_InGameTip_C.ExecuteUbergraph_BP_InGameTip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InGameTip_C::ExecuteUbergraph_BP_InGameTip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InGameTip.BP_InGameTip_C.ExecuteUbergraph_BP_InGameTip");

	UBP_InGameTip_C_ExecuteUbergraph_BP_InGameTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
