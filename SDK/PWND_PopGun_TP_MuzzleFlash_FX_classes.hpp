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

// BlueprintGeneratedClass PopGun_TP_MuzzleFlash_FX.PopGun_TP_MuzzleFlash_FX_C
// 0x0047 (0x0410 - 0x03C9)
class APopGun_TP_MuzzleFlash_FX_C : public ABase_Weapon_TP_MuzzleFlash_FX_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Enemy_MuzzleFlash3;                                       // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Enemy_MuzzleFlash2;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Enemy_MuzzleFlash1;                                       // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Ally_MuzzleFlash3;                                        // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Ally_MuzzleFlash2;                                        // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Ally_MuzzleFlash1;                                        // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PopGun_Active;                                            // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	float                                              TriggerDelay;                                             // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PopGun_TP_MuzzleFlash_FX.PopGun_TP_MuzzleFlash_FX_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetActive(bool* bIsActive);
	void OnSetTeamNum(unsigned char* OldTeamNum, unsigned char* NewTeamNum);
	void ExecuteUbergraph_PopGun_TP_MuzzleFlash_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
