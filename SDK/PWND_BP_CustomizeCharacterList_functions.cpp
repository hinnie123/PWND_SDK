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

// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CustomizeCharacterList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.Construct");

	UBP_CustomizeCharacterList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.Set Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeCharacterList_C::Set_Info(const struct FGuid& Character, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.Set Info");

	UBP_CustomizeCharacterList_C_Set_Info_Params params;
	params.Character = Character;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CustomizeCharacterList_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature");

	UBP_CustomizeCharacterList_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnReceiveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeCharacterList_C::OnReceiveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnReceiveAttention");

	UBP_CustomizeCharacterList_C_OnReceiveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnRemoveAttention
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bWasMouse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeCharacterList_C::OnRemoveAttention(bool* bWasMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnRemoveAttention");

	UBP_CustomizeCharacterList_C_OnRemoveAttention_Params params;
	params.bWasMouse = bWasMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnButtonPressed_Local
// (Event, Public, BlueprintEvent)

void UBP_CustomizeCharacterList_C::OnButtonPressed_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.OnButtonPressed_Local");

	UBP_CustomizeCharacterList_C_OnButtonPressed_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.ExecuteUbergraph_BP_CustomizeCharacterList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeCharacterList_C::ExecuteUbergraph_BP_CustomizeCharacterList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.ExecuteUbergraph_BP_CustomizeCharacterList");

	UBP_CustomizeCharacterList_C_ExecuteUbergraph_BP_CustomizeCharacterList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.WorldSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_CustomizeCharacterList_C* ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeCharacterList_C::WorldSelected__DelegateSignature(const struct FGuid& Character, int Index, class UBP_CustomizeCharacterList_C* ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.WorldSelected__DelegateSignature");

	UBP_CustomizeCharacterList_C_WorldSelected__DelegateSignature_Params params;
	params.Character = Character;
	params.Index = Index;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.WorldHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeCharacterList_C::WorldHovered__DelegateSignature(const struct FGuid& Character, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterList.BP_CustomizeCharacterList_C.WorldHovered__DelegateSignature");

	UBP_CustomizeCharacterList_C_WorldHovered__DelegateSignature_Params params;
	params.Character = Character;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
