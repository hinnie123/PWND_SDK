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

// BlueprintGeneratedClass LockdownShield_Base_Preview.LockdownShield_Base_Preview_C
// 0x0010 (0x03A0 - 0x0390)
class ALockdownShield_Base_Preview_C : public APwndFX
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Soccer_noInterior;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LockdownShield_Base_Preview.LockdownShield_Base_Preview_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSetActive(bool* bIsActive);
	void ExecuteUbergraph_LockdownShield_Base_Preview(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
