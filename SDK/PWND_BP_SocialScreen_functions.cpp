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

// Function BP_SocialScreen.BP_SocialScreen_C.GetNavigableWithPlayerIDInFriendList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUI_MenuNavigable*       Navigable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::GetNavigableWithPlayerIDInFriendList(const struct FGuid& PlayerId, bool* bResult, class UUI_MenuNavigable** Navigable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.GetNavigableWithPlayerIDInFriendList");

	UBP_SocialScreen_C_GetNavigableWithPlayerIDInFriendList_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (Navigable != nullptr)
		*Navigable = params.Navigable;
}


// Function BP_SocialScreen.BP_SocialScreen_C.GetNavigableWithPlayerIDInPartyList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUI_MenuNavigable*       Navigable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::GetNavigableWithPlayerIDInPartyList(const struct FGuid& PlayerId, bool* bResult, class UUI_MenuNavigable** Navigable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.GetNavigableWithPlayerIDInPartyList");

	UBP_SocialScreen_C_GetNavigableWithPlayerIDInPartyList_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (Navigable != nullptr)
		*Navigable = params.Navigable;
}


// Function BP_SocialScreen.BP_SocialScreen_C.IsWidgetPartOfFriendsList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MenuNavigable*       Navigable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   PlayerId                       (Parm, OutParm, IsPlainOldData)

void UBP_SocialScreen_C::IsWidgetPartOfFriendsList(class UUI_MenuNavigable* Navigable, bool* bResult, struct FGuid* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.IsWidgetPartOfFriendsList");

	UBP_SocialScreen_C_IsWidgetPartOfFriendsList_Params params;
	params.Navigable = Navigable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
}


// Function BP_SocialScreen.BP_SocialScreen_C.IsWidgetPartOfPartyList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MenuNavigable*       Navigable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   PlayerId                       (Parm, OutParm, IsPlainOldData)

void UBP_SocialScreen_C::IsWidgetPartOfPartyList(class UUI_MenuNavigable* Navigable, bool* bResult, struct FGuid* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.IsWidgetPartOfPartyList");

	UBP_SocialScreen_C_IsWidgetPartOfPartyList_Params params;
	params.Navigable = Navigable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
}


// Function BP_SocialScreen.BP_SocialScreen_C.GetCurrentNavigableWithAttention
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MenuNavigable*       LastWidgetWithAttention        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::GetCurrentNavigableWithAttention(class UUI_MenuNavigable** LastWidgetWithAttention)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.GetCurrentNavigableWithAttention");

	UBP_SocialScreen_C_GetCurrentNavigableWithAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastWidgetWithAttention != nullptr)
		*LastWidgetWithAttention = params.LastWidgetWithAttention;
}


