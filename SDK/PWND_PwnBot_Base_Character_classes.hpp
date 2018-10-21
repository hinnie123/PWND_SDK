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

// BlueprintGeneratedClass PwnBot_Base_Character.PwnBot_Base_Character_C
// 0x001A (0x12F2 - 0x12D8)
class APwnBot_Base_Character_C : public ABase_Character_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12D8(0x0008) (Transient, DuplicateTransient)
	struct FString                                     AIName;                                                   // 0x12E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPlayedSpawnVO;                                           // 0x12F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSelfDestructing;                                         // 0x12F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwnBot_Base_Character.PwnBot_Base_Character_C");
		return ptr;
	}


	bool AllowPwn();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ReceivePossessed(class AController** NewController);
	void ExecuteUbergraph_PwnBot_Base_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
