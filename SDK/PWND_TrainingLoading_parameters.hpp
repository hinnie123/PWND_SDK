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

// Function TrainingLoading.TrainingLoading_C.Set Text
struct UTrainingLoading_C_Set_Text_Params
{
	struct FText                                       Training_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Training;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrainingLoading.TrainingLoading_C.Tick
struct UTrainingLoading_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrainingLoading.TrainingLoading_C.Construct
struct UTrainingLoading_C_Construct_Params
{
};

// Function TrainingLoading.TrainingLoading_C.ExitAnimationCompleted
struct UTrainingLoading_C_ExitAnimationCompleted_Params
{
};

// Function TrainingLoading.TrainingLoading_C.OnCloseRequested
struct UTrainingLoading_C_OnCloseRequested_Params
{
};

// Function TrainingLoading.TrainingLoading_C.ExecuteUbergraph_TrainingLoading
struct UTrainingLoading_C_ExecuteUbergraph_TrainingLoading_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrainingLoading.TrainingLoading_C.LoadingCancelled__DelegateSignature
struct UTrainingLoading_C_LoadingCancelled__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
