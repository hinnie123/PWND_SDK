// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SaveTimes_BP.SaveTimes_BP_C.Set Keys Array
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Key_1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Key_2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Key_3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USaveTimes_BP_C::Set_Keys_Array(bool Key_1, bool Key_2, bool Key_3)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.Set Keys Array");

	USaveTimes_BP_C_Set_Keys_Array_Params params;
	params.Key_1 = Key_1;
	params.Key_2 = Key_2;
	params.Key_3 = Key_3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.Total Number of Keys
// (BlueprintCallable, BlueprintEvent)

void USaveTimes_BP_C::Total_Number_of_Keys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.Total Number of Keys");

	USaveTimes_BP_C_Total_Number_of_Keys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.Save Game
// (BlueprintCallable, BlueprintEvent)

void USaveTimes_BP_C::Save_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.Save Game");

	USaveTimes_BP_C_Save_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.Check Levels and Times
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USaveTimes_BP_C::Check_Levels_and_Times(const struct FString& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.Check Levels and Times");

	USaveTimes_BP_C_Check_Levels_and_Times_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.AddChallengeTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Level_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Collectables                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Level_Time_Text                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           A_Key                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           B_Key                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           C_Key                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalNumberOfKeysCollected     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USaveTimes_BP_C::AddChallengeTime(const struct FString& Level_Name, float Collectables, const struct FText& Level_Time_Text, bool A_Key, bool B_Key, bool C_Key, int TotalNumberOfKeysCollected, const struct FString& PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.AddChallengeTime");

	USaveTimes_BP_C_AddChallengeTime_Params params;
	params.Level_Name = Level_Name;
	params.Collectables = Collectables;
	params.Level_Time_Text = Level_Time_Text;
	params.A_Key = A_Key;
	params.B_Key = B_Key;
	params.C_Key = C_Key;
	params.TotalNumberOfKeysCollected = TotalNumberOfKeysCollected;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.SetLevelRank
// (BlueprintCallable, BlueprintEvent)

void USaveTimes_BP_C::SetLevelRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.SetLevelRank");

	USaveTimes_BP_C_SetLevelRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.DeleteSave
// (BlueprintCallable, BlueprintEvent)

void USaveTimes_BP_C::DeleteSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.DeleteSave");

	USaveTimes_BP_C_DeleteSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.UnlcokNextLevel
// (BlueprintCallable, BlueprintEvent)

void USaveTimes_BP_C::UnlcokNextLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.UnlcokNextLevel");

	USaveTimes_BP_C_UnlcokNextLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.FirstTimeSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharacterIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USaveTimes_BP_C::FirstTimeSave(int CharacterIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.FirstTimeSave");

	USaveTimes_BP_C_FirstTimeSave_Params params;
	params.CharacterIndex = CharacterIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SaveTimes_BP.SaveTimes_BP_C.ExecuteUbergraph_SaveTimes_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USaveTimes_BP_C::ExecuteUbergraph_SaveTimes_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaveTimes_BP.SaveTimes_BP_C.ExecuteUbergraph_SaveTimes_BP");

	USaveTimes_BP_C_ExecuteUbergraph_SaveTimes_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
