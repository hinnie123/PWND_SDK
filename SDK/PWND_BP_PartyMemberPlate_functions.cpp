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

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.On_Anchor_Party_GetMenuContent_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UBP_PartyMemberPlate_C::On_Anchor_Party_GetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.On_Anchor_Party_GetMenuContent_1");

	UBP_PartyMemberPlate_C_On_Anchor_Party_GetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Member Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendSocialBPData Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Member_is_Leader               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Player_is_Leader               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyMemberPlate_C::Member_Info(int Index, const struct FOnlineFriendSocialBPData& Friend_GUID, bool Member_is_Leader, bool Player_is_Leader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Member Info");

	UBP_PartyMemberPlate_C_Member_Info_Params params;
	params.Index = Index;
	params.Friend_GUID = Friend_GUID;
	params.Member_is_Leader = Member_is_Leader;
	params.Player_is_Leader = Player_is_Leader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyMemberPlate_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature");

	UBP_PartyMemberPlate_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyMemberPlate_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature");

	UBP_PartyMemberPlate_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Remove
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyMemberPlate_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Remove");

	UBP_PartyMemberPlate_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_PartyMemberPlate_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyMemberPlate_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.FocusLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyMemberPlate_C::FocusLost(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.FocusLost");

	UBP_PartyMemberPlate_C_FocusLost_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PartyMemberPlate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Construct");

	UBP_PartyMemberPlate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Dropdown Button Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyMemberPlate_C::Dropdown_Button_Selected(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Dropdown Button Selected");

	UBP_PartyMemberPlate_C_Dropdown_Button_Selected_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.ExecuteUbergraph_BP_PartyMemberPlate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PartyMemberPlate_C::ExecuteUbergraph_BP_PartyMemberPlate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.ExecuteUbergraph_BP_PartyMemberPlate");

	UBP_PartyMemberPlate_C_ExecuteUbergraph_BP_PartyMemberPlate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
