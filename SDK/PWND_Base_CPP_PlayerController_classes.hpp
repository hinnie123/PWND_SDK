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

// BlueprintGeneratedClass Base_CPP_PlayerController.Base_CPP_PlayerController_C
// 0x0008 (0x0AA8 - 0x0AA0)
class ABase_CPP_PlayerController_C : public APwndPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_CPP_PlayerController.Base_CPP_PlayerController_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_CheatFinishCooldowns_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_CheatSetHealth_Full_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_CheatSetHealth_To_0_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_CheatSetHealth_To_1_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_CheatSpawnAllyPwnee_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_CheatSpawnEnemyPwnee_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_CheatSpawnAllyStack_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_CheatSpawnEnemyStack_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ExecuteUbergraph_Base_CPP_PlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
