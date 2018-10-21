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

// AnimBlueprintGeneratedClass Pwngineer_AnimBP.Pwngineer_AnimBP_C
// 0x001C (0x6184 - 0x6168)
class UPwngineer_AnimBP_C : public UBase_Character_AnimBP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x6168(0x0008) (Transient, DuplicateTransient)
	bool                                               enablePhysics;                                            // 0x6170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x6171(0x0007) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x6178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoatFullBlendWeight;                                      // 0x6180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pwngineer_AnimBP.Pwngineer_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Pwngineer_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
