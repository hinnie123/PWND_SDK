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

// Function SaveTimes_BP.SaveTimes_BP_C.Set Keys Array
struct USaveTimes_BP_C_Set_Keys_Array_Params
{
	bool                                               Key_1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Key_2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Key_3;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SaveTimes_BP.SaveTimes_BP_C.Total Number of Keys
struct USaveTimes_BP_C_Total_Number_of_Keys_Params
{
};

// Function SaveTimes_BP.SaveTimes_BP_C.Save Game
struct USaveTimes_BP_C_Save_Game_Params
{
};

// Function SaveTimes_BP.SaveTimes_BP_C.Check Levels and Times
struct USaveTimes_BP_C_Check_Levels_and_Times_Params
{
	struct FString                                     LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SaveTimes_BP.SaveTimes_BP_C.AddChallengeTime
struct USaveTimes_BP_C_AddChallengeTime_Params
{
	struct FString                                     Level_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Collectables;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Time_Text;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               A_Key;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B_Key;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               C_Key;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalNumberOfKeysCollected;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SaveTimes_BP.SaveTimes_BP_C.SetLevelRank
struct USaveTimes_BP_C_SetLevelRank_Params
{
};

// Function SaveTimes_BP.SaveTimes_BP_C.DeleteSave
struct USaveTimes_BP_C_DeleteSave_Params
{
};

// Function SaveTimes_BP.SaveTimes_BP_C.UnlcokNextLevel
struct USaveTimes_BP_C_UnlcokNextLevel_Params
{
};

// Function SaveTimes_BP.SaveTimes_BP_C.FirstTimeSave
struct USaveTimes_BP_C_FirstTimeSave_Params
{
	int                                                CharacterIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SaveTimes_BP.SaveTimes_BP_C.ExecuteUbergraph_SaveTimes_BP
struct USaveTimes_BP_C_ExecuteUbergraph_SaveTimes_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
