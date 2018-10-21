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

// BlueprintGeneratedClass Ninja_Sword_Base_First_Person_SwordMesh_HackAcc.Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_C
// 0x0010 (0x03A0 - 0x0390)
class ANinja_Sword_Base_First_Person_SwordMesh_HackAcc_C : public APwndFX
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Sword;                                                    // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ninja_Sword_Base_First_Person_SwordMesh_HackAcc.Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSetActive(bool* bIsActive);
	void ExecuteUbergraph_Ninja_Sword_Base_First_Person_SwordMesh_HackAcc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
