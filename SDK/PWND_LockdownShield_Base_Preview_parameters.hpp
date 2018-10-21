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

// Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.UserConstructionScript
struct ALockdownShield_Base_Preview_C_UserConstructionScript_Params
{
};

// Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.OnSetActive
struct ALockdownShield_Base_Preview_C_OnSetActive_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LockdownShield_Base_Preview.LockdownShield_Base_Preview_C.ExecuteUbergraph_LockdownShield_Base_Preview
struct ALockdownShield_Base_Preview_C_ExecuteUbergraph_LockdownShield_Base_Preview_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
