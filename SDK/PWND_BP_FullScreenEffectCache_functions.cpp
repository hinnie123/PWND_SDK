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

// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.GetSmallMaterial
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)
// float                          Custom_Duration                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FullScreenEffectCache_C::GetSmallMaterial(class UMaterialInstance** Material, struct FText* Name, float* Custom_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.GetSmallMaterial");

	UBP_FullScreenEffectCache_C_GetSmallMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
	if (Name != nullptr)
		*Name = params.Name;
	if (Custom_Duration != nullptr)
		*Custom_Duration = params.Custom_Duration;
}


// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.GetMaterial
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)
// float                          Custom_Duration                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FullScreenEffectCache_C::GetMaterial(class UMaterialInstance** Material, struct FText* Name, float* Custom_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.GetMaterial");

	UBP_FullScreenEffectCache_C_GetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
	if (Name != nullptr)
		*Name = params.Name;
	if (Custom_Duration != nullptr)
		*Custom_Duration = params.Custom_Duration;
}


// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.PopMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FullScreenEffectCache_C::PopMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.PopMaterial");

	UBP_FullScreenEffectCache_C_PopMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.PopSmallMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FullScreenEffectCache_C::PopSmallMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.PopSmallMaterial");

	UBP_FullScreenEffectCache_C_PopSmallMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.AddFullScreenEffectToQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BigUI                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Custom_Duration                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FullScreenEffectCache_C::AddFullScreenEffectToQueue(class UMaterialInstance* Material, bool BigUI, const struct FText& Name, float Custom_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.AddFullScreenEffectToQueue");

	UBP_FullScreenEffectCache_C_AddFullScreenEffectToQueue_Params params;
	params.Material = Material;
	params.BigUI = BigUI;
	params.Name = Name;
	params.Custom_Duration = Custom_Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.ResetAllCache
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FullScreenEffectCache_C::ResetAllCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.ResetAllCache");

	UBP_FullScreenEffectCache_C_ResetAllCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
