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

// Function GooBomb_Base_DOT.GooBomb_Base_DOT_C.ReceiveTick
struct UGooBomb_Base_DOT_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooBomb_Base_DOT.GooBomb_Base_DOT_C.ExecuteUbergraph_GooBomb_Base_DOT
struct UGooBomb_Base_DOT_C_ExecuteUbergraph_GooBomb_Base_DOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
