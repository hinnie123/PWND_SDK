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

// BlueprintGeneratedClass Base_Weapon.Base_Weapon_C
// 0x00B0 (0x0A10 - 0x0960)
class ABase_Weapon_C : public ABase_CPP_Weapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0960(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             ReloadSound;                                              // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FP_FireAnimSeq;                                           // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FP_RJ_CenterAnimSeq;                                      // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FP_RJ_RightAnimSeq;                                       // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FP_RJ_LeftAnimSeq;                                        // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FP_RJ_ForwardAnimSeq;                                     // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FP_RJ_BackwardAnimSeq;                                    // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FP_RJ_DownAnimSeq;                                        // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FP_RJ_AirSeq;                                             // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RocketJump_TP_MuzzleFX;                                   // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RocketJump_FP_MuzzleFX;                                   // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      TP_MuzzleFX;                                              // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FP_MuzzleFX;                                              // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bKill_FP_MuzzleFX;                                        // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKill_TP_MuzzleFX;                                        // 0x09D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKill_RocketJump_TP_MuzzleFX;                             // 0x09D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKill_RocketJump_FP_MuzzleFX;                             // 0x09D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	class APwndFX*                                     RocketJump_TP_MuzzleFX_Inst;                              // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class APwndFX*                                     RocketJump_FP_MuzzleFX_Inst;                              // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class APwndFX*                                     TP_MuzzleFX_Inst;                                         // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class APwndFX*                                     FP_MuzzleFX_Inst;                                         // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MuzzleFlashSocketName;                                    // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RocketJump_MuzzleFlashSocketName;                         // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RJ_MuzzleFlash_AttachComp;                                // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Weapon.Base_Weapon_C");
		return ptr;
	}


	void GetMuzzleFlashAttachComp(bool bFirstPerson, class USceneComponent** Comp);
	void SpawnFX(class UClass* FXClass, class APwndFX* PrevInstance, bool bKillFX, class USceneComponent* AttachParent, const struct FName& SocketName, class APwndFX** SpawnedFX);
	void UserConstructionScript();
	void OnPlayRocketJump(struct FVector* Impulse, struct FReplicatedRocketJump* ReplicatedRocketJump);
	void OnWeaponStartReload();
	void AbilityWeaponFired();
	void OnWeaponFire();
	void OnPostEventTrigger(TEnumAsByte<EeEventTrigger>* Trigger, float* Count, TArray<class UObject*>* Others);
	void ExecuteUbergraph_Base_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
