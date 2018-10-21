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

// BlueprintGeneratedClass PwndStuntSeq_Damage.PwndStuntSeq_Damage_C
// 0x02B8 (0x0338 - 0x0080)
class UPwndStuntSeq_Damage_C : public UBase_StuntSequence_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)
	int                                                Damage;                                                   // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SlugCount;                                                // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebuffCount;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FPwndAssetDatabaseReference                 EMPSlugBaseWeaponRef;                                     // 0x0098(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 MaceBaseWeaponRef;                                        // 0x00D0(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 TeslaSlugBaseWeaponRef;                                   // 0x0108(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 CrimeSceneBaseWeaponRef;                                  // 0x0140(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 StunGunBaseWeaponRef;                                     // 0x0178(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 EMPSlug_L2_WeaponRef;                                     // 0x01B0(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 EMPSlug_L3_WeaponRef;                                     // 0x01E8(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 Mace_L2_WeaponRef;                                        // 0x0220(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 Mace_L3_WeaponRef;                                        // 0x0258(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 TeslaSlug_L2_WeaponRef;                                   // 0x0290(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 TeslaSlug_L3_WeaponRef;                                   // 0x02C8(0x0038) (Edit, BlueprintVisible)
	struct FPwndAssetDatabaseReference                 DebuffMineBaseWeaponRef;                                  // 0x0300(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwndStuntSeq_Damage.PwndStuntSeq_Damage_C");
		return ptr;
	}


	void OnPostEventTrigger(TEnumAsByte<EeEventTrigger>* Trigger, float* Count, TArray<class UObject*>* Others);
	void ExecuteUbergraph_PwndStuntSeq_Damage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
