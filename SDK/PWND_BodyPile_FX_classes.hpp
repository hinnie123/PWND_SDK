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

// BlueprintGeneratedClass BodyPile_FX.BodyPile_FX_C
// 0x0091 (0x0421 - 0x0390)
class ABodyPile_FX_C : public ABase_FX_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BodyPile_FX_Enemy;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BodyPile_FX_Neutral;                                      // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BodyPile_FX_Ally;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NeutralSuccessFX;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             EnemySuccessFX;                                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AllySuccessFX;                                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             OneShotFX;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NeutralFX;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             EnemyFX;                                                  // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AllyFX;                                                   // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LoopingFX;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Health_PickUp_Level_Yellow;                             // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Health_PickUp_Level_Teal;                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Health_PickUp_Level_Red;                                // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Health_Idle_Teal;                                       // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Health_Idle_Yellow;                                     // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Health_Idle_Red;                                        // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PwnerTeamNum;                                             // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BodyPile_FX.BodyPile_FX_C");
		return ptr;
	}


	void GetGroundLocation(float OffsetFromGround, struct FVector* GroundLocation, struct FVector* GroundNormal);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetActive(bool* bIsActive);
	void OnPostInt(struct FName* Name, int* Num);
	void OnSetTeamNum(unsigned char* OldTeamNum, unsigned char* NewTeamNum);
	void OnPostObject(struct FName* Name, class UObject** Object);
	void OnPostBool(struct FName* Name, bool* val);
	void ExecuteUbergraph_BodyPile_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
