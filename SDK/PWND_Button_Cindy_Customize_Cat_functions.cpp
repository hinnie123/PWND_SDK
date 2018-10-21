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

// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_Cindy_Customize_Cat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Construct");

	UButton_Cindy_Customize_Cat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Assign Values
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Category                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Curr_Equipped                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Num_Unlocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num_Total                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FPurchasableEquipItem> Items_in_Category              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Category_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Cat_C::Assign_Values(const struct FText& Category, const struct FText& Curr_Equipped, int Num_Unlocked, int Num_Total, const struct FSlateColor& Color, TArray<struct FPurchasableEquipItem> Items_in_Category, int Category_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Assign Values");

	UButton_Cindy_Customize_Cat_C_Assign_Values_Params params;
	params.Category = Category;
	params.Curr_Equipped = Curr_Equipped;
	params.Num_Unlocked = Num_Unlocked;
	params.Num_Total = Num_Total;
	params.Color = Color;
	params.Items_in_Category = Items_in_Category;
	params.Category_Index = Category_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.OnButtonPressed_Local
// (Event, Public, BlueprintEvent)

void UButton_Cindy_Customize_Cat_C::OnButtonPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.OnButtonPressed_Local");

	UButton_Cindy_Customize_Cat_C_OnButtonPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_SelectedStateSet
// (Event, Public, BlueprintEvent)

void UButton_Cindy_Customize_Cat_C::Cosmetic_SelectedStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_SelectedStateSet");

	UButton_Cindy_Customize_Cat_C_Cosmetic_SelectedStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_HoverStateSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Cat_C::Cosmetic_HoverStateSet(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_HoverStateSet");

	UButton_Cindy_Customize_Cat_C_Cosmetic_HoverStateSet_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_NormalStateSet
// (Event, Public, BlueprintEvent)

void UButton_Cindy_Customize_Cat_C::Cosmetic_NormalStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_NormalStateSet");

	UButton_Cindy_Customize_Cat_C_Cosmetic_NormalStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_SelectedHoverStateSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Cat_C::Cosmetic_SelectedHoverStateSet(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Cosmetic_SelectedHoverStateSet");

	UButton_Cindy_Customize_Cat_C_Cosmetic_SelectedHoverStateSet_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Manual Set Hover
// (BlueprintCallable, BlueprintEvent)

void UButton_Cindy_Customize_Cat_C::Manual_Set_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.Manual Set Hover");

	UButton_Cindy_Customize_Cat_C_Manual_Set_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.ExecuteUbergraph_Button_Cindy_Customize_Cat
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Cat_C::ExecuteUbergraph_Button_Cindy_Customize_Cat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.ExecuteUbergraph_Button_Cindy_Customize_Cat");

	UButton_Cindy_Customize_Cat_C_ExecuteUbergraph_Button_Cindy_Customize_Cat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.CategoryClicked__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPurchasableEquipItem> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton_Cindy_Customize_Cat_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Cindy_Customize_Cat_C::CategoryClicked__DelegateSignature(const struct FText& Title, int Category, class UButton_Cindy_Customize_Cat_C* ButtonRef, TArray<struct FPurchasableEquipItem>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Cindy_Customize_Cat.Button_Cindy_Customize_Cat_C.CategoryClicked__DelegateSignature");

	UButton_Cindy_Customize_Cat_C_CategoryClicked__DelegateSignature_Params params;
	params.Title = Title;
	params.Category = Category;
	params.ButtonRef = ButtonRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
