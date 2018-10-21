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

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Level                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_XP                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Next_Level_XP                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::SetProgress(int Current_Level, float Current_XP, float Next_Level_XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.SetProgress");

	UBP_PostMatch_ProgressPage_C_SetProgress_Params params;
	params.Current_Level = Current_Level;
	params.Current_XP = Current_XP;
	params.Next_Level_XP = Next_Level_XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add Match Award
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::Add_Match_Award(int Type, int Score, int reward, int Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add Match Award");

	UBP_PostMatch_ProgressPage_C_Add_Match_Award_Params params;
	params.Type = Type;
	params.Score = Score;
	params.reward = reward;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add XP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            XP_Value                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::Add_XP(int XP_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add XP");

	UBP_PostMatch_ProgressPage_C_Add_XP_Params params;
	params.XP_Value = XP_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.XP Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Match_Won_XP                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   XP_Type                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuid                   Notification_GUID              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::XP_Display(int Match_Won_XP, const struct FText& XP_Type, const struct FGuid& Notification_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.XP Display");

	UBP_PostMatch_ProgressPage_C_XP_Display_Params params;
	params.Match_Won_XP = Match_Won_XP;
	params.XP_Type = XP_Type;
	params.Notification_GUID = Notification_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add Mission Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Mission_Name                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Mission_Desc                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            coin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::Add_Mission_Complete(const struct FText& Mission_Name, const struct FText& Mission_Desc, int XP, int coin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add Mission Complete");

	UBP_PostMatch_ProgressPage_C_Add_Mission_Complete_Params params;
	params.Mission_Name = Mission_Name;
	params.Mission_Desc = Mission_Desc;
	params.XP = XP;
	params.coin = coin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnInitializeProgress
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           CurrentLevel                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           prestigeLevel                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           borderLevel                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           currentXP                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         nextLevelXP                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::OnInitializeProgress(int* CurrentLevel, int* prestigeLevel, int* borderLevel, int* currentXP, float* nextLevelXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnInitializeProgress");

	UBP_PostMatch_ProgressPage_C_OnInitializeProgress_Params params;
	params.CurrentLevel = CurrentLevel;
	params.prestigeLevel = prestigeLevel;
	params.borderLevel = borderLevel;
	params.currentXP = currentXP;
	params.nextLevelXP = nextLevelXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnMissionComplete
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  missionName                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  missionDesc                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           XP                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           coin                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::OnMissionComplete(struct FText* missionName, struct FText* missionDesc, int* XP, int* coin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnMissionComplete");

	UBP_PostMatch_ProgressPage_C_OnMissionComplete_Params params;
	params.missionName = missionName;
	params.missionDesc = missionDesc;
	params.XP = XP;
	params.coin = coin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnExperienceUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           newXP                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::OnExperienceUpdate(int* newXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnExperienceUpdate");

	UBP_PostMatch_ProgressPage_C_OnExperienceUpdate_Params params;
	params.newXP = newXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnMatchVictory
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           XP                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::OnMatchVictory(int* XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnMatchVictory");

	UBP_PostMatch_ProgressPage_C_OnMatchVictory_Params params;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Queue Up Next Level Sequence
// (BlueprintCallable, BlueprintEvent)

void UBP_PostMatch_ProgressPage_C::Queue_Up_Next_Level_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Queue Up Next Level Sequence");

	UBP_PostMatch_ProgressPage_C_Queue_Up_Next_Level_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Check Play Level Up Seq
// (BlueprintCallable, BlueprintEvent)

void UBP_PostMatch_ProgressPage_C::Check_Play_Level_Up_Seq()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Check Play Level Up Seq");

	UBP_PostMatch_ProgressPage_C_Check_Play_Level_Up_Seq_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Level Up Sequence
// (BlueprintCallable, BlueprintEvent)

void UBP_PostMatch_ProgressPage_C::Level_Up_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Level Up Sequence");

	UBP_PostMatch_ProgressPage_C_Level_Up_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnAccoladeDataReady
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FPostMatchAccoladeData>* accolades                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_PostMatch_ProgressPage_C::OnAccoladeDataReady(TArray<struct FPostMatchAccoladeData>* accolades)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnAccoladeDataReady");

	UBP_PostMatch_ProgressPage_C_OnAccoladeDataReady_Params params;
	params.accolades = accolades;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Test Add XP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            New_XP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::Test_Add_XP(int New_XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Test Add XP");

	UBP_PostMatch_ProgressPage_C_Test_Add_XP_Params params;
	params.New_XP = New_XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PostMatch_ProgressPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Construct");

	UBP_PostMatch_ProgressPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.XPGained_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   NotificationGuid               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   Reason                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::XPGained_Event(const struct FGuid& NotificationGuid, const struct FText& Reason, int amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.XPGained_Event");

	UBP_PostMatch_ProgressPage_C_XPGained_Event_Params params;
	params.NotificationGuid = NotificationGuid;
	params.Reason = Reason;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.ExecuteUbergraph_BP_PostMatch_ProgressPage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_ProgressPage_C::ExecuteUbergraph_BP_PostMatch_ProgressPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.ExecuteUbergraph_BP_PostMatch_ProgressPage");

	UBP_PostMatch_ProgressPage_C_ExecuteUbergraph_BP_PostMatch_ProgressPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.StasLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PostMatch_ProgressPage_C::StasLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.StasLoaded__DelegateSignature");

	UBP_PostMatch_ProgressPage_C_StasLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
