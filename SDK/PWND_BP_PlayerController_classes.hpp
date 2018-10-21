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

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x00D8 (0x0B80 - 0x0AA8)
class ABP_PlayerController_C : public ABase_CPP_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             AllyWinAlarmLoop;                                         // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             EnemyWinAlarmLoop;                                        // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AllyPwnLoop;                                              // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             EnemyPwnLoop;                                             // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DamagePopupTextColor;                                     // 0x0AD0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UFont*                                       PopupTextFont;                                            // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PopupTextScale;                                           // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DamageEffectEnabled;                                      // 0x0AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AED(0x0003) MISSED OFFSET
	class UMaterialInterface*                          DamageEffectMat;                                          // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamageEffectInst;                                         // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DamageEffectColor;                                        // 0x0B00(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UCurveFloat*                                 DamageEffectIdleOpacityAnimCurve;                         // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageEffectIdleOpacityHealthCurve;                       // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageEffectIdleDuration;                                 // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DamageEffectHitDistortionScaleCurve;                      // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageEffectHitOpacityMaxCurve;                           // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageEffectHitOpacityMinCurve;                           // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageEffectHitOpacityIntensityCurve;                     // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastDamageTimeStamp;                                      // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDamagePercentage;                                     // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastHealTimeStamp;                                        // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastHealPercentage;                                       // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HealPopupTextColor;                                       // 0x0B58(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bEnableWallRunCamera;                                     // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B69(0x0003) MISSED OFFSET
	float                                              MonkeyModeKillGameTimer;                                  // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFrontEnd_LobbyScreen*                       LobbyScreen;                                              // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                LobbyTimer;                                               // 0x0B78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		return ptr;
	}


	void InflictHealEvent(class APwndPlayerController* Controller, const struct FPwndReplicatedHealEvent& Event);
	void ReceiveHealEvent(class APwndPlayerController* Controller, const struct FPwndReplicatedHealEvent& Event);
	void InitDamageEffect();
	void ReceiveDamageEvent(class APwndPlayerController* Controller, const struct FPwndReplicatedDamageEvent& Event);
	void UpdateDamageEffect(float DeltaSeconds);
	void UpdateGameStateSounds(float DeltaSeconds);
	void PostEventTriggerEvent(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger);
	void StuntAwardedEvent(class APwndPlayerController* Controller, class UPwndStuntSequence* Stunt, int Rating, class UObject* Rating_Instigator, class UObject* Other, const struct FName& StuntType);
	void InflictDamageEvent(class APwndPlayerController* Controller, const struct FPwndReplicatedDamageEvent& Event);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnInflictDamage_Event_1(class APwndPlayerController* Controller, const struct FPwndReplicatedDamageEvent& Event);
	void OnStuntAwarded_Event_1(class APwndPlayerController* Controller, class UPwndStuntSequence* Stunt, int Rating, class UObject* RatingInstigator, class UObject* Other, const struct FName& StuntType);
	void OnPostEventTrigger_Event_1(class APwndPlayerController* Controller, TEnumAsByte<EeEventTrigger> Event, const struct FPostedEventTrigger& Trigger);
	void OnRespawnStart();
	void ReceiveTick(float* DeltaSeconds);
	void OnPawnActionStateUpdated(class APwndCharacter** Char, TEnumAsByte<EePawnActionState>* NewState, TEnumAsByte<EePawnActionState>* OldState);
	void OnPawnCompletedActionStateUpdated(class APwndCharacter** Char, TEnumAsByte<EePawnActionState>* State, bool* bSuccess, struct FPwndCharacterActionCompletion* ActionCompleted);
	void OnReceiveDamage_Event_1(class APwndPlayerController* Controller, const struct FPwndReplicatedDamageEvent& Event);
	void OnInflictHeal_Event_1(class APwndPlayerController* Controller, const struct FPwndReplicatedHealEvent& Event);
	void OnReceiveHeal_Event_1(class APwndPlayerController* Controller, const struct FPwndReplicatedHealEvent& Event);
	void OnArrivedToLobby();
	void MonkeyPlayerTick(float* DeltaTime);
	void LobbyCheckForDupe();
	void ExecuteUbergraph_BP_PlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
