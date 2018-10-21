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

// BlueprintGeneratedClass FireWeapon_SingleShot_Task.FireWeapon_SingleShot_Task_C
// 0x0009 (0x00A9 - 0x00A0)
class UFireWeapon_SingleShot_Task_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	bool                                               bRetVal;                                                  // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FireWeapon_SingleShot_Task.FireWeapon_SingleShot_Task_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_FireWeapon_SingleShot_Task(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
