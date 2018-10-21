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

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.On_Anchor_Party_GetMenuContent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UBP_PlayerNameplate_C::On_Anchor_Party_GetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.On_Anchor_Party_GetMenuContent_1");

	UBP_PlayerNameplate_C_On_Anchor_Party_GetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Update Plate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Currency                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              AvatarImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerNameplate_C::Update_Plate(const struct FText& UserName, int Currency, int Rank, float XP, class UTexture2D* AvatarImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.Update Plate");

	UBP_PlayerNameplate_C_Update_Plate_Params params;
	params.UserName = UserName;
	params.Currency = Currency;
	params.Rank = Rank;
	params.XP = XP;
	params.AvatarImage = AvatarImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PlayerNameplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.Construct");

	UBP_PlayerNameplate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Remove Party Member
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendSocialBPData Member_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PlayerNameplate_C::Remove_Party_Member(int Index, const struct FOnlineFriendSocialBPData& Member_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.Remove Party Member");

	UBP_PlayerNameplate_C_Remove_Party_Member_Params params;
	params.Index = Index;
	params.Member_GUID = Member_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Clear Party Members
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerNameplate_C::Clear_Party_Members()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.Clear Party Members");

	UBP_PlayerNameplate_C_Clear_Party_Members_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerNameplate_C::BndEvt__Button_121_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UBP_PlayerNameplate_C_BndEvt__Button_121_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerNameplate_C::BndEvt__Button_121_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	UBP_PlayerNameplate_C_BndEvt__Button_121_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerNameplate_C::BndEvt__Button_121_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");

	UBP_PlayerNameplate_C_BndEvt__Button_121_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Add Party Member
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendSocialBPData Member_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PlayerNameplate_C::Add_Party_Member(const struct FOnlineFriendSocialBPData& Member_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.Add Party Member");

	UBP_PlayerNameplate_C_Add_Party_Member_Params params;
	params.Member_GUID = Member_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.FocusLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerNameplate_C::FocusLost(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.FocusLost");

	UBP_PlayerNameplate_C_FocusLost_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.LeaveParty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerNameplate_C::LeaveParty(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.LeaveParty");

	UBP_PlayerNameplate_C_LeaveParty_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_Add_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PlayerNameplate_C::BndEvt__Button_Add_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_Add_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UBP_PlayerNameplate_C_BndEvt__Button_Add_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.In Party
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerNameplate_C::In_Party()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.In Party");

	UBP_PlayerNameplate_C_In_Party_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.NotInParty
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerNameplate_C::NotInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.NotInParty");

	UBP_PlayerNameplate_C_NotInParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.ExecuteUbergraph_BP_PlayerNameplate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerNameplate_C::ExecuteUbergraph_BP_PlayerNameplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.ExecuteUbergraph_BP_PlayerNameplate");

	UBP_PlayerNameplate_C_ExecuteUbergraph_BP_PlayerNameplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.OnLeavePartyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerNameplate_C::OnLeavePartyClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.OnLeavePartyClicked__DelegateSignature");

	UBP_PlayerNameplate_C_OnLeavePartyClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerNameplate.BP_PlayerNameplate_C.OnSocialClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerNameplate_C::OnSocialClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerNameplate.BP_PlayerNameplate_C.OnSocialClicked__DelegateSignature");

	UBP_PlayerNameplate_C_OnSocialClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
