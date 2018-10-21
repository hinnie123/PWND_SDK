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

// AnimBlueprintGeneratedClass Ninja_AnimBP.Ninja_AnimBP_C
// 0x0028 (0x6190 - 0x6168)
class UNinja_AnimBP_C : public UBase_Character_AnimBP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x6168(0x0008) (Transient, DuplicateTransient)
	bool                                               EnablePhysicsCable;                                       // 0x6170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x6171(0x0007) MISSED OFFSET
	class UBlendSpace*                                 RocketJumpCarryBlendSpace;                                // 0x6178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPwndPhysicsBlendWeightBonePair>     PhysicsBlendWeightPairs;                                  // 0x6180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Ninja_AnimBP.Ninja_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Ninja_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
