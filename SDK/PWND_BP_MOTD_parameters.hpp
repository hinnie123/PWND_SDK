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

// Function BP_MOTD.BP_MOTD_C.SetMOTDTexture
struct UBP_MOTD_C_SetMOTDTexture_Params
{
	class UTexture2DDynamic*                           Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MOTD.BP_MOTD_C.Construct
struct UBP_MOTD_C_Construct_Params
{
};

// Function BP_MOTD.BP_MOTD_C.OnCloseRequested
struct UBP_MOTD_C_OnCloseRequested_Params
{
};

// Function BP_MOTD.BP_MOTD_C.OnMOTDDoneFadingOut
struct UBP_MOTD_C_OnMOTDDoneFadingOut_Params
{
};

// Function BP_MOTD.BP_MOTD_C.ExecuteUbergraph_BP_MOTD
struct UBP_MOTD_C_ExecuteUbergraph_BP_MOTD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
