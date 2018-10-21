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

// BlueprintGeneratedClass G11_Pent.G11_Pent_C
// 0x0008 (0x0BF0 - 0x0BE8)
class UG11_Pent_C : public UBase_PwndShieldComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass G11_Pent.G11_Pent_C");
		return ptr;
	}


	void OnPanelDamaged();
	void ExecuteUbergraph_G11_Pent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
