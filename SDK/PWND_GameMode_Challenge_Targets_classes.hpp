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

// BlueprintGeneratedClass GameMode_Challenge_Targets.GameMode_Challenge_Targets_C
// 0x002C (0x0A0C - 0x09E0)
class AGameMode_Challenge_Targets_C : public AGamemode_Challenge_BaseGame_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             CL_Time_Fail_1;                                           // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ATarget_BP_C*>                        TargetsArray;                                             // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                TargetsDestroyed;                                         // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecretTimer;                                              // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToStart;                                              // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameMode_Challenge_Targets.GameMode_Challenge_Targets_C");
		return ptr;
	}


	void UserConstructionScript();
	void Set_Game();
	void ReceiveTick(float* DeltaSeconds);
	void Add_To_Time(float TimeToAdd);
	void Target_Destroyed();
	void ExecuteUbergraph_GameMode_Challenge_Targets(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
