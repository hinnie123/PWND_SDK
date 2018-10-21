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

// Function BP_OptionButton.BP_OptionButton_C.CloseSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_OptionButton_C::CloseSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.CloseSetting");

	UBP_OptionButton_C_CloseSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.IsOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_OptionButton_C::IsOpen(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.IsOpen");

	UBP_OptionButton_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BP_OptionButton.BP_OptionButton_C.Update Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Custom_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionButton_C::Update_Settings(int Value, bool Custom_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.Update Settings");

	UBP_OptionButton_C_Update_Settings_Params params;
	params.Value = Value;
	params.Custom_Value = Custom_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.SetButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   OptionsTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            OptionsType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OptionText1                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   OptionText2                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   OptionText3                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Texture1                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text4                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Text5                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Text6                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_OptionButton_C::SetButton(const struct FText& OptionsTitle, int OptionsType, const struct FText& OptionText1, const struct FText& OptionText2, const struct FText& OptionText3, class UTexture2D* Texture1, class UTexture2D* Texture2, const struct FText& Text4, const struct FText& Text5, const struct FText& Text6, const struct FString& Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.SetButton");

	UBP_OptionButton_C_SetButton_Params params;
	params.OptionsTitle = OptionsTitle;
	params.OptionsType = OptionsType;
	params.OptionText1 = OptionText1;
	params.OptionText2 = OptionText2;
	params.OptionText3 = OptionText3;
	params.Texture1 = Texture1;
	params.Texture2 = Texture2;
	params.Text4 = Text4;
	params.Text5 = Text5;
	params.Text6 = Text6;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.Set Options Screen Parent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_OptionsScreen_C*     Options_Screen                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionButton_C::Set_Options_Screen_Parent(class UBP_OptionsScreen_C* Options_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.Set Options Screen Parent");

	UBP_OptionButton_C_Set_Options_Screen_Parent_Params params;
	params.Options_Screen = Options_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.Make Text Array
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionButton_C::Make_Text_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.Make Text Array");

	UBP_OptionButton_C_Make_Text_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.SelectionMade_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionButton_C::SelectionMade_Event(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.SelectionMade_Event");

	UBP_OptionButton_C_SelectionMade_Event_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.Set Option to Custom
// (BlueprintCallable, BlueprintEvent)

void UBP_OptionButton_C::Set_Option_to_Custom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.Set Option to Custom");

	UBP_OptionButton_C_Set_Option_to_Custom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_OptionButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.Construct");

	UBP_OptionButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.OnButtonPressed_Local
// (Event, Public, BlueprintEvent)

void UBP_OptionButton_C::OnButtonPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.OnButtonPressed_Local");

	UBP_OptionButton_C_OnButtonPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.OnLeftPressed_Local
// (Event, Public, BlueprintEvent)

void UBP_OptionButton_C::OnLeftPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.OnLeftPressed_Local");

	UBP_OptionButton_C_OnLeftPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.OnRightPressed_Local
// (Event, Public, BlueprintEvent)

void UBP_OptionButton_C::OnRightPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.OnRightPressed_Local");

	UBP_OptionButton_C_OnRightPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.ExecuteUbergraph_BP_OptionButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionButton_C::ExecuteUbergraph_BP_OptionButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.ExecuteUbergraph_BP_OptionButton");

	UBP_OptionButton_C_ExecuteUbergraph_BP_OptionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionButton.BP_OptionButton_C.ButtonSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OptionButton_C::ButtonSelectionChanged__DelegateSignature(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionButton.BP_OptionButton_C.ButtonSelectionChanged__DelegateSignature");

	UBP_OptionButton_C_ButtonSelectionChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
