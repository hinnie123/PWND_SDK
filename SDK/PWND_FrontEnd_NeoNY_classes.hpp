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

// BlueprintGeneratedClass FrontEnd_NeoNY.FrontEnd_NeoNY_C
// 0x0080 (0x0410 - 0x0390)
class AFrontEnd_NeoNY_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	float                                              Select_FX_Select_FX_401B3AA349BE29E1FB80BC91C58ACD96;     // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Select_FX__Direction_401B3AA349BE29E1FB80BC91C58ACD96;    // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Select_FX;                                                // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Screen_Distort_Medium_50633C3F4CA896A72E9B8D810E6B427E;// 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Screen_Distort_Long_50633C3F4CA896A72E9B8D810E6B427E;// 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Screen_Distort_Short_50633C3F4CA896A72E9B8D810E6B427E;// 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_50633C3F4CA896A72E9B8D810E6B427E;   // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Screen_Distortion_Screen_Distort_Medium_90668AF94B0D2883CB09F98D1432EE83;// 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Screen_Distortion_Screen_Distort_Long_90668AF94B0D2883CB09F98D1432EE83;// 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Screen_Distortion_Screen_Distort_Short_90668AF94B0D2883CB09F98D1432EE83;// 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Screen_Distortion__Direction_90668AF94B0D2883CB09F98D1432EE83;// 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Screen_Distortion;                                        // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AFrontEndPlayerController*                   FrontEndPlayerControllerVar;                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class APwndCharacter*>                      LoadoutArray;                                             // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class APwndCharacter*                              CurrentlyViewedLoadout;                                   // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                Camera_MainMenu_Law_ExecuteUbergraph_FrontEnd_NeoNY_RefProperty;// 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALevelSequenceActor*                         Seq_FrontEnd_Main_Law_2_ExecuteUbergraph_FrontEnd_NeoNY_RefProperty;// 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                Camera_Loadouts_ExecuteUbergraph_FrontEnd_NeoNY_RefProperty;// 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontEnd_NeoNY.FrontEnd_NeoNY_C");
		return ptr;
	}


	void Screen_Distortion__FinishedFunc();
	void Screen_Distortion__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Select_FX__FinishedFunc();
	void Select_FX__UpdateFunc();
	void ReceiveBeginPlay();
	void CharactersButtonPressed_Event_1();
	void CharactersScreenToMainMenuScreen_Event_1();
	void Play_Screen_Distortion();
	void Screen_Distort_Small();
	void Go_To_Loot_Page();
	void Go_To_Main_From_Loot();
	void Go_To_LoadingScreen();
	void TV_FX();
	void Start_LawCigSmoke();
	void Kill_LawCigSmoke();
	void GoToQuickMatchLobby();
	void GoToMainMenu();
	void GoToLoadouts();
	void CustomizeLoadoutChanged();
	void Item_Select_FX();
	void ExecuteUbergraph_FrontEnd_NeoNY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
