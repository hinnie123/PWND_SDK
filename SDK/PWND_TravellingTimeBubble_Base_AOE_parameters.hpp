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

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.Update_DNA_Materials
struct ATravellingTimeBubble_Base_AOE_C_Update_DNA_Materials_Params
{
};

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UpdateScale
struct ATravellingTimeBubble_Base_AOE_C_UpdateScale_Params
{
};

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UpdateMaterials
struct ATravellingTimeBubble_Base_AOE_C_UpdateMaterials_Params
{
};

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.UserConstructionScript
struct ATravellingTimeBubble_Base_AOE_C_UserConstructionScript_Params
{
};

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.OnSetActive
struct ATravellingTimeBubble_Base_AOE_C_OnSetActive_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ReceiveTick
struct ATravellingTimeBubble_Base_AOE_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ReceiveBeginPlay
struct ATravellingTimeBubble_Base_AOE_C_ReceiveBeginPlay_Params
{
};

// Function TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C.ExecuteUbergraph_TravellingTimeBubble_Base_AOE
struct ATravellingTimeBubble_Base_AOE_C_ExecuteUbergraph_TravellingTimeBubble_Base_AOE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
