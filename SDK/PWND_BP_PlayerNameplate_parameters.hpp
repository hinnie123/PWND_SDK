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

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.On_Anchor_Party_GetMenuContent_1
struct UBP_PlayerNameplate_C_On_Anchor_Party_GetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Update Plate
struct UBP_PlayerNameplate_C_Update_Plate_Params
{
	struct FText                                       UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Currency;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AvatarImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Construct
struct UBP_PlayerNameplate_C_Construct_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Remove Party Member
struct UBP_PlayerNameplate_C_Remove_Party_Member_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendSocialBPData                   Member_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Clear Party Members
struct UBP_PlayerNameplate_C_Clear_Party_Members_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct UBP_PlayerNameplate_C_BndEvt__Button_121_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
struct UBP_PlayerNameplate_C_BndEvt__Button_121_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_121_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
struct UBP_PlayerNameplate_C_BndEvt__Button_121_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.Add Party Member
struct UBP_PlayerNameplate_C_Add_Party_Member_Params
{
	struct FOnlineFriendSocialBPData                   Member_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.FocusLost
struct UBP_PlayerNameplate_C_FocusLost_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.LeaveParty
struct UBP_PlayerNameplate_C_LeaveParty_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.BndEvt__Button_Add_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UBP_PlayerNameplate_C_BndEvt__Button_Add_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.In Party
struct UBP_PlayerNameplate_C_In_Party_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.NotInParty
struct UBP_PlayerNameplate_C_NotInParty_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.ExecuteUbergraph_BP_PlayerNameplate
struct UBP_PlayerNameplate_C_ExecuteUbergraph_BP_PlayerNameplate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.OnLeavePartyClicked__DelegateSignature
struct UBP_PlayerNameplate_C_OnLeavePartyClicked__DelegateSignature_Params
{
};

// Function BP_PlayerNameplate.BP_PlayerNameplate_C.OnSocialClicked__DelegateSignature
struct UBP_PlayerNameplate_C_OnSocialClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
