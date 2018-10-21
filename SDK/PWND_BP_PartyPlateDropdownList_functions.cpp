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

// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Set Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyPlateDropdownList_C::Set_Info(const struct FText& UserName, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Set Info");

	UBP_PartyPlateDropdownList_C_Set_Info_Params params;
	params.UserName = UserName;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Show Only Name
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlateDropdownList_C::Show_Only_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Show Only Name");

	UBP_PartyPlateDropdownList_C_Show_Only_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyPlateDropdownList_C::BndEvt__Button_AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyPlateDropdownList_C_BndEvt__Button_AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_CancelInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyPlateDropdownList_C::BndEvt__Button_CancelInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_CancelInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyPlateDropdownList_C_BndEvt__Button_CancelInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_MakeLeader_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyPlateDropdownList_C::BndEvt__Button_MakeLeader_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_MakeLeader_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyPlateDropdownList_C_BndEvt__Button_MakeLeader_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_Profile_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyPlateDropdownList_C::BndEvt__Button_Profile_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_Profile_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyPlateDropdownList_C_BndEvt__Button_Profile_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_Remove_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyPlateDropdownList_C::BndEvt__Button_Remove_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_Remove_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyPlateDropdownList_C_BndEvt__Button_Remove_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Show Member Buttons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Friend                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyPlateDropdownList_C::Show_Member_Buttons(bool Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Show Member Buttons");

	UBP_PartyPlateDropdownList_C_Show_Member_Buttons_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Show Leave Party
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlateDropdownList_C::Show_Leave_Party()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Show Leave Party");

	UBP_PartyPlateDropdownList_C_Show_Leave_Party_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_Cindy_C_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyPlateDropdownList_C::BndEvt__Button_Cindy_C_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.BndEvt__Button_Cindy_C_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyPlateDropdownList_C_BndEvt__Button_Cindy_C_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Show Leader Buttons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pending                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyPlateDropdownList_C::Show_Leader_Buttons(bool Pending)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.Show Leader Buttons");

	UBP_PartyPlateDropdownList_C_Show_Leader_Buttons_Params params;
	params.Pending = Pending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.ExecuteUbergraph_BP_PartyPlateDropdownList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyPlateDropdownList_C::ExecuteUbergraph_BP_PartyPlateDropdownList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.ExecuteUbergraph_BP_PartyPlateDropdownList");

	UBP_PartyPlateDropdownList_C_ExecuteUbergraph_BP_PartyPlateDropdownList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.ButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyPlateDropdownList_C::ButtonSelected__DelegateSignature(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyPlateDropdownList.BP_PartyPlateDropdownList_C.ButtonSelected__DelegateSignature");

	UBP_PartyPlateDropdownList_C_ButtonSelected__DelegateSignature_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
