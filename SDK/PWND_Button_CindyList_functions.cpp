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

// Function Button_CindyList.Button_CindyList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_CindyList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Construct");

	UButton_CindyList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.OnReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyList_C::OnReceiveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.OnReceiveAttention");

	UButton_CindyList_C_OnReceiveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.OnRemoveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyList_C::OnRemoveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.OnRemoveAttention");

	UButton_CindyList_C_OnRemoveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyList_C::DisableButton(bool disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.DisableButton");

	UButton_CindyList_C_DisableButton_Params params;
	params.disable = disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.Set Number
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyList_C::Set_Number(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Set Number");

	UButton_CindyList_C_Set_Number_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.Cosmetic_DisabledStateSet
// (Event, Public, BlueprintEvent)

void UButton_CindyList_C::Cosmetic_DisabledStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Cosmetic_DisabledStateSet");

	UButton_CindyList_C_Cosmetic_DisabledStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.Cosmetic_DisabledHoverStateSet
// (Event, Public, BlueprintEvent)

void UButton_CindyList_C::Cosmetic_DisabledHoverStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Cosmetic_DisabledHoverStateSet");

	UButton_CindyList_C_Cosmetic_DisabledHoverStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.Cosmetic_HoverStateSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyList_C::Cosmetic_HoverStateSet(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Cosmetic_HoverStateSet");

	UButton_CindyList_C_Cosmetic_HoverStateSet_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.Cosmetic_NormalStateSet
// (Event, Public, BlueprintEvent)

void UButton_CindyList_C::Cosmetic_NormalStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Cosmetic_NormalStateSet");

	UButton_CindyList_C_Cosmetic_NormalStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.Cosmetic_PressedStateSet
// (Event, Public, BlueprintEvent)

void UButton_CindyList_C::Cosmetic_PressedStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Cosmetic_PressedStateSet");

	UButton_CindyList_C_Cosmetic_PressedStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.Cosmetic_SelectedHoverStateSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyList_C::Cosmetic_SelectedHoverStateSet(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Cosmetic_SelectedHoverStateSet");

	UButton_CindyList_C_Cosmetic_SelectedHoverStateSet_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.Cosmetic_SelectedStateSet
// (Event, Public, BlueprintEvent)

void UButton_CindyList_C::Cosmetic_SelectedStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.Cosmetic_SelectedStateSet");

	UButton_CindyList_C_Cosmetic_SelectedStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyList.Button_CindyList_C.ExecuteUbergraph_Button_CindyList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyList_C::ExecuteUbergraph_Button_CindyList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyList.Button_CindyList_C.ExecuteUbergraph_Button_CindyList");

	UButton_CindyList_C_ExecuteUbergraph_Button_CindyList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
