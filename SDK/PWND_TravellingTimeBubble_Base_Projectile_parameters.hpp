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

// Function TravellingTimeBubble_Base_Projectile.TravellingTimeBubble_Base_Projectile_C.UserConstructionScript
struct ATravellingTimeBubble_Base_Projectile_C_UserConstructionScript_Params
{
};

// Function TravellingTimeBubble_Base_Projectile.TravellingTimeBubble_Base_Projectile_C.ReceiveBeginPlay
struct ATravellingTimeBubble_Base_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function TravellingTimeBubble_Base_Projectile.TravellingTimeBubble_Base_Projectile_C.OnDetonate
struct ATravellingTimeBubble_Base_Projectile_C_OnDetonate_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bDestroy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TravellingTimeBubble_Base_Projectile.TravellingTimeBubble_Base_Projectile_C.ReceiveEndPlay
struct ATravellingTimeBubble_Base_Projectile_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TravellingTimeBubble_Base_Projectile.TravellingTimeBubble_Base_Projectile_C.ExecuteUbergraph_TravellingTimeBubble_Base_Projectile
struct ATravellingTimeBubble_Base_Projectile_C_ExecuteUbergraph_TravellingTimeBubble_Base_Projectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
