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

// Function BP_FriendButton.BP_FriendButton_C.UpdateInviteStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           acceptedInvite                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FriendButton_C::UpdateInviteStatus(bool acceptedInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.UpdateInviteStatus");

	UBP_FriendButton_C_UpdateInviteStatus_Params params;
	params.acceptedInvite = acceptedInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.SetPendingState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pending                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FriendButton_C::SetPendingState(bool Pending)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.SetPendingState");

	UBP_FriendButton_C_SetPendingState_Params params;
	params.Pending = Pending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.UpdateInformation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              AvatarImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isOnline                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           acceptedInvite                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendSocialBPData Guid                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           InParty                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           inviteIsPending                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FriendButton_C::UpdateInformation(const struct FText& Name, class UTexture2D* AvatarImage, const struct FSlateBrush& Icon, int Rank, bool isOnline, bool acceptedInvite, const struct FOnlineFriendSocialBPData& Guid, bool InParty, bool inviteIsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.UpdateInformation");

	UBP_FriendButton_C_UpdateInformation_Params params;
	params.Name = Name;
	params.AvatarImage = AvatarImage;
	params.Icon = Icon;
	params.Rank = Rank;
	params.isOnline = isOnline;
	params.acceptedInvite = acceptedInvite;
	params.Guid = Guid;
	params.InParty = InParty;
	params.inviteIsPending = inviteIsPending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Invite_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_FriendButton_C::BndEvt__Button_Cindy_Invite_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Invite_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UBP_FriendButton_C_BndEvt__Button_Cindy_Invite_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Remove_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_FriendButton_C::BndEvt__Button_Cindy_Remove_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Remove_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");

	UBP_FriendButton_C_BndEvt__Button_Cindy_Remove_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Cancel_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_FriendButton_C::BndEvt__Button_Cindy_Cancel_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.BndEvt__Button_Cindy_Cancel_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature");

	UBP_FriendButton_C_BndEvt__Button_Cindy_Cancel_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FriendButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.Construct");

	UBP_FriendButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.OnReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FriendButton_C::OnReceiveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.OnReceiveAttention");

	UBP_FriendButton_C_OnReceiveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.OnRemoveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FriendButton_C::OnRemoveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.OnRemoveAttention");

	UBP_FriendButton_C_OnRemoveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.OnButtonPressed_Local
// (Event, Public, BlueprintEvent)

void UBP_FriendButton_C::OnButtonPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.OnButtonPressed_Local");

	UBP_FriendButton_C_OnButtonPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.OnAnimationFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_FriendButton_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.OnAnimationFinished_Event_1");

	UBP_FriendButton_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.OnAnimationFinished_Event_2
// (BlueprintCallable, BlueprintEvent)

void UBP_FriendButton_C::OnAnimationFinished_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.OnAnimationFinished_Event_2");

	UBP_FriendButton_C_OnAnimationFinished_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.ExecuteUbergraph_BP_FriendButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FriendButton_C::ExecuteUbergraph_BP_FriendButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.ExecuteUbergraph_BP_FriendButton");

	UBP_FriendButton_C_ExecuteUbergraph_BP_FriendButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.InviteCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Guid                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FriendButton_C::InviteCanceled__DelegateSignature(const struct FOnlineFriendSocialBPData& Guid, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.InviteCanceled__DelegateSignature");

	UBP_FriendButton_C_InviteCanceled__DelegateSignature_Params params;
	params.Guid = Guid;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FriendButton.BP_FriendButton_C.InviteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Guid                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FriendButton_C::InviteClicked__DelegateSignature(const struct FOnlineFriendSocialBPData& Guid, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FriendButton.BP_FriendButton_C.InviteClicked__DelegateSignature");

	UBP_FriendButton_C_InviteClicked__DelegateSignature_Params params;
	params.Guid = Guid;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
