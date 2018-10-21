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

// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_Cindy_Customize_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Construct");

	UButton_Cindy_Customize_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Assign Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPurchasableEquipItem   Item_GUID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Equipped                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_New                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::Assign_Item(const struct FPurchasableEquipItem& Item_GUID, int Category, bool Is_Equipped, bool Is_New)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Assign Item");

	UButton_Cindy_Customize_Item_C_Assign_Item_Params params;
	params.Item_GUID = Item_GUID;
	params.Category = Category;
	params.Is_Equipped = Is_Equipped;
	params.Is_New = Is_New;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Set Equipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Equipped                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::Set_Equipped(bool Is_Equipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.Set Equipped");

	UButton_Cindy_Customize_Item_C_Set_Equipped_Params params;
	params.Is_Equipped = Is_Equipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::OnReceiveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnReceiveAttention");

	UButton_Cindy_Customize_Item_C_OnReceiveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnRemoveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::OnRemoveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnRemoveAttention");

	UButton_Cindy_Customize_Item_C_OnRemoveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.SetPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Owned                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::SetPurchased(bool Owned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.SetPurchased");

	UButton_Cindy_Customize_Item_C_SetPurchased_Params params;
	params.Owned = Owned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnReceiveSelection
// (Event, Public, BlueprintEvent)

void UButton_Cindy_Customize_Item_C::OnReceiveSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.OnReceiveSelection");

	UButton_Cindy_Customize_Item_C_OnReceiveSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UButton_Cindy_Customize_Item_C::BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UButton_Cindy_Customize_Item_C_BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ExecuteUbergraph_Button_Cindy_Customize_Item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::ExecuteUbergraph_Button_Cindy_Customize_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ExecuteUbergraph_Button_Cindy_Customize_Item");

	UButton_Cindy_Customize_Item_C_ExecuteUbergraph_Button_Cindy_Customize_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton_Cindy_Customize_Item_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::ItemSelected__DelegateSignature(class UButton_Cindy_Customize_Item_C* ButtonRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemSelected__DelegateSignature");

	UButton_Cindy_Customize_Item_C_ItemSelected__DelegateSignature_Params params;
	params.ButtonRef = ButtonRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPurchasableEquipItem   Item_GUID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Is_Owned                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton_Cindy_Customize_Item_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           wasMouseClick                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::ItemClicked__DelegateSignature(const struct FPurchasableEquipItem& Item_GUID, bool Is_Owned, bool IsEquipped, int Category, class UButton_Cindy_Customize_Item_C* ButtonRef, bool wasMouseClick)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemClicked__DelegateSignature");

	UButton_Cindy_Customize_Item_C_ItemClicked__DelegateSignature_Params params;
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


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemUnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButton_Cindy_Customize_Item_C::ItemUnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemUnHovered__DelegateSignature");

	UButton_Cindy_Customize_Item_C_ItemUnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPurchasableEquipItem   Item_GUID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Is_Owned                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton_Cindy_Customize_Item_C* Self_reference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Item_C::ItemHovered__DelegateSignature(const struct FPurchasableEquipItem& Item_GUID, bool Is_Owned, class UButton_Cindy_Customize_Item_C* Self_reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Item.Button_Cindy_Customize_Item_C.ItemHovered__DelegateSignature");

	UButton_Cindy_Customize_Item_C_ItemHovered__DelegateSignature_Params params;
	params.Item_GUID = Item_GUID;
	params.Is_Owned = Is_Owned;
	params.Self_reference = Self_reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
