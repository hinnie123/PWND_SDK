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

// BlueprintGeneratedClass GooBomb_Base_DOT.GooBomb_Base_DOT_C
// 0x006C (0x15C4 - 0x1558)
class UGooBomb_Base_DOT_C : public UBase_AbilityDOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1558(0x0008) (Transient, DuplicateTransient)
	class UCurveFloat*                                 GooErode_Curve;                                           // 0x1560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               GooBones;                                                 // 0x1568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               GooBones_Temp_A;                                          // 0x1578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               GooBones_Temp_B;                                          // 0x1588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                GooBoneCount;                                             // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                tempInt;                                                  // 0x159C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Goo_Ally_Blue;                                            // 0x15A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Goo_Enemy_Red;                                            // 0x15A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            GooArray;                                                 // 0x15B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DurationTemp;                                             // 0x15C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GooBomb_Base_DOT.GooBomb_Base_DOT_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_GooBomb_Base_DOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
