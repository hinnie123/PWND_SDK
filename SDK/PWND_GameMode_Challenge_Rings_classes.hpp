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

// BlueprintGeneratedClass GameMode_Challenge_Rings.GameMode_Challenge_Rings_C
// 0x0078 (0x0A58 - 0x09E0)
class AGameMode_Challenge_Rings_C : public AGamemode_Challenge_BaseGame_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             CL_Time_Fail_1;                                           // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_28A216B940122EA8D0E137A5952F6C61;   // 0x09F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_28A216B940122EA8D0E137A5952F6C61;   // 0x09F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecretTimer;                                              // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A04(0x0004) MISSED OFFSET
	TArray<class ABP_TrainingRing_C*>                  Temp_Array;                                               // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_TrainingRing_C*>                  Temp_Array_3;                                             // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                CurrRingIndex;                                            // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A2C(0x0004) MISSED OFFSET
	TArray<class ABP_TrainingRing_C*>                  Rings;                                                    // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              RingsPassed;                                              // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0A44(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_TrainingRing_C*                          Ring;                                                     // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameMode_Challenge_Rings.GameMode_Challenge_Rings_C");
		return ptr;
	}


	void SortRingArray(TArray<class ABP_TrainingRing_C*>* Rings_Array);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Ring_Passed(int Value);
	void ReceiveTick(float* DeltaSeconds);
	void Set_Rings();
	void Ring_Success_Event();
	void RingTImeAddedEvent(float TimeAdded);
	void PlayAnimation();
	void Final_Check();
	void Set_Score();
	void ExecuteUbergraph_GameMode_Challenge_Rings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
