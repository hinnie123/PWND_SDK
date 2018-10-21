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

// BlueprintGeneratedClass BP_FrontEndPlayerController.BP_FrontEndPlayerController_C
// 0x0020 (0x0830 - 0x0810)
class ABP_FrontEndPlayerController_C : public AFrontEndPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (Transient, DuplicateTransient)
	bool                                               bMonkeyEnteringQueue;                                     // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0819(0x0007) MISSED OFFSET
	class UFrontEnd_LobbyScreen*                       LobbyScreen;                                              // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                LobbyTimer;                                               // 0x0828(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontEndPlayerController.BP_FrontEndPlayerController_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnArrivedToMainMenu();
	void OnArrivedToLobby();
	void OnArrivedToPostMatchScreen();
	void OnArrivedToMatchTypeScreen();
	void OnMonkeyReadyToQeueue();
	void LobbyCheckForDupe();
	void ExecuteUbergraph_BP_FrontEndPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
