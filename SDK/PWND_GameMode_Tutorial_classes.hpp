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

// BlueprintGeneratedClass GameMode_Tutorial.GameMode_Tutorial_C
// 0x006D (0x094D - 0x08E0)
class AGameMode_Tutorial_C : public AGameMode_TeamPwn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	int                                                ActionSegment;                                            // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TrainingType;                                             // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    Set_Training_Type;                                        // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FText>                               CurrentTrainingTextArray;                                 // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       CurrentTrainingText;                                      // 0x0910(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               CurrentTrainingHeaderArr;                                 // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               CurrentTrainingBodyArr;                                   // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxSegments;                                              // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSpawn;                                                // 0x094C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameMode_Tutorial.GameMode_Tutorial_C");
		return ptr;
	}


	void Replace_Control_Text(const struct FText& Source, struct FText* New_Text);
	bool PlayerCanRestart(class APlayerController** Player);
	void GetDataTables(TArray<struct FText>* Segment_1, TArray<struct FText>* Segment_2, TArray<struct FText>* Segment_3, TArray<struct FText>* Segment_4, TArray<struct FText>* Segment_5, TArray<struct FText>* Segment_6, TArray<struct FText>* Segment_7, TArray<struct FText>* Segment_8, TArray<struct FText>* Segment_9, TArray<struct FText>* Segment_10, TArray<struct FText>* ActionHeaders, TArray<struct FText>* ActionBody, int* MaxSegments);
	void UserConstructionScript();
	void SetTrainingType(int TrainingType);
	void SetSegmentText();
	void SetCurrentText(int TextIndex);
	void RespawnPlayer();
	void ExecuteUbergraph_GameMode_Tutorial(int EntryPoint);
	void Set_Training_Type__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
