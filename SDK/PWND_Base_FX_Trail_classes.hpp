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

// BlueprintGeneratedClass Base_FX_Trail.Base_FX_Trail_C
// 0x0039 (0x03C9 - 0x0390)
class ABase_FX_Trail_C : public ABase_FX_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    EnemyFX;                                                  // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             EnemyAudio;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AllyFX;                                                   // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AllyAudio;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Enemy;                                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Ally;                                                     // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_FX_Trail.Base_FX_Trail_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetActive(bool* bIsActive);
	void OnSetTeamNum(unsigned char* OldTeamNum, unsigned char* NewTeamNum);
	void ExecuteUbergraph_Base_FX_Trail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
