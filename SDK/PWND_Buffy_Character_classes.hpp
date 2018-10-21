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

// BlueprintGeneratedClass Buffy_Character.Buffy_Character_C
// 0x0080 (0x1358 - 0x12D8)
class ABuffy_Character_C : public ABase_Character_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12D8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Dash_FullScreen_FP;                                     // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             DashSound;                                                // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BuffyDash_VFX_R_Leg_Enemy;                                // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BuffyDash_VFX_L_Leg_Enemy;                                // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BuffyDash_VFX_Chest_Enemy;                                // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BuffyDash_VFX_R_Leg_Ally;                                 // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BuffyDash_VFX_L_Leg_Ally;                                 // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BuffyDash_VFX_Chest_Ally;                                 // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestEnemyTrail;                                           // 0x1320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1321(0x0003) MISSED OFFSET
	struct FRotator                                    NewVar_0_1;                                               // 0x1324(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FS_Dash_Particle_Velocity_Curve;                          // 0x1330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FS_Dash_Particle_CylinderVelocityScale_Curve;             // 0x1338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                FS_Dash_Particle_SizeScale_Curve;                         // 0x1340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FS_Dash_Particle_SpawnPerUnit_Curve;                      // 0x1348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FS_Dash_Particle_Alpha_Curve;                             // 0x1350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buffy_Character.Buffy_Character_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_UpdateCustomMovement(float* DeltaTime);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void ExecuteUbergraph_Buffy_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
