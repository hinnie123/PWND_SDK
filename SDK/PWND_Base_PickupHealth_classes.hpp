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

// BlueprintGeneratedClass Base_PickupHealth.Base_PickupHealth_C
// 0x0048 (0x0448 - 0x0400)
class ABase_PickupHealth_C : public ABase_CPP_PickupHealth_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class UPwndBasicFieldTagComponent*                 PwndBasicFieldTag;                                        // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX;                                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Spinner;                                                  // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinSpeed;                                                // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	class UParticleSystem*                             PickedUpFX;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PickedUpFXScale;                                          // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class USoundCue*                                   PickedUpSound;                                            // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_PickupHealth.Base_PickupHealth_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnPickedUp();
	void ExecuteUbergraph_Base_PickupHealth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
