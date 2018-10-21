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

// BlueprintGeneratedClass FiestaBoyz_L2_Weapon.FiestaBoyz_L2_Weapon_C
// 0x0008 (0x09C0 - 0x09B8)
class AFiestaBoyz_L2_Weapon_C : public AFiestaBoyz_Base_Weapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FiestaBoyz_L2_Weapon.FiestaBoyz_L2_Weapon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FiestaBoyz_L2_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
