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

// WidgetBlueprintGeneratedClass BP_WidgetInterface.BP_WidgetInterface_C
// 0x0048 (0x0390 - 0x0348)
class UBP_WidgetInterface_C : public UPwndWidgetInterfaceManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_PopUps;                                       // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasPanel_Screens;                                      // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBox_Achievements;                                 // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_CharacterSelectScreen_C*                 LoadoutScreen;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasGoneThroughMatchStart;                                 // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UBP_PostMatchScreen_C*                       Post_Match_Screen;                                        // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Training_Escape_Menu_Requested;                           // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_WidgetInterface.BP_WidgetInterface_C");
		return ptr;
	}


	void CreateEscapeMenu();
	void HideEscapeMenu();
	void Cancelled();
	void Quitting();
	void OnMatchStateChanged_Event_2(class APwndGameState* GameState, const struct FName& MatchState);
	void OnMatchStateChanged_Event_1(class APwndGameState* GameState, const struct FName& MatchState);
	void Construct();
	void OnEscapeMenuRequested();
	void OnEscapeMenuCleared();
	void OnTrainingEscapeMenuRequested();
	void Mission_Complete(const struct FGuid& NotificationGuid, const struct FMissionInfo& MissionInfo);
	void Achievement_Pop_Up(const struct FText& Achievement_Name, const struct FText& Achievement_Desc, int Credit_Reward, class UMaterial* Reward_Image, const struct FGuid& Notification_GUID);
	void Notification_Finished(const struct FGuid& Notification_GUID);
	void XP_Gained(const struct FGuid& NotificationGuid, const struct FText& Reason, int amount);
	void ExecuteUbergraph_BP_WidgetInterface(int EntryPoint);
	void Training_Escape_Menu_Requested__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
