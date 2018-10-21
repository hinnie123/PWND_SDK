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

// Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.Populate
struct UBP_Options_SocialOptions_C_Populate_Params
{
	class UBP_OptionsScreen_C*                         Options_Screen;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.Change Value
struct UBP_Options_SocialOptions_C_Change_Value_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_SocialOptions.BP_Options_SocialOptions_C.ExecuteUbergraph_BP_Options_SocialOptions
struct UBP_Options_SocialOptions_C_ExecuteUbergraph_BP_Options_SocialOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
