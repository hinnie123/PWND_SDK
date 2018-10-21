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

// Function AllyStatusWidget.AllyStatusWidget_C.Show_Me
// (Public, BlueprintCallable, BlueprintEvent)

void UAllyStatusWidget_C::Show_Me()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyStatusWidget.AllyStatusWidget_C.Show_Me");

	UAllyStatusWidget_C_Show_Me_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyStatusWidget.AllyStatusWidget_C.Get_CharacterHealth_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAllyStatusWidget_C::Get_CharacterHealth_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyStatusWidget.AllyStatusWidget_C.Get_CharacterHealth_Percent_1");

	UAllyStatusWidget_C_Get_CharacterHealth_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AllyStatusWidget.AllyStatusWidget_C.Hide_Me
// (Public, BlueprintCallable, BlueprintEvent)

void UAllyStatusWidget_C::Hide_Me()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyStatusWidget.AllyStatusWidget_C.Hide_Me");

	UAllyStatusWidget_C_Hide_Me_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyStatusWidget.AllyStatusWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerState*        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CharacterOffsetNumber          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyStatusWidget_C::Init(class APwndPlayerState* PlayerState, int CharacterOffsetNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyStatusWidget.AllyStatusWidget_C.Init");

	UAllyStatusWidget_C_Init_Params params;
	params.PlayerState = PlayerState;
	params.CharacterOffsetNumber = CharacterOffsetNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyStatusWidget.AllyStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAllyStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyStatusWidget.AllyStatusWidget_C.Construct");

	UAllyStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyStatusWidget.AllyStatusWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyStatusWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyStatusWidget.AllyStatusWidget_C.Tick");

	UAllyStatusWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyStatusWidget.AllyStatusWidget_C.ExecuteUbergraph_AllyStatusWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyStatusWidget_C::ExecuteUbergraph_AllyStatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyStatusWidget.AllyStatusWidget_C.ExecuteUbergraph_AllyStatusWidget");

	UAllyStatusWidget_C_ExecuteUbergraph_AllyStatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
