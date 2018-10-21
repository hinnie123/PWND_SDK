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

// Function BP_Credits.BP_Credits_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Credits_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.Tick");

	UBP_Credits_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_Credits_C::BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature");

	UBP_Credits_C_BndEvt__Button_Hint_Back_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.ExecuteUbergraph_BP_Credits
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Credits_C::ExecuteUbergraph_BP_Credits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.ExecuteUbergraph_BP_Credits");

	UBP_Credits_C_ExecuteUbergraph_BP_Credits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
