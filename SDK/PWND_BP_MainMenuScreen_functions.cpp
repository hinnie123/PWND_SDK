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

// Function BP_MainMenuScreen.BP_MainMenuScreen_C.Transition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenuScreen_C::Transition(float* DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.Transition");

	UBP_MainMenuScreen_C_Transition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DelayTime != nullptr)
		*DelayTime = params.DelayTime;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MainMenuScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.Construct");

	UBP_MainMenuScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_FrontEnd_150_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_FrontEnd_150_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_FrontEnd_150_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_FrontEnd_150_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__LootButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__LootButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__LootButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__LootButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.Server Status
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Server_Up                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenuScreen_C::Server_Status(bool Server_Up)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.Server Status");

	UBP_MainMenuScreen_C_Server_Status_Params params;
	params.Server_Up = Server_Up;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_CindyList_46_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_CindyList_46_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_CindyList_46_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_CindyList_46_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_CindyList_C_0_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_CindyList_C_0_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_CindyList_C_0_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_CindyList_C_0_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.TrainingTip
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::TrainingTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.TrainingTip");

	UBP_MainMenuScreen_C_TrainingTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnPlayerMissionsRecieved
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FMissionInfo>*   Missions                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MainMenuScreen_C::OnPlayerMissionsRecieved(TArray<struct FMissionInfo>* Missions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnPlayerMissionsRecieved");

	UBP_MainMenuScreen_C_OnPlayerMissionsRecieved_Params params;
	params.Missions = Missions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Loot_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_Loot_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Loot_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_Loot_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_CindyList_C_1_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_CindyList_C_1_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_CindyList_C_1_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_CindyList_C_1_K2Node_ComponentBoundEvent_174_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnOkayPressed_Event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::OnOkayPressed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnOkayPressed_Event_1");

	UBP_MainMenuScreen_C_OnOkayPressed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.EnablePlayButton
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenuScreen_C::EnablePlayButton(bool* enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.EnablePlayButton");

	UBP_MainMenuScreen_C_EnablePlayButton_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Social_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_Social_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Social_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_Social_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_Options_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_Options_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Missions_K2Node_ComponentBoundEvent_526_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_Missions_K2Node_ComponentBoundEvent_526_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Missions_K2Node_ComponentBoundEvent_526_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_Missions_K2Node_ComponentBoundEvent_526_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnSocialClicked_From_PlayerNamePlate
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::OnSocialClicked_From_PlayerNamePlate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnSocialClicked_From_PlayerNamePlate");

	UBP_MainMenuScreen_C_OnSocialClicked_From_PlayerNamePlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnLeavePartyClicked_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::OnLeavePartyClicked_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnLeavePartyClicked_Event");

	UBP_MainMenuScreen_C_OnLeavePartyClicked_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnSafeInitialization
// (Event, Public, BlueprintEvent)

void UBP_MainMenuScreen_C::OnSafeInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnSafeInitialization");

	UBP_MainMenuScreen_C_OnSafeInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.EnableTrainingButton
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenuScreen_C::EnableTrainingButton(bool* enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.EnableTrainingButton");

	UBP_MainMenuScreen_C_EnableTrainingButton_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.EnableSocialButton
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenuScreen_C::EnableSocialButton(bool* enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.EnableSocialButton");

	UBP_MainMenuScreen_C_EnableSocialButton_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnReturnFromMatch
// (Event, Public, BlueprintEvent)

void UBP_MainMenuScreen_C::OnReturnFromMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnReturnFromMatch");

	UBP_MainMenuScreen_C_OnReturnFromMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnUpdatedInventoryReceived
// (Event, Public, BlueprintEvent)

void UBP_MainMenuScreen_C::OnUpdatedInventoryReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.OnUpdatedInventoryReceived");

	UBP_MainMenuScreen_C_OnUpdatedInventoryReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MainMenuScreen_C::BndEvt__Button_Credits_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.BndEvt__Button_Credits_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_MainMenuScreen_C_BndEvt__Button_Credits_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.ExecuteUbergraph_BP_MainMenuScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MainMenuScreen_C::ExecuteUbergraph_BP_MainMenuScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.ExecuteUbergraph_BP_MainMenuScreen");

	UBP_MainMenuScreen_C_ExecuteUbergraph_BP_MainMenuScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.CustomizeButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::CustomizeButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.CustomizeButtonPressed__DelegateSignature");

	UBP_MainMenuScreen_C_CustomizeButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.LoadingScreenWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::LoadingScreenWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.LoadingScreenWidget__DelegateSignature");

	UBP_MainMenuScreen_C_LoadingScreenWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.Back Button Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::Back_Button_Pressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.Back Button Pressed__DelegateSignature");

	UBP_MainMenuScreen_C_Back_Button_Pressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.LootButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::LootButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.LootButtonPressed__DelegateSignature");

	UBP_MainMenuScreen_C_LootButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuScreen.BP_MainMenuScreen_C.CharactersButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MainMenuScreen_C::CharactersButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuScreen.BP_MainMenuScreen_C.CharactersButtonPressed__DelegateSignature");

	UBP_MainMenuScreen_C_CharactersButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
