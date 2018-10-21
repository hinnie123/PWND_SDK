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

// BlueprintGeneratedClass Base_FX_Explosion.Base_FX_Explosion_C
// 0x0091 (0x0421 - 0x0390)
class ABase_FX_Explosion_C : public ABase_FX_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  DecalMaterials;                                           // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DecalMaxDistance;                                         // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRVector2DExp                               DecalSize;                                                // 0x03BC(0x0018) (Edit, BlueprintVisible)
	struct FRFloatExp                                  DecalFadeDelay;                                           // 0x03D4(0x0010) (Edit, BlueprintVisible)
	struct FRFloatExp                                  DecalFadeDuration;                                        // 0x03E4(0x0010) (Edit, BlueprintVisible)
	struct FRFloat                                     DecalRotation;                                            // 0x03F4(0x000C) (Edit, BlueprintVisible)
	bool                                               bDecalForceSquare;                                        // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              DecalDepth;                                               // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceDecalSpawnDepth;                                   // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DecalSortOrder;                                           // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Decal_Initial_Delay;                                      // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class UClass*                                      FXDatabase;                                               // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDecalUseVisualGeometry;                                  // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_FX_Explosion.Base_FX_Explosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Base_FX_Explosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
