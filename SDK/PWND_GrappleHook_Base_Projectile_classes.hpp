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

// BlueprintGeneratedClass GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C
// 0x0020 (0x11C8 - 0x11A8)
class AGrappleHook_Base_Projectile_C : public ABase_AbilityProjectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11A8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        AllyMesh;                                                 // 0x11B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyCharacterReelInSpeed;                                // 0x11B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrawlingReelInSpeed;                                      // 0x11BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelfReelInSpeed;                                          // 0x11C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OtherReelInSpeed;                                         // 0x11C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C");
		return ptr;
	}


	void ExecutePullIn(class AActor* PullInTarget, bool* Success);
	void UserConstructionScript();
	void OnDetonate(struct FVector* Location, struct FHitResult* Hit, bool* bDestroy);
	void ReceiveBeginPlay();
	void OnTeamUpdated(unsigned char* NewTeamNum);
	void ExecuteUbergraph_GrappleHook_Base_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
