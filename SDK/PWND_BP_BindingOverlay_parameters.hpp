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

// Function BP_BindingOverlay.BP_BindingOverlay_C.Set Action
struct UBP_BindingOverlay_C_Set_Action_Params
{
	struct FText                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BindingOverlay.BP_BindingOverlay_C.ExecuteUbergraph_BP_BindingOverlay
struct UBP_BindingOverlay_C_ExecuteUbergraph_BP_BindingOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
