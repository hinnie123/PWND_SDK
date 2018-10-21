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

// BlueprintGeneratedClass Steroids_Base_DOT.Steroids_Base_DOT_C
// 0x0050 (0x15A8 - 0x1558)
class USteroids_Base_DOT_C : public UBase_AbilityDOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1558(0x0008) (Transient, DuplicateTransient)
	class UCurveFloat*                                 SteroidsFullScreenEffect_StrengthEnd_Curve;               // 0x1560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SteroidsFullScreenEffect_StrengthStart_Curve;             // 0x1568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageMod;                                                // 0x1570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealMod;                                                  // 0x1574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireIntervalMod;                                          // 0x1578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbilityDamageMod;                                         // 0x157C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbilityHealMod;                                           // 0x1580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbilityFireIntervalMod;                                   // 0x1584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementSpeedMod;                                         // 0x1588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityMod;                                               // 0x158C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActionDurationMod;                                        // 0x1590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x1594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SteroidsSound_FadeOut_Curve;                              // 0x1598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PostProcessInst;                                          // 0x15A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Steroids_Base_DOT.Steroids_Base_DOT_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveTick(float* DeltaSeconds);
	void OnTuneAOE(class APwndAOE** AOE);
	void OnTuneDOT(class UPwndDOTComponent** DOT);
	void OnTuneProjectile(class APwndProjectile** Projectile);
	void OnTuneCharacter(class APwndCharacter** Char);
	void OnTuneInventory(class APwndInventory** Inv);
	void ExecuteUbergraph_Steroids_Base_DOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
