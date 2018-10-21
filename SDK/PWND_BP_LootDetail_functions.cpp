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

// Function BP_LootDetail.BP_LootDetail_C.IsCharacterListVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LootDetail_C::IsCharacterListVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.IsCharacterListVisible");

	UBP_LootDetail_C_IsCharacterListVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_LootDetail.BP_LootDetail_C.IsCharacterListOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LootDetail_C::IsCharacterListOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.IsCharacterListOpen");

	UBP_LootDetail_C_IsCharacterListOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function BP_LootDetail.BP_LootDetail_C.For Every Character
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_LootDetail_C::For_Every_Character()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.For Every Character");

	UBP_LootDetail_C_For_Every_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LootDetail.BP_LootDetail_C.Update Loot Details
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Duplicate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Current_Equip                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           AlreadyEquipped                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootDetail_C::Update_Loot_Details(const struct FText& Character, bool Duplicate, int Value, const struct FText& Current_Equip, const struct FGuid& Guid, bool AlreadyEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.Update Loot Details");

	UBP_LootDetail_C_Update_Loot_Details_Params params;
	params.Character = Character;
	params.Duplicate = Duplicate;
	params.Value = Value;
	params.Current_Equip = Current_Equip;
	params.Guid = Guid;
	params.AlreadyEquipped = AlreadyEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_Equip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootDetail_C::BndEvt__Button_Equip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_Equip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_LootDetail_C_BndEvt__Button_Equip_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootDetail_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_LootDetail_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.Call DetailBack
// (BlueprintCallable, BlueprintEvent)

void UBP_LootDetail_C::Call_DetailBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.Call DetailBack");

	UBP_LootDetail_C_Call_DetailBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_PREVIEW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootDetail_C::BndEvt__Button_PREVIEW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.BndEvt__Button_PREVIEW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_LootDetail_C_BndEvt__Button_PREVIEW_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.Character Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootDetail_C::Character_Selected(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.Character Selected");

	UBP_LootDetail_C_Character_Selected_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LootDetail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.Construct");

	UBP_LootDetail_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.Public_Equip_Functionality
// (BlueprintCallable, BlueprintEvent)

void UBP_LootDetail_C::Public_Equip_Functionality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.Public_Equip_Functionality");

	UBP_LootDetail_C_Public_Equip_Functionality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.PassScreenForNavigationHookup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEnd_BaseScreen*    FrontEndScreen                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootDetail_C::PassScreenForNavigationHookup(class UFrontEnd_BaseScreen* FrontEndScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.PassScreenForNavigationHookup");

	UBP_LootDetail_C_PassScreenForNavigationHookup_Params params;
	params.FrontEndScreen = FrontEndScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.Open Character List
// (BlueprintCallable, BlueprintEvent)

void UBP_LootDetail_C::Open_Character_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.Open Character List");

	UBP_LootDetail_C_Open_Character_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.Close Character List
// (BlueprintCallable, BlueprintEvent)

void UBP_LootDetail_C::Close_Character_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.Close Character List");

	UBP_LootDetail_C_Close_Character_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.UpdateEquippedStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AlreadyEquipped                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootDetail_C::UpdateEquippedStatus(bool AlreadyEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.UpdateEquippedStatus");

	UBP_LootDetail_C_UpdateEquippedStatus_Params params;
	params.AlreadyEquipped = AlreadyEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.ExecuteUbergraph_BP_LootDetail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootDetail_C::ExecuteUbergraph_BP_LootDetail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.ExecuteUbergraph_BP_LootDetail");

	UBP_LootDetail_C_ExecuteUbergraph_BP_LootDetail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.PreviewVO__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LootDetail_C::PreviewVO__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.PreviewVO__DelegateSignature");

	UBP_LootDetail_C_PreviewVO__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.ItemEquip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Item_GUID                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Character_GUID                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_LootDetail_C::ItemEquip__DelegateSignature(const struct FGuid& Item_GUID, const struct FGuid& Character_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.ItemEquip__DelegateSignature");

	UBP_LootDetail_C_ItemEquip__DelegateSignature_Params params;
	params.Item_GUID = Item_GUID;
	params.Character_GUID = Character_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDetail.BP_LootDetail_C.DetailsBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LootDetail_C::DetailsBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDetail.BP_LootDetail_C.DetailsBack__DelegateSignature");

	UBP_LootDetail_C_DetailsBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