// Function BP_SocialScreen.BP_SocialScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_SocialScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.Construct");

	UBP_SocialScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SocialScreen_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_SocialScreen_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.Populate Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_SocialScreen_C::Populate_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.Populate Screen");

	UBP_SocialScreen_C_Populate_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.InviteClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Guid                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::InviteClicked(const struct FOnlineFriendSocialBPData& Guid, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.InviteClicked");

	UBP_SocialScreen_C_InviteClicked_Params params;
	params.Guid = Guid;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnReceivedFriendsList
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineFriendSocialBPData>* friendList                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_SocialScreen_C::OnReceivedFriendsList(TArray<struct FOnlineFriendSocialBPData>* friendList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnReceivedFriendsList");

	UBP_SocialScreen_C_OnReceivedFriendsList_Params params;
	params.friendList = friendList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SocialScreen_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_SocialScreen_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_SocialScreen_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_SocialScreen_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.ShowFriendsAtPageNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::ShowFriendsAtPageNumber(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.ShowFriendsAtPageNumber");

	UBP_SocialScreen_C_ShowFriendsAtPageNumber_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.UpdatePageCounter
// (BlueprintCallable, BlueprintEvent)

void UBP_SocialScreen_C::UpdatePageCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.UpdatePageCounter");

	UBP_SocialScreen_C_UpdatePageCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.ConfirmPendingFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SocialScreen_C::ConfirmPendingFriend(const struct FOnlineFriendSocialBPData& Friend_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.ConfirmPendingFriend");

	UBP_SocialScreen_C_ConfirmPendingFriend_Params params;
	params.Friend_GUID = Friend_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.Invite Cancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Guid                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::Invite_Cancelled(const struct FOnlineFriendSocialBPData& Guid, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.Invite Cancelled");

	UBP_SocialScreen_C_Invite_Cancelled_Params params;
	params.Guid = Guid;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.AddPendingFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Guid                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::AddPendingFriend(const struct FOnlineFriendSocialBPData& Guid, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.AddPendingFriend");

	UBP_SocialScreen_C_AddPendingFriend_Params params;
	params.Guid = Guid;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.RemoveFriendFromParty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Guid                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::RemoveFriendFromParty(const struct FOnlineFriendSocialBPData& Guid, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.RemoveFriendFromParty");

	UBP_SocialScreen_C_RemoveFriendFromParty_Params params;
	params.Guid = Guid;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnFriendAcceptedInvite
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData* FriendData                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SocialScreen_C::OnFriendAcceptedInvite(struct FOnlineFriendSocialBPData* FriendData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnFriendAcceptedInvite");

	UBP_SocialScreen_C_OnFriendAcceptedInvite_Params params;
	params.FriendData = FriendData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.LoadParty
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineFriendSocialBPData> PartyMembers                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_SocialScreen_C::LoadParty(TArray<struct FOnlineFriendSocialBPData> PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.LoadParty");

	UBP_SocialScreen_C_LoadParty_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.RemovePendingFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Guid                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SocialScreen_C::RemovePendingFriend(const struct FOnlineFriendSocialBPData& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.RemovePendingFriend");

	UBP_SocialScreen_C_RemovePendingFriend_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnInviteFailedToSend
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData* FriendData                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SocialScreen_C::OnInviteFailedToSend(struct FOnlineFriendSocialBPData* FriendData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnInviteFailedToSend");

	UBP_SocialScreen_C_OnInviteFailedToSend_Params params;
	params.FriendData = FriendData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnFriendRejectedInvite
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData* FriendData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::OnFriendRejectedInvite(struct FOnlineFriendSocialBPData* FriendData, bool* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnFriendRejectedInvite");

	UBP_SocialScreen_C_OnFriendRejectedInvite_Params params;
	params.FriendData = FriendData;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnPartyMembersUpdated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineFriendSocialBPData>* members                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FOnlineFriendSocialBPData>* invitedMembers                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_SocialScreen_C::OnPartyMembersUpdated(TArray<struct FOnlineFriendSocialBPData>* members, TArray<struct FOnlineFriendSocialBPData>* invitedMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnPartyMembersUpdated");

	UBP_SocialScreen_C_OnPartyMembersUpdated_Params params;
	params.members = members;
	params.invitedMembers = invitedMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.TestEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_SocialScreen_C::TestEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.TestEvent");

	UBP_SocialScreen_C_TestEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnWarningOfAboutToInviteTooManyPlayers
// (Event, Public, BlueprintEvent)

void UBP_SocialScreen_C::OnWarningOfAboutToInviteTooManyPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnWarningOfAboutToInviteTooManyPlayers");

	UBP_SocialScreen_C_OnWarningOfAboutToInviteTooManyPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnBumperLeft
// (Event, Public, BlueprintEvent)

void UBP_SocialScreen_C::OnBumperLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnBumperLeft");

	UBP_SocialScreen_C_OnBumperLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnBumperRight
// (Event, Public, BlueprintEvent)

void UBP_SocialScreen_C::OnBumperRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnBumperRight");

	UBP_SocialScreen_C_OnBumperRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.OnEnterScreen
// (Event, Public, BlueprintEvent)

void UBP_SocialScreen_C::OnEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.OnEnterScreen");

	UBP_SocialScreen_C_OnEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.SetupMenuNavigationForPartyList
// (BlueprintCallable, BlueprintEvent)

void UBP_SocialScreen_C::SetupMenuNavigationForPartyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.SetupMenuNavigationForPartyList");

	UBP_SocialScreen_C_SetupMenuNavigationForPartyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.Build Friends List Menu Navigation
// (BlueprintCallable, BlueprintEvent)

void UBP_SocialScreen_C::Build_Friends_List_Menu_Navigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.Build Friends List Menu Navigation");

	UBP_SocialScreen_C_Build_Friends_List_Menu_Navigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SocialScreen.BP_SocialScreen_C.ExecuteUbergraph_BP_SocialScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SocialScreen_C::ExecuteUbergraph_BP_SocialScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SocialScreen.BP_SocialScreen_C.ExecuteUbergraph_BP_SocialScreen");

	UBP_SocialScreen_C_ExecuteUbergraph_BP_SocialScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
