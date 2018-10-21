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

// Function GameMode_Tutorial.GameMode_Tutorial_C.Replace Control Text
struct AGameMode_Tutorial_C_Replace_Control_Text_Params
{
	struct FText                                       Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       New_Text;                                                 // (Parm, OutParm)
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.PlayerCanRestart
struct AGameMode_Tutorial_C_PlayerCanRestart_Params
{
	class APlayerController**                          Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.GetDataTables
struct AGameMode_Tutorial_C_GetDataTables_Params
{
	TArray<struct FText>                               Segment_1;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_2;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_3;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_4;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_5;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_6;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_7;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_8;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_9;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               Segment_10;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               ActionHeaders;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FText>                               ActionBody;                                               // (Parm, OutParm, ZeroConstructor)
	int                                                MaxSegments;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.UserConstructionScript
struct AGameMode_Tutorial_C_UserConstructionScript_Params
{
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.SetTrainingType
struct AGameMode_Tutorial_C_SetTrainingType_Params
{
	int                                                TrainingType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.SetSegmentText
struct AGameMode_Tutorial_C_SetSegmentText_Params
{
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.SetCurrentText
struct AGameMode_Tutorial_C_SetCurrentText_Params
{
	int                                                TextIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.RespawnPlayer
struct AGameMode_Tutorial_C_RespawnPlayer_Params
{
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.ExecuteUbergraph_GameMode_Tutorial
struct AGameMode_Tutorial_C_ExecuteUbergraph_GameMode_Tutorial_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Tutorial.GameMode_Tutorial_C.Set Training Type__DelegateSignature
struct AGameMode_Tutorial_C_Set_Training_Type__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
