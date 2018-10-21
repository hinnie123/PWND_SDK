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

// Function Button_Cindy_Icon.Button_Cindy_Icon_C.Construct
struct UButton_Cindy_Icon_C_Construct_Params
{
};

// Function Button_Cindy_Icon.Button_Cindy_Icon_C.OnReceiveAttention
struct UButton_Cindy_Icon_C_OnReceiveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Icon.Button_Cindy_Icon_C.OnRemoveAttention
struct UButton_Cindy_Icon_C_OnRemoveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Button_Cindy_Icon.Button_Cindy_Icon_C.ExecuteUbergraph_Button_Cindy_Icon
struct UButton_Cindy_Icon_C_ExecuteUbergraph_Button_Cindy_Icon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
