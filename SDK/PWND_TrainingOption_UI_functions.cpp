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

// Function TrainingOption_UI.TrainingOption_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTrainingOption_UI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.Construct");

	UTrainingOption_UI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.Set Option Desc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTrainingOption_UI_C::Set_Option_Desc(const struct FText& Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.Set Option Desc");

	UTrainingOption_UI_C_Set_Option_Desc_Params params;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.Assign Texture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingOption_UI_C::Assign_Texture(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.Assign Texture");

	UTrainingOption_UI_C_Assign_Texture_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.Set Lower Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTrainingOption_UI_C::Set_Lower_Text(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.Set Lower Text");

	UTrainingOption_UI_C_Set_Lower_Text_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.Set Upper Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTrainingOption_UI_C::Set_Upper_Text(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.Set Upper Text");

	UTrainingOption_UI_C_Set_Upper_Text_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.Set Values
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTrainingOption_UI_C::Set_Values(int Int, const struct FText& Text, const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.Set Values");

	UTrainingOption_UI_C_Set_Values_Params params;
	params.Int = Int;
	params.Text = Text;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.DisableOption
// (BlueprintCallable, BlueprintEvent)

void UTrainingOption_UI_C::DisableOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.DisableOption");

	UTrainingOption_UI_C_DisableOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.BndEvt__Button_Training_K2Node_ComponentBoundEvent_78_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UTrainingOption_UI_C::BndEvt__Button_Training_K2Node_ComponentBoundEvent_78_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.BndEvt__Button_Training_K2Node_ComponentBoundEvent_78_OnButtonPressedEvent__DelegateSignature");

	UTrainingOption_UI_C_BndEvt__Button_Training_K2Node_ComponentBoundEvent_78_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.BndEvt__Button_Training_K2Node_ComponentBoundEvent_267_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UTrainingOption_UI_C::BndEvt__Button_Training_K2Node_ComponentBoundEvent_267_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.BndEvt__Button_Training_K2Node_ComponentBoundEvent_267_OnButtonReleasedEvent__DelegateSignature");

	UTrainingOption_UI_C_BndEvt__Button_Training_K2Node_ComponentBoundEvent_267_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.OnRemoveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingOption_UI_C::OnRemoveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.OnRemoveAttention");

	UTrainingOption_UI_C_OnRemoveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.OnReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingOption_UI_C::OnReceiveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.OnReceiveAttention");

	UTrainingOption_UI_C_OnReceiveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.ExecuteUbergraph_TrainingOption_UI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrainingOption_UI_C::ExecuteUbergraph_TrainingOption_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.ExecuteUbergraph_TrainingOption_UI");

	UTrainingOption_UI_C_ExecuteUbergraph_TrainingOption_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingOption_UI.TrainingOption_UI_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTrainingOption_UI_C::Selected__DelegateSignature(int Int, const struct FText& Title, const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingOption_UI.TrainingOption_UI_C.Selected__DelegateSignature");

	UTrainingOption_UI_C_Selected__DelegateSignature_Params params;
	params.Int = Int;
	params.Title = Title;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
