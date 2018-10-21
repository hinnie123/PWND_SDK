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

// Function BP_WidgetInterface.BP_WidgetInterface_C.CreateEscapeMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_WidgetInterface_C::CreateEscapeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.CreateEscapeMenu");

	UBP_WidgetInterface_C_CreateEscapeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.HideEscapeMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_WidgetInterface_C::HideEscapeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.HideEscapeMenu");

	UBP_WidgetInterface_C_HideEscapeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.Cancelled
// (BlueprintCallable, BlueprintEvent)

void UBP_WidgetInterface_C::Cancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.Cancelled");

	UBP_WidgetInterface_C_Cancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.Quitting
// (BlueprintCallable, BlueprintEvent)

void UBP_WidgetInterface_C::Quitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.Quitting");

	UBP_WidgetInterface_C_Quitting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.OnMatchStateChanged_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndGameState*          GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MatchState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WidgetInterface_C::OnMatchStateChanged_Event_2(class APwndGameState* GameState, const struct FName& MatchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.OnMatchStateChanged_Event_2");

	UBP_WidgetInterface_C_OnMatchStateChanged_Event_2_Params params;
	params.GameState = GameState;
	params.MatchState = MatchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.OnMatchStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndGameState*          GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MatchState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WidgetInterface_C::OnMatchStateChanged_Event_1(class APwndGameState* GameState, const struct FName& MatchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.OnMatchStateChanged_Event_1");

	UBP_WidgetInterface_C_OnMatchStateChanged_Event_1_Params params;
	params.GameState = GameState;
	params.MatchState = MatchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_WidgetInterface_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.Construct");

	UBP_WidgetInterface_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.OnEscapeMenuRequested
// (Event, Public, BlueprintEvent)

void UBP_WidgetInterface_C::OnEscapeMenuRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.OnEscapeMenuRequested");

	UBP_WidgetInterface_C_OnEscapeMenuRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.OnEscapeMenuCleared
// (Event, Public, BlueprintEvent)

void UBP_WidgetInterface_C::OnEscapeMenuCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.OnEscapeMenuCleared");

	UBP_WidgetInterface_C_OnEscapeMenuCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.OnTrainingEscapeMenuRequested
// (Event, Public, BlueprintEvent)

void UBP_WidgetInterface_C::OnTrainingEscapeMenuRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.OnTrainingEscapeMenuRequested");

	UBP_WidgetInterface_C_OnTrainingEscapeMenuRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.Mission Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   NotificationGuid               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FMissionInfo            MissionInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_WidgetInterface_C::Mission_Complete(const struct FGuid& NotificationGuid, const struct FMissionInfo& MissionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.Mission Complete");

	UBP_WidgetInterface_C_Mission_Complete_Params params;
	params.NotificationGuid = NotificationGuid;
	params.MissionInfo = MissionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.Achievement Pop Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Achievement_Name               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Achievement_Desc               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Credit_Reward                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial*               Reward_Image                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Notification_GUID              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_WidgetInterface_C::Achievement_Pop_Up(const struct FText& Achievement_Name, const struct FText& Achievement_Desc, int Credit_Reward, class UMaterial* Reward_Image, const struct FGuid& Notification_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.Achievement Pop Up");

	UBP_WidgetInterface_C_Achievement_Pop_Up_Params params;
	params.Achievement_Name = Achievement_Name;
	params.Achievement_Desc = Achievement_Desc;
	params.Credit_Reward = Credit_Reward;
	params.Reward_Image = Reward_Image;
	params.Notification_GUID = Notification_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.Notification Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Notification_GUID              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_WidgetInterface_C::Notification_Finished(const struct FGuid& Notification_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.Notification Finished");

	UBP_WidgetInterface_C_Notification_Finished_Params params;
	params.Notification_GUID = Notification_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.XP Gained
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   NotificationGuid               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   Reason                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WidgetInterface_C::XP_Gained(const struct FGuid& NotificationGuid, const struct FText& Reason, int amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.XP Gained");

	UBP_WidgetInterface_C_XP_Gained_Params params;
	params.NotificationGuid = NotificationGuid;
	params.Reason = Reason;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.ExecuteUbergraph_BP_WidgetInterface
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WidgetInterface_C::ExecuteUbergraph_BP_WidgetInterface(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.ExecuteUbergraph_BP_WidgetInterface");

	UBP_WidgetInterface_C_ExecuteUbergraph_BP_WidgetInterface_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetInterface.BP_WidgetInterface_C.Training Escape Menu Requested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_WidgetInterface_C::Training_Escape_Menu_Requested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetInterface.BP_WidgetInterface_C.Training Escape Menu Requested__DelegateSignature");

	UBP_WidgetInterface_C_Training_Escape_Menu_Requested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
