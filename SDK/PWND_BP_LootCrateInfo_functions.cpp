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

// Function BP_LootCrateInfo.BP_LootCrateInfo_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateInfo_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_LootCrateInfo_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateInfo.BP_LootCrateInfo_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LootCrateInfo_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_LootCrateInfo_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateInfo.BP_LootCrateInfo_C.Add Crate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuidInventoryItem      Crate_GUID                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateInfo_C::Add_Crate(const struct FGuidInventoryItem& Crate_GUID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.Add Crate");

	UBP_LootCrateInfo_C_Add_Crate_Params params;
	params.Crate_GUID = Crate_GUID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateInfo.BP_LootCrateInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LootCrateInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.Construct");

	UBP_LootCrateInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateInfo.BP_LootCrateInfo_C.Open_Crate
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateInfo_C::Open_Crate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.Open_Crate");

	UBP_LootCrateInfo_C_Open_Crate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateInfo.BP_LootCrateInfo_C.NotifyOutOfCrates
// (BlueprintCallable, BlueprintEvent)

void UBP_LootCrateInfo_C::NotifyOutOfCrates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.NotifyOutOfCrates");

	UBP_LootCrateInfo_C_NotifyOutOfCrates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateInfo.BP_LootCrateInfo_C.Update Crate Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   CrateName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   CrateDescription               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateInfo_C::Update_Crate_Display(const struct FText& CrateName, const struct FText& CrateDescription, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.Update Crate Display");

	UBP_LootCrateInfo_C_Update_Crate_Display_Params params;
	params.CrateName = CrateName;
	params.CrateDescription = CrateDescription;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateInfo.BP_LootCrateInfo_C.ExecuteUbergraph_BP_LootCrateInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LootCrateInfo_C::ExecuteUbergraph_BP_LootCrateInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.ExecuteUbergraph_BP_LootCrateInfo");

	UBP_LootCrateInfo_C_ExecuteUbergraph_BP_LootCrateInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootCrateInfo.BP_LootCrateInfo_C.OutOfCratesDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LootCrateInfo_C::OutOfCratesDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootCrateInfo.BP_LootCrateInfo_C.OutOfCratesDispatcher__DelegateSignature");

	UBP_LootCrateInfo_C_OutOfCratesDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
