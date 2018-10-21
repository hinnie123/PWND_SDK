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

// BlueprintGeneratedClass Base_AbilityDOT.Base_AbilityDOT_C
// 0x0028 (0x1558 - 0x1530)
class UBase_AbilityDOT_C : public UBase_CPP_DOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1530(0x0008) (Transient, DuplicateTransient)
	class USoundCue*                                   SoundLoop_FP;                                             // 0x1538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SoundComp_FP;                                             // 0x1540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SoundLoop_TP;                                             // 0x1548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SoundComp_TP;                                             // 0x1550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_AbilityDOT.Base_AbilityDOT_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Base_AbilityDOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
