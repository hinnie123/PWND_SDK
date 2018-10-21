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

// Function Button_TextureSwap.Button_TextureSwap_C.Construct
struct UButton_TextureSwap_C_Construct_Params
{
};

// Function Button_TextureSwap.Button_TextureSwap_C.Tick
struct UButton_TextureSwap_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_TextureSwap.Button_TextureSwap_C.ExecuteUbergraph_Button_TextureSwap
struct UButton_TextureSwap_C_ExecuteUbergraph_Button_TextureSwap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
