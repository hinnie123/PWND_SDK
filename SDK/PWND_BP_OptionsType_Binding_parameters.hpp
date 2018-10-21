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

// Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.Set Bindings
struct UBP_OptionsType_Binding_C_Set_Bindings_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.Assign options
struct UBP_OptionsType_Binding_C_Assign_options_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Display_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_OptionsType_Binding.BP_OptionsType_Binding_C.ExecuteUbergraph_BP_OptionsType_Binding
struct UBP_OptionsType_Binding_C_ExecuteUbergraph_BP_OptionsType_Binding_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
