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

// Function BP_CustomizeScreen.BP_CustomizeScreen_C.FindSelectedItemButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton_Cindy_Customize_Item_C* ButtonRef                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::FindSelectedItemButton(class UButton_Cindy_Customize_Item_C** ButtonRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.FindSelectedItemButton");

	UBP_CustomizeScreen_C_FindSelectedItemButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonRef != nullptr)
		*ButtonRef = params.ButtonRef;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.GetFirstItemCost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   GuidInput                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   CostGuid                       (Parm, OutParm, IsPlainOldData)

void UBP_CustomizeScreen_C::GetFirstItemCost(const struct FGuid& GuidInput, int* cost, bool* Success, struct FGuid* CostGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.GetFirstItemCost");

	UBP_CustomizeScreen_C_GetFirstItemCost_Params params;
	params.GuidInput = GuidInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cost != nullptr)
		*cost = params.cost;
	if (Success != nullptr)
		*Success = params.Success;
	if (CostGuid != nullptr)
		*CostGuid = params.CostGuid;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Select Rarity Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EeItemRarity>      Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_CustomizeScreen_C::Select_Rarity_Color(TEnumAsByte<EeItemRarity> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Select Rarity Color");

	UBP_CustomizeScreen_C_Select_Rarity_Color_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Character Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UButton_CindyCharList_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::Character_Selected(const struct FGuid& Guid, class UButton_CindyCharList_C* ButtonRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Character Selected");

	UBP_CustomizeScreen_C_Character_Selected_Params params;
	params.Guid = Guid;
	params.ButtonRef = ButtonRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Initialize Character Select
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::Initialize_Character_Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Initialize Character Select");

	UBP_CustomizeScreen_C_Initialize_Character_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.SetEquippedScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_CustomizeScreen_C::SetEquippedScreen(const struct FGuid& Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.SetEquippedScreen");

	UBP_CustomizeScreen_C_SetEquippedScreen_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CustomizeScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Construct");

	UBP_CustomizeScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintLeave_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__ButtonHintLeave_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintLeave_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__ButtonHintLeave_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.LoadChoiceMenu
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPurchasableEquipItem> Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::LoadChoiceMenu(TArray<struct FPurchasableEquipItem> Items, const struct FText& Title, int Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.LoadChoiceMenu");

	UBP_CustomizeScreen_C_LoadChoiceMenu_Params params;
	params.Items = Items;
	params.Title = Title;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.SetLoadout_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndLoadoutVisualizerHelper* Helper                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APwndLoadoutVisualizer*  Visualizer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadoutChanged                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndLoadout            Loadout                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPwndLoadout            PrevLoadout                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CustomizeScreen_C::SetLoadout_Event(class APwndLoadoutVisualizerHelper* Helper, class APwndLoadoutVisualizer* Visualizer, bool bLoadoutChanged, const struct FPwndLoadout& Loadout, const struct FPwndLoadout& PrevLoadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.SetLoadout_Event");

	UBP_CustomizeScreen_C_SetLoadout_Event_Params params;
	params.Helper = Helper;
	params.Visualizer = Visualizer;
	params.bLoadoutChanged = bLoadoutChanged;
	params.Loadout = Loadout;
	params.PrevLoadout = PrevLoadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Update Visualizer 2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPwndLoadout            Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_CustomizeScreen_C::Update_Visualizer_2(const struct FPwndLoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Update Visualizer 2");

	UBP_CustomizeScreen_C_Update_Visualizer_2_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Tick");

	UBP_CustomizeScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__Button_Cindy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.PurchaseEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::PurchaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.PurchaseEvent");

	UBP_CustomizeScreen_C_PurchaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Visualize Single Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   LoadoutPiece                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_CustomizeScreen_C::Visualize_Single_Item(const struct FGuid& LoadoutPiece)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Visualize Single Item");

	UBP_CustomizeScreen_C_Visualize_Single_Item_Params params;
	params.LoadoutPiece = LoadoutPiece;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Item Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPurchasableEquipItem   Item_GUID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Is_Owned                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton_Cindy_Customize_Item_C* Self_reference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::Item_Hover(const struct FPurchasableEquipItem& Item_GUID, bool Is_Owned, class UButton_Cindy_Customize_Item_C* Self_reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Item Hover");

	UBP_CustomizeScreen_C_Item_Hover_Params params;
	params.Item_GUID = Item_GUID;
	params.Is_Owned = Is_Owned;
	params.Self_reference = Self_reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Item UnHover
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::Item_UnHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Item UnHover");

	UBP_CustomizeScreen_C_Item_UnHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_54_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__Button_78_K2Node_ComponentBoundEvent_54_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_54_OnButtonPressedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__Button_78_K2Node_ComponentBoundEvent_54_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_72_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__Button_78_K2Node_ComponentBoundEvent_72_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_72_OnButtonReleasedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__Button_78_K2Node_ComponentBoundEvent_72_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_193_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__Button_79_K2Node_ComponentBoundEvent_193_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_193_OnButtonPressedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__Button_79_K2Node_ComponentBoundEvent_193_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonRotRight_K2Node_ComponentBoundEvent_230_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__ButtonRotRight_K2Node_ComponentBoundEvent_230_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonRotRight_K2Node_ComponentBoundEvent_230_OnButtonReleasedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__ButtonRotRight_K2Node_ComponentBoundEvent_230_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Set Percent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowBar                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Owned                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::Set_Percent(bool ShowBar, int Owned, int Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Set Percent");

	UBP_CustomizeScreen_C_Set_Percent_Params params;
	params.ShowBar = ShowBar;
	params.Owned = Owned;
	params.Total = Total;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__Button_Customize_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__Button_Customize_K2Node_ComponentBoundEvent_254_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Toggle Character Info
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::Toggle_Character_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Toggle Character Info");

	UBP_CustomizeScreen_C_Toggle_Character_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintCharacterInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__ButtonHintCharacterInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintCharacterInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__ButtonHintCharacterInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintHideCharacterInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__ButtonHintHideCharacterInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__ButtonHintHideCharacterInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__ButtonHintHideCharacterInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_VoicePreview_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeScreen_C::BndEvt__Button_VoicePreview_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BndEvt__Button_VoicePreview_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomizeScreen_C_BndEvt__Button_VoicePreview_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.PurchaseItemCallBack
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool*                          bSucceeded                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  ErrorMessage                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CustomizeScreen_C::PurchaseItemCallBack(bool* bSucceeded, struct FText* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.PurchaseItemCallBack");

	UBP_CustomizeScreen_C_PurchaseItemCallBack_Params params;
	params.bSucceeded = bSucceeded;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnBack
// (Event, Public, BlueprintEvent)

void UBP_CustomizeScreen_C::OnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnBack");

	UBP_CustomizeScreen_C_OnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnEnterScreen
// (Event, Public, BlueprintEvent)

void UBP_CustomizeScreen_C::OnEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnEnterScreen");

	UBP_CustomizeScreen_C_OnEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnSocialPressed
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::OnSocialPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnSocialPressed");

	UBP_CustomizeScreen_C_OnSocialPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.BindSocialButton
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::BindSocialButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.BindSocialButton");

	UBP_CustomizeScreen_C_BindSocialButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.UnbindOnSocialClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::UnbindOnSocialClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.UnbindOnSocialClicked");

	UBP_CustomizeScreen_C_UnbindOnSocialClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ExitScreen
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::ExitScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.ExitScreen");

	UBP_CustomizeScreen_C_ExitScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ResetScreenStage
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::ResetScreenStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.ResetScreenStage");

	UBP_CustomizeScreen_C_ResetScreenStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnUpdatedInventoryReceived
// (Event, Public, BlueprintEvent)

void UBP_CustomizeScreen_C::OnUpdatedInventoryReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnUpdatedInventoryReceived");

	UBP_CustomizeScreen_C_OnUpdatedInventoryReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnExitScreen
// (Event, Public, BlueprintEvent)

void UBP_CustomizeScreen_C::OnExitScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnExitScreen");

	UBP_CustomizeScreen_C_OnExitScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh Current Item
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::Refresh_Current_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh Current Item");

	UBP_CustomizeScreen_C_Refresh_Current_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh All Items In list
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::Refresh_All_Items_In_list()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh All Items In list");

	UBP_CustomizeScreen_C_Refresh_All_Items_In_list_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnAccept
// (Event, Public, BlueprintEvent)

void UBP_CustomizeScreen_C::OnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnAccept");

	UBP_CustomizeScreen_C_OnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnLeftFaceButton
// (Event, Public, BlueprintEvent)

void UBP_CustomizeScreen_C::OnLeftFaceButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.OnLeftFaceButton");

	UBP_CustomizeScreen_C_OnLeftFaceButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.CategoryClicked_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPurchasableEquipItem> Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton_Cindy_Customize_Cat_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::CategoryClicked_Event_1(TArray<struct FPurchasableEquipItem> Items, const struct FText& Title, int Category, class UButton_Cindy_Customize_Cat_C* ButtonRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.CategoryClicked_Event_1");

	UBP_CustomizeScreen_C_CategoryClicked_Event_1_Params params;
	params.Items = Items;
	params.Title = Title;
	params.Category = Category;
	params.ButtonRef = ButtonRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.GoToCharacterStage
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::GoToCharacterStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.GoToCharacterStage");

	UBP_CustomizeScreen_C_GoToCharacterStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.GoToCategorySelectionStage
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::GoToCategorySelectionStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.GoToCategorySelectionStage");

	UBP_CustomizeScreen_C_GoToCategorySelectionStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.EquipCurrentItem
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::EquipCurrentItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.EquipCurrentItem");

	UBP_CustomizeScreen_C_EquipCurrentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Back Functionality
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::Back_Functionality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Back Functionality");

	UBP_CustomizeScreen_C_Back_Functionality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Unlock_Functionality
// (BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::Unlock_Functionality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Unlock_Functionality");

	UBP_CustomizeScreen_C_Unlock_Functionality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton_Cindy_Customize_Item_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::ItemSelected(class UButton_Cindy_Customize_Item_C* ButtonRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.ItemSelected");

	UBP_CustomizeScreen_C_ItemSelected_Params params;
	params.ButtonRef = ButtonRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPurchasableEquipItem   Item_GUID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Is_Owned                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton_Cindy_Customize_Item_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           wasMouseClick                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::ItemClicked(const struct FPurchasableEquipItem& Item_GUID, bool Is_Owned, bool IsEquipped, int Category, class UButton_Cindy_Customize_Item_C* ButtonRef, bool wasMouseClick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.ItemClicked");

	UBP_CustomizeScreen_C_ItemClicked_Params params;
	params.Item_GUID = Item_GUID;
	params.Is_Owned = Is_Owned;
	params.IsEquipped = IsEquipped;
	params.Category = Category;
	params.ButtonRef = ButtonRef;
	params.wasMouseClick = wasMouseClick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh Category Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::Refresh_Category_Complete(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.Refresh Category Complete");

	UBP_CustomizeScreen_C_Refresh_Category_Complete_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.ExecuteUbergraph_BP_CustomizeScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeScreen_C::ExecuteUbergraph_BP_CustomizeScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.ExecuteUbergraph_BP_CustomizeScreen");

	UBP_CustomizeScreen_C_ExecuteUbergraph_BP_CustomizeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeScreen.BP_CustomizeScreen_C.LoudoutChage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CustomizeScreen_C::LoudoutChage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeScreen.BP_CustomizeScreen_C.LoudoutChage__DelegateSignature");

	UBP_CustomizeScreen_C_LoudoutChage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
