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

// BlueprintGeneratedClass Base_AbilityWeapon.Base_AbilityWeapon_C
// 0x0030 (0x0998 - 0x0968)
class ABase_AbilityWeapon_C : public ABase_CPP_AbilityWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0968(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             FailedFire;                                               // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             UpgradeVO;                                                // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           FireAnimSeq;                                              // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireAnimPlayEndTime;                                      // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	struct FName                                       MuzzleFlashSocketName;                                    // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_AbilityWeapon.Base_AbilityWeapon_C");
		return ptr;
	}


	void GetMuzzleFlashAttachComp(bool bFirstPerson, class USceneComponent** Comp);
	void UserConstructionScript();
	void OnUpgraded();
	void OnWeaponFailedFire();
	void ExecuteUbergraph_Base_AbilityWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
