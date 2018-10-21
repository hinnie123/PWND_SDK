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

// BlueprintGeneratedClass Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C
// 0x0100 (0x09E0 - 0x08E0)
class AGamemode_Challenge_BaseGame_C : public AGameMode_TeamPwn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             CL_ChallengeReset;                                        // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             CL_GameStart;                                             // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Spawned;                                                  // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08F9(0x0007) MISSED OFFSET
	class AActor*                                      StartPosition;                                            // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Finished;                                                 // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	class USR_Widget_C*                                ResultsWidget;                                            // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     TimerString;                                              // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               A_key;                                                    // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               B_Key;                                                    // 0x0929(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_Key;                                                    // 0x092A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x092B(0x0005) MISSED OFFSET
	struct FText                                       FinalTime;                                                // 0x0930(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Collectables;                                             // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                _10s;                                                     // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                _1s;                                                      // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                _1s_1;                                                    // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                _01s_1;                                                   // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Timer;                                                    // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartTimer;                                               // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0961(0x0003) MISSED OFFSET
	int                                                Collectable;                                              // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Goal;                                                     // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    RestartLevelSequence;                                     // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                _10SecondsLengthSubstring;                                // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Add;                                                      // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterLocation;                                        // 0x0988(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Playing;                                                  // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0995(0x0003) MISSED OFFSET
	float                                              BaseGameSecertTimer;                                      // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SecertTimerFinish;                                        // 0x099C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopPlayer;                                               // 0x099D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x099E(0x0002) MISSED OFFSET
	struct FVector                                     FinishLocation;                                           // 0x09A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Pause;                                                    // 0x09AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x09AD(0x0003) MISSED OFFSET
	int                                                NumberOfDeaths;                                           // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfFinishes;                                         // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               A_key_Temp;                                               // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               B_Key_Temp;                                               // 0x09B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               C_Key_Temp;                                               // 0x09BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x09BB(0x0001) MISSED OFFSET
	float                                              Delay;                                                    // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnDelay;                                             // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ControlRotation;                                          // 0x09C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalKeysCollected;                                       // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	class UChallengeTimeRanking_UI_C*                  TimeRankings;                                             // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gamemode_Challenge_BaseGame.Gamemode_Challenge_BaseGame_C");
		return ptr;
	}


	void UserConstructionScript();
	void COMPLETE();
	void SaveGame();
	void End();
	void PlayerExitsStart();
	void Restart();
	void Print_Numbers();
	void Set_Player_location();
	void ReceiveBeginPlay();
	void ResetChallenge();
	void StopCharacter();
	void EnableMovement();
	void DisableMovement();
	void PrintSecertTimerNumber();
	void Collectable_Grabbed(int KeyNumber);
	void PauseGame();
	void UnPauseGame();
	void Telemetry();
	void TelemetryKilledByObstacles(const struct FString& Obstalces, const struct FVector& Location);
	void SetCharacter();
	void Delete_Projectiles();
	void StartingTelemetry();
	void LeftMatchTelemetry(bool PauseMenu, bool CompletedMenu);
	void Show_Tier_Rankings();
	void Hide_Tier_Rankings();
	void ExecuteUbergraph_Gamemode_Challenge_BaseGame(int EntryPoint);
	void RestartLevelSequence__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
