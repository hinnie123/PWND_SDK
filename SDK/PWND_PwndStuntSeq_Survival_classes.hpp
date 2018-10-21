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

// BlueprintGeneratedClass PwndStuntSeq_Survival.PwndStuntSeq_Survival_C
// 0x0024 (0x00A4 - 0x0080)
class UPwndStuntSeq_Survival_C : public UBase_StuntSequence_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)
	float                                              SurvivalTime;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SurvivalTimeInterval;                                     // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        SurvivalAwards;                                           // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SurvivalCounter;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwndStuntSeq_Survival.PwndStuntSeq_Survival_C");
		return ptr;
	}


	void OnTick(float* DeltaSeconds);
	void ExecuteUbergraph_PwndStuntSeq_Survival(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
