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

// AnimBlueprintGeneratedClass Buffy_AnimBP.Buffy_AnimBP_C
// 0x0018 (0x6180 - 0x6168)
class UBuffy_AnimBP_C : public UBase_Character_AnimBP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x6168(0x0008) (Transient, DuplicateTransient)
	struct FName                                       BoneName;                                                 // 0x6170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnablePhysicsProp;                                        // 0x6178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x6179(0x0003) MISSED OFFSET
	float                                              CoatFullBlendWeight;                                      // 0x617C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Buffy_AnimBP.Buffy_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Buffy_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
