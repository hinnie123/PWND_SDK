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

// BlueprintGeneratedClass Base_Weapon_FP_MuzzleFlash_FX.Base_Weapon_FP_MuzzleFlash_FX_C
// 0x0021 (0x03B1 - 0x0390)
class ABase_Weapon_FP_MuzzleFlash_FX_C : public APwndFX
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Mech;                                                     // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Fire;                                                     // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleFlash;                                              // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Weapon_FP_MuzzleFlash_FX.Base_Weapon_FP_MuzzleFlash_FX_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetActive(bool* bIsActive);
	void ExecuteUbergraph_Base_Weapon_FP_MuzzleFlash_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
