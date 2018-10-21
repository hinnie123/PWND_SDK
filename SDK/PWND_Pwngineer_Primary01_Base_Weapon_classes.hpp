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

// BlueprintGeneratedClass Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C
// 0x00D0 (0x0A68 - 0x0998)
class APwngineer_Primary01_Base_Weapon_C : public ABase_AbilityWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             TP_FireSound;                                             // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_FireSound;                                             // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FP_ChargeSound;                                           // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LCDColorGood;                                             // 0x09B8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                LCDColorBad;                                              // 0x09C8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UFont*                                       LCDFont;                                                  // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstTextLinePos;                                         // 0x09E0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   SecondTextLinePos;                                        // 0x09E8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ThirdTextLinePos;                                         // 0x09F0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   IconPos;                                                  // 0x09F8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   IconSize;                                                 // 0x0A00(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   TextureSize;                                              // 0x0A08(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	class UTextureRenderTarget2D*                      LCDScreen;                                                // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LCDMatInst;                                               // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Line1;                                                    // 0x0A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Line2;                                                    // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Line3;                                                    // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUpdateRenderTexture;                                     // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A51(0x0007) MISSED OFFSET
	class UMaterialInterface*                          Icon;                                                     // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PhysicsBoneName;                                          // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pwngineer_Primary01_Base_Weapon.Pwngineer_Primary01_Base_Weapon_C");
		return ptr;
	}


	void GetBot(class APwndCharacter** Bot);
	void SetIcon(class UMaterialInterface* InIcon);
	void SetTextLine(int Index, const struct FString& String);
	void RenderLCD_Internal(class UCanvas* inCanvas, const struct FVector2D& InSize, float DeltaSeconds);
	void UpdateLCD(float DeltaSeconds);
	void RenderLCD(float DeltaSeconds);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnWeaponFire();
	void OnWeaponAmmoCountChanged(int* OldAmmoCount, int* NewAmmoCount);
	void OnWeaponStartReload();
	void OnUpgraded();
	void OnWeaponStartCharging(bool* bInitialCharge);
	void OnWeaponStopCharging();
	void ExecuteUbergraph_Pwngineer_Primary01_Base_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
