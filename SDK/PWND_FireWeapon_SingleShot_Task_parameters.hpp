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

// Function FireWeapon_SingleShot_Task.FireWeapon_SingleShot_Task_C.ReceiveExecute
struct UFireWeapon_SingleShot_Task_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FireWeapon_SingleShot_Task.FireWeapon_SingleShot_Task_C.ExecuteUbergraph_FireWeapon_SingleShot_Task
struct UFireWeapon_SingleShot_Task_C_ExecuteUbergraph_FireWeapon_SingleShot_Task_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
