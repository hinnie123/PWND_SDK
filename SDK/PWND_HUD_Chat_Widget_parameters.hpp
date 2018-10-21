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

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.HideChatMessages
struct UHUD_Chat_Widget_C_HideChatMessages_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.ShowChatMessages
struct UHUD_Chat_Widget_C_ShowChatMessages_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.HandleChatCommands
struct UHUD_Chat_Widget_C_HandleChatCommands_Params
{
	class UPwndEditableText*                           InputTextBox;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasValidCommand;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.UpdateChannelTypeInputText
struct UHUD_Chat_Widget_C_UpdateChannelTypeInputText_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.ResetChatInputState
struct UHUD_Chat_Widget_C_ResetChatInputState_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.InititalizeFontSizes
struct UHUD_Chat_Widget_C_InititalizeFontSizes_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.SwitchNextChatChannel
struct UHUD_Chat_Widget_C_SwitchNextChatChannel_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.MapChatChannelToChatBlockInt
struct UHUD_Chat_Widget_C_MapChatChannelToChatBlockInt_Params
{
	EChatChannelType                                   Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChatMapping;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.AddToChatBox
struct UHUD_Chat_Widget_C_AddToChatBox_Params
{
	struct FChatMessageStruct                          Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.HideTextInput
struct UHUD_Chat_Widget_C_HideTextInput_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.ShowTextInput
struct UHUD_Chat_Widget_C_ShowTextInput_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.Construct
struct UHUD_Chat_Widget_C_Construct_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.OnMessageRecieved
struct UHUD_Chat_Widget_C_OnMessageRecieved_Params
{
	struct FChatMessageStruct*                         ChatMessage;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__ChatButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
struct UHUD_Chat_Widget_C_BndEvt__ChatButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
struct UHUD_Chat_Widget_C_BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_1_OnKeyPressedEvent__DelegateSignature
struct UHUD_Chat_Widget_C_BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_1_OnKeyPressedEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.Tick
struct UHUD_Chat_Widget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.ExecuteUbergraph_HUD_Chat_Widget
struct UHUD_Chat_Widget_C_ExecuteUbergraph_HUD_Chat_Widget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
