#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SocialScreen.BP_SocialScreen_C.GetNavigableWithPlayerIDInFriendList
struct UBP_SocialScreen_C_GetNavigableWithPlayerIDInFriendList_Params
{
	struct FGuid                                       PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUI_MenuNavigable*                           Navigable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.GetNavigableWithPlayerIDInPartyList
struct UBP_SocialScreen_C_GetNavigableWithPlayerIDInPartyList_Params
{
	struct FGuid                                       PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUI_MenuNavigable*                           Navigable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.IsWidgetPartOfFriendsList
struct UBP_SocialScreen_C_IsWidgetPartOfFriendsList_Params
{
	class UUI_MenuNavigable*                           Navigable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PlayerId;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.IsWidgetPartOfPartyList
struct UBP_SocialScreen_C_IsWidgetPartOfPartyList_Params
{
	class UUI_MenuNavigable*                           Navigable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PlayerId;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.GetCurrentNavigableWithAttention
struct UBP_SocialScreen_C_GetCurrentNavigableWithAttention_Params
{
	class UUI_MenuNavigable*                           LastWidgetWithAttention;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.Construct
struct UBP_SocialScreen_C_Construct_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_SocialScreen_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.Populate Screen
struct UBP_SocialScreen_C_Populate_Screen_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.InviteClicked
struct UBP_SocialScreen_C_InviteClicked_Params
{
	struct FOnlineFriendSocialBPData                   Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnReceivedFriendsList
struct UBP_SocialScreen_C_OnReceivedFriendsList_Params
{
	TArray<struct FOnlineFriendSocialBPData>*          friendList;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_SocialScreen_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_SocialScreen_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.ShowFriendsAtPageNumber
struct UBP_SocialScreen_C_ShowFriendsAtPageNumber_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.UpdatePageCounter
struct UBP_SocialScreen_C_UpdatePageCounter_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.ConfirmPendingFriend
struct UBP_SocialScreen_C_ConfirmPendingFriend_Params
{
	struct FOnlineFriendSocialBPData                   Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SocialScreen.BP_SocialScreen_C.Invite Cancelled
struct UBP_SocialScreen_C_Invite_Cancelled_Params
{
	struct FOnlineFriendSocialBPData                   Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.AddPendingFriend
struct UBP_SocialScreen_C_AddPendingFriend_Params
{
	struct FOnlineFriendSocialBPData                   Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.RemoveFriendFromParty
struct UBP_SocialScreen_C_RemoveFriendFromParty_Params
{
	struct FOnlineFriendSocialBPData                   Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnFriendAcceptedInvite
struct UBP_SocialScreen_C_OnFriendAcceptedInvite_Params
{
	struct FOnlineFriendSocialBPData*                  FriendData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SocialScreen.BP_SocialScreen_C.LoadParty
struct UBP_SocialScreen_C_LoadParty_Params
{
	TArray<struct FOnlineFriendSocialBPData>           PartyMembers;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SocialScreen.BP_SocialScreen_C.RemovePendingFriend
struct UBP_SocialScreen_C_RemovePendingFriend_Params
{
	struct FOnlineFriendSocialBPData                   Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnInviteFailedToSend
struct UBP_SocialScreen_C_OnInviteFailedToSend_Params
{
	struct FOnlineFriendSocialBPData*                  FriendData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnFriendRejectedInvite
struct UBP_SocialScreen_C_OnFriendRejectedInvite_Params
{
	struct FOnlineFriendSocialBPData*                  FriendData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnPartyMembersUpdated
struct UBP_SocialScreen_C_OnPartyMembersUpdated_Params
{
	TArray<struct FOnlineFriendSocialBPData>*          members;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FOnlineFriendSocialBPData>*          invitedMembers;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SocialScreen.BP_SocialScreen_C.TestEvent
struct UBP_SocialScreen_C_TestEvent_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnWarningOfAboutToInviteTooManyPlayers
struct UBP_SocialScreen_C_OnWarningOfAboutToInviteTooManyPlayers_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnBumperLeft
struct UBP_SocialScreen_C_OnBumperLeft_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnBumperRight
struct UBP_SocialScreen_C_OnBumperRight_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.OnEnterScreen
struct UBP_SocialScreen_C_OnEnterScreen_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.SetupMenuNavigationForPartyList
struct UBP_SocialScreen_C_SetupMenuNavigationForPartyList_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.Build Friends List Menu Navigation
struct UBP_SocialScreen_C_Build_Friends_List_Menu_Navigation_Params
{
};

// Function BP_SocialScreen.BP_SocialScreen_C.ExecuteUbergraph_BP_SocialScreen
struct UBP_SocialScreen_C_ExecuteUbergraph_BP_SocialScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
