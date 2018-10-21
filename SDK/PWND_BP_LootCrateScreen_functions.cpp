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

// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Get Character GUID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Item                           (Parm, OutParm, IsPlainOldData)

void UBP_LootCrateScreen_C::Get_Character_GUID(const struct FGuid& InputPin, struct FGuid* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Get Character GUID");

	UBP_LootCrateScreen_C_Get_Character_GUID_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Get Highest Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::Get_Highest_Rarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Get Highest Rarity");

	UBP_LootCrateScreen_C_Get_Highest_Rarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_OpenCrate_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__Button_OpenCrate_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_OpenCrate_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__Button_OpenCrate_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LootCrateScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Construct");

	UBP_LootCrateScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__MyLootcrateInfo_K2Node_ComponentBoundEvent_0_OutOfCratesDispatcher__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__MyLootcrateInfo_K2Node_ComponentBoundEvent_0_OutOfCratesDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__MyLootcrateInfo_K2Node_ComponentBoundEvent_0_OutOfCratesDispatcher__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__MyLootcrateInfo_K2Node_ComponentBoundEvent_0_OutOfCratesDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnReceiveLootCrateData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FGuidInventoryItem>* lootCrates                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_LootCrateScreen_C::OnReceiveLootCrateData(TArray<struct FGuidInventoryItem>* lootCrates)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnReceiveLootCrateData");

	UBP_LootCrateScreen_C_OnReceiveLootCrateData_Params params;
	params.lootCrates = lootCrates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnCrateSuccessfullyOpened
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FGuidInventoryItem>* itemsOpened                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGuidInventoryItem>* itemsAwarded                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_LootCrateScreen_C::OnCrateSuccessfullyOpened(TArray<struct FGuidInventoryItem>* itemsOpened, TArray<struct FGuidInventoryItem>* itemsAwarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnCrateSuccessfullyOpened");

	UBP_LootCrateScreen_C_OnCrateSuccessfullyOpened_Params params;
	params.itemsOpened = itemsOpened;
	params.itemsAwarded = itemsAwarded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnCrateFailedToOpen
// (Event, Public, BlueprintEvent)

void UBP_LootCrateScreen_C::OnCrateFailedToOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnCrateFailedToOpen");

	UBP_LootCrateScreen_C_OnCrateFailedToOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.LootSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Duplicate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateScreen_C::LootSelected(const struct FGuid& Guid, bool Duplicate, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.LootSelected");

	UBP_LootCrateScreen_C_LootSelected_Params params;
	params.Guid = Guid;
	params.Duplicate = Duplicate;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.DetailBack
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::DetailBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.DetailBack");

	UBP_LootCrateScreen_C_DetailBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_BuyCrate_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__Button_BuyCrate_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_BuyCrate_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__Button_BuyCrate_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BoughtCrates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumOfCrates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateScreen_C::BoughtCrates(int NumOfCrates)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BoughtCrates");

	UBP_LootCrateScreen_C_BoughtCrates_Params params;
	params.NumOfCrates = NumOfCrates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToMainCrateScreen
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::ReturnToMainCrateScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToMainCrateScreen");

	UBP_LootCrateScreen_C_ReturnToMainCrateScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToStoreChoice
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::ReturnToStoreChoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToStoreChoice");

	UBP_LootCrateScreen_C_ReturnToStoreChoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Gold Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_LootCrateScreen_C::Gold_Selected(int Int, const struct FText& Title, const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Gold Selected");

	UBP_LootCrateScreen_C_Gold_Selected_Params params;
	params.Int = Int;
	params.Title = Title;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BuyMoreEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::BuyMoreEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BuyMoreEvent");

	UBP_LootCrateScreen_C_BuyMoreEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Clear Loot Items
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::Clear_Loot_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Clear Loot Items");

	UBP_LootCrateScreen_C_Clear_Loot_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.SetInitialPos
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              CamTransform                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  DefaultRefPos                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateScreen_C::SetInitialPos(const struct FTransform& CamTransform, class AActor* DefaultRefPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.SetInitialPos");

	UBP_LootCrateScreen_C_SetInitialPos_Params params;
	params.CamTransform = CamTransform;
	params.DefaultRefPos = DefaultRefPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Details Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::Details_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Details Screen");

	UBP_LootCrateScreen_C_Details_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Items Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::Items_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Items Screen");

	UBP_LootCrateScreen_C_Items_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Store Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::Store_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Store Screen");

	UBP_LootCrateScreen_C_Store_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Top Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::Top_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Top Screen");

	UBP_LootCrateScreen_C_Top_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Crates_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__Button_Crates_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Crates_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__Button_Crates_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Gold_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__Button_Gold_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__Button_Gold_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__Button_Gold_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateLeft_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__RotateLeft_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateLeft_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__RotateLeft_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateRight_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__RotateRight_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateRight_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__RotateRight_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__RotateLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__RotateLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateScreen_C::BndEvt__RotateRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.BndEvt__RotateRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UBP_LootCrateScreen_C_BndEvt__RotateRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Equip Selected Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Item_GUID                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Character_GUID                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_LootCrateScreen_C::Equip_Selected_Item(const struct FGuid& Item_GUID, const struct FGuid& Character_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Equip Selected Item");

	UBP_LootCrateScreen_C_Equip_Selected_Item_Params params;
	params.Item_GUID = Item_GUID;
	params.Character_GUID = Character_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Preview Voice Line
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::Preview_Voice_Line()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Preview Voice Line");

	UBP_LootCrateScreen_C_Preview_Voice_Line_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnBack
// (Event, Public, BlueprintEvent)

void UBP_LootCrateScreen_C::OnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnBack");

	UBP_LootCrateScreen_C_OnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Close Store Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::Close_Store_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Close Store Screen");

	UBP_LootCrateScreen_C_Close_Store_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnEnterScreen
// (Event, Public, BlueprintEvent)

void UBP_LootCrateScreen_C::OnEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnEnterScreen");

	UBP_LootCrateScreen_C_OnEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary1
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::OnClicked_LootSummary1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary1");

	UBP_LootCrateScreen_C_OnClicked_LootSummary1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary2
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::OnClicked_LootSummary2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary2");

	UBP_LootCrateScreen_C_OnClicked_LootSummary2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary3
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::OnClicked_LootSummary3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary3");

	UBP_LootCrateScreen_C_OnClicked_LootSummary3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary4
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::OnClicked_LootSummary4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OnClicked_LootSummary4");

	UBP_LootCrateScreen_C_OnClicked_LootSummary4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Public_OnAcceptPressed
// (Event, Public, BlueprintEvent)

void UBP_LootCrateScreen_C::Public_OnAcceptPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Public_OnAcceptPressed");

	UBP_LootCrateScreen_C_Public_OnAcceptPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.Public_OnLeftFaceButtonPressed
// (Event, Public, BlueprintEvent)

void UBP_LootCrateScreen_C::Public_OnLeftFaceButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.Public_OnLeftFaceButtonPressed");

	UBP_LootCrateScreen_C_Public_OnLeftFaceButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ResetDetailsEquipFlag
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::ResetDetailsEquipFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.ResetDetailsEquipFlag");

	UBP_LootCrateScreen_C_ResetDetailsEquipFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.CloseDetailsEquipFlag
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::CloseDetailsEquipFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.CloseDetailsEquipFlag");

	UBP_LootCrateScreen_C_CloseDetailsEquipFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReEvaluateLootDetailEquippedStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   characterGuid                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_LootCrateScreen_C::ReEvaluateLootDetailEquippedStatus(const struct FGuid& characterGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReEvaluateLootDetailEquippedStatus");

	UBP_LootCrateScreen_C_ReEvaluateLootDetailEquippedStatus_Params params;
	params.characterGuid = characterGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ExecuteUbergraph_BP_LootCrateScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateScreen_C::ExecuteUbergraph_BP_LootCrateScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.ExecuteUbergraph_BP_LootCrateScreen");

	UBP_LootCrateScreen_C_ExecuteUbergraph_BP_LootCrateScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.CrateRarity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EeItemRarity>      Highest_Rarity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateScreen_C::CrateRarity__DelegateSignature(TEnumAsByte<EeItemRarity> Highest_Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.CrateRarity__DelegateSignature");

	UBP_LootCrateScreen_C_CrateRarity__DelegateSignature_Params params;
	params.Highest_Rarity = Highest_Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.CratesAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::CratesAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.CratesAdded__DelegateSignature");

	UBP_LootCrateScreen_C_CratesAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.OutOfCrates__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::OutOfCrates__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.OutOfCrates__DelegateSignature");

	UBP_LootCrateScreen_C_OutOfCrates__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.MoveCamToPos__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  ActorRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateScreen_C::MoveCamToPos__DelegateSignature(const struct FTransform& Position, class AActor* ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.MoveCamToPos__DelegateSignature");

	UBP_LootCrateScreen_C_MoveCamToPos__DelegateSignature_Params params;
	params.Position = Position;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToSequenceStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LootCrateScreen_C::ReturnToSequenceStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateScreen.BP_LootCrateScreen_C.ReturnToSequenceStart__DelegateSignature");

	UBP_LootCrateScreen_C_ReturnToSequenceStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
