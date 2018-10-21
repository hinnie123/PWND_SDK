#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SaveTimes_BP.SaveTimes_BP_C
// 0x0110 (0x0138 - 0x0028)
class USaveTimes_BP_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (Transient, DuplicateTransient)
	TArray<float>                                      LevelTimesArray;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             LevelNames;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      LevelKeysArray;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               LevelTimesArray_Text;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       A_KeyArray;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       B_KeyArray;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       C_KeyArray;                                               // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LevelName_ArrayNumber;                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<bool>                                       TempKeyCount;                                             // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               LevelRanking;                                             // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       LevelTimeText;                                            // 0x00C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     LevelName;                                                // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CodeThing;                                                // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NewCode;                                                  // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       Unlocked;                                                 // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               type_true;                                                // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                TotalKeysCollected;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveTimes_BP.SaveTimes_BP_C");
		return ptr;
	}


	void Set_Keys_Array(bool Key_1, bool Key_2, bool Key_3);
	void Total_Number_of_Keys();
	void Save_Game();
	void Check_Levels_and_Times(const struct FString& LevelName);
	void AddChallengeTime(const struct FString& Level_Name, float Collectables, const struct FText& Level_Time_Text, bool A_Key, bool B_Key, bool C_Key, int TotalNumberOfKeysCollected, const struct FString& PlayerCharacter);
	void SetLevelRank();
	void DeleteSave();
	void UnlcokNextLevel();
	void FirstTimeSave(int CharacterIndex);
	void ExecuteUbergraph_SaveTimes_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
