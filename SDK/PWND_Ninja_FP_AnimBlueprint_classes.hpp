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

// AnimBlueprintGeneratedClass Ninja_FP_AnimBlueprint.Ninja_FP_AnimBlueprint_C
// 0x0008 (0x13C8 - 0x13C0)
class UNinja_FP_AnimBlueprint_C : public UBase_Weapon_AnimBP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x13C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Ninja_FP_AnimBlueprint.Ninja_FP_AnimBlueprint_C");
		return ptr;
	}


	void AnimNotify_Combo01_CameraShake();
	void AnimNotify_Combo02_CameraShake();
	void AnimNotify_Combo03_CameraShake();
	void AnimNotify_Combo04_CameraShake();
	void ExecuteUbergraph_Ninja_FP_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
