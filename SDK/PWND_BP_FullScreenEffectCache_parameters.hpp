#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.GetSmallMaterial
struct UBP_FullScreenEffectCache_C_GetSmallMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
	float                                              Custom_Duration;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.GetMaterial
struct UBP_FullScreenEffectCache_C_GetMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
	float                                              Custom_Duration;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.PopMaterial
struct UBP_FullScreenEffectCache_C_PopMaterial_Params
{
};

// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.PopSmallMaterial
struct UBP_FullScreenEffectCache_C_PopSmallMaterial_Params
{
};

// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.AddFullScreenEffectToQueue
struct UBP_FullScreenEffectCache_C_AddFullScreenEffectToQueue_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BigUI;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Custom_Duration;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FullScreenEffectCache.BP_FullScreenEffectCache_C.ResetAllCache
struct UBP_FullScreenEffectCache_C_ResetAllCache_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
