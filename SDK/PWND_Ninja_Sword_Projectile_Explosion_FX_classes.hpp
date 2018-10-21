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

// BlueprintGeneratedClass Ninja_Sword_Projectile_Explosion_FX.Ninja_Sword_Projectile_Explosion_FX_C
// 0x003F (0x0460 - 0x0421)
class ANinja_Sword_Projectile_Explosion_FX_C : public ABase_FX_Explosion_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Secondary_Impact_VFX_Enemy;                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Secondary_Impact_VFX_Ally;                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_8672179C455F338B79DA9EAB5D794C62;   // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_8672179C455F338B79DA9EAB5D794C62;   // 0x044C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewVar_0_1;                                               // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ninja_Sword_Projectile_Explosion_FX.Ninja_Sword_Projectile_Explosion_FX_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Ninja_Sword_Projectile_Explosion_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
