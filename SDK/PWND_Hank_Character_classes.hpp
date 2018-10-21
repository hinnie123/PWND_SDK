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

// BlueprintGeneratedClass Hank_Character.Hank_Character_C
// 0x0008 (0x12E0 - 0x12D8)
class AHank_Character_C : public ABase_Character_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hank_Character.Hank_Character_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnRocketJump(struct FReplicatedRocketJump* JumpInfo);
	void ExecuteUbergraph_Hank_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
