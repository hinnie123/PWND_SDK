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

// BlueprintGeneratedClass Base_AI_Controller_Player.Base_AI_Controller_Player_C
// 0x0020 (0x0660 - 0x0640)
class ABase_AI_Controller_Player_C : public ABase_CPP_AIControllerPlayer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (Transient, DuplicateTransient)
	class UBlackboardData*                             InitialBlackBoard;                                        // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               InitialBehaviorTree;                                      // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       bIsInteracting;                                           // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_AI_Controller_Player.Base_AI_Controller_Player_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Base_AI_Controller_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
