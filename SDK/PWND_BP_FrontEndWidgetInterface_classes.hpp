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

// WidgetBlueprintGeneratedClass BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C
// 0x00A0 (0x0510 - 0x0470)
class UBP_FrontEndWidgetInterface_C : public UFrontEndWidgetInterface
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            MOTD;                                                     // 0x0478(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            Transition;                                               // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_PlayerNameplate_C*                       BP_LocalPlayerNameplate;                                  // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_Menu_TV_Transition_C*                    BP_Menu_TV_Transition;                                    // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_MOTD_C*                                  BP_MOTD;                                                  // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasPanel_PopUps;                                       // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBox_Achievements;                                 // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ArrivedToMainMenu;                                        // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ArrivedToLobby;                                           // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     MOTD_IMG_URL;                                             // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ClosedMOTD;                                               // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SuccessfullyDownloadedMOTD;                               // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FinishedAttemptingToDownloadMOTD;                         // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04F2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    MatchFound;                                               // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UTexture2DDynamic*                           MOTD_DownloadedTexture;                                   // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C");
		return ptr;
	}


	void GetPlayerNamePlate(class UBP_PlayerNameplate_C** Instance);
	void OnFail_1F5E05A54C193DBD94E6F981102DA1E6(class UTexture2DDynamic* Texture);
	void OnSuccess_1F5E05A54C193DBD94E6F981102DA1E6(class UTexture2DDynamic* Texture);
	void Construct();
	void OnArrivedToMainMenu();
	void OnArrivedToLobby();
	void Hide_Player_Name_Plate();
	void Show_Player_Name_Plate();
	void OnArrivedToLoginScreen();
	void OnArrivedToCreateAccountScreen();
	void UpdatePlayerNamePlateData(struct FText* PlayerName, int* numberOfCredits, int* rankLevel, float* experiencePercentage, class UTexture2D** pAvatarImage);
	void Play_Transition();
	void OnArrivedToEulaNdaScreen();
	void DisplayBackendRelatedError(struct FText* Title, struct FText* Body);
	void OnOkayPressed_Event_3();
	void OnArrivedToPreLoginScreen();
	void OnReceivedPartyInvite(struct FString* friendName, struct FGuid* PlayerId);
	void OnReceiveNewPartyVersion(TArray<struct FOnlineFriendSocialBPData>* CurrentParty);
	void OnPartyDisbanded(bool* intentionalReasons);
	void OnLeaveMainMenuScreen();
	void OnReceivedNoticeOfInParty();
	void OnReceivedNoticeOfNotInParty();
	void OnKickedFromParty();
	void Mission_Complete(const struct FGuid& NotificationGuid, const struct FMissionInfo& MissionInfo);
	void Achievement_Pop_Up(const struct FText& Achievement_Name, const struct FText& Achievement_Desc, int Credit_Reward, class UMaterial* Reward_Image, const struct FGuid& Notification_GUID);
	void Notification_Finished(const struct FGuid& Notification_GUID);
	void OnLoggedInSuccessfully();
	void OnReturnedFromMatch();
	void OnInviteOkayPressed_Event(const struct FString& PlayerName, const struct FGuid& PlayerId);
	void OnInviteCancelPressed_Event(const struct FString& PlayerName, const struct FGuid& PlayerId);
	void XP_Gained(const struct FGuid& NotificationGuid, const struct FText& Reason, int amount);
	void OnMatchFound();
	void OnICustomMatchnviteOkayPressed_Event(const struct FString& PlayerName, const struct FGuid& PlayerId);
	void OnCustomMatchInviteCancelPressed_Event(const struct FString& PlayerName, const struct FGuid& PlayerId);
	void OnReceivedCustomMatchInvite(struct FString* friendName, struct FGuid* PlayerId);
	void ExecuteUbergraph_BP_FrontEndWidgetInterface(int EntryPoint);
	void MatchFound__DelegateSignature();
	void ClosedMOTD__DelegateSignature();
	void ArrivedToLobby__DelegateSignature();
	void ArrivedToMainMenu__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
