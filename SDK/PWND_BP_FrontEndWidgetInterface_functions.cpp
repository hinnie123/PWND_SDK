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

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.GetPlayerNamePlate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerNameplate_C*   Instance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::GetPlayerNamePlate(class UBP_PlayerNameplate_C** Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.GetPlayerNamePlate");

	UBP_FrontEndWidgetInterface_C_GetPlayerNamePlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Instance != nullptr)
		*Instance = params.Instance;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnFail_1F5E05A54C193DBD94E6F981102DA1E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnFail_1F5E05A54C193DBD94E6F981102DA1E6(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnFail_1F5E05A54C193DBD94E6F981102DA1E6");

	UBP_FrontEndWidgetInterface_C_OnFail_1F5E05A54C193DBD94E6F981102DA1E6_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnSuccess_1F5E05A54C193DBD94E6F981102DA1E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnSuccess_1F5E05A54C193DBD94E6F981102DA1E6(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnSuccess_1F5E05A54C193DBD94E6F981102DA1E6");

	UBP_FrontEndWidgetInterface_C_OnSuccess_1F5E05A54C193DBD94E6F981102DA1E6_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Construct");

	UBP_FrontEndWidgetInterface_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToMainMenu
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnArrivedToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToMainMenu");

	UBP_FrontEndWidgetInterface_C_OnArrivedToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToLobby
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnArrivedToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToLobby");

	UBP_FrontEndWidgetInterface_C_OnArrivedToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Hide Player Name Plate
// (BlueprintCallable, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::Hide_Player_Name_Plate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Hide Player Name Plate");

	UBP_FrontEndWidgetInterface_C_Hide_Player_Name_Plate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Show Player Name Plate
// (BlueprintCallable, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::Show_Player_Name_Plate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Show Player Name Plate");

	UBP_FrontEndWidgetInterface_C_Show_Player_Name_Plate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToLoginScreen
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnArrivedToLoginScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToLoginScreen");

	UBP_FrontEndWidgetInterface_C_OnArrivedToLoginScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToCreateAccountScreen
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnArrivedToCreateAccountScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToCreateAccountScreen");

	UBP_FrontEndWidgetInterface_C_OnArrivedToCreateAccountScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.UpdatePlayerNamePlateData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  PlayerName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           numberOfCredits                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           rankLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         experiencePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             pAvatarImage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::UpdatePlayerNamePlateData(struct FText* PlayerName, int* numberOfCredits, int* rankLevel, float* experiencePercentage, class UTexture2D** pAvatarImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.UpdatePlayerNamePlateData");

	UBP_FrontEndWidgetInterface_C_UpdatePlayerNamePlateData_Params params;
	params.PlayerName = PlayerName;
	params.numberOfCredits = numberOfCredits;
	params.rankLevel = rankLevel;
	params.experiencePercentage = experiencePercentage;
	params.pAvatarImage = pAvatarImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Play Transition
// (BlueprintCallable, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::Play_Transition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Play Transition");

	UBP_FrontEndWidgetInterface_C_Play_Transition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToEulaNdaScreen
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnArrivedToEulaNdaScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToEulaNdaScreen");

	UBP_FrontEndWidgetInterface_C_OnArrivedToEulaNdaScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.DisplayBackendRelatedError
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Body                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_FrontEndWidgetInterface_C::DisplayBackendRelatedError(struct FText* Title, struct FText* Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.DisplayBackendRelatedError");

	UBP_FrontEndWidgetInterface_C_DisplayBackendRelatedError_Params params;
	params.Title = Title;
	params.Body = Body;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnOkayPressed_Event_3
// (BlueprintCallable, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnOkayPressed_Event_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnOkayPressed_Event_3");

	UBP_FrontEndWidgetInterface_C_OnOkayPressed_Event_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToPreLoginScreen
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnArrivedToPreLoginScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToPreLoginScreen");

	UBP_FrontEndWidgetInterface_C_OnArrivedToPreLoginScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedPartyInvite
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                friendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FGuid*                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnReceivedPartyInvite(struct FString* friendName, struct FGuid* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedPartyInvite");

	UBP_FrontEndWidgetInterface_C_OnReceivedPartyInvite_Params params;
	params.friendName = friendName;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceiveNewPartyVersion
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineFriendSocialBPData>* CurrentParty                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_FrontEndWidgetInterface_C::OnReceiveNewPartyVersion(TArray<struct FOnlineFriendSocialBPData>* CurrentParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceiveNewPartyVersion");

	UBP_FrontEndWidgetInterface_C_OnReceiveNewPartyVersion_Params params;
	params.CurrentParty = CurrentParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnPartyDisbanded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          intentionalReasons             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnPartyDisbanded(bool* intentionalReasons)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnPartyDisbanded");

	UBP_FrontEndWidgetInterface_C_OnPartyDisbanded_Params params;
	params.intentionalReasons = intentionalReasons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnLeaveMainMenuScreen
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnLeaveMainMenuScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnLeaveMainMenuScreen");

	UBP_FrontEndWidgetInterface_C_OnLeaveMainMenuScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedNoticeOfInParty
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnReceivedNoticeOfInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedNoticeOfInParty");

	UBP_FrontEndWidgetInterface_C_OnReceivedNoticeOfInParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedNoticeOfNotInParty
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnReceivedNoticeOfNotInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedNoticeOfNotInParty");

	UBP_FrontEndWidgetInterface_C_OnReceivedNoticeOfNotInParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnKickedFromParty
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnKickedFromParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnKickedFromParty");

	UBP_FrontEndWidgetInterface_C_OnKickedFromParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Mission Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   NotificationGuid               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FMissionInfo            MissionInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FrontEndWidgetInterface_C::Mission_Complete(const struct FGuid& NotificationGuid, const struct FMissionInfo& MissionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Mission Complete");

	UBP_FrontEndWidgetInterface_C_Mission_Complete_Params params;
	params.NotificationGuid = NotificationGuid;
	params.MissionInfo = MissionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Achievement Pop Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Achievement_Name               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Achievement_Desc               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Credit_Reward                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial*               Reward_Image                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Notification_GUID              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::Achievement_Pop_Up(const struct FText& Achievement_Name, const struct FText& Achievement_Desc, int Credit_Reward, class UMaterial* Reward_Image, const struct FGuid& Notification_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Achievement Pop Up");

	UBP_FrontEndWidgetInterface_C_Achievement_Pop_Up_Params params;
	params.Achievement_Name = Achievement_Name;
	params.Achievement_Desc = Achievement_Desc;
	params.Credit_Reward = Credit_Reward;
	params.Reward_Image = Reward_Image;
	params.Notification_GUID = Notification_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Notification Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Notification_GUID              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::Notification_Finished(const struct FGuid& Notification_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Notification Finished");

	UBP_FrontEndWidgetInterface_C_Notification_Finished_Params params;
	params.Notification_GUID = Notification_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnLoggedInSuccessfully
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnLoggedInSuccessfully()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnLoggedInSuccessfully");

	UBP_FrontEndWidgetInterface_C_OnLoggedInSuccessfully_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReturnedFromMatch
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnReturnedFromMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReturnedFromMatch");

	UBP_FrontEndWidgetInterface_C_OnReturnedFromMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnInviteOkayPressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FGuid                   PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnInviteOkayPressed_Event(const struct FString& PlayerName, const struct FGuid& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnInviteOkayPressed_Event");

	UBP_FrontEndWidgetInterface_C_OnInviteOkayPressed_Event_Params params;
	params.PlayerName = PlayerName;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnInviteCancelPressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FGuid                   PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnInviteCancelPressed_Event(const struct FString& PlayerName, const struct FGuid& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnInviteCancelPressed_Event");

	UBP_FrontEndWidgetInterface_C_OnInviteCancelPressed_Event_Params params;
	params.PlayerName = PlayerName;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.XP Gained
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   NotificationGuid               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   Reason                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::XP_Gained(const struct FGuid& NotificationGuid, const struct FText& Reason, int amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.XP Gained");

	UBP_FrontEndWidgetInterface_C_XP_Gained_Params params;
	params.NotificationGuid = NotificationGuid;
	params.Reason = Reason;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnMatchFound
// (Event, Public, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::OnMatchFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnMatchFound");

	UBP_FrontEndWidgetInterface_C_OnMatchFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnICustomMatchnviteOkayPressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FGuid                   PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnICustomMatchnviteOkayPressed_Event(const struct FString& PlayerName, const struct FGuid& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnICustomMatchnviteOkayPressed_Event");

	UBP_FrontEndWidgetInterface_C_OnICustomMatchnviteOkayPressed_Event_Params params;
	params.PlayerName = PlayerName;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnCustomMatchInviteCancelPressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FGuid                   PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnCustomMatchInviteCancelPressed_Event(const struct FString& PlayerName, const struct FGuid& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnCustomMatchInviteCancelPressed_Event");

	UBP_FrontEndWidgetInterface_C_OnCustomMatchInviteCancelPressed_Event_Params params;
	params.PlayerName = PlayerName;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedCustomMatchInvite
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                friendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FGuid*                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::OnReceivedCustomMatchInvite(struct FString* friendName, struct FGuid* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedCustomMatchInvite");

	UBP_FrontEndWidgetInterface_C_OnReceivedCustomMatchInvite_Params params;
	params.friendName = friendName;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ExecuteUbergraph_BP_FrontEndWidgetInterface
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FrontEndWidgetInterface_C::ExecuteUbergraph_BP_FrontEndWidgetInterface(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ExecuteUbergraph_BP_FrontEndWidgetInterface");

	UBP_FrontEndWidgetInterface_C_ExecuteUbergraph_BP_FrontEndWidgetInterface_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.MatchFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::MatchFound__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.MatchFound__DelegateSignature");

	UBP_FrontEndWidgetInterface_C_MatchFound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ClosedMOTD__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::ClosedMOTD__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ClosedMOTD__DelegateSignature");

	UBP_FrontEndWidgetInterface_C_ClosedMOTD__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ArrivedToLobby__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::ArrivedToLobby__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ArrivedToLobby__DelegateSignature");

	UBP_FrontEndWidgetInterface_C_ArrivedToLobby__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ArrivedToMainMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_FrontEndWidgetInterface_C::ArrivedToMainMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ArrivedToMainMenu__DelegateSignature");

	UBP_FrontEndWidgetInterface_C_ArrivedToMainMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
