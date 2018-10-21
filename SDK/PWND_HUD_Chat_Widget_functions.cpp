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

// Function HUD_Chat_Widget.HUD_Chat_Widget_C.HideChatMessages
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_Widget_C::HideChatMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.HideChatMessages");

	UHUD_Chat_Widget_C_HideChatMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.ShowChatMessages
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_Widget_C::ShowChatMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.ShowChatMessages");

	UHUD_Chat_Widget_C_ShowChatMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.HandleChatCommands
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPwndEditableText*       InputTextBox                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasValidCommand                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_Widget_C::HandleChatCommands(class UPwndEditableText* InputTextBox, bool* WasValidCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.HandleChatCommands");

	UHUD_Chat_Widget_C_HandleChatCommands_Params params;
	params.InputTextBox = InputTextBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasValidCommand != nullptr)
		*WasValidCommand = params.WasValidCommand;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.UpdateChannelTypeInputText
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_Widget_C::UpdateChannelTypeInputText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.UpdateChannelTypeInputText");

	UHUD_Chat_Widget_C_UpdateChannelTypeInputText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.ResetChatInputState
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_Widget_C::ResetChatInputState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.ResetChatInputState");

	UHUD_Chat_Widget_C_ResetChatInputState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.InititalizeFontSizes
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_Widget_C::InititalizeFontSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.InititalizeFontSizes");

	UHUD_Chat_Widget_C_InititalizeFontSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.SwitchNextChatChannel
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_Widget_C::SwitchNextChatChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.SwitchNextChatChannel");

	UHUD_Chat_Widget_C_SwitchNextChatChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.MapChatChannelToChatBlockInt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChatChannelType               Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChatMapping                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_Widget_C::MapChatChannelToChatBlockInt(EChatChannelType Selection, int* ChatMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.MapChatChannelToChatBlockInt");

	UHUD_Chat_Widget_C_MapChatChannelToChatBlockInt_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChatMapping != nullptr)
		*ChatMapping = params.ChatMapping;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.AddToChatBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChatMessageStruct      Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Chat_Widget_C::AddToChatBox(const struct FChatMessageStruct& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.AddToChatBox");

	UHUD_Chat_Widget_C_AddToChatBox_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.HideTextInput
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_Widget_C::HideTextInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.HideTextInput");

	UHUD_Chat_Widget_C_HideTextInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.ShowTextInput
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Chat_Widget_C::ShowTextInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.ShowTextInput");

	UHUD_Chat_Widget_C_ShowTextInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Chat_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.Construct");

	UHUD_Chat_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.OnMessageRecieved
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChatMessageStruct*     ChatMessage                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_Chat_Widget_C::OnMessageRecieved(struct FChatMessageStruct* ChatMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.OnMessageRecieved");

	UHUD_Chat_Widget_C_OnMessageRecieved_Params params;
	params.ChatMessage = ChatMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__ChatButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHUD_Chat_Widget_C::BndEvt__ChatButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__ChatButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature");

	UHUD_Chat_Widget_C_BndEvt__ChatButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_Widget_C::BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	UHUD_Chat_Widget_C_BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_1_OnKeyPressedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_Chat_Widget_C::BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_1_OnKeyPressedEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_1_OnKeyPressedEvent__DelegateSignature");

	UHUD_Chat_Widget_C_BndEvt__PwndTextInput_K2Node_ComponentBoundEvent_1_OnKeyPressedEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_Widget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.Tick");

	UHUD_Chat_Widget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Chat_Widget.HUD_Chat_Widget_C.ExecuteUbergraph_HUD_Chat_Widget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Chat_Widget_C::ExecuteUbergraph_HUD_Chat_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_Widget.HUD_Chat_Widget_C.ExecuteUbergraph_HUD_Chat_Widget");

	UHUD_Chat_Widget_C_ExecuteUbergraph_HUD_Chat_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
