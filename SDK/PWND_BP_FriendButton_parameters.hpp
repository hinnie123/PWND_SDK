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

// Function BP_FriendButton.BP_FriendButton_C.UpdateInviteStatus
struct UBP_FriendButton_C_UpdateInviteStatus_Params
{
	bool                                               acceptedInvite;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FriendButton.BP_FriendButton_C.SetPendingState
struct UBP_FriendButton_C_SetPendingState_Params
{
	bool                                               Pending;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FriendButton.BP_FriendButton_C.UpdateInformation
struct UBP_FriendButton_C_UpdateInformation_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  AvatarImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isOnline;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               acceptedInvite;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendSocialBPData                   Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               InParty;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               inviteIsPending;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Invite_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
struct UBP_FriendButton_C_BndEvt__Button_Cindy_Invite_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Remove_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
struct UBP_FriendButton_C_BndEvt__Button_Cindy_Remove_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Cancel_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
struct UBP_FriendButton_C_BndEvt__Button_Cindy_Cancel_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FriendButton.BP_FriendButton_C.Construct
struct UBP_FriendButton_C_Construct_Params
{
};

// Function BP_FriendButton.BP_FriendButton_C.OnReceiveAttention
struct UBP_FriendButton_C_OnReceiveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FriendButton.BP_FriendButton_C.OnRemoveAttention
struct UBP_FriendButton_C_OnRemoveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FriendButton.BP_FriendButton_C.OnButtonPressed_Local
struct UBP_FriendButton_C_OnButtonPressed_Local_Params
{
};

// Function BP_FriendButton.BP_FriendButton_C.OnAnimationFinished_Event_1
struct UBP_FriendButton_C_OnAnimationFinished_Event_1_Params
{
};

// Function BP_FriendButton.BP_FriendButton_C.OnAnimationFinished_Event_2
struct UBP_FriendButton_C_OnAnimationFinished_Event_2_Params
{
};

// Function BP_FriendButton.BP_FriendButton_C.ExecuteUbergraph_BP_FriendButton
struct UBP_FriendButton_C_ExecuteUbergraph_BP_FriendButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FriendButton.BP_FriendButton_C.InviteCanceled__DelegateSignature
struct UBP_FriendButton_C_InviteCanceled__DelegateSignature_Params
{
	struct FOnlineFriendSocialBPData                   Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FriendButton.BP_FriendButton_C.InviteClicked__DelegateSignature
struct UBP_FriendButton_C_InviteClicked__DelegateSignature_Params
{
	struct FOnlineFriendSocialBPData                   Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
