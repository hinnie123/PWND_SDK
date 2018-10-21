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

// BlueprintGeneratedClass TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C
// 0x0090 (0x1BF0 - 0x1B60)
class ATravellingTimeBubble_Base_AOE_C : public APwndTimeBubble
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B60(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        LumpyDNA;                                                 // 0x1B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Collision;                                                // 0x1B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CollisionScaler;                                          // 0x1B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Center;                                                   // 0x1B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Back;                                                     // 0x1B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Front;                                                    // 0x1B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DNAScaler;                                                // 0x1B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationAmount;                                           // 0x1BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LengthScale;                                              // 0x1BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusScale;                                              // 0x1BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InverseScalingSpeedFactor;                                // 0x1BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HalfLength;                                               // 0x1BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1BB4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ScaleCurve;                                               // 0x1BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DNA_Scale_Speed;                                          // 0x1BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DNA_RadiusScale;                                          // 0x1BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DNA_LengthScale;                                          // 0x1BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DNA_Opacity;                                              // 0x1BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DNA_OpacityCurve;                                         // 0x1BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpStartScaleMul;                                      // 0x1BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpEndScaleMul;                                        // 0x1BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionStartOpacity;                                    // 0x1BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionEndOpacity;                                      // 0x1BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultEffectiveCollisionRadius;                          // 0x1BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultEffectiveCollisionHalfHeight;                      // 0x1BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TravellingTimeBubble_Base_AOE.TravellingTimeBubble_Base_AOE_C");
		return ptr;
	}


	void Update_DNA_Materials();
	void UpdateScale();
	void UpdateMaterials();
	void UserConstructionScript();
	void OnSetActive(bool* bIsActive);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TravellingTimeBubble_Base_AOE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
