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

// Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Get_Animation_Duration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FullScreenEffects_Small_C::Get_Animation_Duration(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Get_Animation_Duration");

	UBP_FullScreenEffects_Small_C_Get_Animation_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Start_Hiding_Me
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FullScreenEffects_Small_C::Start_Hiding_Me()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Start_Hiding_Me");

	UBP_FullScreenEffects_Small_C_Start_Hiding_Me_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Set_Text_Brush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material_Instance              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FullScreenEffects_Small_C::Set_Text_Brush(class UMaterialInstance* Material_Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Set_Text_Brush");

	UBP_FullScreenEffects_Small_C_Set_Text_Brush_Params params;
	params.Material_Instance = Material_Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Get_Text_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UBP_FullScreenEffects_Small_C::Get_Text_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Get_Text_Brush_1");

	UBP_FullScreenEffects_Small_C_Get_Text_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FullScreenEffects_Small_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.Tick");

	UBP_FullScreenEffects_Small_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.ExecuteUbergraph_BP_FullScreenEffects_Small
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FullScreenEffects_Small_C::ExecuteUbergraph_BP_FullScreenEffects_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffects_Small.BP_FullScreenEffects_Small_C.ExecuteUbergraph_BP_FullScreenEffects_Small");

	UBP_FullScreenEffects_Small_C_ExecuteUbergraph_BP_FullScreenEffects_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
