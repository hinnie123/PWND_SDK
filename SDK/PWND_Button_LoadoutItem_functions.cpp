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

// Function Button_LoadoutItem.Button_LoadoutItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_LoadoutItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_LoadoutItem.Button_LoadoutItem_C.Construct");

	UButton_LoadoutItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_LoadoutItem.Button_LoadoutItem_C.ExecuteUbergraph_Button_LoadoutItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_LoadoutItem_C::ExecuteUbergraph_Button_LoadoutItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_LoadoutItem.Button_LoadoutItem_C.ExecuteUbergraph_Button_LoadoutItem");

	UButton_LoadoutItem_C_ExecuteUbergraph_Button_LoadoutItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
