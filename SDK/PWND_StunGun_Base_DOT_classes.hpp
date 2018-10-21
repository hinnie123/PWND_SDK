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

// BlueprintGeneratedClass StunGun_Base_DOT.StunGun_Base_DOT_C
// 0x000C (0x1564 - 0x1558)
class UStunGun_Base_DOT_C : public UBase_AbilityDOT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1558(0x0008) (Transient, DuplicateTransient)
	float                                              SlowDown;                                                 // 0x1560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StunGun_Base_DOT.StunGun_Base_DOT_C");
		return ptr;
	}


	void OnTuneCharacter(class APwndCharacter** Char);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_StunGun_Base_DOT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
