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

// Function BodyPile_FX.BodyPile_FX_C.GetGroundLocation
struct ABodyPile_FX_C_GetGroundLocation_Params
{
	float                                              OffsetFromGround;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GroundLocation;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     GroundNormal;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BodyPile_FX.BodyPile_FX_C.UserConstructionScript
struct ABodyPile_FX_C_UserConstructionScript_Params
{
};

// Function BodyPile_FX.BodyPile_FX_C.ReceiveBeginPlay
struct ABodyPile_FX_C_ReceiveBeginPlay_Params
{
};

// Function BodyPile_FX.BodyPile_FX_C.OnSetActive
struct ABodyPile_FX_C_OnSetActive_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyPile_FX.BodyPile_FX_C.OnPostInt
struct ABodyPile_FX_C_OnPostInt_Params
{
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyPile_FX.BodyPile_FX_C.OnSetTeamNum
struct ABodyPile_FX_C_OnSetTeamNum_Params
{
	unsigned char*                                     OldTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyPile_FX.BodyPile_FX_C.OnPostObject
struct ABodyPile_FX_C_OnPostObject_Params
{
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyPile_FX.BodyPile_FX_C.OnPostBool
struct ABodyPile_FX_C_OnPostBool_Params
{
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              val;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyPile_FX.BodyPile_FX_C.ExecuteUbergraph_BodyPile_FX
struct ABodyPile_FX_C_ExecuteUbergraph_BodyPile_FX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
