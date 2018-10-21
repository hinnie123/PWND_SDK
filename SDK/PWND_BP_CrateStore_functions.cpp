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

// Function BP_CrateStore.BP_CrateStore_C.UpdateStoreInfo
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxCrateIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGuid>           CrateNamesAndDescriptions      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_CrateStore_C::UpdateStoreInfo(int MaxCrateIndex, TArray<struct FGuid> CrateNamesAndDescriptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.UpdateStoreInfo");

	UBP_CrateStore_C_UpdateStoreInfo_Params params;
	params.MaxCrateIndex = MaxCrateIndex;
	params.CrateNamesAndDescriptions = CrateNamesAndDescriptions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.UpdateShopText
// (BlueprintCallable, BlueprintEvent)

void UBP_CrateStore_C::UpdateShopText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.UpdateShopText");

	UBP_CrateStore_C_UpdateShopText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.UpdateShopNumbers
// (BlueprintCallable, BlueprintEvent)

void UBP_CrateStore_C::UpdateShopNumbers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.UpdateShopNumbers");

	UBP_CrateStore_C_UpdateShopNumbers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_284_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CrateStore_C::BndEvt__Button_Cindy_284_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_284_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");

	UBP_CrateStore_C_BndEvt__Button_Cindy_284_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_403_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CrateStore_C::BndEvt__Button_Cindy_403_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_403_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature");

	UBP_CrateStore_C_BndEvt__Button_Cindy_403_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_C_404_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CrateStore_C::BndEvt__Button_Cindy_C_404_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_C_404_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature");

	UBP_CrateStore_C_BndEvt__Button_Cindy_C_404_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_C_406_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CrateStore_C::BndEvt__Button_Cindy_C_406_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_C_406_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature");

	UBP_CrateStore_C_BndEvt__Button_Cindy_C_406_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_C_405_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_CrateStore_C::BndEvt__Button_Cindy_C_405_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.BndEvt__Button_Cindy_C_405_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature");

	UBP_CrateStore_C_BndEvt__Button_Cindy_C_405_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.ExecuteUbergraph_BP_CrateStore
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrateStore_C::ExecuteUbergraph_BP_CrateStore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.ExecuteUbergraph_BP_CrateStore");

	UBP_CrateStore_C_ExecuteUbergraph_BP_CrateStore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrateStore.BP_CrateStore_C.CratesBought__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumOfCrates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrateStore_C::CratesBought__DelegateSignature(int NumOfCrates)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrateStore.BP_CrateStore_C.CratesBought__DelegateSignature");

	UBP_CrateStore_C_CratesBought__DelegateSignature_Params params;
	params.NumOfCrates = NumOfCrates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
