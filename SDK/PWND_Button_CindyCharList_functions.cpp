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

// Function Button_CindyCharList.Button_CindyCharList_C.Set GUID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           New                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyCharList_C::Set_GUID(const struct FGuid& Character, bool New)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.Set GUID");

	UButton_CindyCharList_C_Set_GUID_Params params;
	params.Character = Character;
	params.New = New;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_CindyCharList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.Construct");

	UButton_CindyCharList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.Async Continue
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   Type                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTexture2D*              LoadedIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyCharList_C::Async_Continue(const struct FGuid& Guid, const struct FName& Type, class UTexture2D* LoadedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.Async Continue");

	UButton_CindyCharList_C_Async_Continue_Params params;
	params.Guid = Guid;
	params.Type = Type;
	params.LoadedIcon = LoadedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UButton_CindyCharList_C::BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UButton_CindyCharList_C_BndEvt__Button_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.OnButtonPressed_Local
// (Event, Public, BlueprintEvent)

void UButton_CindyCharList_C::OnButtonPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.OnButtonPressed_Local");

	UButton_CindyCharList_C_OnButtonPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_HoverStateSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyCharList_C::Cosmetic_HoverStateSet(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_HoverStateSet");

	UButton_CindyCharList_C_Cosmetic_HoverStateSet_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_NormalStateSet
// (Event, Public, BlueprintEvent)

void UButton_CindyCharList_C::Cosmetic_NormalStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_NormalStateSet");

	UButton_CindyCharList_C_Cosmetic_NormalStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_SelectedStateSet
// (Event, Public, BlueprintEvent)

void UButton_CindyCharList_C::Cosmetic_SelectedStateSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_SelectedStateSet");

	UButton_CindyCharList_C_Cosmetic_SelectedStateSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_SelectedHoverStateSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyCharList_C::Cosmetic_SelectedHoverStateSet(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.Cosmetic_SelectedHoverStateSet");

	UButton_CindyCharList_C_Cosmetic_SelectedHoverStateSet_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.ExecuteUbergraph_Button_CindyCharList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyCharList_C::ExecuteUbergraph_Button_CindyCharList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.ExecuteUbergraph_Button_CindyCharList");

	UButton_CindyCharList_C_ExecuteUbergraph_Button_CindyCharList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_CindyCharList.Button_CindyCharList_C.CharacterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UButton_CindyCharList_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_CindyCharList_C::CharacterSelected__DelegateSignature(const struct FGuid& Guid, class UButton_CindyCharList_C* ButtonRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_CindyCharList.Button_CindyCharList_C.CharacterSelected__DelegateSignature");

	UButton_CindyCharList_C_CharacterSelected__DelegateSignature_Params params;
	params.Guid = Guid;
	params.ButtonRef = ButtonRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
