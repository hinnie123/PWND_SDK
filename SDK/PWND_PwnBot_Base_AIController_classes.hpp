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

// BlueprintGeneratedClass PwnBot_Base_AIController.PwnBot_Base_AIController_C
// 0x001E (0x0666 - 0x0648)
class APwnBot_Base_AIController_C : public ABase_AIController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0648(0x0008) (Transient, DuplicateTransient)
	float                                              LifeTime;                                                 // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APwndCharacter*                              PwndChar;                                                 // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfDestructTimer;                                        // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPlayedDetonateVO;                                      // 0x0664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedToPlaySearchingVO;                                    // 0x0665(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PwnBot_Base_AIController.PwnBot_Base_AIController_C");
		return ptr;
	}


	void IsSelfDestructing(bool* IsSelfDestruct);
	void SetSelfDestruct();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnPawnActionStateUpdated(class APwndCharacter** Char, TEnumAsByte<EePawnActionState>* NewState, TEnumAsByte<EePawnActionState>* OldState);
	void OnPwnageScored(class APwndCharacter** Pwner, class APwndCharacter** PwndPawn, bool* bInstant);
	void ExecuteUbergraph_PwnBot_Base_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
