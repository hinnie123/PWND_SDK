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

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.On_Anchor_Party_GetMenuContent_1
struct UBP_PartyMemberPlate_C_On_Anchor_Party_GetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Member Info
struct UBP_PartyMemberPlate_C_Member_Info_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendSocialBPData                   Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Member_is_Leader;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Player_is_Leader;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature
struct UBP_PartyMemberPlate_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature
struct UBP_PartyMemberPlate_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Remove
struct UBP_PartyMemberPlate_C_Remove_Params
{
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_PartyMemberPlate_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.FocusLost
struct UBP_PartyMemberPlate_C_FocusLost_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Construct
struct UBP_PartyMemberPlate_C_Construct_Params
{
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.Dropdown Button Selected
struct UBP_PartyMemberPlate_C_Dropdown_Button_Selected_Params
{
	int                                                Button_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PartyMemberPlate.BP_PartyMemberPlate_C.ExecuteUbergraph_BP_PartyMemberPlate
struct UBP_PartyMemberPlate_C_ExecuteUbergraph_BP_PartyMemberPlate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
