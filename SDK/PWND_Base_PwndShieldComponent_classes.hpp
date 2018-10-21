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

// BlueprintGeneratedClass Base_PwndShieldComponent.Base_PwndShieldComponent_C
// 0x00C8 (0x0BE8 - 0x0B20)
class UBase_PwndShieldComponent_C : public UPwndShieldPanelComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B20(0x0008) (Transient, DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>            ShieldMaterialInstances;                                  // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ShieldDeploymentTime;                                     // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActivateDuration;                                         // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Shield_Deploy_BarMultCurve;                               // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Shield_Deploy_BeamCurve;                                  // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Shield_Deploy_FlashCurve;                                 // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Shield_Deploy_StarCurve;                                  // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Shield_Deploy_TransitionCurve;                            // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Shield_Deploy_KillFrameCurve;                             // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Shield_Deploy_NoiseIntensityCurve;                        // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Ally_Color;                                               // 0x0B78(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Ally_Damage_Color;                                        // 0x0B88(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Enemy_Color;                                              // 0x0B98(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Enemy_Damage_Color;                                       // 0x0BA8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DamageThreshold_1;                                        // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageThreshold_2;                                        // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageThreshold_3;                                        // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Enemy_Shield_RimColor;                                    // 0x0BC8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Ally_Shield_RimColor;                                     // 0x0BD8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_PwndShieldComponent.Base_PwndShieldComponent_C");
		return ptr;
	}


	void UpdateShieldColors();
	void UpdateShieldDamage(float NewParam1, float* NewParam);
	void UpdateShieldMaterials(float Time);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnPanelHealthChanged(int* OldHealth, int* NewHealth, float* CurrentHealthPct);
	void OnPanelSetActive(bool* bActive);
	void OnPanelDestroyed(bool* bDestroyed);
	void ExecuteUbergraph_Base_PwndShieldComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
