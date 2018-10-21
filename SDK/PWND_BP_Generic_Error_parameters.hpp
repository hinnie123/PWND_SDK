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

// Function BP_Generic_Error.BP_Generic_Error_C.Construct
struct UBP_Generic_Error_C_Construct_Params
{
};

// Function BP_Generic_Error.BP_Generic_Error_C.Set Text
struct UBP_Generic_Error_C_Set_Text_Params
{
	struct FText                                       Header_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Body_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Generic_Error.BP_Generic_Error_C.OnCloseRequested
struct UBP_Generic_Error_C_OnCloseRequested_Params
{
};

// Function BP_Generic_Error.BP_Generic_Error_C.OnOutroAnimFinished
struct UBP_Generic_Error_C_OnOutroAnimFinished_Params
{
};

// Function BP_Generic_Error.BP_Generic_Error_C.ExecuteUbergraph_BP_Generic_Error
struct UBP_Generic_Error_C_ExecuteUbergraph_BP_Generic_Error_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
