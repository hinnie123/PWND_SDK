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

// BlueprintGeneratedClass Pwnd_Announcer.Pwnd_Announcer_C
// 0x000C (0x0414 - 0x0408)
class APwnd_Announcer_C : public ABase_CPP_Announcer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	float                                              LastMatchTime_1;                                          // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pwnd_Announcer.Pwnd_Announcer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Pwnd_Announcer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
