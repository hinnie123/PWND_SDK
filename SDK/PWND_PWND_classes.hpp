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

// Class PWND.BaseWidgetInterface
// 0x00A0 (0x02D0 - 0x0230)
class UBaseWidgetInterface : public UUserWidget
{
public:
	class UClass*                                      TrainingScreen;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pTrainingScreen;                                          // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      ChallengesScreen;                                         // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pChallengesScreen;                                        // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      DebugLoadoutScreen;                                       // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pDebugLoadoutScreen;                                      // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      GenericConfirmationPopUp;                                 // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UUserWidget*                                 pGenericConfirmationPopUp;                                // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      GenericErrorPopup;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UUserWidget*                                 pGenericErrorPopUp;                                       // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      TrainingLoadingPopup;                                     // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UUserWidget*                                 pTrainingLoadingPopup;                                    // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         pPopUpQueue;                                              // 0x0290(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UUserWidget*                                 pCurrentScreen;                                           // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 pPreviousScreen;                                          // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      OptionsScreen;                                            // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pOptionsScreen;                                           // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                pScreensCanvasPanel;                                      // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                pPopUpCanvasPanel;                                        // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.BaseWidgetInterface");
		return ptr;
	}


	void OnArrivedToOptionsScreen();
	void LeaveOptionsScreen();
	void GoToTrainingScreen();
	void GoToOptionsScreen();
	void GoToChallengeScreen();
	class UUserWidget* GetCurrentScreen();
};


// Class PWND.FrontEnd_BaseScreen
// 0x0040 (0x0270 - 0x0230)
class UFrontEnd_BaseScreen : public UUserWidget
{
public:
	class UBaseWidgetInterface*                        pWidgetInterface;                                         // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0238(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_BaseScreen");
		return ptr;
	}


	void RequestExitScreen();
	void RegisterWidgetAnimation(class UWidgetAnimation* pWidgetAnimation);
	void RegisterNavigableElement(class UUI_MenuNavigable* pNewNavigable);
	void OnSafeInitialization();
	void OnNewWidgetReceiveAttention(class UUI_MenuNavigable* WidgetWithAttention);
	void OnExitScreen();
	void OnEnterScreen();
	void OnBumperRight();
	void OnBumperLeft();
	void OnBack();
	class UUI_MenuNavigable* GetCurrentNavigableThatHasAttention();
	void ForceNavigableObjectSelection(class UUserWidget* pNavigableObject);
	void ClearNavigationAttention();
};


// Class PWND.FrontEnd_ChallengesScreen
// 0x0000 (0x0270 - 0x0270)
class UFrontEnd_ChallengesScreen : public UFrontEnd_BaseScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_ChallengesScreen");
		return ptr;
	}

};


// Class PWND.FrontEnd_CharacterSelectScreen
// 0x0108 (0x0378 - 0x0270)
class UFrontEnd_CharacterSelectScreen : public UFrontEnd_BaseScreen
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
	class UClass*                                      CharacterButtonWidgetToUse;                               // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              xButtonPosition;                                          // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              yInitialButtonPosition;                                   // 0x0284(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              yButtonOffsets;                                           // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ButtonHeights;                                            // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ButtonWidths;                                             // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                ButtonLabelFontSize;                                      // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FrontEnd_LoadoutButtonCharacterReferences> AllCharacterButtons;                                      // 0x0298(0x0010) (ZeroConstructor, Transient)
	TArray<struct FFrontEnd_LoadoutCharacterSpawn>     SpawnReferenceTransforms;                                 // 0x02A8(0x0010) (ZeroConstructor, Transient)
	class APwndLoadoutVisualizerHelper*                pVisualizerHelper;                                        // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture2D*                                  LoadingIcon;                                              // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            pDefaultAnim;                                             // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pCharacterCustomizationSlideIntoViewAnim;                 // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pCharacterCustomizationSlideOutOfViewAnim;                // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pCharacterNameWidgetText;                                 // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_TextureSwapButton*                       pMakeActiveButton;                                        // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_TextureSwapButton*                       pCustomizeAppearanceButton;                               // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pCharacterSkinLoadoutItem;                                // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pPrimaryWeaponLoadoutItem;                                // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pWeaponSkinLoadoutItem;                                   // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pPrimaryAbilityLoadoutItem;                               // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pSecondaryAbilityLoadoutItem;                             // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pPerk1LoadoutItem;                                        // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pPerk2LoadoutItem;                                        // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pPerk3LoadoutItem;                                        // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pPwnLoadoutItem;                                          // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pPwnStampLoadoutItem;                                     // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontEnd_UIButtonLoadoutItem*               pReviveLoadoutItem;                                       // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_SelectionHighlighter*                    pHighlighter;                                             // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      pLoadoutVisualization;                                    // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CurrentlySelectedCharacter;                               // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentlyActiveLoadout;                                   // 0x0364(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                pCanvasPanel;                                             // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_CharacterSelectScreen");
		return ptr;
	}


	void ShiftAttentionToRightSideOfScreen();
	void SetEncapsulatingCanvasPanel(class UCanvasPanel* CanvasPanel);
	void SetActiveLoadout();
	void SelectNextWeaponSkin();
	void SelectNextSecondaryAbility();
	void SelectNextRevive();
	void SelectNextPwnStamp();
	void SelectNextPwn();
	void SelectNextPrimaryWeapon();
	void SelectNextPrimaryAbility();
	void SelectNextPerk3();
	void SelectNextPerk2();
	void SelectNextPerk1();
	void SelectNextCharacterSkin();
	void OnGoBackToMainMenu();
	void OnCustomReset();
	void OnBack_Implementation();
};


// Class PWND.FrontEnd_CreateAccountScreen
// 0x0330 (0x05A0 - 0x0270)
class UFrontEnd_CreateAccountScreen : public UFrontEnd_BaseScreen
{
public:
	class UClass*                                      PopUpErrorScreen;                                         // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UUserWidget*                                 pPopUpErrorScreen;                                        // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_TextureSwapButton*                       pGoBackButton;                                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_TextureSwapButton*                       pCreateAccountButton;                                     // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UEditableTextBox*                            pFirstNameTextField;                                      // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UEditableTextBox*                            pLastNameTextField;                                       // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UEditableTextBox*                            pUserNameTextField;                                       // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UEditableTextBox*                            pPassword1TextField;                                      // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UEditableTextBox*                            pPassword2TextField;                                      // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E8];                                     // 0x02B8(0x02E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_CreateAccountScreen");
		return ptr;
	}


	void OnGoBackPressed();
	void OnCreateAccountPressed();
	void CloseErrorScreen();
};


// Class PWND.FrontEnd_CreateCustomMatchScreen
// 0x0030 (0x02A0 - 0x0270)
class UFrontEnd_CreateCustomMatchScreen : public UFrontEnd_BaseScreen
{
public:
	class UDataTable*                                  pCustomMatchPointsDT;                                     // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  pCustomMatchDurationDT;                                   // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  pCustomMatchTeamSizeDT;                                   // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UUI_GeneralUseCaseButton*                    pMapButton;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_CreateCustomMatchScreen");
		return ptr;
	}


	void PressCreateButton();
	class UTexture2D* OnMapHighlighted(int Index);
	void AllPointOptionsAcquired(TArray<struct FText> displayTextArray);
	void AllMatchTeamSizeOptionsAcquired(TArray<struct FText> displayTextArray);
	void AllMatchDurationOptionsAcquired(TArray<struct FText> displayTextArray);
	void AllLevelNamesAcquired(TArray<struct FText> LevelNames);
};


// Class PWND.FrontEnd_CustomizeScreen
// 0x00C8 (0x0338 - 0x0270)
class UFrontEnd_CustomizeScreen : public UFrontEnd_BaseScreen
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0270(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_CustomizeScreen");
		return ptr;
	}


	void PurchaseItemCallBack(bool bSucceeded, const struct FText& ErrorMessage);
	bool PurchaseItem(const struct FGuid& ItemGUID, const struct FGuid& CostItemGUID);
	void OnUpdatedInventoryReceived();
	void OnLeftFaceButton();
	void OnAccept();
	struct FPwndLoadout NotifyOfViewedWeaponSkin(const struct FGuid& weaponSkinGuid);
	struct FPwndLoadout NotifyOfViewedWeapon(const struct FGuid& weaponGuid);
	struct FPwndLoadout NotifyOfViewedVoiceLine(const struct FGuid& voiceLineGuid);
	struct FPwndLoadout NotifyOfViewedReviveAnim(const struct FGuid& reviveAnimGuid);
	struct FPwndLoadout NotifyOfViewedPwnStamp(const struct FGuid& pwnStampGuid);
	struct FPwndLoadout NotifyOfViewedPwnAnim(const struct FGuid& pwnAnimGuid);
	struct FPwndLoadout NotifyOfViewedCharacterSkin(const struct FGuid& skinGuid);
	struct FPwndLoadout NotifyOfCharacterToView(const struct FGuid& characterGuid);
	int GetTotalAmountOfWeaponSkins(const struct FGuid& weaponGuid);
	int GetTotalAmountOfWeapons(const struct FGuid& characterGuid);
	int GetTotalAmountOfPwnVoiceLines(const struct FGuid& characterGuid);
	int GetTotalAmountOfPwnStamps(const struct FGuid& characterGuid);
	int GetTotalAmountOfPwnAnimations(const struct FGuid& characterGuid);
	int GetTotalAmountOfOwnedWeaponSkins(const struct FGuid& weaponGuid);
	int GetTotalAmountOfOwnedWeapons(const struct FGuid& characterGuid);
	int GetTotalAmountOfOwnedPwnVoiceLines(const struct FGuid& characterGuid);
	int GetTotalAmountOfOwnedPwnStamps(const struct FGuid& characterGuid);
	int GetTotalAmountOfOwnedPwnAnimations(const struct FGuid& characterGuid);
	int GetTotalAmountOfOwnedCharacterSkins(const struct FGuid& characterGuid);
	int GetTotalAmountOfCharacterSkins(const struct FGuid& characterGuid);
	struct FGuid GetEquippedWeaponSkin(const struct FGuid& weaponGuid);
	struct FGuid GetEquippedWeapon(const struct FGuid& characterGuid);
	struct FGuid GetEquippedVoiceLine(const struct FGuid& characterGuid);
	struct FGuid GetEquippedSkin(const struct FGuid& characterGuid);
	struct FGuid GetEquippedPwnStamp(const struct FGuid& characterGuid);
	struct FGuid GetEquippedPwnAnimation(const struct FGuid& characterGuid);
	TArray<struct FGuid> GetAvailableCharacters();
	TArray<struct FPurchasableEquipItem> GetAllWeaponSkinEquips(const struct FGuid& weaponGuid);
	TArray<struct FPurchasableEquipItem> GetAllWeaponsEquips(const struct FGuid& characterGuid);
	TArray<struct FPurchasableEquipItem> GetAllPwnVoiceLineEquips(const struct FGuid& characterGuid);
	TArray<struct FPurchasableEquipItem> GetAllPwnStampEquips(const struct FGuid& characterGuid);
	TArray<struct FPurchasableEquipItem> GetAllPwnAnimationEquips(const struct FGuid& characterGuid);
	TArray<struct FPurchasableEquipItem> GetAllCharacterSkinEquips(const struct FGuid& characterGuid);
	void Equip(const struct FGuid& equipObjectID);
};


// Class PWND.FrontEnd_ErrorScreen
// 0x0018 (0x0288 - 0x0270)
class UFrontEnd_ErrorScreen : public UFrontEnd_BaseScreen
{
public:
	class UTextBlock*                                  pErrorMessage;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FText>                               ErrorMessages;                                            // 0x0278(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_ErrorScreen");
		return ptr;
	}


	void HideErrorScreen();
};


// Class PWND.FrontEnd_EulaNdaScreen
// 0x0000 (0x0270 - 0x0270)
class UFrontEnd_EulaNdaScreen : public UFrontEnd_BaseScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_EulaNdaScreen");
		return ptr;
	}


	void OnCancelPressed();
	void OnAcceptPressed();
};


// Class PWND.FrontEnd_LobbyScreen
// 0x0160 (0x03D0 - 0x0270)
class UFrontEnd_LobbyScreen : public UFrontEnd_BaseScreen
{
public:
	class UDataTable*                                  pCustomMatchPointsDT;                                     // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  pCustomMatchDurationDT;                                   // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FrontEnd_LoadoutButtonCharacterReferences> AllCharacterButtons;                                      // 0x0280(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0290(0x0128) MISSED OFFSET
	class UPwndGameUserSettings*                       Settings;                                                 // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUI_SelectableGroup*                         pCharacterSelectionGroup;                                 // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03C8(0x0001) MISSED OFFSET
	bool                                               bCharacterInfoDisplayed;                                  // 0x03C9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bScoreboardDisplayed;                                     // 0x03CA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x03CB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_LobbyScreen");
		return ptr;
	}


	void UnevenNumberOfPlayersAlert();
	void SwitchTeams(const struct FOnlineFriendBPData& lobbyMember);
	void SwapSlots(const struct FOnlineFriendBPData& lobbyMemberA, const struct FOnlineFriendBPData& lobbyMemberB);
	void ShowTeamsButtonPressed();
	void ShowTeamLoadoutButtonPressed();
	void SetReadyState(bool bIsReady);
	void SetCurrentGameMode(int selectedGameModeIndex);
	int SelectRandomLoaodut(bool bEvenOutCharacterSelection, bool bIncludeEnemyTeam, bool bOnlyReady);
	void SelectLoadoutFromList(int indexOfSelected);
	void ScoreboardVisible(bool IsVisible);
	void SaveMatchSettings(int selectedLevelIndex, int selectedPointsIndex, int selectedDurationIndex, int selectedGameModeIndex, int autoFillBotDifficultyIndex);
	void RequestLeaveLobby();
	void RequestFriendsList();
	void ProvideAvailableCharacterNames(TArray<struct FText> characterNames);
	void ProvideAvailableCharacterGuids(TArray<struct FGuid> allCharacterGuids);
	void PressReadyButton();
	void PressChangeCharacterButton();
	void PlayerAbandonedLobby();
	void PenalizePlayerForLeaving();
	void PassCharacterSelectionGroupReference(class UUI_SelectableGroup* pSelectionGroup);
	void PassCharacterDropDownScalable(class UUI_DropDownScalable* pCharacterDropDown);
	void OpenLoadoutPage();
	void OnSpecialEscapeButtonPressed();
	void OnSlotUpdated(const struct FOnlineFriendBPData& playerData, TEnumAsByte<EHostRelevantTeamButtonState> buttonState, const struct FPwndLoadout& Loadout, int teamIndex, int SlotIndex);
	void OnServerReadyToJoin();
	void OnServerReadyToBeSpunUp();
	void OnReceivedFriendsList(TArray<struct FOnlineFriendBPData> friendList);
	void OnFriendRejectedInvite(const struct FOnlineFriendBPData& FriendData);
	void OnFriendAcceptedInvite(const struct FOnlineFriendBPData& FriendData, int teamIndex);
	void OnEnteredBackfillingState();
	void OnCustomLobbyUpdated();
	void OnCustomLobbyInitialized();
	void OnCurrentGameModeSet(int numberOfTeams);
	void OnAcceptButtonPressed();
	void NotifyCountDownValue(bool bIsValid, int countdownTimer);
	bool JumpToMatch();
	bool IsTournamentMatch();
	bool IsReadyToJoinMatch();
	bool IsReadyForMatch();
	bool IsPrivateLobby();
	bool IsHostAPlayer();
	bool IsCustomMatchLobby();
	bool IsClientHost();
	bool IsCharacterInfoDisplayed();
	void InviteFriend(const struct FOnlineFriendBPData& FriendData, int teamIndex, int SlotIndex);
	void IgnoreInput(bool IgnoreInput);
	void HostStartMatch();
	void HostLeaveMatch();
	void HostJoinMatch(int teamIndex, int SlotIndex);
	bool HasBackendLobbyBeenCreated();
	int GetTimesLeftLobby();
	struct FGuid GetSelectedCharacters(bool bIncludeSelf, bool bOnlyReady, TArray<struct FGuid>* Allies, TArray<struct FGuid>* Enemies);
	TArray<struct FText> GetPointsTextArray();
	TArray<struct FText> GetPlayableLevelNames();
	TArray<struct FText> GetPlayableGameModeNames();
	int GetNumCharacterSelectedDuplicates(bool bIncludeEnemyTeam, bool bOnlyReady);
	int GetNextMatchMakingPenaltyTime();
	TArray<struct FText> GetMatchDurationTextArray();
	struct FString GetLobbyDisplayId();
	struct FPwndLoadout GetCurrentSelectedLoadout();
	void ClearLobbyPlayerDataForUpdate();
	void CharacterInfoScreenToggled();
	void CharacterInfoButtonPressed();
	void BootPlayer(const struct FOnlineFriendBPData& lobbyMember);
	bool AreThereAnEvenAmountOfPlayersOnClientsTeam();
};


// Class PWND.FrontEnd_LoginScreen
// 0x01C0 (0x0430 - 0x0270)
class UFrontEnd_LoginScreen : public UFrontEnd_BaseScreen
{
public:
	class UUI_TextureSwapButton*                       pSignInButton;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_TextureSwapButton*                       pCreateAccountButton;                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UEditableTextBox*                            pUserNameTextField;                                       // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UEditableTextBox*                            pPasswordTextField;                                       // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                pPanelParentForSubPages;                                  // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FText                                       IncompleteLoginMessage;                                   // 0x0298(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x180];                                     // 0x02B0(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_LoginScreen");
		return ptr;
	}


	void OnSkipSignIn();
	void OnSignInButtonPressed();
	void OnCreateAccountPressed();
};


// Class PWND.FrontEnd_LootCrateScreen
// 0x0000 (0x0270 - 0x0270)
class UFrontEnd_LootCrateScreen : public UFrontEnd_BaseScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_LootCrateScreen");
		return ptr;
	}


	void RequestToOpenCrate(int Index);
	void Public_OnLeftFaceButtonPressed();
	void Public_OnAcceptPressed();
	void OnReceiveLootCrateData(TArray<struct FGuidInventoryItem> lootCrates);
	void OnCrateSuccessfullyOpened(TArray<struct FGuidInventoryItem> itemsOpened, TArray<struct FGuidInventoryItem> itemsAwarded);
	void OnCrateFailedToOpen();
	bool IsItemEquipped(const struct FGuid& characterGuid, const struct FGuid& ItemGUID);
	void EquipItem(const struct FGuid& characterGuid, const struct FGuid& ItemGUID);
};


// Class PWND.FrontEnd_MainMenu
// 0x0050 (0x02C0 - 0x0270)
class UFrontEnd_MainMenu : public UFrontEnd_BaseScreen
{
public:
	class UTextBlock*                                  pMissionTitle;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UTextBlock*>                          pMissionNames;                                            // 0x0278(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UTextBlock*>                          pMissionProgresses;                                       // 0x0288(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UCanvasPanel*                                pMissionPanel;                                            // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPwndGameUserSettings*                       Settings;                                                 // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UUI_GenericPopUp*                            penaltyPopup;                                             // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_PenaltyWidget*                           penaltyWidget;                                            // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              m_fTimeSpentInMainMenu;                                   // 0x02B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_MainMenu");
		return ptr;
	}


	void QuitGame();
	void QuickplayJoinGame();
	void OnUpdatedInventoryReceived();
	void OnReturnFromMatch();
	void OnPlayerMissionsRecieved(TArray<struct FMissionInfo> Missions);
	void OnEnterFromInitialLogin();
	bool HandleJoinPenalty();
	void GoToTrainingScreen();
	void GoToSocialScreen();
	void GoToOptionsScreen();
	void GoToLootCrateScreen();
	void GoToCustomizeScreen();
	void GoToCharactersScreen();
	int GetNumberOfOwnedLootCrates();
	void EnableTrainingButton(bool enable);
	void EnableSocialButton(bool enable);
	void EnablePlayButton(bool enable);
	void DisplayPenaltyPopup(int secondsLeft);
};


// Class PWND.FrontEnd_MatchTypeScreen
// 0x0000 (0x0270 - 0x0270)
class UFrontEnd_MatchTypeScreen : public UFrontEnd_BaseScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_MatchTypeScreen");
		return ptr;
	}


	void SetLobbyVisibility(int visibilityOption);
	void SelectSpectateMatch(const struct FString& matchCode);
	void SelectRankedMatch();
	void SelectQuickMatch();
	void SelectJoinMatch(const struct FString& matchCode);
	void SelectCustomMatch();
	void SelectChallenges();
	void OnBack_Implementation();
};


// Class PWND.FrontEnd_OptionsScreen
// 0x06E0 (0x0950 - 0x0270)
class UFrontEnd_OptionsScreen : public UFrontEnd_BaseScreen
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0270(0x00A0) MISSED OFFSET
	TArray<struct FIntPoint>                           Resolutions;                                              // 0x0310(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        DisplayModes;                                             // 0x0320(0x0010) (Edit, ZeroConstructor)
	class UPwndGameUserSettings*                       Settings;                                                 // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine*                                     GameEngine;                                               // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	class APwndBasePlayerController*                   OwningPC;                                                 // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUI_SelectableGroup*                         pTopTabsSelectionGroup;                                   // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FOptionsCache                               OriginalCache;                                            // 0x0350(0x0128) (Transient)
	struct FOptionsCache                               OnSaveCache;                                              // 0x0478(0x0128) (Transient)
	struct FString                                     ResolutionPropertyName;                                   // 0x05A0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ResolutionPropertyValue;                                  // 0x05B0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharaterControlsPropertyValue;                            // 0x05C0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DisplayString;                                            // 0x05D0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ResolutionString;                                         // 0x05E0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     GammaString;                                              // 0x05F0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ContrastString;                                           // 0x0600(0x0010) (Edit, ZeroConstructor)
	struct FString                                     GraphicsQualityString;                                    // 0x0610(0x0010) (Edit, ZeroConstructor)
	struct FString                                     VSyncString;                                              // 0x0620(0x0010) (Edit, ZeroConstructor)
	struct FString                                     BloomString;                                              // 0x0630(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DepthOfFieldString;                                       // 0x0640(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AmbientOcclusionString;                                   // 0x0650(0x0010) (Edit, ZeroConstructor)
	struct FString                                     PostProcessFXString;                                      // 0x0660(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DynamicShadowsString;                                     // 0x0670(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ViewDistanceString;                                       // 0x0680(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AntiAliasingString;                                       // 0x0690(0x0010) (Edit, ZeroConstructor)
	struct FString                                     TextureQualityString;                                     // 0x06A0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     VFXQualityString;                                         // 0x06B0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     MotionBlurString;                                         // 0x06C0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     LobbyCharacterQualityString;                              // 0x06D0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     MasterVolumeString;                                       // 0x06E0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SFXVolumeString;                                          // 0x06F0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     MusicVolumeString;                                        // 0x0700(0x0010) (Edit, ZeroConstructor)
	struct FString                                     InGameVoiceVolumeString;                                  // 0x0710(0x0010) (Edit, ZeroConstructor)
	struct FString                                     MouseSensitivityString;                                   // 0x0720(0x0010) (Edit, ZeroConstructor)
	struct FString                                     MouseInvertedString;                                      // 0x0730(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ControllerHorizontalSensitivityString;                    // 0x0740(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ControllerVerticalSensitivityString;                      // 0x0750(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ControllerHorizontalInvertedString;                       // 0x0760(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ControllerVerticalInvertedString;                         // 0x0770(0x0010) (Edit, ZeroConstructor)
	struct FString                                     VoiceActivationModeString;                                // 0x0780(0x0010) (Edit, ZeroConstructor)
	struct FString                                     VoiceActivationThresholdString;                           // 0x0790(0x0010) (Edit, ZeroConstructor)
	struct FString                                     AutoVoiceActivationString;                                // 0x07A0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ChatFilterEnabledString;                                  // 0x07B0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FOVString;                                                // 0x07C0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FrameRateString;                                          // 0x07D0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharacterControlsString;                                  // 0x07E0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             WindowedResolutionStrs;                                   // 0x07F0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullScreenResolutionStrs;                                 // 0x0800(0x0010) (ZeroConstructor)
	TArray<struct FString>                             WindowedFullScreenResolutionStrs;                         // 0x0810(0x0010) (ZeroConstructor)
	class UScrollBox*                                  ScrollBoxVideo;                                           // 0x0820(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  ScrollBoxControls;                                        // 0x0828(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_PenaltyWidget*                           penaltyWidget;                                            // 0x0830(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0838(0x0008) MISSED OFFSET
	class UInputBindingUserWidget*                     widgetToConfirm;                                          // 0x0840(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<struct FString, int>                          ActionToWidgetsMap;                                       // 0x0848(0x0050) (ZeroConstructor, Transient)
	TArray<struct FArrayOfInputWidgets>                InputBindingWidgets;                                      // 0x0898(0x0010) (ZeroConstructor, Transient)
	bool                                               bGamepadDropDownActive;                                   // 0x08A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08A9(0x0007) MISSED OFFSET
	class UUI_DropDownBase*                            GamepadDropDownButton;                                    // 0x08B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_GenericPopUp*                            RevertResolutionPopup;                                    // 0x08B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FText                                       AllCharactersString;                                      // 0x08C0(0x0018) (Edit)
	struct FText                                       ResolutionConfirmationTitle;                              // 0x08D8(0x0018) (Edit)
	struct FText                                       ResolutionConfirmationBody;                               // 0x08F0(0x0018) (Edit)
	struct FText                                       ResolutionConfirmationBodyEnd;                            // 0x0908(0x0018) (Edit)
	float                                              RevertResolutionTime;                                     // 0x0920(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                                      // 0x0924(0x0024) MISSED OFFSET
	bool                                               bAllCharactersSelected;                                   // 0x0948(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0949(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_OptionsScreen");
		return ptr;
	}


	void WidgetOverrided(const struct FString& WidgetName);
	void UpdateVSync(int val);
	void UpdateVoiceActivationThreshold(int val);
	void UpdateVoiceActivationMode(int val);
	void UpdateViewDistance(int val);
	void UpdateTextureQuality(int val);
	void UpdateShadows(int val);
	void UpdateSFXVolume(int val);
	void UpdateResolution(int val);
	void UpdatePostProcessFX(int val);
	void UpdateMusicVolume(int val);
	void UpdateMouseSensitivity(int val);
	void UpdateMouseInverted(int val);
	void UpdateMotionBlur(int val);
	void UpdateMasterVolume(int val);
	void UpdateLobbyCharacterQuality(int val);
	void UpdateInGameVoiceVolume(int val);
	void UpdateGraphicsQuality(int val);
	void UpdateGamma(int val);
	void UpdateFrameRate(int val);
	void UpdateFOV(int val);
	void UpdateEffectsQuality(int val);
	void UpdateDisplayMode(int val);
	void UpdateDepthOfField(int val);
	void UpdateControllerVerticalSensitivity(int val);
	void UpdateControllerVerticalInverted(int val);
	void UpdateControllerHorizontalSensitivity(int val);
	void UpdateControllerHorizontalInverted(int val);
	void UpdateContrast(int val);
	void UpdateChatFilter(int val);
	void UpdateCharacterControls(int val);
	void UpdateBloom(int val);
	void UpdateAutoVoiceActivation(int val);
	void UpdateAntiAliasing(int val);
	void UpdateAmbientOcclusion(int val);
	void RevertResolution();
	void ResetDeleteOverridesButton();
	void PassTopTabsSelectionScreen(class UUI_SelectableGroup* pGroup);
	void OptionsWidgetUpdated(const struct FString& WidgetName, int Value);
	void OnSave_Implementation();
	void OnLeaveScreen();
	void OnDefault_Implementation();
	void OnBumperRight_Implementation();
	void OnBumperLeft_Implementation();
	void OnBack_Implementation();
	void InternalSettingsUpdated(const struct FString& WidgetName, int Value, bool bIsCutomValue);
	bool HasUnsavedChanges();
	void DeleteCharacterOverrides();
	void ConfirmResolution();
	void BeginExitFlow();
};


// Class PWND.FrontEnd_SearchingForMatchScreen
// 0x0008 (0x0278 - 0x0270)
class UFrontEnd_SearchingForMatchScreen : public UFrontEnd_BaseScreen
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_SearchingForMatchScreen");
		return ptr;
	}


	void OnMinimizeRequested();
	void MinimizeScreen();
	int GetEstimatedQueueTime();
	bool DoesTicketStillExist();
	bool CancelSearchingForMatch();
};


// Class PWND.FrontEnd_SocialScreen
// 0x0008 (0x0278 - 0x0270)
class UFrontEnd_SocialScreen : public UFrontEnd_BaseScreen
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_SocialScreen");
		return ptr;
	}


	void RemovePendingPartyInvite(const struct FOnlineFriendSocialBPData& FriendData);
	void OnWarningOfAboutToInviteTooManyPlayers();
	void OnReceivedPartyList(TArray<struct FOnlineFriendSocialBPData> friendList);
	void OnReceivedFriendsList(TArray<struct FOnlineFriendSocialBPData> friendList);
	void OnPartyMembersUpdated(TArray<struct FOnlineFriendSocialBPData> members, TArray<struct FOnlineFriendSocialBPData> invitedMembers);
	void OnInviteSuccessfullySent(const struct FOnlineFriendSocialBPData& FriendData);
	void OnInviteFailedToSend(const struct FOnlineFriendSocialBPData& FriendData);
	void OnFriendRejectedInvite(const struct FOnlineFriendSocialBPData& FriendData, bool Error);
	void OnFriendAcceptedInvite(const struct FOnlineFriendSocialBPData& FriendData);
	void KickFriendFromParty(const struct FOnlineFriendSocialBPData& FriendData);
	void InviteFriendToParty(const struct FOnlineFriendSocialBPData& FriendData);
};


// Class PWND.FrontEnd_TrainingScreen
// 0x0008 (0x0278 - 0x0270)
class UFrontEnd_TrainingScreen : public UFrontEnd_BaseScreen
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_TrainingScreen");
		return ptr;
	}


	void OnTransitionToTraining();
};


// Class PWND.UI_MenuNavigable
// 0x0050 (0x0280 - 0x0230)
class UUI_MenuNavigable : public UUserWidget
{
public:
	bool                                               bCauseSelectionOnGamePadAttention;                        // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	class UUI_MenuNavigable*                           pUpObject;                                                // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_MenuNavigable*                           pDownObject;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_MenuNavigable*                           pLeftObject;                                              // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_MenuNavigable*                           pRightObject;                                             // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_MenuNavigable*                           pLeftBumperObject;                                        // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_MenuNavigable*                           pRightBumperObject;                                       // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0268(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_MenuNavigable");
		return ptr;
	}


	void RegisterWidgetAnimation(class UWidgetAnimation* pWidgetAnimation);
	void OnRemoveSelection();
	void OnRemoveAttention(bool bWasMouse);
	void OnReceiveSelection();
	void OnReceiveAttention(bool bWasMouse);
	void OnClickedByMouse();
	void CreateUpConnection(class UUserWidget* pNavUp);
	void CreateTwoWayUpConnection(class UUserWidget* pNavUp);
	void CreateTwoWayRightConnection(class UUserWidget* pNavRight);
	void CreateTwoWayRightBumperConnection(class UUserWidget* pNavBumperRight);
	void CreateTwoWayLeftConnection(class UUserWidget* pNavLeft);
	void CreateTwoWayLeftBumperConnection(class UUserWidget* pNavBumperLeft);
	void CreateTwoWayDownConnection(class UUserWidget* pNavDown);
	void CreateRightConnection(class UUserWidget* pNavRight);
	void CreateLeftConnection(class UUserWidget* pNavLeft);
	void CreateDownConnection(class UUserWidget* pNavDown);
};


// Class PWND.FrontEnd_UIButton
// 0x0070 (0x02F0 - 0x0280)
class UFrontEnd_UIButton : public UUI_MenuNavigable
{
public:
	int                                                FontSize;                                                 // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	struct FText                                       MainText;                                                 // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTextBlock*                                  pText;                                                    // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pButton;                                                  // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pAnimUnselected;                                          // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pAnimUnselectedToHover;                                   // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pAnimHover;                                               // 0x02D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pAnimHoverToUnselected;                                   // 0x02D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pCurrentlyPlayingAnimation;                               // 0x02E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_UIButton");
		return ptr;
	}


	void RegisterUnSelectedAnimation(class UWidgetAnimation* pWidgetAnimation);
	void RegisterHoveredOverAnimation(class UWidgetAnimation* pWidgetAnimation);
	void RegisterAnimateToUnSelectedAnimation(class UWidgetAnimation* pWidgetAnimation);
	void RegisterAnimateToHoverAnimation(class UWidgetAnimation* pWidgetAnimation);
	void OnMouseUnHovered();
	void OnHoveredByMouse();
	void OnClickedButton();
};


// Class PWND.FrontEnd_UIButtonLoadoutItem
// 0x0038 (0x02B8 - 0x0280)
class UFrontEnd_UIButtonLoadoutItem : public UUI_MenuNavigable
{
public:
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UImage*                                      pIcon;                                                    // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pTitleText;                                               // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBodyText;                                                // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pDefaultAnim;                                             // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pHoverOverAnim;                                           // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEnd_UIButtonLoadoutItem");
		return ptr;
	}


	void OnMouseUnHovered();
	void OnHoveredByMouse();
	void OnClickedButton();
};


// Class PWND.FrontEndGameMode
// 0x0000 (0x0458 - 0x0458)
class AFrontEndGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEndGameMode");
		return ptr;
	}

};


// Class PWND.FrontEndPawn
// 0x0000 (0x03E8 - 0x03E8)
class AFrontEndPawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEndPawn");
		return ptr;
	}

};


// Class PWND.PwndBasePlayerController
// 0x0120 (0x0800 - 0x06E0)
class APwndBasePlayerController : public APlayerController
{
public:
	class USoundCue*                                   MenuMusicLoop;                                            // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   MenuMusicEnd;                                             // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MenuMusicEndVolumeTransitionSpeed;                        // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	class UClass*                                      PwndWidgetInterface;                                      // 0x06F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pPwndWidgetInterfaceManager;                              // 0x0700(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int8_t                                             InputIsResticted;                                         // 0x0708(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	float                                              MenuMusicEndVolume;                                       // 0x070C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MenuMusicEndTimer;                                        // 0x0710(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	class UAudioComponent*                             MenuMusicLoopComp;                                        // 0x0718(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MenuMusicEndComp;                                         // 0x0720(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bLastInputWasGamepad;                                     // 0x0728(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0729(0x0003) MISSED OFFSET
	int                                                GamePadInputPressed;                                      // 0x072C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGamePadInput;                                            // 0x0730(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	int                                                MouseInputPressed;                                        // 0x0734(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMouseInput;                                              // 0x0738(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0739(0x0003) MISSED OFFSET
	int                                                KeyboardInputPressed;                                     // 0x073C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bKeyboardInput;                                           // 0x0740(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	float                                              GamePadTime;                                              // 0x0744(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MouseTime;                                                // 0x0748(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              KeyboardTime;                                             // 0x074C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastSentInputTelemetryTimeStamp;                          // 0x0750(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastCheckInputTelemetryTimeStamp;                         // 0x0754(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAssholeDetected;                                         // 0x0758(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	class UClass*                                      SmartMonkeyBrainClass;                                    // 0x0760(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DumbMonkeyBrainClass;                                     // 0x0768(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LastCharacterMonkeyBrainClass;                            // 0x0770(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPwndAIMonkeyBrain*                          MonkeyBrain;                                              // 0x0778(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMonkeyAllowedToSmartQeueue;                              // 0x0780(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0781(0x0003) MISSED OFFSET
	float                                              MonkeyDetectedQueueHelpNeededTime;                        // 0x0784(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MonkeyResetTime;                                          // 0x0788(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMonkeyStartedSmartQueue;                                 // 0x078C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x078D(0x0003) MISSED OFFSET
	float                                              NextSendFramerateTelemetryTimeStamp;                      // 0x0790(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPwndStatAccumulator                        FrameRateAccumulator;                                     // 0x0794(0x0014) (Transient)
	unsigned char                                      UnknownData10[0x50];                                      // 0x07A8(0x0050) UNKNOWN PROPERTY: SetProperty PWND.PwndBasePlayerController.ProhibitedKeys
	unsigned char                                      UnknownData11[0x8];                                       // 0x07F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndBasePlayerController");
		return ptr;
	}


	bool ShouldDrawMonkeyModeHUD();
	void OnMonkeyReadyToQeueue();
	void OnArrivedToPostMatchScreen();
	void OnArrivedToOptionsScreen();
	void OnArrivedToMatchTypeScreen();
	void OnArrivedToMainMenu();
	void OnArrivedToLootScreen();
	void OnArrivedToLoginScreen();
	void OnArrivedToLobby();
	void OnArrivedToLoadoutScreen();
	void OnArrivedToCreateAccountScreen();
	void MonkeyPlayerTick(float DeltaTime);
	bool IsUsingGamePad();
	bool IsSmartMonkeyMode();
	bool IsMonkeyMode();
	bool IsMonkeyAllowedToQueue();
	void InputDeviceChanged(bool IsGamePadInput);
	class UUserWidget* GetWidgetInterface();
	class UUserWidget* GetOptionsMenuReference();
	class UPwndAIMonkeyBrain* GetMonkeyBrain();
	void ForceGarbageCollection(bool bFullPurge);
};


// Class PWND.FrontEndPlayerController
// 0x0010 (0x0810 - 0x0800)
class AFrontEndPlayerController : public APwndBasePlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0800(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEndPlayerController");
		return ptr;
	}


	void SetMissionProgressVisibility(bool VisibilityValue);
	void RejectFriendInvite(const struct FString& FriendDisplayName);
	void PressedUIUp();
	void PressedUIStart();
	void PressedUIRight();
	void PressedUILeft();
	void PressedUIDown();
	void PressedUIBumperRight();
	void PressedUIBumperLeft();
	void PressedUIBack();
	void PressedUIAccept();
	void PressedTopFaceButton();
	void PressedTeamLoadoutButton();
	void PressedSpecialEscape();
	void PressedSpecialBack();
	void PressedShowTeamsButton();
	void PressedLeftFaceButton();
	void PressedInfo();
	void ListFriends();
	void LeaveParty();
	void InviteFriend(const struct FString& FriendDisplayName);
	class UUserWidget* GetMatchTypeMenuReference();
	class UUserWidget* GetMainMenuReference();
	class UUserWidget* GetLootCrateMenuReference();
	class UUserWidget* GetCustomizationScreenReference();
	class UUserWidget* GetCharacterMenuReference();
	void GenerateTournamentCodes();
	void DisplayClientBackendLogging(bool enable);
	void DeleteParty();
	void CheckParties();
	void ChangeLocalization(const struct FString& Target);
	void AcceptFriendInvite(const struct FString& FriendDisplayName);
};


// Class PWND.FrontEndWidgetInterface
// 0x01A0 (0x0470 - 0x02D0)
class UFrontEndWidgetInterface : public UBaseWidgetInterface
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	class UDataTable*                                  pXpToLevelDataTable;                                      // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MainMenuScreen;                                           // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pMainMenuScreen;                                          // 0x02E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      CharactersScreen;                                         // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pCharactersScreen;                                        // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      MatchTypeScreen;                                          // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pMatchTypeScreen;                                         // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      LootCrateScreen;                                          // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pLootCrateScreen;                                         // 0x0318(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      LoginScreen;                                              // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pLoginScreen;                                             // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      CreateAccountScreen;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pCreateAccountScreen;                                     // 0x0338(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      LobbyScreen;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pLobbyScreen;                                             // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      PostMatchScreen;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pPostMatchScreen;                                         // 0x0358(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      CustomMatchScreen;                                        // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pCustomMatchScreen;                                       // 0x0368(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      EulaNdaScreen;                                            // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pEulaNdaScreen;                                           // 0x0378(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      CustomizationScreen;                                      // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pCustomizationScreen;                                     // 0x0388(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      SocialScreen;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pSocialScreen;                                            // 0x0398(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      PreLoginScreen;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pPreLoginScreen;                                          // 0x03A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      SearchingForMatchPopup;                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UUserWidget*                                 pSearchingForMatchPopup;                                  // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      PopUpErrorScreen;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class UCanvasPanel*                                pPreviousParentPanel;                                     // 0x03D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      penaltyWidget;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	struct FString                                     DevServerIP;                                              // 0x03E8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	class UUserWidget*                                 pPlayerNamePlateWidget;                                   // 0x0400(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x60];                                      // 0x0408(0x0060) MISSED OFFSET
	class UCanvasPanel*                                pPersistentCanvasPanel;                                   // 0x0468(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.FrontEndWidgetInterface");
		return ptr;
	}


	void UpdatePlayerNamePlateData(const struct FText& PlayerName, int numberOfCredits, int rankLevel, float experiencePercentage, class UTexture2D* pAvatarImage);
	void RespondToPartyInvite(const struct FString& friendName, const struct FGuid& PlayerId, bool bAccept);
	void RespondToCustomMatchInvite(const struct FString& friendName, const struct FGuid& PlayerId, bool bAccept);
	void RemovePlayerFromParty(const struct FOnlineFriendSocialBPData& FriendInQuestion);
	void ProvideNamePlateReference(class UUserWidget* pNamePlateWidget);
	void OnReturnedFromMatch();
	void OnReceiveNewPartyVersion(TArray<struct FOnlineFriendSocialBPData> CurrentParty);
	void OnReceivedPartyInvite(const struct FString& friendName, const struct FGuid& PlayerId);
	void OnReceivedNoticeOfNotInParty();
	void OnReceivedNoticeOfInParty();
	void OnReceivedCustomMatchInvite(const struct FString& friendName, const struct FGuid& PlayerId);
	void OnPartyDisbanded(bool intentionalReasons);
	void OnMatchFound();
	void OnLoggedInSuccessfully();
	void OnLeftSocialScreen();
	void OnLeaveMainMenuScreen();
	void OnKickedFromParty();
	void OnArrivedToTrainingScreen();
	void OnArrivedToSocialScreen();
	void OnArrivedToPreLoginScreen();
	void OnArrivedToPostMatchScreen();
	void OnArrivedToOptionsScreen();
	void OnArrivedToMatchTypeScreen();
	void OnArrivedToMainMenu();
	void OnArrivedToLootScreen();
	void OnArrivedToLoginScreen();
	void OnArrivedToLobby();
	void OnArrivedToLoadoutScreen();
	void OnArrivedToEulaNdaScreen();
	void OnArrivedToCustomMatchScreen();
	void OnArrivedToCustomizationScreen();
	void OnArrivedToCreateAccountScreen();
	void OnArrivedToChallengesScreen();
	bool IsTournamentMatch();
	bool IsPrivateMatch();
	bool IsLocalPlayerInAParty();
	bool IsLocalPlayerAPartyLeader();
	void GoToSocialScreen();
	bool GoToPreviousScreen();
	void GoToPreLoginScreen();
	void GoToPostMatchScreen();
	void GoToMatchTypeScreen();
	void GoToMainMenuScreen();
	void GoToLootCrateScreen();
	void GoToLoginScreen();
	void GoToLobbyScreen(bool bFromDebugLoadoutScreen);
	void GoToFoundLobby();
	void GoToEulaNdaScreen();
	void GoToCustomMatchScreen();
	void GoToCustomMatchLobbyScreen();
	void GoToCustomizationScreen();
	void GotoCreateAccountScreen();
	void GoToCharactersScreenFromLobby();
	void GoToCharactersScreen();
	void DisplayBackendRelatedError(const struct FText& Title, const struct FText& Body);
	void CloseAllInvitations(const struct FGuid& ignorePlayerID);
	void ChangeLeadership(const struct FOnlineFriendSocialBPData& NewLeader);
	void CancelSubmitToMatchmaking();
	bool AttemptToLeaveParty();
	bool AreTherePendingInvitesForCurrentParty();
	void AddPopUpToInternalQueue(class UUI_GenericPopUp* pPopUp, const struct FText& titleText, const struct FText& bodyText, const struct FText& buttonOkayText, const struct FText& buttonCancelText);
};


// Class PWND.InputBindingUserWidget
// 0x0030 (0x0260 - 0x0230)
class UInputBindingUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET
	class UBaseWidgetInterface*                        FrontEndWidget;                                           // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class APwndBasePlayerController*                   PC;                                                       // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      inputImage;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.InputBindingUserWidget");
		return ptr;
	}


	void WidgetUpdated(const struct FString& Action, const struct FString& NewKeyBind, bool bIsCutomValue);
	void SetupWidget(const struct FString& Action, int SlotNumber);
	void ReceivedClicked();
	void InputBindingNeedsConfirmation(const struct FString& Action);
	void InputBindingConfirmed(const struct FString& Action, const struct FString& NewKeyBind);
};


// Class PWND.Postmatch_Results_DamagePage
// 0x0010 (0x0280 - 0x0270)
class UPostmatch_Results_DamagePage : public UFrontEnd_BaseScreen
{
public:
	class UUI_VerticalBarGraph*                        pDamageDealtGraph;                                        // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pDamageTakenGraph;                                        // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.Postmatch_Results_DamagePage");
		return ptr;
	}

};


// Class PWND.PostMatch_Results_KillsPage
// 0x0020 (0x0290 - 0x0270)
class UPostMatch_Results_KillsPage : public UFrontEnd_BaseScreen
{
public:
	class UUI_VerticalBarGraph*                        pKillsBarGraph;                                           // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pDeathBarGraph;                                           // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pKDRBarGraph;                                             // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pAssistsBarGraph;                                         // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PostMatch_Results_KillsPage");
		return ptr;
	}

};


// Class PWND.PostMatch_Results_LevelPage
// 0x0010 (0x0280 - 0x0270)
class UPostMatch_Results_LevelPage : public UFrontEnd_BaseScreen
{
public:
	class UUI_VerticalBarGraph*                        pRatingGraph;                                             // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_LineGraph2D*                             pLevelOverTimeGraph;                                      // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PostMatch_Results_LevelPage");
		return ptr;
	}

};


// Class PWND.PostMatch_Results_ProgressPage
// 0x0038 (0x02A8 - 0x0270)
class UPostMatch_Results_ProgressPage : public UFrontEnd_BaseScreen
{
public:
	class UTextBlock*                                  pPlayerLevel;                                             // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pTargetPlayerLevel;                                       // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pTotalLevelExperience;                                    // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pCurrentLevelExperience;                                  // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pDeltaExperience;                                         // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UProgressBar*                                pPlayerExperienceBar;                                     // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_PostMatchCharacterProgress*              pCharacterProgress;                                       // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PostMatch_Results_ProgressPage");
		return ptr;
	}


	void OnMissionComplete(const struct FText& missionName, const struct FText& missionDesc, int XP, int coin);
	void OnMatchVictory(int XP);
	void OnMatchReward(ERewardId Type, int Score, int reward);
	void OnInitializeProgress(int CurrentLevel, int prestigeLevel, int borderLevel, int currentXP, float nextLevelXP);
	void OnExperienceUpdate(int newXP);
	void OnAccoladeDataReady(TArray<struct FPostMatchAccoladeData> accolades);
	float GetExperienceForLevel(int Level);
};


// Class PWND.PostMatch_Results_PwnsPage
// 0x0020 (0x0290 - 0x0270)
class UPostMatch_Results_PwnsPage : public UFrontEnd_BaseScreen
{
public:
	class UUI_VerticalBarGraph*                        pPwnScoreGraph;                                           // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pTimesPWNDScoreGraph;                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pHotPWNSGraph;                                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pPWNSuccessAverageGraph;                                  // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PostMatch_Results_PwnsPage");
		return ptr;
	}

};


// Class PWND.PostMatch_Results_SavesPage
// 0x0020 (0x0290 - 0x0270)
class UPostMatch_Results_SavesPage : public UFrontEnd_BaseScreen
{
public:
	class UUI_VerticalBarGraph*                        pSaveScoreGraph;                                          // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pDeniedScoreGraph;                                        // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pSaveAssistsGraph;                                        // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_VerticalBarGraph*                        pFailedSavesGraph;                                        // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PostMatch_Results_SavesPage");
		return ptr;
	}

};


// Class PWND.PostMatch_Results_SummaryPage
// 0x0068 (0x02D8 - 0x0270)
class UPostMatch_Results_SummaryPage : public UFrontEnd_BaseScreen
{
public:
	class UTextBlock*                                  pHighestRatingPlayerName;                                 // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pHighestRatingValue;                                      // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pHighestPWNScorePlayerName;                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pHighestPWNScoreValue;                                    // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pMostDamageDealtPlayerName;                               // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pMostDamageDealtValue;                                    // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pHighestKDRPlayerName;                                    // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pHighestKDRValue;                                         // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pHighestSaveScorePlayerName;                              // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pHighestSaveScoreValue;                                   // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLeastDamageTakenPlayerName;                              // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLeastDamageTakenValue;                                   // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUI_LineGraph2D*                             pScoreGraph;                                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PostMatch_Results_SummaryPage");
		return ptr;
	}


	void OnSetLeastDamageTakenData(int teamAffiliationIndex);
	void OnSetHighestSaveScoreData(int teamAffiliationIndex);
	void OnSetHighestRatingData(int teamAffiliationIndex);
	void OnSetHighestPWNScoreData(int teamAffiliationIndex);
	void OnSetHighestKDRData(int teamAffiliationIndex);
	void OnSetHighestDamageDealtData(int teamAffiliationIndex);
	void OnReceiveTeamScores(int team0, int team1);
	void OnReceiveMatchTime(const struct FText& minutesText, const struct FText& secondsText);
};


// Class PWND.PostMatch_ResultsScreen
// 0x0400 (0x0670 - 0x0270)
class UPostMatch_ResultsScreen : public UFrontEnd_BaseScreen
{
public:
	struct FSlateColor                                 GoodColor;                                                // 0x0270(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	struct FSlateColor                                 BadColor;                                                 // 0x0298(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	class UClass*                                      ProgressPage;                                             // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pProgressPage;                                            // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      SummaryPage;                                              // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pSummaryPage;                                             // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      KillsPage;                                                // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pKillsPage;                                               // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PwnsPage;                                                 // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pPwnsPage;                                                // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      LevelPage;                                                // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pLevelPage;                                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      SavesPage;                                                // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pSavesPage;                                               // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DamagePage;                                               // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pDamagePage;                                              // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class UUI_SelectableGroup*                         pTabSelectionGroup;                                       // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 pCurrentlySelectedPage;                                   // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostMatch_Results_ProgressPage*             m_pResultsProgressPage;                                   // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pDefeatVictoryTitle;                                      // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLeftScore;                                               // 0x0358(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pRightScore;                                              // 0x0360(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pGameLengthMins;                                          // 0x0368(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pGameLengthSeconds;                                       // 0x0370(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pProgressButton;                                          // 0x0378(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pSummaryButton;                                           // 0x0380(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pKillsButton;                                             // 0x0388(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pPwnsButton;                                              // 0x0390(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pLevelButton;                                             // 0x0398(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pSavesButton;                                             // 0x03A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pDamageButton;                                            // 0x03A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                pPanelParentForSubPages;                                  // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pGoToLobbyButton;                                         // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPwndPlayerMetaProgression*                  m_pMetaProgressionObject;                                 // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2A8];                                     // 0x03C8(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PostMatch_ResultsScreen");
		return ptr;
	}


	void ViewSummaryPage();
	void ViewSavesPage();
	void ViewPwnsPage();
	void ViewProgressPage();
	void ViewLevelPage();
	void ViewKillsPage();
	void ViewDamagePage();
	void OnPostMatchDataReady();
	void OnBumperRight_Implementation();
	void OnBumperLeft_Implementation();
	void OnBack_Implementation();
	void GoToMainMenu();
};


// Class PWND.PwndAbilityUpgradeTree
// 0x00A0 (0x00C8 - 0x0028)
class UPwndAbilityUpgradeTree : public UObject
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0028(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x003A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloadOnStartup;                                        // 0x003B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              AbilityWeapons;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ValidCharactersForPrimaryAbility;                         // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ValidCharactersForSecondaryAbility;                       // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGuid>                               ValidCharacterGUIDsForPrimaryAbility;                     // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<struct FGuid>                               ValidCharacterGUIDsForSecondaryAbility;                   // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	class UTexture2D*                                  TreeIcon;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0098(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x00B0(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAbilityUpgradeTree");
		return ptr;
	}

};


// Class PWND.PwndInventory
// 0x00A8 (0x0430 - 0x0388)
class APwndInventory : public AActor
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0388(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0399(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x039A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloadOnStartup;                                        // 0x039B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDropOnDeath;                                             // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDropOnRespawn;                                           // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	class UClass*                                      PickupFXClass;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DroppedPickupClass;                                       // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerFirstPerson;                                        // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOwnerMeshVisible;                                        // 0x03B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	class UTexture2D*                                  InventoryIcon;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x03C0(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x03D8(0x0018) (Edit, DisableEditOnInstance)
	float                                              GivenTimestamp;                                           // 0x03F0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class AController*                                 InstigatorController;                                     // 0x03F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      InstigatorActor;                                          // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class APwndWeapon*                                 InstigatorWeapon;                                         // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FGUTSAttributeModifierAccumulator           GUTSAccumulator;                                          // 0x0410(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndInventory");
		return ptr;
	}


	void SetInstigatorInfo(class AController* Controller, class AActor* Actor, class APwndWeapon* Weapon);
	void Retune();
	void RemoveFromOwner();
	void ReleaseCarry();
	void PressCarry();
	bool PostEventTrigger(const struct FPostedEventTrigger& Trig, bool bGoUpClassTree);
	void OtherInventoryUsed(class APwndInventory* Inv);
	void OnTuneShield(class APwndShield* Shield);
	void OnTuneProjectile(class APwndProjectile* Projectile);
	void OnTuneInventory(class APwndInventory* Inv);
	void OnTuneDOT(class UPwndDOTComponent* DOT);
	void OnTuneCharacter(class APwndCharacter* Char);
	void OnTuneAOE(class APwndAOE* AOE);
	void OnRetune();
	void OnResetTuning();
	void OnPostRetune();
	void OnPostEventTrigger(TEnumAsByte<EeEventTrigger> Trigger, float Count, TArray<class UObject*> Others);
	void OnOwnerUnPossessed(class AController* OldController);
	void OnOwnerPossessed(class AController* NewController);
	void OnOwnerFirstPersonChanged(bool bFirstPerson, bool bMeshVisible);
	void OnGiven(class APwndCharacter* OldOwner, class APwndCharacter* NewOwner);
	void OnDrawHUD(class APwndHUD* HUD, class UCanvas* Canvas, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, const struct FVector2D& CanvasOrigin, const struct FVector2D& CanvasSize);
	void GiveTo(class APwndCharacter* NewOwner);
	float GetServerTimeStamp();
	TArray<class UClass*> GetLoadoutViewAccessories();
	void DropFromOwner(const struct FVector& Loc, const struct FVector& TossVelocity);
	bool AllowDashing();
	bool AllowCarry();
	struct FRotator AdjustRotationInput(const struct FRotator& RotationInput, const struct FVector& StartTrace, const struct FRotator& ControlRot, float DeltaTime, float AimingDilation);
};


// Class PWND.PwndWeaponGUTS
// 0x02E0 (0x0710 - 0x0430)
class APwndWeaponGUTS : public APwndInventory
{
public:
	struct FPwndWeaponRepNonFiring                     RepNonFiring;                                             // 0x0430(0x0008) (Edit)
	struct FPwndWeaponRepOwnFiring                     RepOwnFiring;                                             // 0x0438(0x004C) (Edit, Net)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	struct FPwndWeaponRepNonInstantHit                 RepNonInstantHit;                                         // 0x0488(0x0030) (Edit)
	struct FPwndWeaponRepOwnInstantHit                 RepOwnInstantHit;                                         // 0x04B8(0x000C) (Edit, Net)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FPwndWeaponRepNonArc                        RepNonArc;                                                // 0x04C8(0x0030) (Edit)
	struct FPwndWeaponRepOwnArc                        RepOwnArc;                                                // 0x04F8(0x0084) (Edit, Net)
	unsigned char                                      UnknownData02[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	struct FPwndWeaponRepNonBeam                       RepNonBeam;                                               // 0x0580(0x0030) (Edit)
	struct FPwndWeaponRepOwnBeam                       RepOwnBeam;                                               // 0x05B0(0x000C) (Edit, Net)
	struct FPwndWeaponRepNonLockon                     RepNonLockon;                                             // 0x05BC(0x0010) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	struct FPwndWeaponRepOwnLockon                     RepOwnLockon;                                             // 0x05D0(0x0068) (Edit, Net)
	struct FPwndWeaponRepOwnProjectile                 RepOwnProjectile;                                         // 0x0638(0x0018) (Edit, Net)
	struct FPwndWeaponRepOwnSpread                     RepOwnSpread;                                             // 0x0650(0x0028) (Edit, Net)
	struct FPwndWeaponRepNonReload                     RepNonReload;                                             // 0x0678(0x0008) (Edit)
	struct FPwndWeaponRepOwnReload                     RepOwnReload;                                             // 0x0680(0x0038) (Edit, Net)
	struct FPwndWeaponRepAllReload                     RepAllReload;                                             // 0x06B8(0x0008) (Edit, Net)
	struct FPwndWeaponRepOwnCharge                     RepOwnCharge;                                             // 0x06C0(0x0028) (Edit, Net)
	struct FPwndWeaponRepOwnBurst                      RepOwnBurst;                                              // 0x06E8(0x0014) (Edit, Net)
	struct FPwndWeaponRepOwnMultiShot                  RepOwnMultiShot;                                          // 0x06FC(0x0010) (Edit, Net)
	unsigned char                                      UnknownData04[0x4];                                       // 0x070C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndWeaponGUTS");
		return ptr;
	}


	class APwndWeaponGUTS* ModifyRepOwnSpread(const struct FPwndWeaponRepOwnSpreadAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnReload(const struct FPwndWeaponRepOwnReloadAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnProjectile(const struct FPwndWeaponRepOwnProjectileAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnMultiShot(const struct FPwndWeaponRepOwnMultiShotAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnLockon(const struct FPwndWeaponRepOwnLockonAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnInstantHit(const struct FPwndWeaponRepOwnInstantHitAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnFiring(const struct FPwndWeaponRepOwnFiringAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnCharge(const struct FPwndWeaponRepOwnChargeAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnBurst(const struct FPwndWeaponRepOwnBurstAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnBeam(const struct FPwndWeaponRepOwnBeamAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepOwnArc(const struct FPwndWeaponRepOwnArcAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepNonReload(const struct FPwndWeaponRepNonReloadAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepNonLockon(const struct FPwndWeaponRepNonLockonAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepNonInstantHit(const struct FPwndWeaponRepNonInstantHitAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepNonFiring(const struct FPwndWeaponRepNonFiringAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepNonBeam(const struct FPwndWeaponRepNonBeamAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepNonArc(const struct FPwndWeaponRepNonArcAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndWeaponGUTS* ModifyRepAllReload(const struct FPwndWeaponRepAllReloadAttribute& Attr, float PreMul, float Add, float PostMul);
	struct FPwndWeaponRepOwnSpread K2ReadRepOwnerWeaponSpread();
	struct FPwndWeaponRepOwnReload K2ReadRepOwnerWeaponReload();
	struct FPwndWeaponRepOwnProjectile K2ReadRepOwnerWeaponProjectile();
	struct FPwndWeaponRepOwnMultiShot K2ReadRepOwnerWeaponMultiShot();
	struct FPwndWeaponRepOwnLockon K2ReadRepOwnerWeaponLockon();
	struct FPwndWeaponRepOwnInstantHit K2ReadRepOwnerWeaponInstantHit();
	struct FPwndWeaponRepOwnFiring K2ReadRepOwnerWeaponFiring();
	struct FPwndWeaponRepOwnCharge K2ReadRepOwnerWeaponCharge();
	struct FPwndWeaponRepOwnBurst K2ReadRepOwnerWeaponBurst();
	struct FPwndWeaponRepOwnBeam K2ReadRepOwnerWeaponBeam();
	struct FPwndWeaponRepOwnArc K2ReadRepOwnerWeaponArc();
	struct FPwndWeaponRepNonReload K2ReadRepNoneWeaponReload();
	struct FPwndWeaponRepNonLockon K2ReadRepNoneWeaponLockon();
	struct FPwndWeaponRepNonInstantHit K2ReadRepNoneWeaponInstantHit();
	struct FPwndWeaponRepNonFiring K2ReadRepNoneWeaponFiring();
	struct FPwndWeaponRepNonBeam K2ReadRepNoneWeaponBeam();
	struct FPwndWeaponRepNonArc K2ReadRepNoneWeaponArc();
	struct FPwndWeaponRepAllReload K2ReadRepAllWeaponReload();
};


// Class PWND.PwndWeapon
// 0x0250 (0x0960 - 0x0710)
class APwndWeapon : public APwndWeaponGUTS
{
public:
	class USkeletalMeshComponent*                      FP_Gun;                                                   // 0x0710(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FP_SkinAccessoryMeshesRoot;                               // 0x0718(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           FP_CapsuleComp;                                           // 0x0720(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TP_Gun;                                                   // 0x0728(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TP_SkinAccessoryMeshesRoot;                               // 0x0730(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FP_Muzzle;                                                // 0x0738(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TP_Muzzle;                                                // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ProjectileSpawn;                                          // 0x0748(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VisualizerRoot;                                           // 0x0750(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TEnumAsByte<EeAimType>                             AimType;                                                  // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	float                                              AimTraceRange;                                            // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimCloseRange;                                            // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeWeaponAttachPoint>                   EquippedAttachPoint;                                      // 0x0764(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeWeaponAttachPoint>                   UnEquippedAttachPoint;                                    // 0x0765(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0766(0x0002) MISSED OFFSET
	struct FPwndWeaponAttachPoint                      WeaponAttachPoint;                                        // 0x0768(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	class UMaterialInterface*                          DefaultCrosshairMat;                                      // 0x0778(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultLockonMat;                                         // 0x0780(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenRelativeSize;                                       // 0x0788(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScreenRelativeOffset;                                     // 0x0790(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideWeapon;                                          // 0x0798(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideWeaponDropOnReplace;                             // 0x0799(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x079A(0x0006) MISSED OFFSET
	class UClass*                                      OverrideWeaponPrimaryAbilityClass;                        // 0x07A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OverrideWeaponSecondaryAbilityClass;                      // 0x07A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHitResult>                          ArcVerificationHits;                                      // 0x07B0(0x0010) (ZeroConstructor, Transient)
	float                                              StartFireTimeStamp;                                       // 0x07C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StopFireTimeStamp;                                        // 0x07C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeaponTimer;                                              // 0x07C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                FireAmmunitionCountSinceStartFire;                        // 0x07CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeaponStartFiringTimeStamp;                               // 0x07D0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeaponFireTimeStamp;                                      // 0x07D4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeaponStopFiringTimeStamp;                                // 0x07D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                AmmoCount;                                                // 0x07DC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReloadDuration;                                           // 0x07E0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReloadTimer;                                              // 0x07E4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AutoReloadTimer;                                          // 0x07E8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WeaponDisabledTimer;                                      // 0x07EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      WeaponSkin;                                               // 0x07F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FPwndWeaponLockon>                   LockonTargets;                                            // 0x07F8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPwndWeaponReplicatedLockon>         RepLockonTargets;                                         // 0x0808(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	float                                              RefireTimer;                                              // 0x0818(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RefireInterval;                                           // 0x081C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BurstFireTimer;                                           // 0x0820(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                BurstCounter;                                             // 0x0824(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ShotCount;                                                // 0x0828(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ShotFired;                                                // 0x082C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumShotsFired;                                            // 0x0830(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumShotsFiredSinceStart;                                  // 0x0834(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChargeTimer;                                              // 0x0838(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChargeForceFireTimer;                                     // 0x083C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsFiring;                                                // 0x0840(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFiringRequested;                                         // 0x0841(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWeaponHidden;                                            // 0x0842(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0843(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CrosshairMatInst;                                         // 0x0848(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            LockonMatInsts;                                           // 0x0850(0x0010) (ZeroConstructor, Transient)
	TArray<class APwndProjectile*>                     LiveProjectiles;                                          // 0x0860(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FPwndWeaponArcFire>                  ActiveArcs;                                               // 0x0870(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FPwndWeaponRetractionNodeParams             RetractionNodeParams;                                     // 0x0880(0x0018) (Edit, BlueprintVisible)
	TArray<TAssetPtr<class UClass>>                    ValidCharacters;                                          // 0x0898(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DefaultWeaponSkin;                                        // 0x08A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGuid>                               ValidCharacterGUIDs;                                      // 0x08B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	class APwndAbilityWeapon*                          OverrideWeaponPrimaryAbility;                             // 0x08C0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class APwndAbilityWeapon*                          OverrideWeaponSecondaryAbility;                           // 0x08C8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          OverrideWeaponMaterialIfc;                                // 0x08D0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverrideWeaponMaterialFirstPerson;                       // 0x08D8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverrideWeaponMaterialThirdPerson;                       // 0x08D9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x08DA(0x0006) MISSED OFFSET
	TAssetPtr<class UClass>                            LoadoutVisualizerClass;                                   // 0x08E0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVector                                     VisualizerScale;                                          // 0x0900(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    VisualizerRotation;                                       // 0x090C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              VisualizerRotationRate;                                   // 0x0918(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	class UClass*                                      FXDatabase;                                               // 0x0920(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPwndDebugWeaponFire>                DebugWeaponFire;                                          // 0x0928(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndFX*>                             FirstPersonWeaponSkinAttachments;                         // 0x0938(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	TArray<class APwndFX*>                             ThirdPersonWeaponSkinAttachments;                         // 0x0948(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	float                                              LastDamageTimeStamp;                                      // 0x0958(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastKillTimeStamp;                                        // 0x095C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndWeapon");
		return ptr;
	}


	void WeaponDebugPrint(const struct FString& Str, const struct FLinearColor& Color);
	void UnEquip();
	void StopFire(float Timestamp, bool bFromServerCallback, bool bReplicate);
	bool StillFiring();
	void StartReload();
	void StartFire(float Timestamp, bool bFromServerCallback, bool bReplicate);
	bool ShouldRefire();
	void SetWeaponSkin(class UClass* WeaponSkinClass);
	void SetAttachPoint(TEnumAsByte<EeWeaponAttachPoint> Point);
	void SetAttachParent(class APwndWeapon* ParentWeapon);
	int SetAmmoCount(int amount);
	void ServerUnEquip();
	void ServerStopFire(float Timestamp);
	void ServerStartReload();
	void ServerStartFire(float Timestamp);
	void ServerSetAttachPoint(TEnumAsByte<EeWeaponAttachPoint> Point);
	void ServerSetAttachParent(class APwndWeapon* ParentWeapon);
	void ServerHide();
	void ServerHandleInstantHit(float Timestamp, const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot, float ChargePct, class UClass* OverrideDamageTypeClass);
	void ServerHandleArcHit(float Timestamp, const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot, float ChargePct, class UClass* OverrideDamageTypeClass);
	void ServerEquip();
	void ServerAdjustReloadTimerByPercent(float Pct);
	class APwndProjectile* ProjectileFire(float ChargePct);
	bool PostEventTrigger(const struct FPostedEventTrigger& Trig, bool bGoUpClassTree);
	void OverrideWeaponMaterials(class UMaterialInterface* MatIfc, bool bFirstPerson, bool bThirdPerson);
	bool OverrideWeaponDropOnReplace();
	void OverrideHealEvent(const struct FPwndHealEvent& inHealEvent, const struct FVector& inMomentumDir, const struct FHitResult& Hit, struct FPwndHealEvent* OutHealEvent, struct FVector* OutMomentumDir);
	void OverrideDamageEvent(const struct FPwndDamageEvent& inDamageEvent, const struct FVector& inMomentumDir, const struct FHitResult& Hit, struct FPwndDamageEvent* OutDamageEvent, struct FVector* OutMomentumDir);
	void OnWeaponStopReload(bool bAborted);
	void OnWeaponStopFiring();
	void OnWeaponStopCharging();
	void OnWeaponStartReload();
	void OnWeaponStartFiring();
	void OnWeaponStartCharging(bool bInitialCharge);
	void OnWeaponShotCountChanged(bool bCharging, int OldShotCount, int NewShotCount);
	void OnWeaponFire();
	void OnWeaponFailedFire();
	void OnWeaponDisable(bool bDisabled);
	void OnWeaponApplyAttachPoint(TEnumAsByte<EeWeaponAttachPoint> Point);
	void OnWeaponAmmoCountChanged(int OldAmmoCount, int NewAmmoCount);
	void OnRep_WeaponStopFiringTimeStamp();
	void OnRep_WeaponStartFiringTimeStamp();
	void OnRep_WeaponSkin(class UClass* OldWeaponSkin);
	void OnRep_WeaponFireTimeStamp();
	void OnRep_WeaponAttachPoint(const struct FPwndWeaponAttachPoint& OldAttachPoint);
	void OnRep_RepLockonTargets(TArray<struct FPwndWeaponReplicatedLockon> OldRepLockonTargets);
	void OnRep_OverrideWeaponMaterialIfc();
	void OnRep_AmmoCount(int OldAmmoCount);
	void OnProjectileSpawned(class APwndProjectile* Projectile);
	void OnProjectileDetonated(class APwndProjectile* Projectile, const struct FHitResult& Hit, bool bDestroy);
	void OnProjectileDestroyed(class APwndProjectile* Projectile);
	void OnPlayRocketJump(const struct FVector& Impulse, const struct FReplicatedRocketJump& ReplicatedRocketJump);
	void OnMulticastHandleInstantHit(const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot);
	void OnMulticastHandleArcHit(const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot);
	void OnHealInflicted(const struct FPwndReplicatedHealEvent& HealEvent);
	void OnExecutedRocketJump(const struct FVector& Impulse, TEnumAsByte<EeEventTrigger> RJType, bool bWasDoubleTap);
	void OnDamageInflicted(const struct FPwndReplicatedDamageEvent& DamageEvent);
	void OnClientHandleInstantHitResponse(bool bDidHit, const struct FHitResult& Hit);
	void OnClientHandleArcHitResponse(bool bDidHit, const struct FHitResult& Hit);
	void OnCharacterSkinAppliedHACK(class UPwndCharacterSkin* Skin);
	void MulticastHandleInstantHit(const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot);
	void MulticastHandleArcHit(const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot);
	bool IsWaitingForReleaseToFire();
	bool IsSpecialMovementTwoStage(bool bFirstStage);
	bool IsReloading();
	bool IsOverrideWeapon();
	bool IsFiring();
	bool IsCharging();
	void InstantFire(float ChargePct);
	void Hide();
	bool HasAnyAmmo();
	bool HasAmmo(int amount);
	void HandleInstantHit(const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot, float ChargePct);
	void HandleBeamHit(const struct FHitResult& Hit, float ChargePct);
	void HandleArcHit(const struct FHitResult& Hit, const struct FPwndWeaponArcFire& Arc, const struct FVector& Origin, const struct FRotator& Rot, float ChargePct);
	TEnumAsByte<EeWeaponFireType> GetWeaponFireType(float ChargePct, int Shot, int TotalShots);
	float GetWeaponFireTimeStamp();
	TEnumAsByte<EeSpreadType> GetSpreadType(int TotalShots);
	struct FVector GetSpecialMovementTarget(struct FVector* TargetVelocity);
	float GetReloadTimer();
	float GetReloadTime();
	float GetReloadPercent(bool bIncludeAutoReloadDelay);
	struct FVector GetProjectileSpawnLoc();
	class UClass* GetProjectileArchetype(float ChargePct);
	class APwndAbilityWeapon* GetOverrideWeaponSecondaryAbility();
	class APwndAbilityWeapon* GetOverrideWeaponPrimaryAbility();
	struct FVector GetMuzzleLoc(bool bFirstPerson);
	float GetMovementSpeedModifier();
	struct FRotator GetMaxAimSpeed();
	TArray<class AActor*> GetLockonActors();
	class UClass* GetInstantHitOverrideDamageTypeClass(const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot, float ChargePct);
	float GetFiringPercent();
	float GetFireModeSpread();
	float GetFireInterval();
	class UMaterialInstanceDynamic* GetCrosshairMatInst();
	int GetClipSize();
	float GetChargeTime();
	float GetChargePercent();
	int GetChargeCount();
	class APwndWeapon* GetAttachParent();
	int GetArrayIndex(TEnumAsByte<EeWeaponArrayIndexMode> Type, int ArrSize, float Input, float* OutSmoothLerp);
	class UClass* GetArcHitOverrideDamageTypeClass(const struct FHitResult& Hit, const struct FVector& Origin, const struct FRotator& Rot, float ChargePct);
	class APwndWeapon* GetAmmoWeapon();
	float GetAmmoPercent();
	int GetAmmoCountMax();
	int GetAmmoCount();
	int GetAmmoCost(float ChargePct);
	void ForceMinimumReloadTime(float Time);
	void ForceCurrentReloadTime(float Time);
	void Equip();
	void CustomFire(float ChargePct);
	bool ConsumeAmmo(int amount);
	struct FVector ComputeLockonTargetLoc(class AActor* Act, const struct FVector& StartTrace, const struct FVector& AimX, bool bUseClosest);
	float ComputeLockonStrength(class AActor* Act, bool bLockonToEnemies, bool bLockonToAllies, bool bLockonToCrawling, bool bLockonToCloak, bool bRequireLOS, bool bUseLockonMin);
	class AActor* ComputeBestLockonTarget(bool bLockonToEnemies, bool bLockonToAllies, bool bLockonToCrawling, bool bLockonToCloak, bool bRequireLOS, bool bUseLockonMin);
	void ComputeAimInfo(bool bForceTrace, bool bIgnoreSpread, struct FVector* StartTrace, struct FRotator* AimRot, struct FVector* SpawnLoc, struct FHitResult* Impact);
	void ClientStartReload(float Time);
	void ClientHandleInstantHitResponse(bool bDidHit, const struct FHitResult& Hit, const struct FString& Reason);
	void ClientHandleArcHitResponse(bool bDidHit, const struct FHitResult& Hit, const struct FString& Reason);
	void ClientEndReload(bool bAborted);
	void ClientClearDebugWeaponFire();
	void ClientAdjustReloadTimerByPercent(float Pct);
	void ClientAddLiveProjectile(class APwndProjectile* Projectile);
	void ClientAddDebugWeaponFire(const struct FVector& StartTrace, const struct FRotator& AimRot, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, float Spread, const struct FHitResult& HitResult, int Index, int Count);
	void BeamFire(float ChargePct);
	void ArcFire(float ChargePct);
	void ApplyWeaponSkin(class UPwndWeaponSkin* Skin);
	bool AllowRocketJump();
	bool AllowReloadTimerAdvance();
	bool AllowReloadStart();
	bool AllowFire();
	int AdjustAmmoCount(int amount);
	struct FRotator AddSpread(const struct FRotator& BaseAim);
	int AddAmmoCount(int amount);
};


// Class PWND.PwndAbilityWeapon
// 0x0008 (0x0968 - 0x0960)
class APwndAbilityWeapon : public APwndWeapon
{
public:
	bool                                               bPlayMainWeaponFire;                                      // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMainWeaponMuzzleLoc;                                  // 0x0961(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMainWeaponProjectileSpawnLoc;                         // 0x0962(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPhysicsProps;                                       // 0x0963(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainLiveProjectilesOnUpgrade;                        // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainAmmoCountOnUpgrade;                              // 0x0965(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainReloadTimerOnUpgrade;                            // 0x0966(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0967(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAbilityWeapon");
		return ptr;
	}


	void OnUpgraded();
	bool IsAbilityActive();
	void ClientUpgraded();
};


// Class PWND.PwndAIController
// 0x01A8 (0x0628 - 0x0480)
class APwndAIController : public AAIController
{
public:
	class AController*                                 OwnerController;                                          // 0x0480(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APwndAIController*>                   OwnedAIControllers;                                       // 0x0488(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FQFloatExp                                  AimSpeed;                                                 // 0x0498(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  ProjectilePredictionSpeedPct;                             // 0x04B0(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  ProjectilePredictionOffset;                               // 0x04C8(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  AimOffsetDeg;                                             // 0x04E0(0x0018) (Edit, BlueprintVisible)
	struct FQFloatExp                                  AimOffsetSpeed;                                           // 0x04F8(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      MonkeyBrainClass;                                         // 0x0510(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LastCharacterMonkeyBrainClass;                            // 0x0518(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPwndAIMonkeyBrain*                          MonkeyBrain;                                              // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AimOffsetRandom;                                          // 0x0528(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ProjectilePredictionRandom;                               // 0x052C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoDestroyAI;                                           // 0x0530(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMonkeyBrainEnabled;                                      // 0x0531(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EeBotDifficulty>                       Difficulty;                                               // 0x0532(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0533(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCarryStartedEvent;                                      // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCarryCancelledEvent;                                    // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPrePwnageStartedEvent;                                  // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPwnageStartedEvent;                                     // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPwnageScoredEvent;                                      // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPwnageCancelledEvent;                                   // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHumiliationStartedEvent;                                // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHumiliationCompletedEvent;                              // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHumiliationCancelledEvent;                              // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreReviveStartedEvent;                                  // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReviveStartedEvent;                                     // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReviveCompletedEvent;                                   // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReviveCancelledEvent;                                   // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnActionStateUpdatedEvent;                            // 0x0608(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnCompletedActionStateUpdatedEvent;                   // 0x0618(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIController");
		return ptr;
	}


	void StopSpecialMovement();
	void StopFire(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	bool StopCarry(float ThrowPower);
	void StopAllFire();
	bool StartSpecialMovement(const struct FVector& Dir);
	bool StartRevive(class APwndCharacter* RevivedPawn);
	bool StartPwnage(class APwndCharacter* PwndPawn);
	bool StartFire(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	bool StartCarry(class APwndCharacter* CarriedPawn);
	void SetTeam(class APwndTeamInfo* Team);
	void SetOwnerController(class AController* Ctrl);
	void SetMonkeyBrainEnabled(bool bEnabled);
	void SetInstigatorController(class AController* Ctrl);
	void SetDifficulty(TEnumAsByte<EeBotDifficulty> NewDifficulty);
	void SetAIName(const struct FString& AIName);
	void OnReviveStarted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void OnReviveCompleted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void OnReviveCancelled(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn, bool bDenied, class APwndCharacter* DenyerPawn);
	void OnPwnageStarted(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void OnPwnageScored(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, bool bInstant);
	void OnPwnageCancelled(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, bool bSaved, class APwndCharacter* SaverPawn);
	void OnPreReviveStarted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void OnPrePwnageStarted(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void OnPawnCompletedActionStateUpdated(class APwndCharacter* Char, TEnumAsByte<EePawnActionState> State, bool bSuccess, const struct FPwndCharacterActionCompletion& ActionCompleted);
	void OnPawnActionStateUpdated(class APwndCharacter* Char, TEnumAsByte<EePawnActionState> NewState, TEnumAsByte<EePawnActionState> OldState);
	void OnHumiliationStarted(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void OnHumiliationCompleted(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void OnHumiliationCancelled(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void OnCarryStarted(class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn);
	void OnCarryCancelled(class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn, bool bSaved, float ThrowPower, class APwndCharacter* SaverPawn);
	bool MonkeyBrainEnabled();
	bool IsWeaponReadyForFiring(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	bool IsUsingMonkeyBrain();
	class APwndWeapon* GetWeapon(TEnumAsByte<EePawnWeapon> WeaponType);
	float GetServerTimeStamp();
	int GetRocketJumpDistances(TArray<float>* OutDistances);
	class AController* GetOwnerController();
	class AController* GetInstigatorController();
	class APwndCharacter* GetChar();
	bool FireSingleShot(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	class APwndCharacter* FindBestReviveTarget(class APwndCharacter* Preferred, bool bInRange, bool bLOS);
	class APwndCharacter* FindBestPwnTarget(class APwndCharacter* Preferred, bool bRemote, bool bInRange, bool bLOS);
	class APwndCharacter* FindBestHumiliationTarget(class APwndCharacter* Preferred, bool bInRange, bool bLOS);
	class APwndCharacter* FindBestCarryTarget(class APwndCharacter* Preferred, bool bInRange, bool bLOS);
	class AActor* FindBestAttackTarget(class AActor* Preferred, bool bInRange, bool bLOS);
	bool ExecuteRocketJump(const struct FVector& Dir, bool bVertical);
	bool ComputeBestRocketJumpDir(const struct FVector& DesiredDir, struct FVector* OutDir);
	bool CanRocketJump();
	bool CanExecuteRocketJump(const struct FVector& Dir, float* UnitFireDist);
	void CancelActions(bool bCancelTargetActions);
	bool AllowFiring(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
};


// Class PWND.PwndAIControllerPlayer
// 0x0018 (0x0640 - 0x0628)
class APwndAIControllerPlayer : public APwndAIController
{
public:
	bool                                               bPrimaryStartDesired;                                     // 0x0628(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	TArray<struct FPersistentReloadTimer>              PersistentReloadTimers;                                   // 0x0630(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIControllerPlayer");
		return ptr;
	}


	void ForceRespawn(float Delay, float Timer, bool bStartupSpawn);
};


// Class PWND.PwndAIControllerReplacementPlayer
// 0x0000 (0x0640 - 0x0640)
class APwndAIControllerReplacementPlayer : public APwndAIControllerPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIControllerReplacementPlayer");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrain
// 0x00C0 (0x00E8 - 0x0028)
class UPwndAIMonkeyBrain : public UObject
{
public:
	TArray<struct FPwndAIMonkeyBrain_AimSettings>      AimSettings_PerDifficulty;                                // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FSpringFloat                                YawAimSpring;                                             // 0x0038(0x003C) (Transient)
	struct FSpringFloat                                PitchAimSpring;                                           // 0x0074(0x003C) (Transient)
	struct FVector                                     DebugAimPoint;                                            // 0x00B0(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     MovementAcceleration;                                     // 0x00BC(0x000C) (Transient, IsPlainOldData)
	TArray<struct FPwndAIMonkeyBrain_Action>           ActionQueue;                                              // 0x00C8(0x0010) (ZeroConstructor, Transient)
	class UPathFollowingComponent*                     PathFollowingComp;                                        // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<EeBotDifficulty>                       DesiredDifficulty;                                        // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeBotDifficulty>                       CurrentDifficulty;                                        // 0x00E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRequestingRepath;                                        // 0x00E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00E3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrain");
		return ptr;
	}


	void TickBrain(float DeltaSeconds);
	void StopSpecialMovement();
	void StopMovement();
	void StopFire(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	bool StopCarry(float ThrowPower);
	void StopAllFire();
	bool StartSpecialMovement(const struct FVector& Dir);
	bool StartRevive(class APwndCharacter* RevivedPawn);
	bool StartPwnage(class APwndCharacter* PwndPawn);
	bool StartFire(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	bool StartCarry(class APwndCharacter* CarriedPawn);
	bool SpecialMovementRequireHold();
	void SetPawn(class APawn* InPawn);
	void SetMovementAcceleration(const struct FVector& Input);
	void SetDifficulty(TEnumAsByte<EeBotDifficulty> NewDifficulty);
	void RequestRepath();
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath, bool bUseDirectOnFailure);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath, bool bUseDirectOnFailure);
	bool IsWeaponReadyForFiring(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	bool IsSpecialMovementTwoStage(bool bFirstStage);
	bool IsSpecialMovementReady(int* AvailableCount, int* MaxCount, float* AvailableCapacity, float* MaxCapacity);
	bool IsSpecialMovement();
	bool IsPlayer();
	bool IsMoving();
	bool IsAI();
	bool IsAbilityActive(bool bPrimary);
	void InitBrain(TEnumAsByte<EeBotDifficulty> NewDifficulty);
	class APwndWeapon* GetWeapon(TEnumAsByte<EePawnWeapon> WeaponType);
	struct FVector STATIC_GetWanderDestinationFromLocation(const struct FVector& Location, float TestDistance, class AActor* RefActor);
	struct FVector STATIC_GetWanderDestinationFromActor(class AActor* Act, float TestDistance);
	struct FVector GetWanderDestination(float TestDistance);
	bool GetViewPoint(struct FVector* Loc, struct FRotator* Rot);
	struct FVector GetSpecialMovementTarget(struct FVector* TargetVelocity);
	float GetServerTimeStamp();
	int GetRocketJumpDistances(TArray<float>* OutDistances);
	bool GetPathDistanceTo(const struct FVector& End, class UClass* FilterClass, float* Distance);
	bool GetPathDistance(const struct FVector& Start, const struct FVector& End, class UClass* FilterClass, float* Distance);
	TEnumAsByte<EeRJDir> GetFireRJDirEnum(const struct FVector& Dir, bool bTransform);
	struct FVector GetFireRJDir(TEnumAsByte<EeRJDir> Dir, bool bTransform);
	TEnumAsByte<EeBotDifficulty> GetDifficulty();
	class AController* GetController();
	class APwndCharacter* GetChar();
	struct FRotator GetAimOffsetRot();
	float GetAimOffsetDeg();
	bool FireSingleShot(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	bool ExecuteRocketJump(bool bVertical, const struct FVector& Dir);
	struct FVector2D DrawHUD(class APwndHUD* HUD, class UCanvas* Canvas, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, const struct FVector2D& CanvasOrigin, const struct FVector2D& CanvasSize);
	void DestroyBrain();
	TEnumAsByte<EeRJDir> ComputeBestRocketJumpDirFromDistances(TArray<float> UnitDistances, const struct FVector& DesiredDir, struct FVector* OutDir);
	TEnumAsByte<EeRJDir> ComputeBestRocketJumpDir(const struct FVector& DesiredDir, struct FVector* OutDir);
	bool CanRocketJump();
	bool AllowFiring(TEnumAsByte<EePawnWeapon> WeaponType, unsigned char FireModeNum);
	void AimTowardsPoint(const struct FVector& Point);
	void AimTowardsDir(const struct FVector& Dir);
};


// Class PWND.PwndAIMonkeyBrainButtonMasher
// 0x0030 (0x0118 - 0x00E8)
class UPwndAIMonkeyBrainButtonMasher : public UPwndAIMonkeyBrain
{
public:
	TArray<struct FPwndAIMonkeyBrainButtonMasher_ActionDef> ActionDefs;                                               // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPwndAIMonkeyBrainButtonMasher_AxisDef> AxisDefs;                                                 // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPwndAIMonkeyBrainButtonMasher_Axis> Axes;                                                     // 0x0108(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainButtonMasher");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPathFollowingComponent
// 0x0020 (0x04B0 - 0x0490)
class UPwndAIMonkeyBrainPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0490(0x0004) MISSED OFFSET
	struct FVector                                     CachedRocketJumpStart;                                    // 0x0494(0x000C) (Transient, IsPlainOldData)
	float                                              NodeRocketJumpingTimer;                                   // 0x04A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NodeRocketJumpingDelayTimer;                              // 0x04A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNodeIsRocketJumping;                                     // 0x04A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNodeIsVerticalRocketJump;                                // 0x04A9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNodeRequiresRocketJump;                                  // 0x04AA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x04AB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPathFollowingComponent");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer
// 0x01A0 (0x0288 - 0x00E8)
class UPwndAIMonkeyBrainPlayer : public UPwndAIMonkeyBrain
{
public:
	struct FPwndAIMonkeyBrain_TargetList               TargetList;                                               // 0x00E8(0x0038) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FPwndAIMonkeyBrain_MovementTarget           MovementTarget;                                           // 0x0120(0x0108) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               bCanWander;                                               // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAttack;                                               // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRocketJump;                                           // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSpecialMovement;                                      // 0x022B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanPwn;                                                  // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRevive;                                               // 0x022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCarry;                                                // 0x022E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x022F(0x0001) MISSED OFFSET
	struct FPwndAIMonkeyBrain_Timer                    RocketJumpHelperTimer;                                    // 0x0230(0x0018) (Edit)
	bool                                               bWasFalling;                                              // 0x0248(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	float                                              StuckVelocity;                                            // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StuckTimer;                                               // 0x0250(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     StuckLocation;                                            // 0x0254(0x000C) (Transient, IsPlainOldData)
	TArray<class UClass*>                              StateClasses;                                             // 0x0260(0x0010) (Edit, ZeroConstructor)
	TArray<class UPwndAIMonkeyBrainPlayer_State*>      AllStates;                                                // 0x0270(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class UPwndAIMonkeyBrainPlayer_State*              State;                                                    // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer");
		return ptr;
	}


	void SetMovementTargetLocation(const struct FVector& InLocation);
	void SetMovementTargetActor(class AActor* inTarget);
	TEnumAsByte<EPathFollowingRequestResult> MoveToTarget(const struct FPwndAIMonkeyBrain_MovementTarget& Target, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void MonkeyBrainTargetPriorityDynamic__DelegateSignature(const struct FPwndAIMonkeyBrain_TargetEntry& Entry, const struct FPwndAIMonkeyBrain_TargetList& List, int Index, float* Priority);
	bool IsStuck(float MinStuckTime);
	int GetTargetsInStateByFlags(int TargetStateFlags, TEnumAsByte<EeTeamDesc> TargetTeam, float MaxTimeSinceLostLOS, TArray<struct FPwndAIMonkeyBrain_TargetEntry>* OutTargets);
	int GetTargetsInState(TEnumAsByte<EePawnActionState> TargetState, TEnumAsByte<EeTeamDesc> TargetTeam, float MaxTimeSinceLostLOS, TArray<struct FPwndAIMonkeyBrain_TargetEntry>* OutTargets);
	int GetTargetsByDelegate(const struct FScriptDelegate& PriorityDelegate, TArray<struct FPwndAIMonkeyBrain_TargetEntry>* OutTargets);
	int GetTargets(TEnumAsByte<EeTeamDesc> TargetTeam, float MaxTimeSinceLostLOS, TArray<struct FPwndAIMonkeyBrain_TargetEntry>* OutTargets);
	int GetNumTargetsInStateByFlags(int TargetStateFlags, TEnumAsByte<EeTeamDesc> TargetTeam, float MaxTimeSinceLostLOS);
	int GetNumTargetsInState(TEnumAsByte<EePawnActionState> TargetState, TEnumAsByte<EeTeamDesc> TargetTeam, float MaxTimeSinceLostLOS);
	int GetNumTargets(TEnumAsByte<EeTeamDesc> Team, float MaxTimeSinceLostLOS);
	bool CheckForShieldInLOS(const struct FVector& End, TEnumAsByte<EeTeamDesc> Team, struct FHitResult* OutHit);
	bool CheckForShield(const struct FVector& Start, const struct FVector& End, TEnumAsByte<EeTeamDesc> Team, struct FHitResult* OutHit);
	bool CheckForCeiling(float Height);
	bool AllowWander();
	bool AllowSpecialMovement();
	bool AllowRocketJump();
	bool AllowRevive();
	bool AllowPwn();
	bool AllowCarry();
	bool AllowAttack();
};


// Class PWND.PwndAIMonkeyBrainPlayer_State
// 0x0348 (0x0370 - 0x0028)
class UPwndAIMonkeyBrainPlayer_State : public UObject
{
public:
	bool                                               bUsesTarget;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesSecondaryTarget;                                     // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FPwndAIMonkeyBrain_Target                   Target;                                                   // 0x0030(0x0180) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FPwndAIMonkeyBrain_Target                   SecondaryTarget;                                          // 0x01B0(0x0180) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              PlayerTargetPriorityModifier;                             // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AITargetPriorityModifier;                                 // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ValidGames;                                               // 0x0338(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              InvalidGames;                                             // 0x0348(0x0010) (Edit, ZeroConstructor)
	float                                              Priority;                                                 // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              EnterStateTimeStamp;                                      // 0x035C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ExitStateTimeStamp;                                       // 0x0360(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0364(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_State");
		return ptr;
	}


	bool UpdateWeapons(float DeltaSeconds);
	bool UpdateMovement(float DeltaSeconds);
	bool UpdateAiming(float DeltaSeconds, float* inOutAimSpringK, float* inOutAimSpringDamp, float* inOutAimSpringMaxVel, bool* inOutbAllowOvershoot);
	float TimeSinceDeactivation();
	float TimeSinceActivation();
	void TickState(float DeltaSeconds);
	bool IsActiveState();
	void InitState(class UPwndAIMonkeyBrainPlayer* NewOwner);
	float GetTargetPriority(const struct FPwndAIMonkeyBrain_TargetEntry& inTarget, const struct FPwndAIMonkeyBrain_TargetList& inTargetList, int inTargetIndex);
	float GetServerTimeStamp();
	float GetSecondaryTargetPriority(const struct FPwndAIMonkeyBrain_TargetEntry& inTarget, const struct FPwndAIMonkeyBrain_TargetList& inTargetList, int inTargetIndex);
	float GetPriority();
	bool GetMonkeyBrainAndChar(class UPwndAIMonkeyBrainPlayer** MBrain, class APwndCharacter** Char);
	class UPwndAIMonkeyBrainPlayer* GetMonkeyBrain();
	TEnumAsByte<EeBotDifficulty> GetDifficulty();
	class AController* GetController();
	class APwndCharacter* GetChar();
	class UPwndAIMonkeyBrainPlayer_State* GetActiveState();
	void ExitState(class UPwndAIMonkeyBrainPlayer_State* NewState);
	void EnterState(class UPwndAIMonkeyBrainPlayer_State* PrevState);
	float DrawHUD(const struct FVector2D& Pos, class APwndHUD* HUD, class UCanvas* Canvas, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, const struct FVector2D& CanvasOrigin, const struct FVector2D& CanvasSize);
	void DifficultyUpdated(TEnumAsByte<EeBotDifficulty> NewDifficulty);
	void DestroyState();
	void ComputePriority(float DeltaSeconds);
	float ActiveTime();
};


// Class PWND.PwndAIMonkeyBrainPlayer_StateWander
// 0x00D0 (0x0440 - 0x0370)
class UPwndAIMonkeyBrainPlayer_StateWander : public UPwndAIMonkeyBrainPlayer_State
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET
	struct FPwndAIMonkeyBrain_Timer                    RocketJumpTimer;                                          // 0x0380(0x0018) (Edit)
	struct FPwndAIMonkeyBrain_Chance                   RocketJumpChance;                                         // 0x0398(0x0010) (Edit)
	struct FPwndAIMonkeyBrain_Chance                   RocketJumpVerticalChance;                                 // 0x03A8(0x0010) (Edit)
	struct FPwndAIMonkeyBrain_Chance                   CrawlToHealthChance;                                      // 0x03B8(0x0010) (Edit)
	struct FPwndAIMonkeyBrain_Timer                    SpecialMovementTimer;                                     // 0x03C8(0x0018) (Edit)
	struct FPwndAIMonkeyBrain_Timer                    SpecialMovementActiveTimer;                               // 0x03E0(0x0018) (Edit)
	struct FPwndAIMonkeyBrain_Chance                   SpecialMovementChance;                                    // 0x03F8(0x0010) (Edit)
	struct FPwndAIMonkeyBrain_Timer                    CrawlToHealthRecheckTimer;                                // 0x0408(0x0018) (Edit)
	struct FPwndAIMonkeyBrain_AimSettings              WanderAimSettings;                                        // 0x0420(0x0010) (Edit)
	float                                              WanderAimPitchMul;                                        // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WanderAimTraceDistance;                                   // 0x0434(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WanderAimReflectionExp;                                   // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialMovementActive;                                   // 0x043C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCrawlingToHealth;                                        // 0x043D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x043E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateWander");
		return ptr;
	}


	bool UpdateMovement_SpecialMovement(float DeltaSeconds);
	void UpdateMovement_RocketJumpAndSpecialMovement(float DeltaSeconds);
	bool UpdateMovement_RocketJump(float DeltaSeconds);
	struct FVector GetSpecialMovementDirection();
	bool AllowSpecialMovement();
	bool AllowRocketJump();
};


// Class PWND.PwndAIMonkeyBrainPlayer_StatePatrol
// 0x0010 (0x0450 - 0x0440)
class UPwndAIMonkeyBrainPlayer_StatePatrol : public UPwndAIMonkeyBrainPlayer_StateWander
{
public:
	float                                              MaxPatrolTargetTime;                                      // 0x0440(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class AActor*                                      PatrolHintActor;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StatePatrol");
		return ptr;
	}


	bool GetPatrolLocation(struct FVector* Loc);
};


// Class PWND.PwndAIMonkeyBrainPlayer_StateCarry
// 0x0020 (0x0470 - 0x0450)
class UPwndAIMonkeyBrainPlayer_StateCarry : public UPwndAIMonkeyBrainPlayer_StatePatrol
{
public:
	struct FPwndAIMonkeyBrain_Chance                   CarryChance;                                              // 0x0450(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              CarryTimer;                                               // 0x0460(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldCarry;                                             // 0x0464(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0465(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateCarry");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateCombat
// 0x0140 (0x0580 - 0x0440)
class UPwndAIMonkeyBrainPlayer_StateCombat : public UPwndAIMonkeyBrainPlayer_StateWander
{
public:
	struct FRFloatExp                                  TargetPredictionWaver;                                    // 0x0440(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FQFloatExp                                  TargetPredictionWaverSpeed;                               // 0x0450(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FPwndAIMonkeyBrain_Timer                    FiringDelayTimer;                                         // 0x0468(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRFloatExp                                  EngageDistance;                                           // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FQFloatExp                                  TargetMinLOSTime;                                         // 0x0490(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FQFloatExp                                  TargetMaxLOSLostTime;                                     // 0x04A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TargetAcquireFOVHalfArcDeg;                               // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetAcquireIgnoreFOVDist;                               // 0x04C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPwndAIMonkeyBrain_Chance                   PrimaryWeaponChance;                                      // 0x04C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FPwndAIMonkeyBrain_Chance                   SecondaryWeaponChance;                                    // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FPwndAIMonkeyBrain_Chance                   AllowAttackWhenDenyingChance;                             // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowAttackWhenDenying;                                  // 0x04F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              TargetPredictionWaverTimer;                               // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetPredictionWaverLerp;                                // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FPwndAIMonkeyBrain_TargetEntryLocation      AimingLocation;                                           // 0x0504(0x003C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FPwndAIMonkeyBrain_TargetEntryLocation      PredictedLocation;                                        // 0x0540(0x003C) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x057C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateCombat");
		return ptr;
	}


	bool ShouldFireWeapon(float DeltaSeconds, const struct FPwndAIMonkeyBrain_Target& CombatTarget);
	bool ShouldFireSecondaryAbility(float DeltaSeconds, const struct FPwndAIMonkeyBrain_Target& CombatTarget);
	bool ShouldFirePrimaryAbility(float DeltaSeconds, const struct FPwndAIMonkeyBrain_Target& CombatTarget);
	class APwndWeapon* GetWeaponForAiming();
	float GetFiringDelay();
	struct FPwndAIMonkeyBrain_Target GetCombatTarget();
};


// Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Buffy
// 0x0000 (0x0580 - 0x0580)
class UPwndAIMonkeyBrainPlayer_StateCombat_Buffy : public UPwndAIMonkeyBrainPlayer_StateCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Buffy");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Hank
// 0x0000 (0x0580 - 0x0580)
class UPwndAIMonkeyBrainPlayer_StateCombat_Hank : public UPwndAIMonkeyBrainPlayer_StateCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Hank");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Law
// 0x0000 (0x0580 - 0x0580)
class UPwndAIMonkeyBrainPlayer_StateCombat_Law : public UPwndAIMonkeyBrainPlayer_StateCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Law");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Ninja
// 0x0000 (0x0580 - 0x0580)
class UPwndAIMonkeyBrainPlayer_StateCombat_Ninja : public UPwndAIMonkeyBrainPlayer_StateCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Ninja");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Pwngineer
// 0x0000 (0x0580 - 0x0580)
class UPwndAIMonkeyBrainPlayer_StateCombat_Pwngineer : public UPwndAIMonkeyBrainPlayer_StateCombat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateCombat_Pwngineer");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateDefend
// 0x0010 (0x0380 - 0x0370)
class UPwndAIMonkeyBrainPlayer_StateDefend : public UPwndAIMonkeyBrainPlayer_State
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateDefend");
		return ptr;
	}


	float GetDefendChance();
};


// Class PWND.PwndAIMonkeyBrainPlayer_StateDefend_Law
// 0x0010 (0x0390 - 0x0380)
class UPwndAIMonkeyBrainPlayer_StateDefend_Law : public UPwndAIMonkeyBrainPlayer_StateDefend
{
public:
	float                                              DefendChanceWithShield;                                   // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0384(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateDefend_Law");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StatePwn
// 0x0030 (0x04A0 - 0x0470)
class UPwndAIMonkeyBrainPlayer_StatePwn : public UPwndAIMonkeyBrainPlayer_StateCarry
{
public:
	struct FPwndAIMonkeyBrain_Chance                   AllowAttackChance;                                        // 0x0470(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FPwndAIMonkeyBrain_Chance                   PwnZoneChance;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowAttack;                                             // 0x0490(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0491(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StatePwn");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StatePwn_Law
// 0x0000 (0x04A0 - 0x04A0)
class UPwndAIMonkeyBrainPlayer_StatePwn_Law : public UPwndAIMonkeyBrainPlayer_StatePwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StatePwn_Law");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StatePwn_Ninja
// 0x0000 (0x04A0 - 0x04A0)
class UPwndAIMonkeyBrainPlayer_StatePwn_Ninja : public UPwndAIMonkeyBrainPlayer_StatePwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StatePwn_Ninja");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StatePwn_PwnBot
// 0x0000 (0x04A0 - 0x04A0)
class UPwndAIMonkeyBrainPlayer_StatePwn_PwnBot : public UPwndAIMonkeyBrainPlayer_StatePwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StatePwn_PwnBot");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StatePwn_Pwngineer
// 0x0000 (0x04A0 - 0x04A0)
class UPwndAIMonkeyBrainPlayer_StatePwn_Pwngineer : public UPwndAIMonkeyBrainPlayer_StatePwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StatePwn_Pwngineer");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateRevive
// 0x0020 (0x0490 - 0x0470)
class UPwndAIMonkeyBrainPlayer_StateRevive : public UPwndAIMonkeyBrainPlayer_StateCarry
{
public:
	struct FPwndAIMonkeyBrain_Chance                   AllowAttackChance;                                        // 0x0470(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowAttack;                                             // 0x0480(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              ThrowTimer;                                               // 0x0484(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0488(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateRevive");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateRevive_Law
// 0x0000 (0x0490 - 0x0490)
class UPwndAIMonkeyBrainPlayer_StateRevive_Law : public UPwndAIMonkeyBrainPlayer_StateRevive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateRevive_Law");
		return ptr;
	}

};


// Class PWND.PwndAIMonkeyBrainPlayer_StateRevive_Ninja
// 0x0000 (0x0490 - 0x0490)
class UPwndAIMonkeyBrainPlayer_StateRevive_Ninja : public UPwndAIMonkeyBrainPlayer_StateRevive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAIMonkeyBrainPlayer_StateRevive_Ninja");
		return ptr;
	}

};


// Class PWND.PwndAnimAction
// 0x00A0 (0x00C8 - 0x0028)
class UPwndAnimAction : public UObject
{
public:
	bool                                               bActive;                                                  // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EePwndAnimCondition>                   AnimCondition;                                            // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              AnimConditionSpeedThresholdMin;                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimConditionSpeedThresholdMax;                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FPwndAnimActionAnimEntry                    ActionAnimEntry;                                          // 0x0038(0x0020) (Edit, BlueprintVisible)
	struct FPwndAnimActionAnimEntry                    ActionAnimEntryIdle;                                      // 0x0058(0x0020) (Edit, BlueprintVisible)
	struct FPwndAnimActionAnimEntry                    ActionAnimEntryStrafing;                                  // 0x0078(0x0020) (Edit, BlueprintVisible)
	struct FPwndAnimActionAnimEntry                    ActionAnimEntryFalling;                                   // 0x0098(0x0020) (Edit, BlueprintVisible)
	float                                              LastBlendOutTime;                                         // 0x00B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FName                                       LastSlotName;                                             // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAnimAction");
		return ptr;
	}

};


// Class PWND.PwndAnimAction_GrapplingHook3p
// 0x0030 (0x00F8 - 0x00C8)
class UPwndAnimAction_GrapplingHook3p : public UPwndAnimAction
{
public:
	float                                              FailSafeTimer;                                            // 0x00C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FailSafeTime;                                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bStartedYankAnim;                                         // 0x00D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TArray<struct FPwndAnimActionAnimEntry>            GrappleHookThrowAnims;                                    // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPwndAnimActionAnimEntry>            GrappleHookYankAnims;                                     // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAnimAction_GrapplingHook3p");
		return ptr;
	}

};


// Class PWND.PwndAnimInstanceCharacter
// 0x01D8 (0x0550 - 0x0378)
class UPwndAnimInstanceCharacter : public UAnimInstance
{
public:
	float                                              MovementTimeDilation;                                     // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Forward;                                                  // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Side;                                                     // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpForward;                                        // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpSide;                                           // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DownOnly;                                                 // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0394(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastSpeed;                                                // 0x0398(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpeedBlendFac;                                            // 0x039C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeHitReactDir>                         HitReactDirType;                                          // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EePawnActionState>                     ActionState;                                              // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFalling;                                                 // 0x03A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSurfing;                                                 // 0x03A3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDashing;                                                 // 0x03A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInUpState;                                               // 0x03A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCarrier;                                               // 0x03A6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWasCarrier;                                              // 0x03A7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialMovementActive;                                   // 0x03A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	int                                                BodyStackIndex;                                           // 0x03AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AimRot;                                                   // 0x03B0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    ActorRotation;                                            // 0x03BC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    LastActorRot;                                             // 0x03C8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LastFallingTimeStamp;                                     // 0x03D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastRocketJumpTimeStamp;                                  // 0x03D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastRocketJumpAirTimeStamp;                               // 0x03DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLastRocketJumpDownward;                                  // 0x03E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnterHitReactState;                                      // 0x03E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnterHitRctDeathState;                                   // 0x03E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnterLandState;                                          // 0x03E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnterRocketJumpState;                                    // 0x03E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnterRocketJumpAirState;                                 // 0x03E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnterRevivedState;                                       // 0x03E6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03E7(0x0001) MISSED OFFSET
	float                                              TurnPlayRate;                                             // 0x03E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurnYaw;                                                  // 0x03EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TurnIndex;                                                // 0x03F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastBeingRevivedTimeStamp;                                // 0x03F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpAimBlendAlpha;                                  // 0x03F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastFireTimeStamp;                                        // 0x03FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PwnerBlendInTime;                                         // 0x0400(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHandIKActive;                                            // 0x0404(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	struct FVector                                     LeftHandIKEffectorLocation;                               // 0x0408(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bAllowPhysics;                                            // 0x0414(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	float                                              DownOnlyLerpTime;                                         // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnYawMultiplier;                                        // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitReactStateTimeInterval;                                // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitRctDeathStateTimeInterval;                             // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandStateTimeInterval;                                    // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpStateTimeInterval;                              // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpAirStateTimeInterval;                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RevivedStateTimeInterval;                                 // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireMontageTimeInterval;                                  // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpAimBlendDelay;                                  // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RocketJumpAimBlendDuration;                               // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockForwardDirectionsTo45AngleIncrements;                // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockBackwardsDirectionsTo45AngleIncrements;              // 0x0445(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDashWhileCarrying;                                 // 0x0446(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0447(0x0001) MISSED OFFSET
	class UBlendSpace*                                 SpecialMoveBlendSpace;                                    // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SpecialMoveAnimSequence;                                  // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMoveBlendInTime;                                   // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMoveBlendOutTime;                                  // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpecialMoveLooping;                                       // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UAnimMontage*                                CarryPickUpMontage;                                       // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CarryIdleMontage;                                         // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CarryThrowMontage;                                        // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CarryPutDownMontage;                                      // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FireMontage;                                              // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AirAttackMontages;                                        // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        GroundAttackMontages;                                     // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        GroundIdleAttackMontages;                                 // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              GroundAttackMaxIdleBlendFac;                              // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundAttackMinStrafeBlendFac;                            // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRocketJumpFixedDirections;                            // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	TArray<struct FPwndRocketJumpCharAnimDirection>    RocketJumpFixedDirections;                                // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RocketJumpUpwardCosMin;                                   // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BasePwnerBlendInTime;                                     // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHandIK;                                            // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              PhysicsBlendWeightFac;                                    // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PrimaryAbilityAnimActionClass;                            // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SecondaryAbilityAnimActionClass;                          // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CustomAbilityAnimActionClass;                             // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbilityAnimFireInterval;                                  // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	class UPwndAnimAction*                             PrimaryAbilityAnimAction;                                 // 0x0510(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPwndAnimAction*                             SecondaryAbilityAnimAction;                               // 0x0518(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPwndAnimAction*                             CustomAbilityAnimAction;                                  // 0x0520(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ServerTimeStamp;                                          // 0x0528(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CarryPickUpTimer;                                         // 0x052C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPwndAttackMontageInfo                      CurAttackMontageInfo;                                     // 0x0530(0x0018) (Transient)
	float                                              LastAcceptedAttackMontageFireTimeStamp;                   // 0x0548(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x054C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAnimInstanceCharacter");
		return ptr;
	}


	bool IsPlayingAttackMontage();
};


// Class PWND.PwndAnimInstanceWeapon
// 0x00B0 (0x0428 - 0x0378)
class UPwndAnimInstanceWeapon : public UAnimInstance
{
public:
	float                                              CachedServerTimeStamp;                                    // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class APwndCharacter*                              PwndCharacterOwner;                                       // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MovementTimeDilation;                                     // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialMovementActive;                                   // 0x038C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	class UBlendSpace*                                 SpecialMoveBlendSpace;                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SpecialMoveAnimSequence;                                  // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMoveBlendInTime;                                   // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMoveBlendOutTime;                                  // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpecialMoveLooping;                                       // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              FOV_RangeMin;                                             // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV_RangeMax;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV_WeaponOffsetXMin;                                     // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV_WeaponOffsetXMax;                                     // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio_RangeMin;                                     // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio_RangeMax;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio_WeaponOffsetZMin;                             // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio_WeaponOffsetZMax;                             // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        AttackMontages;                                           // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                CurAttackMontage;                                         // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurAttackMontage_EndTime;                                 // 0x03E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastAcceptedAttackMontageFireTimeStamp;                   // 0x03EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRestartIdleAfterDefaultSlotAnim;                         // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	float                                              IdleRestartTime;                                          // 0x03F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurFOV;                                                   // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastFOV;                                                  // 0x03FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurAspectRatio;                                           // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastAspectRatio;                                          // 0x0404(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PlayerViewRotation;                                       // 0x0408(0x000C) (IsPlainOldData)
	struct FVector                                     MeshLocationAdjustment;                                   // 0x0414(0x000C) (IsPlainOldData)
	bool                                               bDoFirstPersonWeaponAdjustment;                           // 0x0420(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0421(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAnimInstanceWeapon");
		return ptr;
	}


	int GetNextAttackMontageIndex();
};


// Class PWND.PwndAnimNotify_Footstep
// 0x0018 (0x0050 - 0x0038)
class UPwndAnimNotify_Footstep : public UAnimNotify
{
public:
	class UClass*                                      FXDatabase;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Type;                                                     // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootBone;                                                 // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAnimNotify_Footstep");
		return ptr;
	}

};


// Class PWND.PwndAnnouncer
// 0x0080 (0x0408 - 0x0388)
class APwndAnnouncer : public AActor
{
public:
	class UAudioComponent*                             AudioComp;                                                // 0x0388(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<struct FName, struct FPwndAnnouncerVO>        LineMap;                                                  // 0x0390(0x0050) (ZeroConstructor, Transient)
	int                                                LastPriorityPlayed;                                       // 0x03E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastMatchTime;                                            // 0x03E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastOvertime;                                            // 0x03E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllyTeamInLead;                                          // 0x03E9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnemyTeamInLead;                                         // 0x03EA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsAllyPwnParty;                                          // 0x03EB(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsEnemyPwnParty;                                         // 0x03EC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllEnemiesDown;                                          // 0x03ED(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllAlliesDown;                                           // 0x03EE(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastManStanding;                                         // 0x03EF(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayedAllyAvailableWin;                                  // 0x03F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayedEnemyAvailableWin;                                 // 0x03F1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayedAllyOneScoreToWin;                                 // 0x03F2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayedEnemyOneScoreToWin;                                // 0x03F3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayedPwnShotClock;                                      // 0x03F4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	TArray<struct FPwndAnnouncerVO>                    Lines;                                                    // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAnnouncer");
		return ptr;
	}


	void PlayVO(const struct FName& ID, class UObject* Context1, class UObject* Context2);
	void MulticastPlayVO(const struct FName& ID, class UObject* Context1, class UObject* Context2);
	void MulticastPlayAllyEnemyVO(const struct FName& AllyID, const struct FName& EnemyID, class UObject* Context1, class UObject* Context2);
};


// Class PWND.PwndAOE
// 0x14D8 (0x1860 - 0x0388)
class APwndAOE : public AActor
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0388(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FPwndAOERepNonDamage                        RepNonDamage;                                             // 0x03A0(0x11E0) (Edit)
	struct FPwndAOERepAllDamage                        RepAllDamage;                                             // 0x1580(0x0024) (Edit, Net)
	struct FPwndAOERepAllBase                          RepAllBase;                                               // 0x15A4(0x0010) (Edit, Net)
	unsigned char                                      UnknownData01[0x4];                                       // 0x15B4(0x0004) MISSED OFFSET
	struct FPwndActorClassFilter                       RepAllClassFilter;                                        // 0x15B8(0x0020) (Edit, Net)
	bool                                               bInitialActive;                                           // 0x15D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // 0x15D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x15DA(0x0006) MISSED OFFSET
	struct FPwndPostProcessEffect                      EnemyPostProcessEffect_FP;                                // 0x15E0(0x0040) (Edit)
	struct FPwndPostProcessEffect                      EnemyPostProcessEffect_TP;                                // 0x1620(0x0040) (Edit)
	struct FPwndPostProcessEffect                      AllyPostProcessEffect_FP;                                 // 0x1660(0x0040) (Edit)
	struct FPwndPostProcessEffect                      AllyPostProcessEffect_TP;                                 // 0x16A0(0x0040) (Edit)
	struct FPwndPostProcessEffect                      OwnerPostProcessEffect_FP;                                // 0x16E0(0x0040) (Edit)
	struct FPwndPostProcessEffect                      OwnerPostProcessEffect_TP;                                // 0x1720(0x0040) (Edit)
	struct FPwndPostProcessEffect                      AttachedPostProcessEffect_FP;                             // 0x1760(0x0040) (Edit)
	struct FPwndPostProcessEffect                      AttachedPostProcessEffect_TP;                             // 0x17A0(0x0040) (Edit)
	float                                              EffectiveCollisionRadius;                                 // 0x17E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectiveCollisionHalfHeight;                             // 0x17E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 EffectiveCollisionAxis;                                   // 0x17E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeEffectiveCollisionAxis;                          // 0x17E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x17EA(0x0006) MISSED OFFSET
	class AController*                                 InstigatorController;                                     // 0x17F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APwndWeapon*                                 InstigatorWeapon;                                         // 0x17F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      WeaponArchetype;                                          // 0x1800(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FAoeAffectedActor>                   AffectedActors;                                           // 0x1808(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class AActor*>                              ActorsEverAffected;                                       // 0x1818(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              Duration;                                                 // 0x1828(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DurationTimer;                                            // 0x182C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumEntries;                                               // 0x1830(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bActive;                                                  // 0x1834(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1835(0x0003) MISSED OFFSET
	int                                                Health;                                                   // 0x1838(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x183C(0x0004) MISSED OFFSET
	struct FGUTSAttributeModifierAccumulator           GUTSAccumulator;                                          // 0x1840(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAOE");
		return ptr;
	}


	void SetActive(bool bIsActive);
	void Retune();
	void OnSetActive(bool bIsActive);
	void OnRetune();
	void OnResetTuning();
	void OnRep_Health(int OldHealth);
	void OnRep_bActive(bool OldbActive);
	void OnPostRetune();
	void OnActorRemoved(class AActor* Actor);
	void OnActorAdded(class AActor* Actor);
	class APwndAOE* ModifyRepNonDamage(const struct FPwndAOERepNonDamageAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndAOE* ModifyRepAllDamage(const struct FPwndAOERepAllDamageAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndAOE* ModifyRepAllClassFilter(const struct FPwndActorClassFilterAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndAOE* ModifyRepAllBase(const struct FPwndAOERepAllBaseAttribute& Attr, float PreMul, float Add, float PostMul);
	struct FPwndAOERepNonDamage K2ReadRepNoneAOEDamage();
	struct FPwndAOERepAllDamage K2ReadRepAllAOEDamage();
	struct FPwndActorClassFilter K2ReadRepAllAOEClassFilter();
	struct FPwndAOERepAllBase K2ReadRepAllAOEBase();
	bool IsActive();
	float GetServerTimeStamp();
};


// Class PWND.PwndAssetDatabase
// 0x0208 (0x0230 - 0x0028)
class UPwndAssetDatabase : public UObject
{
public:
	class UDataTable*                                  DataTable;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x200];                                     // 0x0030(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAssetDatabase");
		return ptr;
	}


	void UnbindAsyncLoadIconEventByGuid(const struct FGuid& Guid);
	void UnbindAsyncLoadIconEventByEvent(const struct FScriptDelegate& EventToUnbind);
	void UnbindAsyncLoadExtraInfoIconEventByGuid(const struct FGuid& Guid, const struct FName& Type);
	void UnbindAsyncLoadExtraInfoIconEventByEvent(const struct FScriptDelegate& EventToUnbind);
	void UnbindAsyncLoadClassEventByGuid(const struct FGuid& Guid);
	void UnbindAsyncLoadClassEventByEvent(const struct FScriptDelegate& EventToUnbind);
	class UTexture2D* SyncLoadIcon(const struct FGuid& Guid);
	class UTexture2D* SyncLoadExtraInfoIcon(const struct FGuid& Guid, const struct FName& Type);
	class UClass* SyncLoadClass(const struct FGuid& Guid);
	TArray<struct FGuid> SortGuidsByRarityAndText(bool bForceNonEnabledForPlayAtEnd, TArray<struct FGuid>* Guids);
	TArray<struct FGuid> SortGuidsByGroupAndText(bool bForceNonEnabledForPlayAtEnd, TArray<struct FGuid>* Guids);
	struct FGuid SelectRandomCharacter(TArray<struct FGuid> Allies, TArray<struct FGuid> Enemies, bool bEvenOutCharacterSelection, bool bMustBeEnabledForPlay);
	void PwndAssetDatabaseAsyncLoadedIconDelegate__DelegateSignature(const struct FGuid& Guid, class UTexture2D* LoadedIcon);
	void PwndAssetDatabaseAsyncLoadedExtraInfoIconDelegate__DelegateSignature(const struct FGuid& Guid, const struct FName& Type, class UTexture2D* LoadedIcon);
	void PwndAssetDatabaseAsyncLoadedClassDelegate__DelegateSignature(const struct FGuid& Guid, class UClass* LoadedClass);
	bool IsRefChildOfGuid(const struct FPwndAssetDatabaseReference& Child, const struct FGuid& Parent);
	bool IsRefChildOfClass(const struct FPwndAssetDatabaseReference& Child, class UClass* Parent);
	bool IsRefChildOf(const struct FPwndAssetDatabaseReference& Child, const struct FPwndAssetDatabaseReference& Parent);
	bool IsGuidChildOfRef(const struct FGuid& Child, const struct FPwndAssetDatabaseReference& Parent);
	bool IsGuidChildOfClass(const struct FGuid& Child, class UClass* Parent);
	bool IsGuidChildOf(const struct FGuid& Child, const struct FGuid& Parent);
	bool IsClassChildOfRef(class UClass* Child, const struct FPwndAssetDatabaseReference& Parent);
	bool IsClassChildOfGuid(class UClass* Child, const struct FGuid& Parent);
	bool IsAssetGuid(const struct FGuid& Guid, bool bUseLoadingFallback);
	struct FText GetText(const struct FGuid& Guid);
	TEnumAsByte<EeItemRarity> GetRarity(const struct FGuid& Guid);
	struct FString GetPath(const struct FGuid& Guid);
	struct FString GetName(const struct FGuid& Guid);
	struct FGuid GetLevelGuid(const struct FString& MapName);
	TArray<class UTexture2D*> GetIcons(TArray<struct FGuid> Guids);
	class UTexture2D* GetIcon(const struct FGuid& Guid);
	int GetGuidReferences(const struct FGuid& Guid, const struct FName& Type, bool bMustAllowSelection, bool bMustBeEnabledForPlay, TArray<struct FGuid>* GuidRefs);
	struct FGuid GetGuidByRef(const struct FPwndAssetDatabaseReference& Ref, bool bForceValidate);
	struct FGuid GetGuidByName(const struct FString& Name, class UClass* ClassFilter, bool bAllowSubstr, bool bCaseSensitive);
	struct FGuid GetGuidByAsset(TAssetPtr<class UClass> Asset);
	int GetGroup(const struct FGuid& Guid);
	struct FText GetExtraInfoText(const struct FGuid& Guid, const struct FName& Type);
	float GetExtraInfoNumber(const struct FGuid& Guid, const struct FName& Type);
	class UTexture2D* GetExtraInfoIcon(const struct FGuid& Guid, const struct FName& Type);
	struct FText GetExtraInfoDescription(const struct FGuid& Guid, const struct FName& Type);
	struct FText GetDescription(const struct FGuid& Guid);
	TArray<class UClass*> GetClasses(TArray<struct FGuid> Guids);
	class UClass* GetClass(const struct FGuid& Guid);
	TEnumAsByte<EeCharacterRole> GetCharacterRole(const struct FGuid& Guid);
	struct FGuid GetCharacterGuid(const struct FString& CharacterStr, bool bMustBeEnabledForPlay);
	struct FText GetAssetTypeText(const struct FGuid& Guid);
	class UClass* GetAssetType(const struct FGuid& Guid);
	TAssetPtr<class UClass> GetAsset(const struct FGuid& Guid);
	int GetAllPreloadOnStartupGuids(TArray<struct FGuid>* Guids);
	int GetAllLevelGuids(bool bMustBeEnabledForPlay, TArray<struct FGuid>* Guids);
	int GetAllGameModeGuids(bool bMustBeEnabledForPlay, TArray<struct FGuid>* Guids);
	int GetAllCharacterGuids(bool bMustBeEnabledForPlay, TArray<struct FGuid>* Guids);
	int GetAllAssetGuids(class UClass* ClassFilter, bool bMustAllowSelection, bool bMustBeEnabledForPlay, TArray<struct FGuid>* Guids);
	bool EnabledForPlay(const struct FGuid& Guid);
	void AsyncLoadIcon(const struct FGuid& Guid, const struct FScriptDelegate& OnLoaded);
	void AsyncLoadExtraInfoIcon(const struct FGuid& Guid, const struct FName& Type, const struct FScriptDelegate& OnLoaded);
	void AsyncLoadClass(const struct FGuid& Guid, const struct FScriptDelegate& OnLoaded);
	bool AllowSelection(const struct FGuid& Guid);
};


// Class PWND.PwndAutoGameActor
// 0x0020 (0x03A8 - 0x0388)
class APwndAutoGameActor : public AActor
{
public:
	TArray<class UClass*>                              ValidGames;                                               // 0x0388(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              InvalidGames;                                             // 0x0398(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndAutoGameActor");
		return ptr;
	}


	bool IsValidGame();
};


// Class PWND.PwndBaseProjectileMovementComponent
// 0x0040 (0x02C0 - 0x0280)
class UPwndBaseProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	bool                                               bReplicateProjectileMovement;                             // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              BounceRotationRate;                                       // 0x0284(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     BounceRotationAxis;                                       // 0x0288(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector_NetQuantize                         ServerLocation;                                           // 0x0294(0x000C) (Net, Transient)
	struct FVector_NetQuantize10                       ServerVelocity;                                           // 0x02A0(0x000C) (Net, Transient)
	float                                              ServerLocationTimeStamp;                                  // 0x02AC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastServerLocationTimeStamp;                              // 0x02B0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x02B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndBaseProjectileMovementComponent");
		return ptr;
	}


	float GetServerTimeStamp();
};


// Class PWND.PwndFieldTagComponent
// 0x0080 (0x08A0 - 0x0820)
class UPwndFieldTagComponent : public UMaterialBillboardComponent
{
public:
	class UMaterialInstanceDynamic*                    UIMatInst;                                                // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OffscreenMatInst;                                         // 0x0828(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bDisableWorldRenderingWhenOffscreen;                      // 0x0830(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToEdgesWhenOnscreen;                                // 0x0831(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRadialOffscreen;                                      // 0x0832(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0833(0x0001) MISSED OFFSET
	float                                              OffscreenRadiusFromCenter;                                // 0x0834(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UISize;                                                   // 0x0838(0x0008) (Edit, IsPlainOldData)
	float                                              VerticalResolutionForRelativeUIScale;                     // 0x0840(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWorldRenderTargets;                                   // 0x0844(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	struct FVector2D                                   WorldTextureSize;                                         // 0x0848(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseUIRenderTarget;                                       // 0x0850(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseWorldRendering;                                       // 0x0851(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0852(0x0002) MISSED OFFSET
	struct FVector2D                                   UITextureSize;                                            // 0x0854(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ValueToSizeCurveOnscreen;                                 // 0x0860(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ValueToSizeCurveOffscreen;                                // 0x0868(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MinOnScreenSize;                                          // 0x0870(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MaxOnScreenSize;                                          // 0x0878(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTextureBack;                                        // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTextureFront;                                       // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTextureUI;                                          // 0x0890(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0898(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndFieldTagComponent");
		return ptr;
	}


	bool ShouldBeVisibleThroughWalls();
	bool ShouldBeVisibleOffscreen();
	bool ShouldBeVisibleInWorld();
	bool ShouldBeVisible();
	bool IsOnscreen(class APwndHUD* HUD, class UCanvas* Canvas);
	bool HasLOS();
	float GetValue();
	class UMaterialInterface* GetUIMatInst();
	TEnumAsByte<EeTeamDesc> GetTeamDesc();
	float GetPct();
	float GetOnscreenRenderPriority();
	float GetOffscreenRenderPriority();
	class UMaterialInterface* GetOffscreenMatInst();
	bool GetNormalizedScreenPosAlwaysInCameraView(class APwndHUD* HUD, class UCanvas* Canvas, const struct FVector& Offset, bool bClampToScreen, struct FVector* ScreenLoc);
	bool GetNormalizedScreenPos(class APwndHUD* HUD, class UCanvas* Canvas, const struct FVector& Offset, bool bClampToScreen, struct FVector* ScreenLoc);
	TEnumAsByte<EeFieldTagType> GetFieldTagType();
	void STATIC_DrawFieldTags(TArray<class UPwndFieldTagComponent*> FieldTags, class APwndHUD* HUD, class UCanvas* Canvas, const struct FVector& ViewLocation, const struct FRotator& ViewRotation);
};


// Class PWND.PwndBasicFieldTagComponent
// 0x0180 (0x0A20 - 0x08A0)
class UPwndBasicFieldTagComponent : public UPwndFieldTagComponent
{
public:
	struct FPwndFieldTagComponentMaterialGroup         SelfMaterial;                                             // 0x08A0(0x0058) (Edit)
	struct FPwndFieldTagComponentMaterialGroup         AllyMaterial;                                             // 0x08F8(0x0058) (Edit)
	struct FPwndFieldTagComponentMaterialGroup         EnemyMaterial;                                            // 0x0950(0x0058) (Edit)
	struct FPwndFieldTagComponentMaterialGroup         NeutralMaterial;                                          // 0x09A8(0x0058) (Edit)
	class UMaterialInterface*                          OffscreenMat;                                             // 0x0A00(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverridePct;                                              // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideValue;                                            // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OverrideTeam;                                             // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0A11(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndBasicFieldTagComponent");
		return ptr;
	}

};


// Class PWND.PwndBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPwndBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_NotifyLoadingOutOfFrontend();
	bool STATIC_IsPartyNonLeader(class APlayerController* pPlayerController);
	bool STATIC_IsPartyLeader(class APlayerController* pPlayerController);
	bool STATIC_IsInPartyAlone(class APlayerController* pPlayerController);
	bool STATIC_IsInParty(class APlayerController* pPlayerController);
	class UUserWidget* STATIC_GetCurrentScreen(class APlayerController* pPlayerController);
	struct FPwndLoadout STATIC_GetCharacterLoadout(const struct FGuid& characterGuid);
	bool STATIC_DoesLocalUserHaveRole(TEnumAsByte<EBackendUserRole> Role);
	class UUI_GenericPopUp* STATIC_DisplayPopUpSetButtonNames(class APlayerController* pPlayerController, TEnumAsByte<EPopUpSpawnType> popUpType, const struct FText& Title, const struct FText& Body, const struct FText& buttonOkayText, const struct FText& buttonCancelText);
	class UUI_GenericPopUp* STATIC_DisplayPopUp(class APlayerController* pPlayerController, TEnumAsByte<EPopUpSpawnType> popUpType, const struct FText& Title, const struct FText& Body);
	class UUI_GenericPopUp* STATIC_DisplayInvitePopUp(class APlayerController* pPlayerController, TEnumAsByte<EPopUpSpawnType> popUpType, const struct FText& Title, const struct FText& Body, const struct FString& inviterName, const struct FGuid& PlayerId);
};


// Class PWND.PwndBodyStackActor
// 0x0038 (0x03C0 - 0x0388)
class APwndBodyStackActor : public AActor
{
public:
	TArray<class UStaticMeshComponent*>                Collisions;                                               // 0x0388(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	class UClass*                                      BodyStackFXClass;                                         // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PwnStackSize;                                             // 0x03A0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                PwnBodyStackId;                                           // 0x03A4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APwndCharacter*                              PwnBodyStackTopPawn;                                      // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APwndCharacter*                              PwnBodyStackBottomPawn;                                   // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APwndFX*                                     BodyStackFX;                                              // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndBodyStackActor");
		return ptr;
	}


	void OnUpdateStack(int NewPwnStackSize, class APwndCharacter* TopPawn, class APwndCharacter* BottomPawn);
	void OnRep_PwnStackSize();
	void OnRep_PwnBodyStackTopPawn();
	void OnRep_PwnBodyStackBottomPawn();
};


// Class PWND.PwndCameraComponent
// 0x0000 (0x0980 - 0x0980)
class UPwndCameraComponent : public UCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCameraComponent");
		return ptr;
	}


	void RemoveBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject);
};


// Class PWND.PwndPwnZone
// 0x00D0 (0x0458 - 0x0388)
class APwndPwnZone : public AActor
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0388(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FPwnZoneSettings                            PwnZoneSettings;                                          // 0x03A0(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	TArray<class UClass*>                              ValidGames;                                               // 0x0400(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              InvalidGames;                                             // 0x0410(0x0010) (Edit, ZeroConstructor)
	float                                              ActiveTime;                                               // 0x0420(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeLimit;                                                // 0x0424(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PwnLimit;                                                 // 0x0428(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ScoreLimit;                                               // 0x042C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0430(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNeedsToDie;                                              // 0x0431(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0432(0x0006) MISSED OFFSET
	TArray<class AActor*>                              AddedActors;                                              // 0x0438(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class UTextureRenderTarget2D*                      RenderTexturePwnMultiplier;                               // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CachedPwnMultiplier;                                      // 0x0450(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                RenderTexturePwnMultiplierSize;                           // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPwnZone");
		return ptr;
	}


	void SetPwnZoneSettings(const struct FPwnZoneSettings& Settings);
	void SetActive(bool bIsActive);
	void RemoveActor(class AActor* Actor);
	void OnTickState(float DeltaSeconds, int PwnsActive, TArray<int> TeamPwnsActive, TArray<class APwndCharacter*> PwnablePawns);
	void OnSetActive(bool bIsActive);
	void OnRep_bActive(bool OldbActive);
	void OnPwnageStarted(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void OnPwnageScored(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, int Multiplier, bool bInstant);
	void OnPwnageCancelled(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void OnCreatedRenderTarget(class UTextureRenderTarget2D* RenderTargetTexture);
	void OnActorRemoved(class AActor* Actor);
	void OnActorAdded(class AActor* Actor);
	void MulticastPwnageStarted(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void MulticastPwnageScored(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, int Multiplier, bool bInstant);
	void MulticastPwnageCancelled(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	bool IsValidGame();
	bool IsActive();
	unsigned char GetTeamNum();
	float GetServerTimeStamp();
	bool AffectsActor(class AActor* Actor);
	void AddActor(class AActor* Actor);
};


// Class PWND.PwndCaptureZone
// 0x00F0 (0x0548 - 0x0458)
class APwndCaptureZone : public APwndPwnZone
{
public:
	struct FCaptureZoneSettings                        CaptureSettings;                                          // 0x0458(0x0044) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      HeldTeamNum;                                              // 0x049C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCaptured;                                                // 0x049D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeCaptureState>                        CaptureState;                                             // 0x049E(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChangeoverCapture;                                       // 0x049F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              StateTimeStamp;                                           // 0x04A0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LockDownDuration;                                         // 0x04A4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CaptureTime;                                              // 0x04A8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CaptureRatingTimer;                                       // 0x04AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PointsAccumulated;                                        // 0x04B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	TArray<class APwndCharacter*>                      EligibleCharacters;                                       // 0x04B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FCaptureTeamInfo>                    CaptureTeamInfos;                                         // 0x04C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<int>                                        CapturingTeamIndices;                                     // 0x04D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<int>                                        ContestingTeamIndices;                                    // 0x04E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	unsigned char                                      CapturingTeamNum;                                         // 0x04F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      ContestingTeamNum;                                        // 0x04F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04FA(0x0002) MISSED OFFSET
	int                                                CapturingTeamStrength;                                    // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ContestingTeamStrength;                                   // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCaptureZoneSetCaptured;                                 // 0x0508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCaptureZoneHeldTeamChanged;                             // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCaptureZoneCaptureStateUpdated;                         // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CaptureZoneCustomTick;                                    // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCaptureZone");
		return ptr;
	}


	void SetCustomCaptureInfo(float Time, unsigned char Team, bool bIsCaptured);
	void SetCustomCapture(bool bIsCustom);
	void SetCaptureSettings(const struct FCaptureZoneSettings& Settings);
	void ResetCaptureInfo();
	void OnTeamChanged(unsigned char OldHeldTeamNum, unsigned char NewHeldTeamNum);
	void OnSetCaptured(bool bIsCaptured);
	void OnRepHeldTeamNum(unsigned char OldHeldTeamNum);
	void OnRepCaptureState(TEnumAsByte<EeCaptureState> OldCaptureState);
	void OnRepbCaptured(bool OldbCaptured);
	void OnCaptureStateUpdated(TEnumAsByte<EeCaptureState> OldCaptureState, TEnumAsByte<EeCaptureState> NewCaptureState);
	bool IsContested();
	bool IsCapturing();
	float GetCapturePct();
	void AccumulatePoints(float DeltaSeconds);
};


// Class PWND.PwndCharacterGUTS
// 0x02B0 (0x0A50 - 0x07A0)
class APwndCharacterGUTS : public ACharacter
{
public:
	class UPwndCharacterMovementComponent*             PwndCharacterMovement;                                    // 0x07A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ProjectileCollision;                                      // 0x07A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FPwndCharacterRepNonBase                    RepNonBase;                                               // 0x07B0(0x0010) (Edit, Net)
	struct FPwndCharacterRepAllBase                    RepAllBase;                                               // 0x07C0(0x0018) (Edit, Net)
	struct FPwndCharacterRepNonHeat                    RepNonHeat;                                               // 0x07D8(0x0004) (Edit)
	struct FPwndCharacterRepOwnHeat                    RepOwnHeat;                                               // 0x07DC(0x0020) (Edit, Net)
	struct FPwndCharacterRepNonRespawn                 RepNonRespawn;                                            // 0x07FC(0x004C) (Edit)
	struct FPwndCharacterRepNonPwn                     RepNonPwn;                                                // 0x0848(0x0048) (Edit)
	struct FPwndCharacterRepOwnPwn                     RepOwnPwn;                                                // 0x0890(0x0020) (Edit, Net)
	struct FPwndCharacterRepAllPwn                     RepAllPwn;                                                // 0x08B0(0x0028) (Edit, Net)
	struct FPwndCharacterRepOwnRemotePwn               RepOwnRemotePwn;                                          // 0x08D8(0x0014) (Edit, Net)
	struct FPwndCharacterRepNonRevive                  RepNonRevive;                                             // 0x08EC(0x0028) (Edit)
	struct FPwndCharacterRepOwnRevive                  RepOwnRevive;                                             // 0x0914(0x0024) (Edit, Net)
	struct FPwndCharacterRepAllRevive                  RepAllRevive;                                             // 0x0938(0x0014) (Edit, Net)
	struct FPwndCharacterRepNonCarry                   RepNonCarry;                                              // 0x094C(0x002C) (Edit)
	struct FPwndCharacterRepOwnCarry                   RepOwnCarry;                                              // 0x0978(0x0044) (Edit, Net)
	struct FPwndCharacterRepAllCarry                   RepAllCarry;                                              // 0x09BC(0x0030) (Edit, Net)
	struct FPwndCharacterRepOwnRank                    RepOwnRank;                                               // 0x09EC(0x001C) (Edit, Net)
	struct FPwndCharacterRepAllDash                    RepAllDash;                                               // 0x0A08(0x0004) (Edit, Net)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	class UPwndDynamicAttributeComponent*              HealthAttr;                                               // 0x0A10(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndDynamicAttributeComponent*              ArmorAttr;                                                // 0x0A18(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndDynamicAttributeComponent*              ShieldsAttr;                                              // 0x0A20(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndDynamicAttributeComponent*              DamageReductionAttr;                                      // 0x0A28(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FGUTSAttributeModifierAccumulator           GUTSAccumulator;                                          // 0x0A30(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCharacterGUTS");
		return ptr;
	}


	void Retune();
	void OnTuneShield(class APwndShield* Shield);
	void OnTuneProjectile(class APwndProjectile* Projectile);
	void OnTuneInventory(class APwndInventory* Inv);
	void OnTuneDOT(class UPwndDOTComponent* DOT);
	void OnTuneAOE(class APwndAOE* AOE);
	void OnRetune();
	void OnResetTuning();
	void OnPostRetune();
	class APwndCharacterGUTS* ModifyWallVerticalRJ(const struct FRocketJumpTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyWallHorizontalRJ(const struct FRocketJumpTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyShields(const struct FDynamicAttributeComponentTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnWallRun(const struct FPwndCharacterRepOwnWallRunAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnWallGrind(const struct FPwndCharacterRepOwnWallGrindAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnTankMode(const struct FPwndCharacterRepOwnTankModeAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnSkyDash(const struct FPwndCharacterRepOwnSkyDashAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnRocketJump(const struct FPwndCharacterRepOwnRocketJumpAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnRevive(const struct FPwndCharacterRepOwnReviveAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnRemotePwn(const struct FPwndCharacterRepOwnRemotePwnAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnRank(const struct FPwndCharacterRepOwnRankAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnPwn(const struct FPwndCharacterRepOwnPwnAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnMovementCustomAbility(const struct FPwndCharacterRepOwnCustomAbilityAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnHeat(const struct FPwndCharacterRepOwnHeatAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnGroundSlam(const struct FPwndCharacterRepOwnGroundSlamAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnGrappleHook(const struct FPwndCharacterRepOwnGrappleHookAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnDash(const struct FPwndCharacterRepOwnDashAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnCarry(const struct FPwndCharacterRepOwnCarryAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnBase(const struct FPwndCharacterRepOwnBaseAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepOwnAirHover(const struct FPwndCharacterRepOwnAirHoverAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepNonRevive(const struct FPwndCharacterRepNonReviveAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepNonRespawn(const struct FPwndCharacterRepNonRespawnAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepNonPwn(const struct FPwndCharacterRepNonPwnAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepNonHeat(const struct FPwndCharacterRepNonHeatAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepNonGroundSlam(const struct FPwndCharacterRepNonGroundSlamAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepNonCarry(const struct FPwndCharacterRepNonCarryAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepNonBase(const struct FPwndCharacterRepNonBaseAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllWallRun(const struct FPwndCharacterRepAllWallRunAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllTankMode(const struct FPwndCharacterMovementRepAllTankModeAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllRevive(const struct FPwndCharacterRepAllReviveAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllPwn(const struct FPwndCharacterRepAllPwnAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllMovementBase(const struct FPwndCharacterMovementRepAllBaseAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllGravity(const struct FPwndCharacterRepAllGravityAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllDash(const struct FPwndCharacterRepAllDashAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllCarry(const struct FPwndCharacterRepAllCarryAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyRepAllBase(const struct FPwndCharacterRepAllBaseAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyHealth(const struct FDynamicAttributeComponentTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyGroundVerticalRJ(const struct FRocketJumpTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyGroundHorizontalRJ(const struct FRocketJumpTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyDamageReduction(const struct FDynamicAttributeComponentTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyArmor(const struct FDynamicAttributeComponentTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyAirRJ(const struct FRocketJumpTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndCharacterGUTS* ModifyAirDownwardRJ(const struct FRocketJumpTuningAttribute& Attr, float PreMul, float Add, float PostMul);
	struct FPwndCharacterRepOwnRevive K2ReadRepOwnerPawnRevive();
	struct FPwndCharacterRepOwnRemotePwn K2ReadRepOwnerPawnRemotePwn();
	struct FPwndCharacterRepOwnRank K2ReadRepOwnerPawnRank();
	struct FPwndCharacterRepOwnPwn K2ReadRepOwnerPawnPwn();
	struct FPwndCharacterRepOwnHeat K2ReadRepOwnerPawnHeat();
	struct FPwndCharacterRepOwnCarry K2ReadRepOwnerPawnCarry();
	struct FPwndCharacterRepNonRevive K2ReadRepNonePawnRevive();
	struct FPwndCharacterRepNonRespawn K2ReadRepNonePawnRespawn();
	struct FPwndCharacterRepNonPwn K2ReadRepNonePawnPwn();
	struct FPwndCharacterRepNonHeat K2ReadRepNonePawnHeat();
	struct FPwndCharacterRepNonCarry K2ReadRepNonePawnCarry();
	struct FPwndCharacterRepNonBase K2ReadRepNonePawnBase();
	struct FPwndCharacterRepAllRevive K2ReadRepAllPawnRevive();
	struct FPwndCharacterRepAllPwn K2ReadRepAllPawnPwn();
	struct FPwndCharacterRepAllDash K2ReadRepAllPawnDash();
	struct FPwndCharacterRepAllCarry K2ReadRepAllPawnCarry();
	struct FPwndCharacterRepAllBase K2ReadRepAllPawnBase();
	float GetTotalShieldsPct();
	float GetTotalShieldsAndArmorPct();
	int GetTotalShieldsAndArmor();
	int GetTotalShields();
	float GetTotalHealthPct();
	float GetTotalHealthAndShieldsAndArmorPct();
	int GetTotalHealthAndShieldsAndArmor();
	float GetTotalHealthAndDamageReductionPct();
	int GetTotalHealthAndDamageReduction();
	int GetTotalHealth();
	float GetTotalDamageReductionPct();
	int GetTotalDamageReduction();
	float GetTotalArmorPct();
	int GetTotalArmor();
	int GetMaxShieldsAndArmor();
	int GetMaxShields();
	int GetMaxHealthAndShieldsAndArmor();
	int GetMaxHealthAndDamageReduction();
	int GetMaxHealth();
	int GetMaxDamageReduction();
	int GetMaxArmor();
};


// Class PWND.PwndCharacter
// 0x07D0 (0x1220 - 0x0A50)
class APwndCharacter : public APwndCharacterGUTS
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0A50(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0A60(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0A61(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x0A62(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloadOnStartup;                                        // 0x0A63(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh1P;                                                   // 0x0A68(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SkinAccessoryMeshesRoot;                                  // 0x0A70(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FP_Weapon;                                                // 0x0A78(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FP_WeaponHolster;                                         // 0x0A80(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TP_Weapon;                                                // 0x0A88(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TP_WeaponHolster;                                         // 0x0A90(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndCameraComponent*                        FirstPersonCameraComponent;                               // 0x0A98(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndCameraComponent*                        ThirdPersonCameraComponent;                               // 0x0AA0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndSpringArmComponent*                     ThirdPersonCameraArmComponent;                            // 0x0AA8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndPawnFieldTagComponent*                  FieldTagComponent;                                        // 0x0AB0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndVoiceBoxComponent*                      VoiceBoxComponent;                                        // 0x0AB8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndDropShadowComponent*                    DropShadowComponent;                                      // 0x0AC0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FRFloat                                     YawAimOffsetRange;                                        // 0x0AC8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	class UClass*                                      SmartMonkeyBrainClassOverride;                            // 0x0AD8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BaseTurnRate;                                             // 0x0AE0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BaseLookUpRate;                                           // 0x0AE4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       PlayerGuid;                                               // 0x0AE8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bRocketJumpButtonHeld;                                    // 0x0AF8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bRocketJumpPressed;                                       // 0x0AF9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0AFA(0x0002) MISSED OFFSET
	float                                              RocketJumpButtonHeldTime;                                 // 0x0AFC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bCtrlRocketJump;                                          // 0x0B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bCtrlRocketJumpVertical;                                  // 0x0B01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bCtrlDash;                                                // 0x0B02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bDashWasToggled;                                          // 0x0B03(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bSpecialMovementButtonHeld;                               // 0x0B04(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bSpecialMovementPressed;                                  // 0x0B05(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0B06(0x0002) MISSED OFFSET
	float                                              SpecialMovementButtonHeldTime;                            // 0x0B08(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bCtrlSpecialMovement;                                     // 0x0B0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bWeaponPressed;                                           // 0x0B0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bWeaponReloadPressed;                                     // 0x0B0E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bPrimaryAbilityPressed;                                   // 0x0B0F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bSecondaryAbilityPressed;                                 // 0x0B10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0B11(0x0007) MISSED OFFSET
	TArray<class APwndInventory*>                      InventoryList;                                            // 0x0B18(0x0010) (Net, ZeroConstructor, Transient, DuplicateTransient)
	float                                              PwnerVerticalOffset;                                      // 0x0B28(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBeInsidePwnBodyStack;                                 // 0x0B2C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0B2D(0x0003) MISSED OFFSET
	struct FRFloatExp                                  CameraDistanceForMeshFade;                                // 0x0B30(0x0010) (Edit, DisableEditOnInstance)
	bool                                               bAllowRegen;                                              // 0x0B40(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0B41(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            DefaultCharacterSkin;                                     // 0x0B48(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UClass>                            DefaultWeapon;                                            // 0x0B68(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UClass>                            DefaultPrimaryAbility;                                    // 0x0B88(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UClass>                            DefaultSecondaryAbility;                                  // 0x0BA8(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UClass>                            DefaultPWN;                                               // 0x0BC8(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UClass>                            DefaultPwnStamp;                                          // 0x0BE8(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UClass>                            DefaultRevive;                                            // 0x0C08(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UClass>                            DefaultCustomPwnLine;                                     // 0x0C28(0x0020) (Edit, DisableEditOnInstance)
	TEnumAsByte<EeCharacterRole>                       CharacterRole;                                            // 0x0C48(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0C49(0x0007) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x0C50(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0C68(0x0018) (Edit, DisableEditOnInstance)
	TArray<struct FPwndGUIDAssetLookupTable_ExtraInfo> ExtraDisplayInfo;                                         // 0x0C80(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              InitialInventoryList;                                     // 0x0C90(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      StuntManagerClass;                                        // 0x0CA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  CharacterIcon;                                            // 0x0CA8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  MovementAbilityIcon;                                      // 0x0CB0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ValidPwnMusicTracks;                                      // 0x0CB8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UClass>                            LoadoutVisualizerClass;                                   // 0x0CC8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              VisualizerRotation;                                       // 0x0CE8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisualizerRotationRate;                                   // 0x0CEC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGuid>                               ValidPwnMusicTrackGUIDs;                                  // 0x0CF0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	class UClass*                                      PwneeWidget;                                              // 0x0D00(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReviveeWidget;                                            // 0x0D08(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FXDatabase;                                               // 0x0D10(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPwndCollisionModifiers                     AllyCollisionModifiers;                                   // 0x0D18(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	struct FPwndCollisionModifiers                     EnemyCollisionModifiers;                                  // 0x0D20(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	class UClass*                                      CharacterSkin;                                            // 0x0D28(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FPwndMeshMaterialParamMultiMap              CharacterSkinParams;                                      // 0x0D30(0x0050) (Transient, DuplicateTransient)
	class APwndWeapon*                                 Weapon;                                                   // 0x0D80(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APwndAbilityWeapon*                          WeaponPrimaryAbility;                                     // 0x0D88(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APwndAbilityWeapon*                          WeaponSecondaryAbility;                                   // 0x0D90(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FPwndCharacterWeaponSet                     WeaponSet;                                                // 0x0D98(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, DuplicateTransient)
	struct FPwndCharacterWeaponSet                     OverrideWeaponSet;                                        // 0x0DB0(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, DuplicateTransient)
	class APwndInventoryPerk*                          Perk;                                                     // 0x0DC8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APwndFX*>                             CharacterSkinAttachments;                                 // 0x0DD0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bPwnPressed;                                              // 0x0DE0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bRevivePressed;                                           // 0x0DE1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bCarryPressed;                                            // 0x0DE2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bPressedWhileCarrying;                                    // 0x0DE3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CarryThrowPower;                                          // 0x0DE4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              Heat;                                                     // 0x0DE8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CoolingTimer;                                             // 0x0DEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CoolingRate;                                              // 0x0DF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              HeatAccumulatedTime;                                      // 0x0DF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bOverHeated;                                              // 0x0DF8(0x0001) (Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0DF9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              ExternalHeatCausers;                                      // 0x0E00(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ExternalHeatPerSec;                                       // 0x0E10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              ExternalHeatCostModifier;                                 // 0x0E14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FPwndCharacterAction                        LastUpdatedAction;                                        // 0x0E18(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient, DuplicateTransient)
	struct FPwndCharacterAction                        CurrentAction;                                            // 0x0E28(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	float                                              RepActionTimeStamp;                                       // 0x0E38(0x0004) (Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              ActionDuration;                                           // 0x0E3C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              OriginalActionTimeStamp;                                  // 0x0E40(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0E44(0x0004) MISSED OFFSET
	struct FPwndCharacterActionCompletion              CompletedAction;                                          // 0x0E48(0x0028) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	float                                              ActionTimeStamp;                                          // 0x0E70(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              LastCombatTimeStamp;                                      // 0x0E74(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FReplicatedRocketJump                       LastRocketJumpInfo;                                       // 0x0E78(0x0040) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	struct FPwndReplicatedDamageEvent                  LastReceiveDamageEvent;                                   // 0x0EB8(0x0088) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	struct FPwndReplicatedDamageEvent                  DeathDamageEvent;                                         // 0x0F40(0x0088) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	struct FPwndReplicatedHealEvent                    LastReceiveHealEvent;                                     // 0x0FC8(0x0088) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	TArray<struct FAttachedCameraFX>                   AttachedCameraFX;                                         // 0x1050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FAttachedBodyFX>                     AttachedBodyFX;                                           // 0x1060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TEnumAsByte<EeHeatStatus>                          HeatStatus;                                               // 0x1070(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1071(0x0003) MISSED OFFSET
	float                                              InvulnerabilityTimeStamp;                                 // 0x1074(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                FrontEndAnimMontage;                                      // 0x1078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SpawnAnimMontage;                                         // 0x1080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayingFrontEndAnimMontage;                              // 0x1088(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayingFrontEndAnimMontageForced;                        // 0x1089(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayedSpawnAnimMontage;                                  // 0x108A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x5];                                       // 0x108B(0x0005) MISSED OFFSET
	struct FName                                       LoadoutWeaponSocketName;                                  // 0x1090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 OverlapForceOverTime;                                     // 0x1098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsPropImpulseFactor;                                 // 0x10A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipWeaponWhileCrawling;                                // 0x10A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHolsterWeaponWhileCrawling;                              // 0x10A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCloaked;                                               // 0x10A6(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x10A7(0x0001) MISSED OFFSET
	int                                                LowPainVOThreshold;                                       // 0x10A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MedPainVOThreshold;                                       // 0x10AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FCachedInteractionAnimSyncInfo              InteractionAnimSyncInfo;                                  // 0x10B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              ActionTimeDilation;                                       // 0x10BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              MovementTimeDilation;                                     // 0x10C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              AimingTimeDilation;                                       // 0x10C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bPwnSurfing;                                              // 0x10C8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bGibbed;                                                  // 0x10C9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bNeutralPwn;                                              // 0x10CA(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bHybridNeutralPwn;                                        // 0x10CB(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bIsDashing;                                               // 0x10CC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x10CD(0x0003) MISSED OFFSET
	float                                              DashCancelTimer;                                          // 0x10D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              DashDisableTimer;                                         // 0x10D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Bounty;                                                   // 0x10D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                BaseBounty;                                               // 0x10DC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                PwnStackSize;                                             // 0x10E0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              NeutralStackRespawnDelay;                                 // 0x10E4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                PwnBodyStackId;                                           // 0x10E8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                PwnBodyStackIndex;                                        // 0x10EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APwndCharacter*                              PwnBodyStackTopPawn;                                      // 0x10F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APwndCharacter*                              PwnBodyStackBottomPawn;                                   // 0x10F8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APwndBodyStackActor*                         PwnBodyStackActor;                                        // 0x1100(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<float>                                      RocketJumpDelayedTimers;                                  // 0x1108(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      RocketJumpDisabledTimers;                                 // 0x1118(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      SpecialMovementDisabledTimers;                            // 0x1128(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      MovementDisabledTimers;                                   // 0x1138(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      WeaponDisabledTimers;                                     // 0x1148(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      AbilityDisabledTimers;                                    // 0x1158(0x0010) (ZeroConstructor, Transient)
	TArray<struct FAimOffsetTimeEntry>                 AimOffsetTimers;                                          // 0x1168(0x0010) (ZeroConstructor, Transient)
	struct FRotator                                    AimOffsetRot;                                             // 0x1178(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x1184(0x0004) MISSED OFFSET
	struct FTimeDilationEffects                        TimeDilationEffects;                                      // 0x1188(0x0020) (Transient)
	float                                              ServerCustomTimeDilation;                                 // 0x11A8(0x0004) (Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              ServerActionTimeDilation;                                 // 0x11AC(0x0004) (Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              ServerMovementTimeDilation;                               // 0x11B0(0x0004) (Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     LastMomentum;                                             // 0x11B4(0x000C) (Transient, IsPlainOldData)
	float                                              LastMomentumTimeStamp;                                    // 0x11C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x11C4(0x0004) MISSED OFFSET
	TArray<struct FPwnAffector>                        PwnAffectors;                                             // 0x11C8(0x0010) (ZeroConstructor, Transient)
	class AController*                                 LastFlyingDamagerCtrl;                                    // 0x11D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      WeaponFireEnabledBits;                                    // 0x11E0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      RemoteViewYawDelta;                                       // 0x11E1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x11E2(0x0006) MISSED OFFSET
	class UPwndCustomMusicTrack*                       CurrentPwnMusicTrack;                                     // 0x11E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLoadoutVisualizer2DRendering;                            // 0x11F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x11F1(0x0007) MISSED OFFSET
	TArray<struct FOverlappingPhysicsComp>             OverlappingPhysicsComps;                                  // 0x11F8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPwndPostProcessEffect>              PostProcessEffects;                                       // 0x1208(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData18[0x8];                                       // 0x1218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCharacter");
		return ptr;
	}


	void Suicide();
	void StopVO(const struct FName& VoiceOverID, bool bReplicateToAll);
	bool StopCarry(float ThrowPower);
	void StopAllFire();
	bool StartRevive(class APwndCharacter* RevivedPawn);
	bool StartPwnage(class APwndCharacter* PwndPawn);
	bool StartCarry(class APwndCharacter* CarriedPawn);
	bool SpecialMovementRequireHold();
	bool SetWeaponSkin(class UClass* WeaponSkinClass);
	class APwndAbilityWeapon* SetWeaponSecondaryAbility(class UClass* WeaponClass, bool bUpgrade);
	class APwndAbilityWeapon* SetWeaponPrimaryAbility(class UClass* WeaponClass, bool bUpgrade);
	void SetWeaponFireEnabled(bool bEnabled, TEnumAsByte<EePawnWeapon> WeaponType);
	class APwndWeapon* SetWeapon(class UClass* WeaponClass, class UClass* WeaponSkinClass);
	void SetWallRocketJumpingEnabled(bool bEnabled);
	void SetVerticalRocketJumpingEnabled(bool bEnabled);
	void SetSpecialMovementEnabled(bool bEnabled);
	void SetSkinVectorParam(class UObject* ParamOwner, int inIndex, const struct FName& inParam, const struct FVector& InValue);
	void SetSkinTextureParam(class UObject* ParamOwner, int inIndex, const struct FName& inParam, class UTexture* InValue);
	void SetSkinScalarParam(class UObject* ParamOwner, int inIndex, const struct FName& inParam, float InValue);
	void SetSkinMaterialParam(class UObject* ParamOwner, int inIndex, const struct FName& inParam, class UMaterialInterface* InValue);
	void SetSkinColorParam(class UObject* ParamOwner, int inIndex, const struct FName& inParam, const struct FLinearColor& InValue);
	void SetRocketJumpingEnabled(bool bEnabled);
	class APwndInventoryPerk* SetPerk(class UClass* PerkClass);
	void SetMultiMovementEnabled(bool bGroundMovementEnabled, bool bAirMovementEnabled, bool bRocketJumpingEnabled, bool bFloorRocketJumpingEnabled, bool bWallRocketJumpingEnabled, bool bHorizontalRocketJumpingEnabled, bool bVerticalRocketJumpingEnabled, bool bSpecialMovementEnabled, bool bMantleEnabled);
	void SetMantleEnabled(bool bEnabled);
	void SetInteractionAnimSyncInfo(TEnumAsByte<EInteractionSegmentType> inSegmentType, int inSequenceIndex, float inCurrentTime);
	void SetHorizontalRocketJumpingEnabled(bool bEnabled);
	void SetGroundMovementEnabled(bool bEnabled);
	void SetGibbed();
	void SetFloorRocketJumpingEnabled(bool bEnabled);
	void SetCollisionModifier_ReflectProjectiles(bool bAlly, bool bReflect);
	void SetCollisionModifier_IgnoreStuckProjectiles(bool bAlly, bool bIgnore);
	void SetCollisionModifier_IgnoreShields(bool bAlly, bool bIgnore);
	void SetCollisionModifier_IgnoreProjectiles(bool bAlly, bool bIgnore);
	void SetCollisionModifier_IgnoreCharacters(bool bAlly, bool bIgnore);
	void SetCollisionModifier_IgnoreAOE(bool bAlly, bool bIgnore);
	void SetCollisionModifier_DeflectProjectiles(bool bAlly, bool bDeflect, bool bDeflectInNormalDir);
	void SetCloaked(bool bCloaked);
	void SetCharacterSkinByIndex(int Index);
	void SetCharacterSkinByGuid(const struct FGuid& CharacterSkinGuid);
	void SetCharacterSkin(class UClass* CharacterSkinClass);
	void SetAllowRegen(bool IsAllowed);
	void SetAirMovementEnabled(bool bEnabled);
	void ServerSuicide();
	void ServerStopCarry(float ThrowPower);
	void ServerStartRevive(class APwndCharacter* RevivedPawn);
	void ServerStartPwnage(class APwndCharacter* PwndPawn);
	void ServerStartCarryButton();
	void ServerStartCarry(class APwndCharacter* CarriedPawn);
	void ServerReleaseCarryButton();
	void RemoveSkinParam(class UObject* ParamOwner, int inIndex, const struct FName& inParam);
	int RemoveInventoryItems(class UClass* InvClass, bool bExact, bool bDestroy, TArray<class APwndInventory*>* RemovedInventory);
	void RemoveHeatModifiers(class AActor* Causer, float inHeatPerSec, float inHeatCostModifier);
	void RemoveDotEffect(class UClass* DotEffect, class AController* EventInstigator, class AActor* DamageCauser, class APwndWeapon* DOTWeapon, class UClass* DOTWeaponClass);
	void RemoveCharacterSkinMesh(class UMeshComponent* Comp);
	void RemoveAllSkinParams(class UObject* ParamOwner);
	void ReleaseReloadWeapon();
	void ReleaseFireSecondaryAbility();
	void ReleaseFirePrimaryAbility();
	void ReleaseFire();
	void PressReloadWeapon();
	void PressFireSecondaryAbility();
	void PressFirePrimaryAbility();
	void PressFire();
	bool PostEventTrigger(const struct FPostedEventTrigger& Trig, bool bGoUpClassTree);
	void PlayVO(const struct FName& VoiceOverID, bool bInterrupt, bool bReplicateToAll);
	void PlayCustomVO(class USoundBase* customVO, bool bInterrupt, bool bReplicateToAll);
	void OverrideWeaponMaterials(class UMaterialInterface* MatIfc, bool bFirstPerson, bool bThirdPerson);
	void OnWeaponFire(class APwndWeapon* FiredWeapon);
	void OnUpdateGibbed(bool bIsGibbed);
	void OnSpecialMovementFailed(bool bAllowSpecialMove, bool bSpecialMoveFailed);
	void OnRocketJumpFailed(bool bCanRocketJump, bool bRocketJumpFailed);
	void OnRocketJump(const struct FReplicatedRocketJump& JumpInfo);
	void OnRep_WeaponSecondaryAbility(class APwndAbilityWeapon* OldWeaponSecondaryAbility);
	void OnRep_WeaponPrimaryAbility(class APwndAbilityWeapon* OldWeaponPrimaryAbility);
	void OnRep_Weapon(class APwndWeapon* OldWeapon);
	void OnRep_ServerMovementTimeDilation(float OldDilation);
	void OnRep_ServerCustomTimeDilation(float OldDilation);
	void OnRep_ServerActionTimeDilation(float OldDilation);
	void OnRep_RepActionTimeStamp(float OldRepActionTimeStamp);
	void OnRep_PwnBodyStackActor(class APwndBodyStackActor* OldPwnBodyStackActor);
	void OnRep_PlayerState();
	void OnRep_Perk(class APwndInventoryPerk* OldPerk);
	void OnRep_LastRocketJumpInfo();
	void OnRep_LastReceiveHealEvent();
	void OnRep_LastReceiveDamageEvent();
	void OnRep_EnemyCollisionModifiers();
	void OnRep_DeathDamageEvent();
	void OnRep_CurrentAction(const struct FPwndCharacterAction& OldAction);
	void OnRep_Controller();
	void OnRep_CompletedAction(const struct FPwndCharacterActionCompletion& OldCompletedAction);
	void OnRep_CharacterSkin(class UClass* OldCharacterSkin);
	void OnRep_bNeutralPwn(bool OldbNeutralPwn);
	void OnRep_bHybridNeutralPwn(bool OldbHybridNeutralPwn);
	void OnRep_bGibbed(bool OldbGibbed);
	void OnRep_AllyCollisionModifiers();
	void OnPostEventTrigger(TEnumAsByte<EeEventTrigger> Trigger, float Count, TArray<class UObject*> Others);
	void OnInventoryUsed(class APwndInventory* Inv);
	void OnHeatStatusChanged(TEnumAsByte<EeHeatStatus> NewHeatStatus, TEnumAsByte<EeHeatStatus> OldHeatStatus);
	void OnHealReceived(const struct FPwndReplicatedHealEvent& HealEvent);
	void OnHealInflicted(const struct FPwndReplicatedHealEvent& HealEvent);
	void OnExitedAOE(class APwndAOE* AOE);
	void OnEnteredAOE(class APwndAOE* AOE);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnDrawHUD(class APwndHUD* HUD, class UCanvas* Canvas, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, const struct FVector2D& CanvasOrigin, const struct FVector2D& CanvasSize);
	void OnDotRemoved(class UPwndDOTComponent* DotComp);
	void OnDotAdded(class UPwndDOTComponent* DotComp);
	void OnDamageReceived(const struct FPwndReplicatedDamageEvent& DamageEvent);
	void OnDamageInflicted(const struct FPwndReplicatedDamageEvent& DamageEvent);
	void OnCompletedActionStateUpdated(TEnumAsByte<EePawnActionState> State, bool bSuccess, const struct FPwndCharacterActionCompletion& ActionCompleted);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnAwardRank(int NewRank, bool bLocal);
	void OnActionStateUpdated(TEnumAsByte<EePawnActionState> NewState, TEnumAsByte<EePawnActionState> OldState);
	void MatchOwnerCharacterSkin();
	bool IsWeaponFireEnabled(TEnumAsByte<EePawnWeapon> WeaponType);
	bool IsWallRunning();
	bool IsWallRocketJumpingEnabled();
	bool IsVerticalRocketJumpingEnabled();
	bool IsTornOff();
	bool IsTopOfBodyStack();
	bool IsSpecialMovementTwoStage(bool bFirstStage);
	bool IsSpecialMovementEnabled();
	bool IsSpecialMovementDisabled();
	bool IsSpecialMovement();
	bool IsSkyDashing();
	bool IsRocketJumpingEnabled();
	bool IsReviving();
	bool IsRespawning();
	bool IsRemotePwning();
	bool IsPwning();
	bool IsPwnDecoyForDebugging();
	bool IsPwnDecoy();
	bool IsPwnable();
	bool IsPassiveWallRunning();
	bool IsOverHeated();
	bool IsNeutralPwn();
	bool IsMantling();
	bool IsMantleEnabled();
	bool IsInvulnerable();
	bool IsInUpState();
	bool IsInteracting();
	bool IsInTankMode();
	bool IsInLimbo();
	bool IsInInteractionTargetState();
	bool IsInInteractionState();
	bool IsInInteractionAttackerState();
	bool IsInImmobileState();
	bool IsInIgnoreForcesState();
	bool IsInDownState();
	bool IsInBodyStack();
	bool IsHybridNeutralPwn();
	bool IsHumiliating();
	bool IsHorizontalRocketJumpingEnabled();
	bool IsGroundMovementEnabled();
	bool IsGrappleHooking();
	bool IsFullyMovingForward();
	bool IsFloorRocketJumpingEnabled();
	bool IsFirstPerson();
	bool IsFastMovingForward();
	bool IsFalling();
	bool IsDashMoving();
	bool IsCrawling();
	bool IsCarrying();
	bool IsBottomOfBodyStack();
	bool IsBeingRevived();
	bool IsBeingRemotePwnd();
	bool IsBeingPwnd();
	bool IsBeingHumiliated();
	bool IsBeingCarried();
	bool IsAirMovementEnabled();
	bool IsAirHovering();
	bool InValidReviveState();
	bool InValidPwnState();
	bool InValidHumiliateState();
	bool InsideReviveRange(class APwndCharacter* Target, bool bExitRange, bool bLOS, float* Dist);
	bool InsideRemotePwnRange(class APwndCharacter* Target, bool bCancelRange, bool bLOS, float* Dist);
	bool InsidePwnRange(class APwndCharacter* Target, bool bExitRange, bool bLOS, float* Dist);
	bool InsideCarryRange(class APwndCharacter* Target, bool bExitRange, bool bLOS, float* Dist);
	float HealDamage(float HealAmount, const struct FDamageEvent& HealEvent, class AController* EventInstigator, class AActor* HealCauser);
	bool HasVO(const struct FName& VoiceOverID);
	struct FVector GetSpecialMovementTarget(struct FVector* TargetVelocity);
	bool GetSpecialMovementStatus(bool* bEnabled, bool* bActive, int* AvailableCount, int* MaxCount, float* AvailableCapacity, float* MaxCapacity, float* Timer, float* Duration);
	float GetServerTimeStamp();
	struct FText STATIC_GetRoleEnumDisplayText(TEnumAsByte<EeCharacterRole> CharRole);
	struct FText GetRoleDisplayText();
	void GetRJDistances(bool bUnitDistances, TArray<float>* OutDistances);
	TEnumAsByte<EeRocketJumpControlType> GetRJControlType();
	class APwndCharacter* GetReviverPawn();
	class APwndCharacter* GetRevivedPawn();
	void GetPwnRange(bool bExitRange, bool bRemoteRange, bool bRemoteCancelRange, bool bAirRanges, float* RangeXY, float* RangeZ);
	class APwndCharacter* GetPwnerPawn();
	class UClass* GetPwneeWidget();
	class APwndCharacter* GetPwneePawn();
	class UMaterialInstanceDynamic* GetPostProcessEffectInst(class UObject* RefObject, const struct FPwndPostProcessEffect& Effect, bool bFirstPerson);
	class AController* GetOwnerController();
	struct FGuid GetMatchingCharacterSkinGuid(const struct FGuid& OwnerCharacterSkinGuid);
	TArray<class UClass*> GetLoadoutViewAccessories();
	class APlayerState* GetKillerPS();
	int GetInventoryOfType(class UClass* InvClass, bool bExact, TArray<class APwndInventory*>* OutInventory);
	class AController* GetInstigatorController();
	class APwndCharacter* GetHumiliaterPawn();
	class APwndCharacter* GetHumiliatedPawn();
	void GetHeatStatusValues(TEnumAsByte<EeHeatStatus> Status, float* Marker, float* Vent);
	TEnumAsByte<EeHeatStatus> GetHeatStatus();
	float GetHeatPct();
	TArray<class UPwndDOTComponent*> GetDotEffects(class UClass* DotEffect, class AController* EventInstigator, class AActor* DamageCauser, class APwndWeapon* DOTWeapon, class UClass* DOTWeaponClass);
	class UPwndDamageHistoryComponent* GetDamageHistory();
	int GetCurrentCharacterSkinIndex();
	TEnumAsByte<EePawnActionState> GetCurrentActionState();
	class APwndCharacter* GetCurrentActionPawn();
	struct FPwndCharacterActionCompletion GetCompletedAction();
	int GetCharacterSkinIndexByGuid(const struct FGuid& CharacterSkinGuid);
	int GetCharacterSkinIndex(class UClass* CharacterSkinClass);
	class APwndCharacter* GetCarrierPawn();
	class APwndCharacter* GetCarriedPawn();
	bool GetActionTimer(float* OutTimer, float* OutDuration, float* OutPercent, float* OutTimePassed, float* OutOriginalTimePassed);
	void ForceSpecialMovementRecharge();
	class APwndCharacter* FindBestReviveTarget(class APwndCharacter* Preferred, bool bInRange, bool bLOS);
	class APwndCharacter* FindBestPwnTarget(class APwndCharacter* Preferred, bool bRemote, bool bInRange, bool bLOS);
	class APwndCharacter* FindBestHumiliationTarget(class APwndCharacter* Preferred, bool bInRange, bool bLOS);
	class APwndCharacter* FindBestCarryTarget(class APwndCharacter* Preferred, bool bInRange, bool bLOS);
	void FadeOutPostProcessEffects(class UObject* RefObject, bool bFirstPerson);
	void FadeOutPostProcessEffect(class UObject* RefObject, const struct FPwndPostProcessEffect& Effect, bool bFirstPerson);
	bool ExecuteRocketJump(bool bVertical);
	bool DrawRadiusIndicator();
	void ClientStopAllFire();
	void ClientSpecialMovementFailed(bool bAllowSpecialMove, bool bSpecialMoveFailed);
	void ClientSetOverHeated(bool bInOverHeated, float NewHeat);
	void ClientSetHeatModifiers(float inHeatPerSec, float inHeatCostModifier);
	void ClientRocketJumpFailed(bool bCanRocketJump, bool bRocketJumpFailed);
	void ClientPlayVOFor(class APwndCharacter* Char, const struct FName& VoiceOverID, bool bInterrupt);
	void ClientPlayVO(const struct FName& VoiceOverID, bool bInterrupt);
	void ClientPlayCustomVOFor(class APwndCharacter* Char, class USoundBase* customVO, bool bInterrupt);
	void ClientClearDamageEffects();
	void ClientAddWeaponDisabledTime(float Time);
	void ClientAddTimeDilationEffect(const struct FTimeDilationEffectEntry& TimeDilationEffect);
	void ClientAddSpecialMovementDisabledTime(float Time);
	void ClientAddRocketJumpDisabledTime(float Time);
	void ClientAddRocketJumpDelayedTime(float Time);
	void ClientAddMovementDisabledTime(float Time);
	void ClientAddHeat(float inHeatDelta, bool bResetCoolDelay, bool bResetCoolRate);
	void ClientAddAimOffsetTime(float Timestamp, float Duration, float AimOffsetDeg);
	void ClientAddAbilityDisabledTime(float Time);
	void ClearDamageEffects();
	bool CanSpeak();
	bool CanFireWeapons();
	bool CanFireWeapon(class APwndWeapon* Weap, unsigned char FireModeNum);
	void CancelActions(bool bCancelTargetActions);
	bool CanBeRevived(class APwndCharacter* Reviver);
	bool CanBePwnd(class APwndCharacter* Pwner);
	bool CanBeHumiliated(class APwndCharacter* Humiliator);
	bool CanBeCarried(class APwndCharacter* Carrier);
	class APwndFX* AttachCameraPwndFX(class UClass* Template, const struct FVector& Offset, class APawn* InInstigator, unsigned char InTeamNum, bool bFirstPerson, bool bThirdPerson, bool bAutoDestroy);
	class UObject* AttachCameraFXDBEntry(const struct FPwndFXDatabaseEntry& Entry, const struct FVector& Offset, class APawn* InInstigator, unsigned char InTeamNum, bool bFirstPerson, bool bThirdPerson, bool bAutoDestroy);
	class UParticleSystemComponent* AttachCameraFX(class UParticleSystem* Template, const struct FVector& Offset, bool bFirstPerson, bool bThirdPerson, bool bAutoDestroy);
	class APwndFX* AttachBodyPwndFX(class UClass* Template, const struct FName& AttachPoint, const struct FVector& Offset, const struct FRotator& LocalRotation, class APawn* InInstigator, unsigned char InTeamNum, bool bAutoDestroy);
	class UObject* AttachBodyFXDBEntry(const struct FPwndFXDatabaseEntry& Entry, const struct FName& AttachPoint, const struct FVector& Offset, const struct FRotator& LocalRotation, class APawn* InInstigator, unsigned char InTeamNum, bool bAutoDestroy);
	class UParticleSystemComponent* AttachBodyFX(class UParticleSystem* Template, const struct FName& AttachPoint, const struct FVector& Offset, const struct FRotator& LocalRotation, bool bAutoDestroy);
	bool AllowRevive();
	bool AllowPwn();
	bool AllowHumiliate();
	bool AllowFiring(class APwndWeapon* Weap, unsigned char FireModeNum);
	bool AllowCarry();
	void AddWeaponDisabledTime(float Time);
	void AddTimeDilationEffect(const struct FTimeDilationEffect& TimeDilationEffect);
	void AddSpecialMovementDisabledTime(float Time);
	void AddRocketJumpDisabledTime(float Time);
	void AddRocketJumpDelayedTime(float Time);
	void AddPostProcessEffect(class UObject* RefObject, const struct FPwndPostProcessEffect& Effect, bool bFirstPerson);
	void AddMovementDisabledTime(float Time);
	void AddInvulnerabilityTime(float Duration);
	class APwndInventory* AddInventoryItem(class UClass* InvClass, class AController* InstigatorController, class AActor* InstigatorActor, class APwndWeapon* InstigatorWeapon, int Count);
	void AddHeatModifiers(class AActor* Causer, float inHeatPerSec, float inHeatCostModifier);
	void AddHeatBP(float inHeatDelta, bool bResetCoolDelay, bool bResetCoolRate);
	void AddDotEffect(class UClass* DotEffect, class AController* EventInstigator, class AActor* DamageCauser, class APwndWeapon* DOTWeapon, class UClass* DOTWeaponClass);
	void AddCharacterSkinMesh(class UMeshComponent* Comp);
	void AddAimOffsetTime(float Time, float AimOffsetDeg);
	void AddAbilityDisabledTime(float Time);
};


// Class PWND.PwndCharacterCapsuleComponent
// 0x0000 (0x0840 - 0x0840)
class UPwndCharacterCapsuleComponent : public UCapsuleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCharacterCapsuleComponent");
		return ptr;
	}

};


// Class PWND.PwndCharacterEventHelper
// 0x0008 (0x0390 - 0x0388)
class APwndCharacterEventHelper : public AActor
{
public:
	bool                                               IsInPwnZone;                                              // 0x0388(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCharacterEventHelper");
		return ptr;
	}

};


// Class PWND.PwndCharacterMovementComponentGUTS
// 0x0CA0 (0x14A0 - 0x0800)
class UPwndCharacterMovementComponentGUTS : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0800(0x0064) MISSED OFFSET
	struct FRocketJumpTuning                           GroundVerticalRJ;                                         // 0x0864(0x0068) (Edit, BlueprintVisible, Net)
	struct FRocketJumpTuning                           WallHorizontalRJ;                                         // 0x08CC(0x0068) (Edit, BlueprintVisible, Net)
	struct FRocketJumpTuning                           WallVerticalRJ;                                           // 0x0934(0x0068) (Edit, BlueprintVisible, Net)
	struct FRocketJumpTuning                           AirRJ;                                                    // 0x099C(0x0068) (Edit, BlueprintVisible, Net)
	struct FRocketJumpTuning                           AirDownwardRJ;                                            // 0x0A04(0x0068) (Edit, BlueprintVisible, Net)
	struct FRocketJumpTuning                           GroundSuperRJ;                                            // 0x0A6C(0x0068) (Edit, BlueprintVisible, Net)
	struct FRocketJumpTuning                           WallSuperRJ;                                              // 0x0AD4(0x0068) (Edit, BlueprintVisible, Net)
	float                                              IgnoreSpecialMoveTimeToLand;                              // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreSpecialMoveHeightMul;                               // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantleGravityMultiplier;                                  // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoMantleWalkingCheckDistance;                           // 0x0B48(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoMantleWalkingCheckHeight;                             // 0x0B4C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoMantleWalkingMinHeight;                               // 0x0B50(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoMantleFallingCheckDistance;                           // 0x0B54(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoMantleFallingMaxCollHeightMul;                        // 0x0B58(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantleWalkingCheckDistance;                               // 0x0B5C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantleWalkingCheckHeight;                                 // 0x0B60(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantleWalkingMinHeight;                                   // 0x0B64(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantleFallingCheckDistance;                               // 0x0B68(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantleFallingCheckHeight;                                 // 0x0B6C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDotLerpFloatStruct                         CollisionXYDecelFactor;                                   // 0x0B70(0x0018) (Edit, DisableEditOnInstance)
	struct FDotLerpFloatStruct                         CollisionZDecelFactor;                                    // 0x0B88(0x0018) (Edit, DisableEditOnInstance)
	struct FDotLerpFloatStruct                         CollisionXYTransferFactor;                                // 0x0BA0(0x0018) (Edit, DisableEditOnInstance)
	struct FDotLerpFloatStruct                         CollisionZTransferFactor;                                 // 0x0BB8(0x0018) (Edit, DisableEditOnInstance)
	bool                                               bWallGrindRequireButtonHeld;                              // 0x0BD0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWallRunRequireButtonHeld;                                // 0x0BD1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAirHoverRequireButtonHeld;                               // 0x0BD2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0BD3(0x0005) MISSED OFFSET
	struct FPwndCharacterRepOwnBase                    RepOwnBase;                                               // 0x0BD8(0x0058) (Edit, Net)
	struct FPwndCharacterMovementRepAllBase            RepAllBase;                                               // 0x0C30(0x002C) (Edit, Net)
	struct FPwndCharacterRepAllGravity                 RepAllGravity;                                            // 0x0C5C(0x0024) (Edit, Net)
	struct FPwndCharacterRepOwnRocketJump              RepOwnRocketJump;                                         // 0x0C80(0x00A8) (Edit, Net)
	struct FPwndCharacterRepOwnDash                    RepOwnDash;                                               // 0x0D28(0x0028) (Edit, Net)
	struct FPwndCharacterRepOwnAirHover                RepOwnAirHover;                                           // 0x0D50(0x00E4) (Edit, Net)
	struct FPwndCharacterRepOwnGrappleHook             RepOwnGrappleHook;                                        // 0x0E34(0x0054) (Edit, Net)
	struct FPwndCharacterRepOwnWallGrind               RepOwnWallGrind;                                          // 0x0E88(0x0018) (Edit, Net)
	struct FPwndCharacterRepOwnSkyDash                 RepOwnSkyDash;                                            // 0x0EA0(0x004C) (Edit, Net)
	struct FPwndCharacterRepOwnWallRun                 RepOwnWallRun;                                            // 0x0EEC(0x0024) (Edit, Net)
	struct FPwndCharacterRepAllWallRun                 RepAllWallRun;                                            // 0x0F10(0x0010) (Edit, Net)
	struct FPwndCharacterRepOwnGroundSlam              RepOwnGroundSlam;                                         // 0x0F20(0x0074) (Edit, Net)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0F94(0x0004) MISSED OFFSET
	struct FPwndCharacterRepNonGroundSlam              RepNonGroundSlam;                                         // 0x0F98(0x0480) (Edit)
	struct FPwndCharacterRepOwnCustomAbility           RepOwnCustomAbility;                                      // 0x1418(0x0018) (Edit, Net)
	struct FPwndCharacterRepOwnTankMode                RepOwnTankMode;                                           // 0x1430(0x0028) (Edit, Net)
	struct FPwndCharacterMovementRepAllTankMode        RepAllTankMode;                                           // 0x1458(0x003C) (Edit, Net)
	unsigned char                                      UnknownData03[0xC];                                       // 0x1494(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCharacterMovementComponentGUTS");
		return ptr;
	}


	struct FPwndCharacterRepOwnWallRun K2ReadRepOwnerPawnWallRun();
	struct FPwndCharacterRepOwnWallGrind K2ReadRepOwnerPawnWallGrind();
	struct FPwndCharacterRepOwnTankMode K2ReadRepOwnerPawnTankMode();
	struct FPwndCharacterRepOwnSkyDash K2ReadRepOwnerPawnSkyDash();
	struct FPwndCharacterRepOwnRocketJump K2ReadRepOwnerPawnRocketJump();
	struct FPwndCharacterRepOwnGroundSlam K2ReadRepOwnerPawnGroundSlam();
	struct FPwndCharacterRepOwnGrappleHook K2ReadRepOwnerPawnGrappleHook();
	struct FPwndCharacterRepOwnDash K2ReadRepOwnerPawnDash();
	struct FPwndCharacterRepOwnCustomAbility K2ReadRepOwnerPawnCustomAbility();
	struct FPwndCharacterRepOwnBase K2ReadRepOwnerPawnBase();
	struct FPwndCharacterRepOwnAirHover K2ReadRepOwnerPawnAirHover();
	struct FPwndCharacterRepNonGroundSlam K2ReadRepNonePawnGroundSlam();
	struct FPwndCharacterRepAllWallRun K2ReadRepAllPawnWallRun();
	struct FPwndCharacterMovementRepAllTankMode K2ReadRepAllPawnTankMode();
	struct FPwndCharacterRepAllGravity K2ReadRepAllPawnGravity();
	struct FPwndCharacterMovementRepAllBase K2ReadRepAllPawnBase();
};


// Class PWND.PwndCharacterMovementComponent
// 0x0310 (0x17B0 - 0x14A0)
class UPwndCharacterMovementComponent : public UPwndCharacterMovementComponentGUTS
{
public:
	struct FRotator                                    ControlRotation;                                          // 0x14A0(0x000C) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     LastWalkingLocation;                                      // 0x14AC(0x000C) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     LastWalkingFloor;                                         // 0x14B8(0x000C) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     RJMomentumPreservationVector;                             // 0x14C4(0x000C) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              AnalogInputModifierPreservation;                          // 0x14D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              LastWallRunTimer;                                         // 0x14D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              LastWalkingTimer;                                         // 0x14D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              RocketJumpLandFrictionModifierTimer;                      // 0x14DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              RocketJumpTimer;                                          // 0x14E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              SameSurfaceRocketJumpTimer;                               // 0x14E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              DoubleTapRocketJumpTimer;                                 // 0x14E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x14EC(0x0004) MISSED OFFSET
	struct FHitResult                                  LastRocketJumpSurface;                                    // 0x14F0(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	int                                                RocketJumpsSinceOverheat;                                 // 0x1578(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              RocketJumpFlightTime;                                     // 0x157C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                SpecialMovements;                                         // 0x1580(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              SpecialMovementCapacity;                                  // 0x1584(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              SpecialMovementCapacityDelay;                             // 0x1588(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              SpecialMovementRecharge;                                  // 0x158C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              SpecialMovementRechargeDelay;                             // 0x1590(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              MantleZ;                                                  // 0x1594(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              MantleStartZ;                                             // 0x1598(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              RJAirControlDuration;                                     // 0x159C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              RJAirControlTimer;                                        // 0x15A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     RJAirControlVector;                                       // 0x15A4(0x000C) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bReentrantSpecialMove;                                    // 0x15B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x15B1(0x0003) MISSED OFFSET
	float                                              MovementModeTime;                                         // 0x15B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              SpecialMovementModeTime;                                  // 0x15B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              DashTime;                                                 // 0x15BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              MovingForwardTime;                                        // 0x15C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   MoveToDirection;                                          // 0x15C4(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, Transient, DuplicateTransient)
	float                                              MoveToDistance;                                           // 0x15D0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              MoveToDuration;                                           // 0x15D4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              MoveToMatchTargetActorVelocityPctOnExit;                  // 0x15D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              MoveToMaxVelocityOnExit;                                  // 0x15DC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              MoveToTargetActorRange;                                   // 0x15E0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x15E4(0x0004) MISSED OFFSET
	class AActor*                                      MoveToTargetActor;                                        // 0x15E8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     MoveToTargetActorLastLocation;                            // 0x15F0(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bMoveToFaceTargetYaw;                                     // 0x15FC(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMoveToFaceTargetPitch;                                   // 0x15FD(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGroundMovementEnabled;                                   // 0x15FE(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAirMovementEnabled;                                      // 0x15FF(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRocketJumpingEnabled;                                    // 0x1600(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFloorRocketJumpingEnabled;                               // 0x1601(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWallRocketJumpingEnabled;                                // 0x1602(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHorizontalRocketJumpingEnabled;                          // 0x1603(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bVerticalRocketJumpingEnabled;                            // 0x1604(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSpecialMovementEnabled;                                  // 0x1605(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMantleEnabled;                                           // 0x1606(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverrideSpecialMovementControlsWithRocketJumpControls;   // 0x1607(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SpecialMoveHit;                                           // 0x1608(0x0088) (BlueprintVisible, BlueprintReadOnly, Net, Transient, IsPlainOldData)
	struct FSavedMove_PwndCharacter_ServerMoveData     ExternalMove;                                             // 0x1690(0x00A0) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               bCtrlExternalMovementHeld;                                // 0x1730(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1731(0x0003) MISSED OFFSET
	float                                              GrappleHookLength;                                        // 0x1734(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GrappleHookReelInSpeed;                                   // 0x1738(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGrappleHookIsReelingIn;                                  // 0x173C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x173D(0x0003) MISSED OFFSET
	class APwndWeapon*                                 CustomAbilityWeapon;                                      // 0x1740(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastCollideHeadTimeStamp;                                 // 0x1748(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTrackingCollideHeadBonk;                                 // 0x174C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x174D(0x0003) MISSED OFFSET
	struct FVector                                     LastCollideHeadVelocity;                                  // 0x1750(0x000C) (Transient, IsPlainOldData)
	float                                              LastCollideHardStopTimeStamp;                             // 0x175C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTrackingCollideHardStop;                                 // 0x1760(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1761(0x0003) MISSED OFFSET
	struct FVector                                     CollideHardStopStartPos;                                  // 0x1764(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     CollideHardStopStartVel;                                  // 0x1770(0x000C) (Transient, IsPlainOldData)
	float                                              LastCollideHiSpeedTimeStamp;                              // 0x177C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastCollideHiSpeedVel;                                    // 0x1780(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1784(0x0004) MISSED OFFSET
	TArray<struct FCharacterImpactEntry>               ImpactEntries;                                            // 0x1788(0x0010) (ZeroConstructor, Transient)
	bool                                               bExitTankMode;                                            // 0x1798(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1799(0x0003) MISSED OFFSET
	struct FRotator                                    CrawlingRotationRate;                                     // 0x179C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x17A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCharacterMovementComponent");
		return ptr;
	}


	void SetCtrlExternalMovementHeld(bool bHeld);
	void ServerMovePwnd(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, const struct FSavedMove_PwndCharacter_ServerMoveData& ServerMoveData, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMoveOldPwnd(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags, const struct FSavedMove_PwndCharacter_ServerMoveData& OldServerMoveData);
	void ServerMoveDualPwnd(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, const struct FSavedMove_PwndCharacter_ServerMoveData& PendingServerMoveData, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, const struct FSavedMove_PwndCharacter_ServerMoveData& NewServerMoveData, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void ServerMoveDualHybridRootMotionPwnd(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, const struct FSavedMove_PwndCharacter_ServerMoveData& PendingServerMoveData, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, const struct FSavedMove_PwndCharacter_ServerMoveData& NewServerMoveData, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	bool IsWallRunning();
	bool IsSpecialMovement();
	bool IsSkyDashing();
	bool IsPassiveWallRunning();
	bool IsMovingTo();
	bool IsMantling();
	bool IsInTankMode();
	bool IsHoldingPosition();
	bool IsGroundSlamming();
	bool IsGrappleHooking();
	bool IsCharacterPullingInTarget();
	bool IsCharacterPullingInAttacker();
	bool IsCharacterPullingIn();
	bool IsAirHovering();
	bool GrappleHookTrace(const struct FVector& Dir, float Distance, struct FHitResult* Hit);
	float GetSpecialMovementCapacityPct();
	float GetServerTimeStamp();
	void GetRJDistances(bool bUnitDistances, TArray<float>* OutDistances);
	class APwndCharacter* GetPwndCharacterOwner();
	float GetMaxSpeedWithoutDashing();
	void ForceSpecialMovementRecharge();
	bool ExecuteMoveTo(const struct FVector& Dir, class AActor* TargetActor, float Distance, float Duration, float Range, float MaxVelocityOnExit, float MatchTargetActorVelocityPctOnExit, bool bFaceTargetYaw, bool bFaceTargetPitch);
	bool ExecuteHoldPosition(float Duration, class AActor* TargetActor, bool bFaceTargetYaw, bool bFaceTargetPitch, float DecelTime);
	bool ExecuteCharacterPullIn(class AActor* TargetActor, float Duration, float SelfMovePct, float TargetMovePct, float Range, bool bSelfFaceTargetYaw, bool bSelfFaceTargetPitch, bool bTargetFaceSelfYaw, bool bTargetFaceSelfPitch);
	bool DisconnectGrappleHookExternal();
	void ClientVeryShortAdjustPositionPwnd(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, const struct FNetworkPredictionData_Server_PwndCharacter_Adjustment& PendingAdjustmentPwnd);
	void ClientForceSpecialMovementRecharge();
	void ClientAdjustRootMotionSourcePositionPwnd(float Timestamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, const struct FNetworkPredictionData_Server_PwndCharacter_Adjustment& PendingAdjustmentPwnd);
	void ClientAdjustRootMotionPositionPwnd(float Timestamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, const struct FNetworkPredictionData_Server_PwndCharacter_Adjustment& PendingAdjustmentPwnd);
	void ClientAdjustPositionPwnd(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode, const struct FNetworkPredictionData_Server_PwndCharacter_Adjustment& PendingAdjustmentPwnd);
	void ClearClientSideImpulses();
	bool AttemptMoveToExternal(const struct FVector& Dir, class AActor* TargetActor, float Distance, float Duration, float Range, float MaxVelocityOnExit, float MatchTargetActorVelocityPctOnExit, bool bFaceTargetYaw, bool bFaceTargetPitch);
	bool AttemptHoldPositionExternal(float Duration, class AActor* TargetActor, bool bFaceTargetYaw, bool bFaceTargetPitch, float DecelTime);
	bool AttemptGrappleHookExternal(const struct FHitResult& Hit);
	void AddClientSideImpulse(const struct FVector& Impulse, bool bCancelVelocity);
};


// Class PWND.PwndGUIDObject
// 0x0018 (0x0040 - 0x0028)
class UPwndGUIDObject : public UObject
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0028(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloadOnStartup;                                        // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGUIDObject");
		return ptr;
	}

};


// Class PWND.PwndCharacterSkin
// 0x00F0 (0x0130 - 0x0040)
class UPwndCharacterSkin : public UPwndGUIDObject
{
public:
	bool                                               bAllowSelection;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x0041(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FPwndCharacterSkinMesh                      SkinMesh;                                                 // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FPwndCharacterSkinMesh>              SkinAccessoryMeshes;                                      // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPwndCharacterSkinAttachment>        Attachments;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  SkinIcon;                                                 // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0088(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x00A0(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              LockBoxes;                                                // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ValidCharacters;                                          // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UClass>                            OwnerSkin;                                                // 0x00E0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UClass*                                      PwnerWidget;                                              // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PwneeWidget;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGuid>                               ValidCharacterGUIDs;                                      // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FGuid                                       OwnerSkinGUID;                                            // 0x0120(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCharacterSkin");
		return ptr;
	}


	void ApplySkinMeshTo(class USkeletalMeshComponent* Comp);
};


// Class PWND.PwndChatFilter
// 0x0040 (0x0068 - 0x0028)
class UPwndChatFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndChatFilter");
		return ptr;
	}

};


// Class PWND.PwndCheatManager
// 0x0000 (0x0078 - 0x0078)
class UPwndCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCheatManager");
		return ptr;
	}


	void CheatToggleRegeneration();
	void CheatToggleMonkeyModeTags();
	void CheatToggleMonkeyModeHUD();
	void CheatSwitchTeams(int TeamNum);
	void CheatSpeedHack(float Speed);
	void CheatSpectate();
	void CheatSpawnPwnable(int StackSize, int OverrideBounty, bool bEnemy, float OverrideDuration);
	void CheatSkipWarmup();
	void CheatSetTeamScore(int Score);
	void CheatSetNextWeaponSkin(int Dir);
	void CheatSetNextWeapon(int Dir);
	void CheatSetNextSecondaryAbility(int Dir);
	void CheatSetNextRevive(int Dir);
	void CheatSetNextPwnStamp(int Dir);
	void CheatSetNextPWN(int Dir);
	void CheatSetNextPrimaryAbility(int Dir);
	void CheatSetNextPerk(int Dir);
	void CheatSetNextCharacterSkin(int Dir);
	void CheatSetNextCharacter(int Dir);
	void CheatSetMonkeyMode(int NewMonkeyMode, int NumLoops, TEnumAsByte<EeBotDifficulty> NewMonkeyModeDifficulty);
	void CheatSetMatchTimeRemaining(float Time);
	void CheatSetHealth(int Health);
	void CheatSetControllerSensitivity(float Sensitivity);
	void CheatSetCharacterByStr(const struct FString& Char);
	void CheatReviveDurationMul(float Mul);
	void CheatRespawn();
	void CheatResetRank();
	void CheatRemoveQueuePenalty();
	void CheatRemovePwnStamps();
	void CheatRemoveBot(const struct FString& Char);
	void CheatPwnRespawnTimeMul(float Mul);
	void CheatPwnageDurationMul(float Mul);
	void CheatKickPlayer(const struct FString& PlayerName);
	void CheatInvertShieldTeam();
	void CheatGodMode();
	void CheatForceCrash();
	void CheatFinishCooldowns();
	void CheatEndGame();
	void CheatAwardRating(int Rating);
	void CheatAwardRank();
	void CheatAddQueuePenalty();
	void CheatAddBot(const struct FString& Char, TEnumAsByte<EeBotDifficulty> Difficulty);
};


// Class PWND.PwndCostTable
// 0x0020 (0x0060 - 0x0040)
class UPwndCostTable : public UPwndGUIDObject
{
public:
	TArray<struct FPwndCostTableEntry>                 Costs;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPwndCostTableOverrideEntry>         CostOverrides;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCostTable");
		return ptr;
	}


	void STATIC_GetItemPrices(const struct FGuid& Guid, TArray<struct FPwndCurrencyEntry>* Prices);
};


// Class PWND.PwndGUIDActor
// 0x0018 (0x03A0 - 0x0388)
class APwndGUIDActor : public AActor
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0388(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloadOnStartup;                                        // 0x0399(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGUIDActor");
		return ptr;
	}

};


// Class PWND.PwndCurrency
// 0x0040 (0x03E0 - 0x03A0)
class APwndCurrency : public APwndGUIDActor
{
public:
	struct FString                                     Type;                                                     // 0x03A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       DisplayText;                                              // 0x03B0(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x03C8(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCurrency");
		return ptr;
	}

};


// Class PWND.PwndCustomMusicTrack
// 0x0060 (0x00A0 - 0x0040)
class UPwndCustomMusicTrack : public UPwndGUIDObject
{
public:
	bool                                               bAllowSelection;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class USoundBase*                                  MusicTrack;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StingSuccess;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StingFail;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0060(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0078(0x0018) (Edit, DisableEditOnInstance)
	class UAudioComponent*                             MusicComp;                                                // 0x0090(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             StingComp;                                                // 0x0098(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCustomMusicTrack");
		return ptr;
	}

};


// Class PWND.PwndCustomPwnLine
// 0x0098 (0x00D8 - 0x0040)
class UPwndCustomPwnLine : public UPwndGUIDObject
{
public:
	bool                                               bAllowSelection;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x0041(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	class USoundBase*                                  PwnLine;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0050(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0068(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x0080(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<class UClass*>                              LockBoxes;                                                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ValidCharacters;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGuid>                               ValidCharacterGUIDs;                                      // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TAssetPtr<class UClass>                            LoadoutVisualizerClass;                                   // 0x00B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndCustomPwnLine");
		return ptr;
	}

};


// Class PWND.PwndDamageHistoryComponent
// 0x0060 (0x0230 - 0x01D0)
class UPwndDamageHistoryComponent : public UActorComponent
{
public:
	TArray<struct FDamageHistoryEntry>                 DamageReceived;                                           // 0x01D0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FDamageHistoryEntry>                 DamageInflicted;                                          // 0x01E0(0x0010) (ZeroConstructor, Transient)
	float                                              DamageReceivedMaxDuration;                                // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageInflictedMaxDuration;                               // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMergeDamageEvents;                                       // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMergedDamageEventsRequiresMatchingPS;                    // 0x01F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMergedDamageEventsRequiresMatchingWeapon;                // 0x01FA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMergedDamageEventsRequiresMatchingDamageType;            // 0x01FB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	TArray<struct FHealHistoryEntry>                   HealReceived;                                             // 0x0200(0x0010) (ZeroConstructor, Transient)
	TArray<struct FHealHistoryEntry>                   HealInflicted;                                            // 0x0210(0x0010) (ZeroConstructor, Transient)
	float                                              HealReceivedMaxDuration;                                  // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealInflictedMaxDuration;                                 // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMergeHealEvents;                                         // 0x0228(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMergedHealEventsRequiresMatchingPS;                      // 0x0229(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMergedHealEventsRequiresMatchingWeapon;                  // 0x022A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMergedHealEventsRequiresMatchingDamageType;              // 0x022B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x022C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDamageHistoryComponent");
		return ptr;
	}


	float GetServerTimeStamp();
	bool GetHealHistoryEntry(class AActor* Act, bool bInflictedHistory, struct FHealHistoryEntry* Entry);
	int GetHealHistory(class AActor* Act, float TimeLimit, int MaxEntries, bool bReverse, bool bInflictedHistory, TArray<struct FPwndReplicatedHealEvent>* History);
	bool GetDamageHistoryEntry(class AActor* Act, bool bInflictedHistory, struct FDamageHistoryEntry* Entry);
	int GetDamageHistory(class AActor* Act, float TimeLimit, int MaxEntries, bool bReverse, bool bInflictedHistory, TArray<struct FPwndReplicatedDamageEvent>* History);
	int GetDamageActors(float TimeLimit, bool bInflictedHistory, bool bDamageHistory, TArray<class AActor*>* OutDamagers);
	void ClientClearHealReceived();
	void ClientClearHealInflicted();
	void ClientClearDamageReceived();
	void ClientClearDamageInflicted();
	void ClientAddToHealHistory(const struct FPwndReplicatedHealEvent& HealEvent, bool bInflictedHistory);
	void ClientAddToDamageHistory(const struct FPwndReplicatedDamageEvent& DamageEvent, bool bInflictedHistory);
	void ClearHealReceived();
	void ClearHealInflicted();
	void ClearDamageReceived();
	void ClearDamageInflicted();
	void ClearAllHistory();
	void CleanupHistory(float MaxDuration, bool bInflictedHistory, bool bDamageHistory, bool bHealHistory);
	void AddToHistory(class AActor* DamagedActor, float Damage, class AController* EventInstigator, class AActor* DamageCauser, const struct FDamageEvent& DamageEvent, bool bInflictedHistory);
	bool ActorInHistory(class AActor* Act, float TimeLimit, bool bInflictedHistory, bool bDamageHistory);
};


// Class PWND.PwndDamageType
// 0x0010 (0x0050 - 0x0040)
class UPwndDamageType : public UDamageType
{
public:
	bool                                               bDirect;                                                  // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInstaKill;                                               // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInstaGib;                                                // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInstaRespawn;                                            // 0x0043(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInstaPwn;                                                // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInstaPwnStack;                                           // 0x0045(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockedByShieldActor;                                    // 0x0046(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeDamageElement>                       Element;                                                  // 0x0047(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageIndicatorWidget;                                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDamageType");
		return ptr;
	}


	class UPwndDamageType* STATIC_GetPwndDamageType(class UClass* DamageTypeClass, bool* bValid);
};


// Class PWND.PwndDamageType_AOE
// 0x0000 (0x0050 - 0x0050)
class UPwndDamageType_AOE : public UPwndDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDamageType_AOE");
		return ptr;
	}

};


// Class PWND.PwndDamageType_Direct
// 0x0000 (0x0050 - 0x0050)
class UPwndDamageType_Direct : public UPwndDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDamageType_Direct");
		return ptr;
	}

};


// Class PWND.PwndDamageType_DOT
// 0x0000 (0x0050 - 0x0050)
class UPwndDamageType_DOT : public UPwndDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDamageType_DOT");
		return ptr;
	}

};


// Class PWND.PwndDamageType_ShieldPanelBleed
// 0x0000 (0x0050 - 0x0050)
class UPwndDamageType_ShieldPanelBleed : public UPwndDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDamageType_ShieldPanelBleed");
		return ptr;
	}

};


// Class PWND.PwndDOTComponent
// 0x1360 (0x1530 - 0x01D0)
class UPwndDOTComponent : public UActorComponent
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x01D0(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x01E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
	struct FPwndDOTRepNonDamage                        RepNonDamage;                                             // 0x01E8(0x1238) (Edit)
	float                                              IntervalTimer;                                            // 0x1420(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x1424(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DurationTimer;                                            // 0x1428(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DelayTimer;                                               // 0x142C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttachedTime;                                             // 0x1430(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RealAttachedTime;                                         // 0x1434(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPwndPostProcessEffect                      PostProcessEffect_FP;                                     // 0x1438(0x0040) (Edit)
	struct FPwndPostProcessEffect                      PostProcessEffect_TP;                                     // 0x1478(0x0040) (Edit)
	TArray<struct FPwndDOTThirdPersonFX>               ThirdPersonFXs;                                           // 0x14B8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPwndDOTFirstPersonFX>               FirstPersonFXs;                                           // 0x14C8(0x0010) (Edit, ZeroConstructor)
	class AController*                                 DOTEventInstigator;                                       // 0x14D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      DOTDamageCauser;                                          // 0x14E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APwndWeapon*                                 DOTInstigatorWeapon;                                      // 0x14E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      DOTWeaponArchetype;                                       // 0x14F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOwnerFirstPerson;                                        // 0x14F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOwnerMeshVisible;                                        // 0x14F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x14FA(0x0006) MISSED OFFSET
	struct FGUTSAttributeModifierAccumulator           GUTSAccumulator;                                          // 0x1500(0x0020) (Transient)
	TArray<class UParticleSystemComponent*>            FXComponents;                                             // 0x1520(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDOTComponent");
		return ptr;
	}


	void Retune();
	void OnTuneShield(class APwndShield* Shield);
	void OnTuneProjectile(class APwndProjectile* Projectile);
	void OnTuneInventory(class APwndInventory* Inv);
	void OnTuneDOT(class UPwndDOTComponent* DOT);
	void OnTuneCharacter(class APwndCharacter* Char);
	void OnTuneAOE(class APwndAOE* AOE);
	void OnRetune();
	void OnResetTuning();
	void OnPostRetune();
	void OnOwnerFirstPersonChanged(bool bFirstPerson, bool bMeshVisible);
	class UPwndDOTComponent* ModifyRepNonDamage(const struct FPwndDOTRepNonDamageAttribute& Attr, float PreMul, float Add, float PostMul);
	struct FPwndDOTRepNonDamage K2ReadRepNoneDOTDamage();
	float GetTimeLeft();
	class UMaterialInstanceDynamic* GetPostProcessEffectInst(bool bFirstPerson);
};


// Class PWND.PwndDropShadowComponent
// 0x0000 (0x09B0 - 0x09B0)
class UPwndDropShadowComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDropShadowComponent");
		return ptr;
	}

};


// Class PWND.PwndDynamicAttributeComponent
// 0x0060 (0x0230 - 0x01D0)
class UPwndDynamicAttributeComponent : public UActorComponent
{
public:
	struct FDynamicAttributeComponentTuning            RepNonTuning;                                             // 0x01D0(0x0020) (Edit)
	int                                                Value;                                                    // 0x01F0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReplicatedMaxValue;                                       // 0x01F4(0x0004) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReplicatedBoost;                                          // 0x01F8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RegenFraction;                                            // 0x01FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              RegenTimer;                                               // 0x0200(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	TArray<struct FDecayINT>                           ExternRegens;                                             // 0x0208(0x0010) (ZeroConstructor)
	TArray<struct FDecayINT>                           ExternBoosts;                                             // 0x0218(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndDynamicAttributeComponent");
		return ptr;
	}


	int SetAttrPct(float Pct);
	int SetAttr(int NewValue, bool bInitial);
	void RemoveAllRegens();
	void RemoveAllBoostsAndRegens();
	void RemoveAllBoosts();
	struct FDynamicAttributeComponentTuning K2ReadRepNoneTuning();
	int IncAttr(int amount);
	int GetTotalValue();
	float GetTotalPercent();
	float GetServerTimeStamp();
	float GetPercent();
	int GetMax();
	int GetBoost();
	int DecAttr(int amount);
	int AlterAttr(int amount);
	void AddRegen(const struct FDecayINT& Regen);
	bool AddBoost(const struct FDecayINT& Boost, bool bApplyToValueFirst);
};


// Class PWND.PwndEditableText
// 0x0020 (0x04C8 - 0x04A8)
class UPwndEditableText : public UEditableText
{
public:
	struct FScriptMulticastDelegate                    OnKeyPressed;                                             // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndEditableText");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnKeyPressedEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FText GetText();
};


// Class PWND.PwndEndOfMatchSequence
// 0x00C8 (0x0450 - 0x0388)
class APwndEndOfMatchSequence : public AActor
{
public:
	class UUI_EndOfMatchLoadout*                       LoadoutWidget;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UArrowComponent*>                     PlayerSpawnArrows;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class UArrowComponent*                             GameWinnerSpawnArrow;                                     // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             GameWinnerPwneeSpawnArrow;                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   MusicLoop;                                                // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class APwndPlayerState*>                    BestPlayerStates;                                         // 0x03B8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<class APwndCharacter*>                      BestCharacters;                                           // 0x03C8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class APwndPlayerState*                            GameWinnerPS;                                             // 0x03D8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class APwndPlayerState*                            GameWinnerPwneePS;                                        // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class APwndCharacter*                              GameWinnerChar;                                           // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class APwndCharacter*                              GameWinnerPwneeChar;                                      // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              InitialWaitTime;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalPwningAnimPlaybackTime;                              // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShowRankedPlayersTime;                                    // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugShowRankedPlayersTime;                               // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FailureTimeout;                                           // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SequenceTimeElapsed;                                      // 0x040C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSequenceInProgress;                                      // 0x0410(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDoneShowingRankings;                                     // 0x0411(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EEndOfMatchSequenceStage>              Stage;                                                    // 0x0412(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EEndOfMatchPwningAnimStage>            PwningAnimStage;                                          // 0x0413(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PwnAnimTimer;                                             // 0x0414(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class APwndFX*                                     PwnInteractionFX;                                         // 0x0418(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FInteractionChainEntry>              PwnInteractionChain;                                      // 0x0420(0x0010) (ZeroConstructor, Transient)
	float                                              CumulativeAnimDuration;                                   // 0x0430(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              IntroAnimTime;                                            // 0x0434(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             MusicLoopComp;                                            // 0x0438(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bDebugEndOfMatch;                                         // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	float                                              DebugMatchSetUpTimer;                                     // 0x0444(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSequenceEnabled;                                         // 0x0448(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0449(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndEndOfMatchSequence");
		return ptr;
	}


	void OnMatchStateChanged(class APwndGameState* GameState, const struct FName& MatchState);
	void OnEndOfMatchWinningPwn();
	void OnEndOfMatchStarted();
	void OnEndOfMatchShowRankings();
	void OnEndOfMatchShowLoadouts();
	struct FVector AdjustGameWinnerCameraLocation(const struct FVector& OldLocation);
};


// Class PWND.PwndFOVIndependentParticleSystemComponent
// 0x0010 (0x0AA0 - 0x0A90)
class UPwndFOVIndependentParticleSystemComponent : public UParticleSystemComponent
{
public:
	float                                              ComponentFOV;                                             // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0A94(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndFOVIndependentParticleSystemComponent");
		return ptr;
	}

};


// Class PWND.PwndFX
// 0x0008 (0x0390 - 0x0388)
class APwndFX : public AActor
{
public:
	unsigned char                                      TeamNum;                                                  // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoActivate;                                            // 0x0389(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // 0x038A(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFXActive;                                                // 0x038B(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFXFinished;                                              // 0x038C(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x038D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndFX");
		return ptr;
	}


	void StopAttachedCameraShake(class UCameraShake* ShakeInstance, bool bImmediately);
	class UDecalComponent* STATIC_SpawnRandomDecal(TArray<class UMaterialInterface*> Materials, const struct FTransform& InTransform, const struct FVector& DecalSize, float DecalRotation, float FadeDelay, float FadeDuration, int SortOrder, class AActor* InSpawner, float SurfaceSearchDist, float SurfaceDecalSpawnDepth, bool bUseVisualGeometry);
	class UDecalComponent* SpawnLocalRandomDecal(TArray<class UMaterialInterface*> Materials, const struct FRVector2DExp& DecalSize, const struct FRFloat& DecalRotation, const struct FRFloatExp& FadeDelay, const struct FRFloatExp& FadeDuration, int SortOrder, float SurfaceSearchDist, bool bForceSquare, float DecalDepth, float SurfaceDecalSpawnDepth, bool bUseVisualGeometry);
	class UDecalComponent* SpawnLocalDecalFromDB(class UClass* FXDBClass, const struct FName& Type, const struct FRVector2DExp& DecalSize, const struct FRFloat& DecalRotation, const struct FRFloatExp& FadeDelay, const struct FRFloatExp& FadeDuration, int SortOrder, float SurfaceSearchDist, bool bForceSquare, float DecalDepth, float SurfaceDecalSpawnDepth, bool bUseVisualGeometry);
	class UDecalComponent* SpawnLocalDecal(class UMaterialInterface* Material, const struct FRVector2DExp& DecalSize, const struct FRFloat& DecalRotation, const struct FRFloatExp& FadeDelay, const struct FRFloatExp& FadeDuration, int SortOrder, float SurfaceSearchDist, bool bForceSquare, float DecalDepth, float SurfaceDecalSpawnDepth, bool bUseVisualGeometry);
	class APwndFX* STATIC_SpawnFX(class UClass* FXClass, const struct FTransform& InTransform, bool bShouldAutoDestroy, class AActor* InSpawner, class APawn* InInstigator, unsigned char InTeamNum, class AActor* InAttachActor, class USceneComponent* InAttachComponent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> InAttachLocationType);
	class UDecalComponent* STATIC_SpawnDecalFromDB(class UClass* FXDBClass, const struct FName& Type, const struct FTransform& InTransform, const struct FVector& DecalSize, float DecalRotation, float FadeDelay, float FadeDuration, int SortOrder, class AActor* InSpawner, float SurfaceSearchDist, float SurfaceDecalSpawnDepth, bool bUseVisualGeometry);
	class UDecalComponent* STATIC_SpawnDecal(class UMaterialInterface* Material, const struct FTransform& InTransform, const struct FVector& DecalSize, float DecalRotation, float FadeDelay, float FadeDuration, int SortOrder, class AActor* InSpawner, float SurfaceSearchDist, float SurfaceDecalSpawnDepth, bool bUseVisualGeometry);
	void SetTeamNum(unsigned char NewTeamNum);
	void SetMeshAlpha(float Alpha);
	void STATIC_SetCompChildrenVisible(class USceneComponent* Parent, bool bVisible, bool bIncludeParent);
	void STATIC_SetCompChildrenActive(class USceneComponent* Parent, bool bActive, bool bReset, bool bIncludeParent);
	void SetChildrenActive(class USceneComponent* Parent, bool bActive, bool bReset, bool bIncludeParent);
	void SetActive(bool bIsActive);
	void PostVector(const struct FName& Name, const struct FVector& Vec);
	void PostRotator(const struct FName& Name, const struct FRotator& Rot);
	void PostObject(const struct FName& Name, class UObject* Object);
	void PostInteractionChain(const struct FInteractionChainEntry& Chain);
	void PostInt(const struct FName& Name, int Num);
	void PostFloat(const struct FName& Name, float Num);
	void PostEvent(const struct FName& Name);
	void PostBool(const struct FName& Name, bool val);
	class UCameraShake* PlayAttachedCameraShake(class UClass* ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot, bool bUseInteractionTarget);
	void OnSetTeamNum(unsigned char OldTeamNum, unsigned char NewTeamNum);
	void OnSetMeshAlpha(float Alpha);
	void OnSetActive(bool bIsActive);
	void OnPostVector(const struct FName& Name, const struct FVector& Vec);
	void OnPostRotator(const struct FName& Name, const struct FRotator& Rot);
	void OnPostObject(const struct FName& Name, class UObject* Object);
	void OnPostInteractionChain(const struct FInteractionChainEntry& Chain);
	void OnPostInt(const struct FName& Name, int Num);
	void OnPostFloat(const struct FName& Name, float Num);
	void OnPostEvent(const struct FName& Name);
	void OnPostBool(const struct FName& Name, bool val);
	bool IsFinished();
	bool IsActive();
	float GetServerTimeStamp();
	class APwndPlayerController* GetAttachedPC();
	class APwndPlayerController* GetAttachedInteractionPC();
	class APwndCharacter* GetAttachedInteractionChar();
	class APwndCharacter* GetAttachedChar();
};


// Class PWND.PwndFXDatabase
// 0x0050 (0x0078 - 0x0028)
class UPwndFXDatabase : public UObject
{
public:
	TMap<struct FName, struct FPwndFXDatabaseEntryArr> FXMap;                                                    // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndFXDatabase");
		return ptr;
	}


	class UAudioComponent* STATIC_SpawnSound(class UObject* WorldContextObject, const struct FPwndFXDatabaseEntry& Entry, const struct FTransform& InTransform, class AActor* InAttachActor, class USceneComponent* InAttachComponent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> InAttachLocationType);
	class APwndFX* STATIC_SpawnPwndFX(const struct FPwndFXDatabaseEntry& Entry, const struct FTransform& InTransform, bool bShouldAutoDestroy, class AActor* InSpawner, class APawn* InInstigator, unsigned char InTeamNum, class AActor* InAttachActor, class USceneComponent* InAttachComponent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> InAttachLocationType);
	class UParticleSystemComponent* STATIC_SpawnParticleSys(class UObject* WorldContextObject, const struct FPwndFXDatabaseEntry& Entry, const struct FTransform& InTransform, bool bShouldAutoDestroy, class AActor* InAttachActor, class USceneComponent* InAttachComponent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> InAttachLocationType);
	class UDecalComponent* STATIC_SpawnDecal(const struct FPwndFXDatabaseEntry& Entry, const struct FTransform& InTransform, class AActor* InSpawner, const struct FVector& DecalSize, float DecalRotation, float DecalFadeDelay, float DecalFadeDuration, int DecalSortOrder, float DecalSurfaceSearchDist, float DecalSpawnDepth);
	TArray<class UObject*> STATIC_SpawnAllFX(const struct FPwndFXDatabaseEntry& Entry, const struct FTransform& InTransform, bool bShouldAutoDestroy, class AActor* InSpawner, class APawn* InInstigator, unsigned char InTeamNum, class AActor* InAttachActor, class USceneComponent* InAttachComponent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> InAttachLocationType, const struct FVector& DecalSize, float DecalRotation, float DecalFadeDelay, float DecalFadeDuration, int DecalSortOrder, float DecalSurfaceSearchDist, float DecalSpawnDepth);
	struct FPwndFXDatabaseEntry FindFXByHit(const struct FName& Type, const struct FHitResult& Hit);
	struct FPwndFXDatabaseEntry FindFXByClass(const struct FName& Type, class UClass* Key);
	struct FPwndFXDatabaseEntry FindFX(const struct FName& Type, class UObject* Key);
	struct FPwndFXDatabaseEntry STATIC_DBFindFXByHit(class UClass* FXDBClass, const struct FName& Type, const struct FHitResult& Hit);
	struct FPwndFXDatabaseEntry STATIC_DBFindFXByClass(class UClass* FXDBClass, const struct FName& Type, class UClass* Key);
	struct FPwndFXDatabaseEntry STATIC_DBFindFX(class UClass* FXDBClass, const struct FName& Type, class UObject* Key);
};


// Class PWND.PwndGameEngine
// 0x0000 (0x0D50 - 0x0D50)
class UPwndGameEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameEngine");
		return ptr;
	}

};


// Class PWND.PwndGameInstance
// 0x0130 (0x0220 - 0x00F0)
class UPwndGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET
	class UUserWidget*                                 gHUD_Chat;                                                // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPwndNetworkManager*                         PwndNetworkManagerInst;                                   // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPwndLocalInventory*                         PwndLocalInventoryInst;                                   // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPwndPersistentData*                         PwndPersistentDataInst;                                   // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      LoadingScreenWidget;                                      // 0x0130(0x0008) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMonkeyModeHUD;                                           // 0x0138(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMonkeyModeTags;                                          // 0x0139(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	int                                                MonkeyMode;                                               // 0x013C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeBotDifficulty>                       MonkeyModeDifficulty;                                     // 0x0140(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	int                                                MonkeySmartQueueMode;                                     // 0x0144(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     MonkeyRegion;                                             // 0x0148(0x0010) (ZeroConstructor, Transient)
	int                                                MonkeyGroup;                                              // 0x0158(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MonkeyGroupCount;                                         // 0x015C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MonkeyGroupSize;                                          // 0x0160(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MonkeyGroupSpreadTime;                                    // 0x0164(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MonkeyMinPlayers;                                         // 0x0168(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MonkeyMaxPlayers;                                         // 0x016C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MonkeyWaitTime;                                           // 0x0170(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MonkeyWaitTimeResetTime;                                  // 0x0174(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     MonkeyUserName;                                           // 0x0178(0x0010) (ZeroConstructor, Transient)
	struct FString                                     MonkeyDisplayName;                                        // 0x0188(0x0010) (ZeroConstructor, Transient)
	int                                                MonkeyModeLoops;                                          // 0x0198(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MonkeyModeLoopCounter;                                    // 0x019C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInsideLevelLoad;                                         // 0x01A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEndLoadingScreenRequested;                               // 0x01A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x16];                                      // 0x01A2(0x0016) MISSED OFFSET
	TArray<class UObject*>                             PreloadedObjects;                                         // 0x01B8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGuid>                               PreloadedGuids;                                           // 0x01C8(0x0010) (ZeroConstructor, Transient)
	int                                                PreloadedGuidCounter;                                     // 0x01D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2C];                                      // 0x01DC(0x002C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVoipTalking;                                            // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameInstance");
		return ptr;
	}


	bool ShouldShowMonkeyTags();
	bool ShouldDrawMonkeyModeHUD();
	void SetMonkeyMode(int NewMonkeyMode, int NumLoops, TEnumAsByte<EeBotDifficulty> NewMonkeyModeDifficulty);
	void PreLoadMap(const struct FString& MapName);
	void PostLoadMap(class UWorld* World);
	void OnNetworkManagerPlayerIsTalking(bool isTalking, const struct FString& UserID);
	bool IsSmartMonkeyMode();
	bool IsMonkeyMode();
	class UPwndPersistentData* GetPwndPersistentData();
	class UPwndNetworkManager* GetPwndNetworkManager();
	class UPwndLocalInventory* GetPwndLocalInventory();
	TEnumAsByte<EeBotDifficulty> GetMonkeyModeDifficulty();
	int GetMonkeyMode();
	void EndLoadingScreen();
	void BeginLoadingScreen(const struct FString& MapName);
};


// Class PWND.PwndGameMode
// 0x0480 (0x08D8 - 0x0458)
class APwndGameMode : public AGameMode
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0458(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0468(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0469(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x046A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x046B(0x0001) MISSED OFFSET
	int                                                MaxTeamSize;                                              // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumTeams;                                              // 0x0470(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GoalScore;                                                // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MatchDurationSeconds;                                     // 0x0478(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              OvertimeMaxDurationSeconds;                               // 0x047C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ScorePerBounty;                                           // 0x0480(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PwnBountyMultiplier;                                      // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxIndividualScore;                                       // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ScorePerKillBounty;                                       // 0x048C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxIndividualKillScore;                                   // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ScorePerReviveBounty;                                     // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxIndividualReviveScore;                                 // 0x0498(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAdditiveBountyRankMultiplier;                          // 0x049C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAdditivePwnMultiplier;                                 // 0x04A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank1;                                              // 0x04A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank2;                                              // 0x04A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank3;                                              // 0x04AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank4;                                              // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank5;                                              // 0x04B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank6;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank7;                                              // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank8;                                              // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                BountyRank9;                                              // 0x04C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank1;                                          // 0x04C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank2;                                          // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank3;                                          // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank4;                                          // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank5;                                          // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank6;                                          // 0x04DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank7;                                          // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank8;                                          // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                KillBountyRank9;                                          // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank1;                                        // 0x04EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank2;                                        // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank3;                                        // 0x04F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank4;                                        // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank5;                                        // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank6;                                        // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank7;                                        // 0x0504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank8;                                        // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReviveBountyRank9;                                        // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PwnRespawnTimeMul;                                        // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ReviveDurationMul;                                        // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PwnageDurationMul;                                        // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalRatingMultiplier;                                   // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RankUpHealthPct;                                          // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWinningTeamCompletesActions;                             // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPwnEnabled;                                              // 0x0525(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPwnBodyStacksEnabled;                                    // 0x0526(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0527(0x0001) MISSED OFFSET
	int                                                PwnBodyStackStart;                                        // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPwnNeutralStacksEnabled;                                 // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPwnHybridNeutralStacksEnabled;                           // 0x052D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x052E(0x0002) MISSED OFFSET
	int                                                PwnNeutralStackStart;                                     // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScoringPwnCanEndGame;                                    // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScoringKillCanEndGame;                                   // 0x0535(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScoringReviveCanEndGame;                                 // 0x0536(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0537(0x0001) MISSED OFFSET
	int                                                MaxPwnBounty;                                             // 0x0538(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPwnStackBounty;                                        // 0x053C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPwnNeutralStackBounty;                                 // 0x0540(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPwnStackSize;                                          // 0x0544(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPwnNeutralStackSize;                                   // 0x0548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxInstantPwnBounty;                                      // 0x054C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInstantPwnUseCoreBounty;                                 // 0x0550(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInstantPwnIgnoreModifiers;                               // 0x0551(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipWarmup;                                              // 0x0552(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableWarmupInEditor;                                    // 0x0553(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              WarmupTimeWaiting;                                        // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              WarmupTimeEveryoneConnected;                              // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RewardSpawnTime;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSpawnedRewards;                                        // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	TArray<class UClass*>                              RewardPickups;                                            // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)
	float                                              MatchEndedRestartTime;                                    // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              OverTimePwnClock;                                         // 0x057C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              NoConnectKillServerTimeout;                               // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AllDisconnectedKillServerTimeout;                         // 0x0584(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ImbalancedTeamKillServerTimeout;                          // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LowTeamCountKillServerTimeout;                            // 0x058C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              EmptyTeamKillServerTimeout;                               // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeToExitWithoutPenaltyTimeout;                          // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnnouncerClass;                                           // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScoreboardWidgetClass;                                    // 0x05A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TeamImbalanceHealthCompensation;                          // 0x05A8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowReplacementPlayerBots;                              // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	int                                                PlayerBotAutoFillSize;                                    // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerBotDifficulty;                                      // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                ReplacementPlayerBotDifficulty;                           // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableGameplayEventsInEditor;                            // 0x05BC(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnablePlatformTelemetryInEditor;                         // 0x05BD(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableStatCSVInEditor;                                   // 0x05BE(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableImbalancedTeamLogicEditor;                         // 0x05BF(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FPwndLoadout                                SPLoadout;                                                // 0x05C0(0x00B0) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayText;                                              // 0x0670(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0688(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayObjective;                                         // 0x06A0(0x0018) (Edit, DisableEditOnInstance)
	class UTexture2D*                                  DisplayIcon;                                              // 0x06B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SortGroup;                                                // 0x06C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ChallengeModeNumber;                                      // 0x06C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForceFakeLobby;                                          // 0x06C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAnyoneEverConnected;                                     // 0x06C9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAnyoneEverFullyConnected;                                // 0x06CA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3D];                                      // 0x06CB(0x003D) MISSED OFFSET
	float                                              TimeSpentWaitingForEndOfMatchRunnables;                   // 0x0708(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	TArray<struct FPlayerInfoDynamicLinkage>           AllPlayerLinkages;                                        // 0x0710(0x0010) (ZeroConstructor, Transient)
	struct FName                                       MatchSubState;                                            // 0x0720(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APwndAnnouncer*                              Announcer;                                                // 0x0728(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APwndPwnStampDecal*>                  ActiveDecals;                                             // 0x0730(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPwndPendingRespawn>                 PendingRespawns;                                          // 0x0740(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPwnStack>                           PwnStacks;                                                // 0x0750(0x0010) (ZeroConstructor, Transient)
	class APlayerStart*                                LastPlayerStartSpot;                                      // 0x0760(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerStart*                                LastStartSpot;                                            // 0x0768(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MatchStartTimeStamp;                                      // 0x0770(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MatchEndTimeStamp;                                        // 0x0774(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EndGameTimeStamp;                                         // 0x0778(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              KillServerTimeStamp;                                      // 0x077C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastMatchUpdateTelemetryTimeStamp;                        // 0x0780(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EndGameReason>                         ReasonForEndGame;                                         // 0x0784(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0785(0x0003) MISSED OFFSET
	class APwndTeamInfo*                               EndGameWinningTeam;                                       // 0x0788(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APwndPlayerState*                            EndGameWinner;                                            // 0x0790(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      EndGameScoreActor;                                        // 0x0798(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APwndPickup*>                         SpawnedRewardPickups;                                     // 0x07A0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPendingReward>                      PendingRewards;                                           // 0x07B0(0x0010) (ZeroConstructor, Transient)
	float                                              MatchEndedRestartTimer;                                   // 0x07C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MatchEndedTimer;                                          // 0x07C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       SDICallbackState;                                         // 0x07C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSDICallbackSucceeded;                                    // 0x07D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	TArray<struct FPlayerInfo>                         PlayerInfos;                                              // 0x07D8(0x0010) (ZeroConstructor, Transient)
	class UPwndGameplayEvents*                         PwndGameplayEventsWriter;                                 // 0x07E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FPwndAmazonS3>                       PendingUploads;                                           // 0x07F0(0x0010) (ZeroConstructor, Transient)
	float                                              TimeSpentWaitingForPendingUploads;                        // 0x0800(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0804(0x0004) MISSED OFFSET
	TArray<struct FString>                             BotNames;                                                 // 0x0808(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<int>                                        BotNameFreeIndices;                                       // 0x0818(0x0010) (ZeroConstructor, Transient)
	struct FServerOption                               ServerOptions;                                            // 0x0828(0x00B0) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameMode");
		return ptr;
	}


	void SwapLevelActorTeams();
	bool StartRevive(class AController* ReviverCtrl, class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	bool StartPwnage(class AController* PwnerCtrl, class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	bool StartHumiliation(class AController* HumiliatorCtrl, class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	bool StartCarry(class AController* CarrierCtrl, class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn);
	class APwndCharacter* SpawnPwnable(const struct FVector& Location, const struct FRotator& Rotation, TArray<class UClass*> BodyClasses, int StackSize, int OverrideBounty, int TeamNum, float OverrideDuration, bool bAllowNeutral, bool bAllowHybridNeutral, class APwndAIController** SpawnedController);
	bool ShouldSendTelemetry();
	void SetSPLoadout(const struct FPwndLoadout& Loadout);
	void SetReviveDurationMul(float Mul);
	void SetPwnRespawnTimeMul(float Mul);
	void SetPwnageDurationMul(float Mul);
	void SetMatchSubState(const struct FName& NewState);
	bool ScorePwnage(class AController* PwnerCtrl, class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, bool bInstant);
	void ResetMatchTimeRemaining();
	void RemoveBot(const struct FString& Char);
	float RatePlayerStart(class APlayerStart* P, unsigned char Team, class AController* Player, bool bPrimaryStartDesired);
	void PwnZoneRemoved(class APwndPwnZone* PwnZone);
	void PwnZoneDeactivated(class APwndPwnZone* Zone);
	void PwnZoneAdded(class APwndPwnZone* PwnZone);
	void PwnZoneActivated(class APwndPwnZone* Zone);
	void PlayerStartRemoved(class APwndPlayerStart* PlayerStart);
	void PlayerStartAdded(class APwndPlayerStart* PlayerStart);
	void PickupSpawned(class APwndPickupFactory* PickupFactory, class APwndPickup* Pickup);
	void PickupRemoved(class APwndPickup* Pickup);
	void PickupPickedUpBy(class APwndPickup* Pickup, class AActor* Other);
	void PickupFactoryRemoved(class APwndPickupFactory* PickupFactory);
	void PickupFactoryAdded(class APwndPickupFactory* PickupFactory);
	void PickupDropped(class APwndCharacter* DroppedFrom, class APwndPickup* Pickup);
	void PickupDestroyed(class APwndPickup* Pickup);
	void PickupAdded(class APwndPickup* Pickup);
	void OnTuneShield(class APwndShield* Shield);
	void OnTuneProjectile(class APwndProjectile* Projectile);
	void OnTuneInventory(class APwndInventory* Inv);
	void OnTuneDOT(class UPwndDOTComponent* DOT);
	void OnTuneCharacter(class APwndCharacter* Char);
	void OnTuneAOE(class APwndAOE* AOE);
	void OnMatchSubStateSet();
	bool IsMatchInWarmup();
	bool IsMatchFullyInProgress();
	bool STATIC_IsLocalEnemyTeam(unsigned char teamIndex);
	bool STATIC_IsLocalEnemy(class UObject* A);
	bool STATIC_IsLocalAllyTeam(unsigned char teamIndex);
	bool STATIC_IsLocalAlly(class UObject* A);
	bool STATIC_IsEnemyTeamInfo(class APwndTeamInfo* A, class APwndTeamInfo* B);
	bool STATIC_IsEnemyTeam(unsigned char A, unsigned char B);
	bool STATIC_IsEnemyPSTeam(class APlayerState* A, unsigned char teamIndex);
	bool STATIC_IsEnemyPS(class APlayerState* A, class APlayerState* B);
	bool STATIC_IsEnemy(class UObject* A, class UObject* B);
	bool STATIC_IsAllyTeamInfo(class APwndTeamInfo* A, class APwndTeamInfo* B);
	bool STATIC_IsAllyTeam(unsigned char A, unsigned char B);
	bool STATIC_IsAllyPSTeam(class APlayerState* A, unsigned char teamIndex);
	bool STATIC_IsAllyPS(class APlayerState* A, class APlayerState* B);
	bool STATIC_IsAlly(class UObject* A, class UObject* B);
	void HealTaken(class AActor* HealedActor, float Healing, class AController* EventInstigator, class AActor* HealCauser, const struct FPwndHealEvent& HealEvent);
	struct FPwndLoadout GetSPLoadout();
	float GetServerTimeStamp();
	struct FName GetMatchSubState();
	class APwndTeamInfo* GetLeadingTeam(class APwndPlayerState* Scorer, int* LeadingScore);
	struct FPwndLoadout STATIC_GetDefaultLoadout();
	int GetAllPwndPlayerStates(TArray<class APwndPlayerState*>* PSArr);
	bool ForceTeamSpawns();
	void ForceRespawnAllPlayers(float Timer, bool bStartupSpawn);
	void EndGame(TEnumAsByte<EndGameReason> Reason, class APwndTeamInfo* WinningTeam, class APwndPlayerState* Winner, class AActor* ScoreActor);
	void Died(class APawn* KilledPawn, int PreDeathHealth, const struct FPwndDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void DestroyGameplayActors();
	void DamageTaken(class AActor* DamagedActor, float Damage, class AController* EventInstigator, class AActor* DamageCauser, const struct FPwndDamageEvent& DamageEvent);
	struct FPwndTelemetryEvent CreateTelemetryEvent(const struct FString& Type, class APwndPlayerState* PS, bool bFullPSData);
	float ComputeReviveDuration(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	int ComputeReviveBountyRank(int Rank);
	int ComputeReviveBounty(class APwndCharacter* RevivedChar, class APwndPlayerState* PS);
	float ComputeRespawnTime(class APwndCharacter* KilledChar, class APwndPlayerState* PS, int Bounty, int StackSize, const struct FPwndDamageEvent& DamageEvent);
	float ComputePwnageDuration(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	int ComputeKillBountyRank(int Rank);
	int ComputeKillBounty(class APwndCharacter* KilledChar, class APwndPlayerState* PS);
	float ComputeHumiliationDuration(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	int ComputeCoreBountyRank(int Rank);
	int ComputeCoreBounty(class APwndCharacter* KilledChar, class APwndPlayerState* PS);
	int ComputeBounty(class APwndCharacter* KilledChar, class APwndPlayerState* PS, int* StackSize);
	bool CompleteReviveSelf(class AController* RevivedCtrl, class APwndCharacter* RevivedPawn);
	bool CompleteRevive(class AController* ReviverCtrl, class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	bool CompleteHumiliation(class AController* HumiliatorCtrl, class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void CheckScores(class APwndTeamInfo* ScoringTeam, class APwndPlayerState* Scorer, class AActor* ScoreActor);
	bool CanStartRevive(class AController* ReviverCtrl, class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	bool CanStartPwnage(class AController* PwnerCtrl, class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	bool CanStartHumiliation(class AController* HumiliatorCtrl, class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	bool CanStartCarry(class AController* CarrierCtrl, class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn);
	void CancelRevive(class AController* ReviverCtrl, class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn, bool bDenial, class APwndCharacter* DenyerPawn, const struct FPwndDamageEvent& DamageEvent, TArray<class AActor*> AssistActors);
	void CancelPwnage(class AController* PwnerCtrl, class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, class APwndCharacter* SaverPawn, bool bSaved, const struct FPwndDamageEvent& DamageEvent, TArray<class AActor*> AssistActors);
	void CancelHumiliation(class AController* HumiliatorCtrl, class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn, class APwndCharacter* SaverPawn, bool bSaved, const struct FPwndDamageEvent& DamageEvent, TArray<class AActor*> AssistActors);
	void CancelCarry(class AController* CarrierCtrl, class APwndCharacter* CarrierPawn, class APwndCharacter* CarriedPawn, class APwndCharacter* SaverPawn, bool bSaved, float ThrowPower, const struct FPwndDamageEvent& DamageEvent, TArray<class AActor*> AssistActors);
	struct FString STATIC_BuildMapGuidCommandline(const struct FGuid& MapGuid, const struct FGuid& GameModeGuid, const struct FString& PlayerName, const struct FPwndLoadout& SPPlayerLoadout, int BotAutoFillSize, TEnumAsByte<EeBotDifficulty> Difficulty);
	struct FString STATIC_BuildMapCommandline(const struct FString& MapName, class UClass* GameModeClass, const struct FString& PlayerName, const struct FPwndLoadout& SPPlayerLoadout, int BotAutoFillSize, TEnumAsByte<EeBotDifficulty> Difficulty);
	void AwardAccolades(TArray<class APwndPlayerState*> PSArr, bool bTeamBased);
	void AttemptEndGame(TEnumAsByte<EndGameReason> Reason, class APwndTeamInfo* WinningTeam, class APwndPlayerState* Winner, class AActor* ScoreActor);
	bool AreTeamsImbalanced(bool* bHasEmptyTeam, bool* bLowTeamCount, int* NumDisconnected);
	int ApplyScoreIncrement(class APwndTeamInfo* ScoringTeam, class APwndPlayerState* PS, int ScoreIncrement, class AActor* ScoreActor, const struct FString& ScoreType, bool bCanEndGame);
	int ApplyReviveScore(class APwndPlayerState* ReviverPS, class APwndPlayerState* RevivedPS, class APwndCharacter* RevivedChar);
	int ApplyPwnScore(class APwndPlayerState* PwnerPS, int BountyScore, class APwndCharacter* PwndPawn);
	int ApplyKillScore(class APwndPlayerState* KillerPS, class APwndPlayerState* KilledPS, class APwndCharacter* KilledChar);
	bool AnotherPlayerIsUsingPlayerStart(class APlayerStart* P, class AController* Player);
	bool STATIC_AllowHeal(class AActor* Attacker, class AActor* Target, class UClass* HealTypeClass);
	bool STATIC_AllowDamage(class AActor* Attacker, class AActor* Target, class UClass* DamageTypeClass);
	int AddScoreForTeamNum(unsigned char ScoringTeamNum, class APwndPlayerState* PS, int ScoreIncrement, class AActor* ScoreActor, const struct FString& ScoreType, bool bCanEndGame);
	int AddScoreForTeam(class APwndTeamInfo* ScoringTeam, class APwndPlayerState* PS, int ScoreIncrement, class AActor* ScoreActor, const struct FString& ScoreType, bool bCanEndGame);
	int AddScore(class APwndPlayerState* PS, int ScoreIncrement, class AActor* ScoreActor, const struct FString& ScoreType, bool bCanEndGame);
	bool AddRespawn(class AController* Ctrl, class APwndCharacter* OldChar, float Delay, float Timer, bool bStartupSpawn);
	class APwndAIControllerPlayer* AddBot(const struct FString& Char, TEnumAsByte<EeBotDifficulty> Difficulty);
};


// Class PWND.PwndGameMode_Pwn
// 0x0000 (0x08D8 - 0x08D8)
class APwndGameMode_Pwn : public APwndGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameMode_Pwn");
		return ptr;
	}

};


// Class PWND.PwndGameMode_Coins
// 0x0000 (0x08D8 - 0x08D8)
class APwndGameMode_Coins : public APwndGameMode_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameMode_Coins");
		return ptr;
	}

};


// Class PWND.PwndGameMode_CTF
// 0x0000 (0x08D8 - 0x08D8)
class APwndGameMode_CTF : public APwndGameMode_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameMode_CTF");
		return ptr;
	}

};


// Class PWND.PwndGameMode_Deathmatch
// 0x0000 (0x08D8 - 0x08D8)
class APwndGameMode_Deathmatch : public APwndGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameMode_Deathmatch");
		return ptr;
	}

};


// Class PWND.PwndGameMode_GoldenGun
// 0x0000 (0x08D8 - 0x08D8)
class APwndGameMode_GoldenGun : public APwndGameMode_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameMode_GoldenGun");
		return ptr;
	}

};


// Class PWND.PwndGameMode_PwnBall
// 0x0000 (0x08D8 - 0x08D8)
class APwndGameMode_PwnBall : public APwndGameMode_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameMode_PwnBall");
		return ptr;
	}

};


// Class PWND.PwndGameMode_PwnZone
// 0x0000 (0x08D8 - 0x08D8)
class APwndGameMode_PwnZone : public APwndGameMode_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameMode_PwnZone");
		return ptr;
	}

};


// Class PWND.PwndGameplayEvents
// 0x0338 (0x0360 - 0x0028)
class UPwndGameplayEvents : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	bool                                               bIsLogging;                                               // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              LoggingStartTimeStamp;                                    // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x280];                                     // 0x0080(0x0280) MISSED OFFSET
	struct FRFloat                                     TimeStampRange;                                           // 0x0300(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FBox                                        EventBounds;                                              // 0x030C(0x001C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FPwndTelemetryEvent                         CachedTelemetryEvent;                                     // 0x0328(0x0038) (BlueprintVisible, BlueprintReadOnly, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameplayEvents");
		return ptr;
	}


	void LogActorLocation(class AActor* Act, bool bSendTelemetry);
	float GetServerTimeStamp();
	float GetRelativeTimeStamp();
};


// Class PWND.PwndGameState
// 0x0220 (0x0608 - 0x03E8)
class APwndGameState : public AGameState
{
public:
	struct FName                                       MatchSubState;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FName                                       PreviousMatchSubState;                                    // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              RepServerTimeStamp;                                       // 0x03F8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RepServerTimeStampDelta;                                  // 0x03FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RepServerTimeStampDeltaRemaining;                         // 0x0400(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ServerTimeStamp;                                          // 0x0404(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MatchStartTimeStamp;                                      // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MatchEndTimeStamp;                                        // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              KillServerTimeStamp;                                      // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RepOverTimePwnClockTimeStamp;                             // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverTimePwnClockTimeStampAdvancing;                      // 0x0418(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	int                                                MaxTeamSize;                                              // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxNumTeams;                                              // 0x0420(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SafeToExitWithoutPenaltyTimeStamp;                        // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EndGameReason>                         ImminentReasonForEndGame;                                 // 0x0428(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x77];                                      // 0x0429(0x0077) MISSED OFFSET
	TArray<class APwndTeamInfo*>                       Teams;                                                    // 0x04A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	class APwndEndOfMatchSequence*                     EndOfMatchSequence;                                       // 0x04B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHACKShowPwnToWin;                                        // 0x04B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              RocketJumpHeightMultiplier;                               // 0x04BC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RocketJumpDistMultiplier;                                 // 0x04C0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowVariableGravity;                                    // 0x04C4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	float                                              GravityMultiplier;                                        // 0x04C8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HeatMultiplier;                                           // 0x04CC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GroundSpeedMultiplier;                                    // 0x04D0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnableCarryPenalties;                                    // 0x04D4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	struct FGuid                                       MatchGuid;                                                // 0x04D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, Transient, IsPlainOldData)
	int                                                GoalScore;                                                // 0x04E8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class APwndAnnouncer*                              Announcer;                                                // 0x04F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EndGameReason>                         ReasonForEndGame;                                         // 0x04F8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	class APwndTeamInfo*                               EndGameWinningTeam;                                       // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class APwndPlayerState*                            EndGameWinner;                                            // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      EndGameScoreActor;                                        // 0x0510(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ScoreboardWidgetClass;                                    // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMatchStateChanged;                                      // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchSubStateChanged;                                   // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameEnded;                                              // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              TimeSinceSafeToExitWithoutPenalty;                        // 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	TArray<class APwndPwnZone*>                        PwnZoneList;                                              // 0x0558(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndPwnZone*>                        ActivePwnZoneList;                                        // 0x0568(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndShield*>                         ShieldList;                                               // 0x0578(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndProjectile*>                     ProjectileList;                                           // 0x0588(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndAOE*>                            AOEList;                                                  // 0x0598(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndPickupFactory*>                  PickupFactoryList;                                        // 0x05A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndPickup*>                         PickupList;                                               // 0x05B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndTargetDummy*>                    TargetDummyList;                                          // 0x05C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndPlayerStart*>                    PlayerStartList;                                          // 0x05D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndPlayerStart*>                    ValidPlayerStartList;                                     // 0x05E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<class APwndPlayerStart*>                    EnabledPlayerStartList;                                   // 0x05F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameState");
		return ptr;
	}


	bool ShouldUsePSForTeamChecking(class UObject* A);
	bool ShouldEndOfMatchSequenceShowWinningPwnText();
	bool ShouldEndOfMatchSequenceShowVictoryText();
	bool OnSameTeam(class AActor* A, class AActor* B);
	void OnRep_ScoreboardWidgetClass();
	void OnRep_RepServerTimeStamp(float OldRepServerTimeStamp);
	void OnRep_MatchSubState();
	void OnRep_MatchState();
	void MultiCastGameEnded(TEnumAsByte<EndGameReason> Reason, class APwndTeamInfo* WinningTeam, class APwndPlayerState* Winner, class AActor* ScoreActor);
	TArray<class APwndPlayerStart*> K2GetAllValidPlayerStarts();
	TArray<class APwndTargetDummy*> K2GetAllTargetDummies();
	TArray<class APwndShield*> K2GetAllShields();
	TArray<class APwndPwnZone*> K2GetAllPwnZones();
	TArray<class APwndProjectile*> K2GetAllProjectiles();
	TArray<class APwndPlayerStart*> K2GetAllPlayerStarts();
	TArray<class APwndPickup*> K2GetAllPickups();
	TArray<class APwndPickupFactory*> K2GetAllPickupFactories();
	TArray<class APwndPlayerStart*> K2GetAllEnabledPlayerStarts();
	TArray<class APwndAOE*> K2GetAllAOEs();
	TArray<class APwndPwnZone*> K2GetAllActivePwnZones();
	bool IsTeamBased();
	bool IsSafeToExitWithoutPenalty();
	bool IsMatchInWarmup();
	bool IsMatchInProgress();
	bool IsMatchGettingReadyToStart();
	bool IsLocalEnemyTeam(unsigned char teamIndex);
	bool IsLocalEnemy(class UObject* A);
	bool IsLocalAllyTeam(unsigned char teamIndex);
	bool IsLocalAlly(class UObject* A);
	bool IsEnemyTeamInfo(class APwndTeamInfo* A, class APwndTeamInfo* B);
	bool IsEnemyTeam(unsigned char A, unsigned char B);
	bool IsEnemyPSTeam(class APlayerState* A, unsigned char teamIndex);
	bool IsEnemyPS(class APlayerState* A, class APlayerState* B);
	bool IsEnemy(class UObject* A, class UObject* B);
	bool IsEndOfMatchSequenceInProgress();
	bool IsAllyTeamInfo(class APwndTeamInfo* A, class APwndTeamInfo* B);
	bool IsAllyTeam(unsigned char A, unsigned char B);
	bool IsAllyPSTeam(class APlayerState* A, unsigned char teamIndex);
	bool IsAllyPS(class APlayerState* A, class APlayerState* B);
	bool IsAlly(class UObject* A, class UObject* B);
	bool HasMatchStarted();
	bool HasMatchEnded();
	float GetTimeSinceSafeToExitWithoutPenalty();
	class APwndTeamInfo* GetTeamByNum(unsigned char TeamNum);
	class APwndTeamInfo* GetTeam(int idx);
	class APlayerState* GetSpectatePlayerStateByIndex(int Index);
	float GetServerTimeStamp();
	float GetScoreStatus(class APlayerState* ContextPS, unsigned char* AllyTeamNum, unsigned char* EnemyTeamNum, int* OutGoalScore, TArray<float>* CurrentScores, TArray<float>* PotentialScores, TArray<float>* PotentialScoreProgress, TArray<float>* AvailableScores, bool* bAllyScoreInProgress, bool* bAllyPotentialWin, bool* bAllyAvailableWin, bool* bAllyOneScoreToWin, bool* bEnemyScoreInProgress, bool* bEnemyPotentialWin, bool* bEnemyAvailableWin, bool* bEnemyOneScoreToWin);
	float GetSafeToExitWithoutPenaltyTime();
	float GetPotentialScore(unsigned char teamIndex);
	int GetNumTeams();
	float GetMatchTimeRemaining(bool* bOvertime, bool* bPwnShotClock);
	float GetMatchTimeElapsed();
	float GetMatchRelativeTimeStamp();
	float GetMatchDuration();
	int GetGoalScore();
	class APwndEndOfMatchSequence* GetEndOfMatchSequence();
	struct FText GetDisplayText();
	struct FText GetDisplayObjective();
	struct FText GetDisplayDescription();
	float GetChargingScore(unsigned char teamIndex);
	float GetAvailableScore(unsigned char teamIndex);
	void GameStateInitted(class APwndGameMode* GameMode);
	bool AllowRevive(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	bool AllowPwn(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	bool AllowHumiliation(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	bool AllowHeal(class AActor* Attacker, class AActor* Target, class UClass* HealTypeClass);
	bool AllowDamage(class AActor* Attacker, class AActor* Target, class UClass* DamageTypeClass);
	bool AllowCarry(class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn);
};


// Class PWND.PwndGameState_Pwn
// 0x0000 (0x0608 - 0x0608)
class APwndGameState_Pwn : public APwndGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameState_Pwn");
		return ptr;
	}

};


// Class PWND.PwndGameState_Coins
// 0x0000 (0x0608 - 0x0608)
class APwndGameState_Coins : public APwndGameState_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameState_Coins");
		return ptr;
	}

};


// Class PWND.PwndGameState_CTF
// 0x0000 (0x0608 - 0x0608)
class APwndGameState_CTF : public APwndGameState_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameState_CTF");
		return ptr;
	}

};


// Class PWND.PwndGameState_Deathmatch
// 0x0000 (0x0608 - 0x0608)
class APwndGameState_Deathmatch : public APwndGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameState_Deathmatch");
		return ptr;
	}

};


// Class PWND.PwndGameState_GoldenGun
// 0x0000 (0x0608 - 0x0608)
class APwndGameState_GoldenGun : public APwndGameState_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameState_GoldenGun");
		return ptr;
	}

};


// Class PWND.PwndGameState_PwnBall
// 0x0000 (0x0608 - 0x0608)
class APwndGameState_PwnBall : public APwndGameState_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameState_PwnBall");
		return ptr;
	}

};


// Class PWND.PwndGameState_PwnZone
// 0x0000 (0x0608 - 0x0608)
class APwndGameState_PwnZone : public APwndGameState_Pwn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameState_PwnZone");
		return ptr;
	}

};


// Class PWND.PwndGameUserSettings
// 0x0350 (0x0458 - 0x0108)
class UPwndGameUserSettings : public UGameUserSettings
{
public:
	uint32_t                                           PwndVersion;                                              // 0x0108(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FSettingFloatData                           DisplayGamma;                                             // 0x010C(0x000C) (Config, IsPlainOldData)
	struct FSettingFloatData                           ColorContrast;                                            // 0x0118(0x000C) (Config, IsPlainOldData)
	int                                                GraphicsQuality;                                          // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FSettingFloatData                           Bloom;                                                    // 0x0128(0x000C) (Config, IsPlainOldData)
	struct FSettingFloatData                           DepthOfField;                                             // 0x0134(0x000C) (Config, IsPlainOldData)
	struct FSettingFloatData                           AmbientOcclusion;                                         // 0x0140(0x000C) (Config, IsPlainOldData)
	struct FSettingFloatData                           MotionBlur;                                               // 0x014C(0x000C) (Config, IsPlainOldData)
	int                                                LobbyCharacterQuality;                                    // 0x0158(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           FullScreenResolutionX;                                    // 0x015C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           FullScreenResolutionY;                                    // 0x0160(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           WindowedScreenResolutionX;                                // 0x0164(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           WindowedScreenResolutionY;                                // 0x0168(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	TArray<struct FIntPoint>                           WindowedResolutions;                                      // 0x0170(0x0010) (ZeroConstructor)
	TArray<struct FIntPoint>                           FullscreenResolutions;                                    // 0x0180(0x0010) (ZeroConstructor)
	struct FIntPoint                                   WindowedFullscreenResolution;                             // 0x0190(0x0008) (IsPlainOldData)
	struct FSettingFloatData                           MasterVolume;                                             // 0x0198(0x000C) (Config, IsPlainOldData)
	struct FSettingFloatData                           SFXVolume;                                                // 0x01A4(0x000C) (Config, IsPlainOldData)
	struct FSettingFloatData                           MusicVolume;                                              // 0x01B0(0x000C) (Config, IsPlainOldData)
	struct FSettingFloatData                           InGameVoiceVolume;                                        // 0x01BC(0x000C) (Config, IsPlainOldData)
	int                                                VoiceActivationMode;                                      // 0x01C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FSettingFloatData                           VoiceActivationThreshold;                                 // 0x01CC(0x000C) (Config, IsPlainOldData)
	bool                                               bAutoVoiceActivation;                                     // 0x01D8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FOptionsCache                               DefaultOptions;                                           // 0x01E0(0x0128) (Config)
	int                                                MatchCount;                                               // 0x0308(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                PrimaryAbilityUsedCount;                                  // 0x030C(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                SecondaryAbilityUsedCount;                                // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                PwnCount;                                                 // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                PwnDoublerUseCount;                                       // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                ReviveCount;                                              // 0x031C(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                CarryCount;                                               // 0x0320(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                CarryPwnCount;                                            // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                VerticalJumpCount;                                        // 0x0328(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                MovementAbilityUsedCount;                                 // 0x032C(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FName>                               ShownInGameTips;                                          // 0x0330(0x0010) (BlueprintVisible, ZeroConstructor, Config)
	class USoundClass*                                 MasterSoundClass;                                         // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 SFXSoundClass;                                            // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 MusicSoundClass;                                          // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 VoiceSoundClass;                                          // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundMix*                                   SoundMix;                                                 // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                AcceptedTOS;                                              // 0x0368(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bFilterChatEnabled;                                       // 0x036C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	struct FSettingFloatData                           FOV;                                                      // 0x0370(0x000C) (Config, IsPlainOldData)
	int                                                FrameRate;                                                // 0x037C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TMap<struct FGuid, struct FCharacterSettings>      CharacterSettingsData;                                    // 0x0380(0x0050) (ZeroConstructor, Config)
	struct FCharacterSettings                          AllCharacterSettingsData;                                 // 0x03D0(0x0058) (Config)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0428(0x0018) MISSED OFFSET
	int                                                TimesLeftLobby;                                           // 0x0440(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                GammaReflection;                                          // 0x0444(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int64_t                                            PST_GUID;                                                 // 0x0448(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int64_t                                            POST_GUID;                                                // 0x0450(0x0008) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameUserSettings");
		return ptr;
	}


	void ValidateSettings();
	TArray<struct FInputAxisKeyMapping> GetAxisMappings(const struct FString& ActionName);
	TArray<struct FInputActionKeyMapping> GetActionMappings(const struct FString& ActionName);
	float ConvertSliderInputToRawValue(const struct FSettingFloatData& Input);
	int ConvertRawValueToSliderInput(const struct FSettingFloatData& Input, float rawValue);
};


// Class PWND.PwndGameViewportClient
// 0x0010 (0x0620 - 0x0610)
class UPwndGameViewportClient : public UGameViewportClient
{
public:
	class UPwndGameUserSettings*                       Settings;                                                 // 0x0610(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0618(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGameViewportClient");
		return ptr;
	}

};


// Class PWND.PwndGUIDAsset
// 0x0050 (0x0078 - 0x0028)
class UPwndGUIDAsset : public UAssetUserData
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0028(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x003A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x0040(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0058(0x0018) (Edit, DisableEditOnInstance)
	class UTexture2D*                                  DisplayIcon;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndGUIDAsset");
		return ptr;
	}

};


// Class PWND.PwndHUD
// 0x0038 (0x04A8 - 0x0470)
class APwndHUD : public AHUD
{
public:
	TArray<class UPwndFieldTagComponent*>              FieldTags;                                                // 0x0470(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FPopUpFloatingText>                  PopupText;                                                // 0x0480(0x0010) (ZeroConstructor, Transient)
	TArray<struct FProjectileDebugExplosion>           ProjectileDebugExplosions;                                // 0x0490(0x0010) (ZeroConstructor, Transient)
	bool                                               bDrawPopupText;                                           // 0x04A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawNameplates;                                          // 0x04A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawTeamIndicators;                                      // 0x04A2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawPwnIcons;                                            // 0x04A3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawMiscFieldTags;                                       // 0x04A4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawReticle;                                             // 0x04A5(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawSpectatorHUD;                                        // 0x04A6(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawMonkeyBrains;                                        // 0x04A7(0x0001) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndHUD");
		return ptr;
	}


	void ToggleDrawTeamIndicators();
	void ToggleDrawSpectatorHUD();
	void ToggleDrawReticle();
	void ToggleDrawPwnIcons();
	void ToggleDrawPopupText();
	void ToggleDrawNameplates();
	void ToggleDrawMonkeyBrains();
	void ToggleDrawMiscFieldTags();
	void EnableAllDrawFieldTags();
	void DisableAllDrawFieldTags();
	void ClearProjectileDebugExplosions();
	void AddPopUpText3D(const struct FVector& Pos, const struct FString& Str, const struct FColor& Color, class UFont* Font, float Scale);
	void AddPopUpScoreText(const struct FVector& Pos, int Score, class UFont* Font, float Scale);
	void AddPopUpHealText(const struct FVector& Pos, int AmountHealed, class UClass* HealType, class UFont* Font, float Scale);
	void AddPopUpDamageText(const struct FVector& Pos, int DamageDone, class UClass* DamageType, class UFont* Font, float Scale);
};


// Class PWND.PwndInteraction
// 0x02B0 (0x02D8 - 0x0028)
class UPwndInteraction : public UObject
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0028(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x003A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloadOnStartup;                                        // 0x003B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    ValidCharacters;                                          // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGuid>                               ValidCharacterGUIDs;                                      // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FInteractionCameraEntry                     Camera;                                                   // 0x0060(0x00A4) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UTexture2D*                                  InteractionIcon;                                          // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0110(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0128(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x0140(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	TArray<class UClass*>                              LockBoxes;                                                // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              VisualizerRotation;                                       // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisualizerRotationRate;                                   // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bVisualizerOnlyPlayLoop;                                  // 0x0160(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideWeapon;                                              // 0x0161(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHolsterWeapon;                                           // 0x0162(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0163(0x0001) MISSED OFFSET
	float                                              FillAlgorithmFudgeFactor;                                 // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInteractionSegment                         SurfSegment;                                              // 0x0168(0x0058) (Edit, BlueprintVisible)
	struct FInteractionSegment                         IntroSegment;                                             // 0x01C0(0x0058) (Edit, BlueprintVisible)
	struct FInteractionSegment                         OutroSegment;                                             // 0x0218(0x0058) (Edit, BlueprintVisible)
	struct FInteractionSegment                         LoopSegment;                                              // 0x0270(0x0058) (Edit, BlueprintVisible)
	class UClass*                                      InteractionFX;                                            // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractionWidget;                                        // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndInteraction");
		return ptr;
	}

};


// Class PWND.PwndInteractionPWN
// 0x0000 (0x02D8 - 0x02D8)
class UPwndInteractionPWN : public UPwndInteraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndInteractionPWN");
		return ptr;
	}

};


// Class PWND.PwndInteractionRevive
// 0x0000 (0x02D8 - 0x02D8)
class UPwndInteractionRevive : public UPwndInteraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndInteractionRevive");
		return ptr;
	}

};


// Class PWND.PwndInventoryPerk
// 0x0038 (0x0468 - 0x0430)
class APwndInventoryPerk : public APwndInventory
{
public:
	struct FPwndPerkRepOwnerBase                       RepOwnPerkBase;                                           // 0x0430(0x0008) (Edit, Net)
	TArray<TAssetPtr<class UClass>>                    ValidCharacters;                                          // 0x0438(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bMaintainDuration;                                        // 0x0448(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	TArray<struct FGuid>                               ValidCharacterGUIDs;                                      // 0x0450(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	float                                              DurationDelta;                                            // 0x0460(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndInventoryPerk");
		return ptr;
	}


	class APwndInventoryPerk* ModifyRepOwnPerkBase(const struct FPwndPerkRepOwnerBaseAttribute& Attr, float PreMul, float Add, float PostMul);
	struct FPwndPerkRepOwnerBase K2ReadRepOwnerPerkBase();
	float GetTimeRemaining();
	float GetDuration();
};


// Class PWND.PwndInventorySet
// 0x0018 (0x03A0 - 0x0388)
class APwndInventorySet : public AActor
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0388(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0399(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndInventorySet");
		return ptr;
	}

};


// Class PWND.PwndLevelAsset
// 0x0058 (0x00D0 - 0x0078)
class UPwndLevelAsset : public UPwndGUIDAsset
{
public:
	struct FRInt                                       NumPlayers;                                               // 0x0078(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        LoadingScreen;                                            // 0x0088(0x0020) (Edit, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    SupportedGameModes;                                       // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGuid>                               SupportedGameModeGUIDs;                                   // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	int                                                SortGroup;                                                // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLevelAsset");
		return ptr;
	}

};


// Class PWND.PwndLoadoutVisualizer
// 0x0220 (0x05C0 - 0x03A0)
class APwndLoadoutVisualizer : public APwndGUIDActor
{
public:
	float                                              TextureSize;                                              // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextureSizeMultiplier;                                    // 0x03A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ScreenPercentageMod;                                      // 0x03A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReflectionSizeMultiplier;                                 // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthFilter;                                              // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ClearColor;                                               // 0x03B4(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForcePowerOfTwoTextureSize;                              // 0x03C4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceLinearGamma;                                        // 0x03C5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFloatRGBA;                                            // 0x03C6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRenderCustomDepth;                                       // 0x03C7(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomDepthStencilValue;                                  // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLightingChannels                           WorldLightingChannels;                                    // 0x03CC(0x0003) (Edit, DisableEditOnInstance)
	struct FLightingChannels                           UMGLightingChannels;                                      // 0x03CF(0x0003) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03D2(0x0006) MISSED OFFSET
	class UMaterialInterface*                          UIMaterial;                                               // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RefRotationRate;                                          // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              RarityFXClasses;                                          // 0x03E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UCameraComponent*                            Camera;                                                   // 0x03F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPwndLoadoutVisualizerSceneCaptureComponent* SceneCap;                                                 // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LoadoutReference;                                         // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Background;                                               // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Floor;                                                    // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bottom;                                                   // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LeftWall;                                                 // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RightWall;                                                // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BackWall;                                                 // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Ceiling;                                                  // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PwnStamp;                                                 // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ViewAccessory0;                                           // 0x0450(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ViewAccessory1;                                           // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class USceneComponent*>                     ViewAccessories;                                          // 0x0460(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLoadoutVisualizerActorAndReflection        LoadoutCharacter;                                         // 0x0478(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient)
	class UClass*                                      LoadoutPwn;                                               // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      LoadoutRevive;                                            // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FLoadoutVisualizerActorAndReflection        LoadoutWeapon;                                            // 0x0498(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient)
	class UClass*                                      LoadoutCustomPwnLine;                                     // 0x04A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FLoadoutVisualizerActorAndReflection> LoadoutViewAccessories;                                   // 0x04B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class UMaterialInstanceDynamic*                    UIMaterialInst;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRenderingInWorld;                                        // 0x04C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	struct FPwndLoadout                                CurrentLoadout;                                           // 0x04CC(0x00B0) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               bGenerateReflections;                                     // 0x057C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSilhouette;                                              // 0x057D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPrimary;                                                 // 0x057E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayingPwn;                                              // 0x057F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayingRevive;                                           // 0x0580(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayingRarityFX;                                         // 0x0581(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLoadoutIsValid;                                          // 0x0582(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0583(0x0001) MISSED OFFSET
	int                                                RenderCounter;                                            // 0x0584(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRenderTargetsReady;                                      // 0x0588(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	TArray<struct FInteractionChainEntry>              InteractionChain;                                         // 0x0590(0x0010) (ZeroConstructor, Transient)
	int                                                InteractionChainIndex;                                    // 0x05A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	class APwndFX*                                     InteractionFX;                                            // 0x05A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeItemRarity>                          LoadoutRarity;                                            // 0x05B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	class APwndFX*                                     RarityFX;                                                 // 0x05B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLoadoutVisualizer");
		return ptr;
	}


	void SetUseSilhouette(bool bUseSilhouette);
	void SetRenderingInWorld(bool bInWorld);
	void SetRefRotationRate(float Rate);
	void SetRefRotation(float Rotation);
	void SetPrimary(bool bIsPrimary);
	void SetPlayRevive(bool bPlayRevive);
	void SetPlayRarityFX(bool bPlayRarityFX);
	void SetPlayPwn(bool bPlayPwn);
	bool SetLoadout(const struct FPwndLoadout& Loadout);
	void SetGenerateReflections(bool bGenerate);
	void PlayCustomPwnLine();
	void OnSetRenderingInWorld(bool bInWorld);
	void OnSetLoadout(const struct FPwndLoadout& Loadout);
	struct FLightingChannels K2GetLightingChannels();
	bool IsReadyToShow();
	class UMaterialInstanceDynamic* GetUIMaterial();
	float GetRefRotationRate();
	float GetRefRotation();
};


// Class PWND.PwndLoadoutVisualizerHelper
// 0x0178 (0x0500 - 0x0388)
class APwndLoadoutVisualizerHelper : public AActor
{
public:
	class APwndLoadoutVisualizer*                      Visualizer;                                               // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TextureSizeMultiplier;                                    // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ScreenPercentageMod;                                      // 0x0394(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRenderingInWorld;                                        // 0x0398(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGenerateReflections;                                     // 0x0399(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSilhouette;                                              // 0x039A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPrimary;                                                 // 0x039B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayingPwn;                                              // 0x039C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayingRevive;                                           // 0x039D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlayingRarityFX;                                         // 0x039E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x039F(0x0001) MISSED OFFSET
	float                                              RefRotation;                                              // 0x03A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RefRotationRate;                                          // 0x03A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSetLoadoutEvent;                                        // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPwndLoadout                                RequestedLoadout;                                         // 0x03B8(0x00B0) (BlueprintVisible, BlueprintReadOnly, Transient)
	float                                              AsyncLoadingTimeStamp;                                    // 0x0468(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LoadingMaterial;                                          // 0x0470(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LoadingMaterialInst;                                      // 0x0478(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0480(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLoadoutVisualizerHelper");
		return ptr;
	}


	void StopAsyncSetLoadout();
	void SetUseSilhouette(bool bUseSilhouette);
	void SetRenderingInWorld(bool bInWorld);
	void SetRefRotationRate(float Rate);
	void SetRefRotation(float Rotation);
	void SetPrimary(bool bIsPrimary);
	void SetPlayRevive(bool bPlayRevive);
	void SetPlayRarityFX(bool bPlayRarityFX);
	void SetPlayPwn(bool bPlayPwn);
	void SetGenerateReflections(bool bGenerate);
	void PlayCustomPwnLine();
	bool IsAsyncLoading();
	class UMaterialInstanceDynamic* GetUIMaterial();
	float GetRefRotationRate();
	float GetRefRotation();
	bool AsyncSetLoadoutSinglePiece(const struct FGuid& LoadoutPiece, const struct FPwndLoadout& FillerLoadout, bool bIncludeIcons);
	bool AsyncSetLoadout(const struct FPwndLoadout& Loadout, bool bIncludeIcons);
};


// Class PWND.PwndLoadoutVisualizerSceneCaptureComponent
// 0x0000 (0x0A20 - 0x0A20)
class UPwndLoadoutVisualizerSceneCaptureComponent : public USceneCaptureComponent2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLoadoutVisualizerSceneCaptureComponent");
		return ptr;
	}

};


// Class PWND.PwndLocalInventory
// 0x0050 (0x0078 - 0x0028)
class UPwndLocalInventory : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCreditsUpdated;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGoldUpdated;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLocalInventory");
		return ptr;
	}


	int GetCachedGoldAmount();
	int GetCachedCreditsAmount();
};


// Class PWND.PwndLocalPlayer
// 0x0080 (0x0248 - 0x01C8)
class UPwndLocalPlayer : public ULocalPlayer
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x01C8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLocalPlayer");
		return ptr;
	}

};


// Class PWND.PwndLockBox
// 0x0040 (0x03E0 - 0x03A0)
class APwndLockBox : public APwndGUIDActor
{
public:
	int                                                NumAwards;                                                // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x03A8(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x03C0(0x0018) (Edit, DisableEditOnInstance)
	class UTexture2D*                                  DisplayIcon;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLockBox");
		return ptr;
	}

};


// Class PWND.PwndLockBoxKey
// 0x0018 (0x03A0 - 0x0388)
class APwndLockBoxKey : public AActor
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0388(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0399(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLockBoxKey");
		return ptr;
	}

};


// Class PWND.PwndLockBoxPityTimer
// 0x0000 (0x0040 - 0x0040)
class UPwndLockBoxPityTimer : public UPwndGUIDObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndLockBoxPityTimer");
		return ptr;
	}

};


// Class PWND.PwndMovableActor
// 0x0048 (0x03D0 - 0x0388)
class APwndMovableActor : public AActor
{
public:
	float                                              RotationSpeed;                                            // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MovementAmount;                                           // 0x038C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TimeToCompleteMove;                                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RotationEnabled;                                          // 0x039C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               MovementEnabled;                                          // 0x039D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	float                                              TimestampRotationStarted;                                 // 0x03A0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimestampMovementStarted;                                 // 0x03A4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimestampRotationStopped;                                 // 0x03A8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimestampMovementStopped;                                 // 0x03AC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimestampRotationResumedDiff;                             // 0x03B0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimestampMovementResumedDiff;                             // 0x03B4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class USceneComponent*                             RotatingPartComponent;                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     OriginalRootLoc;                                          // 0x03C0(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndMovableActor");
		return ptr;
	}


	void SetRotationAllowed(bool IsAllowed);
	void SetMovementAllowed(bool IsAllowed);
};


// Class PWND.PwndMusicManager
// 0x00D0 (0x0458 - 0x0388)
class APwndMusicManager : public AActor
{
public:
	struct FPwndMusic                                  Music;                                                    // 0x0388(0x0088) (Edit, BlueprintVisible)
	float                                              FinaleDuration;                                           // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFinale;                                                // 0x0414(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	int                                                VictoryNearPointDelta;                                    // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVictoryNear;                                           // 0x041C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class UAudioComponent*                             EnemyPwnLoopComp;                                         // 0x0420(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AllyPwnLoopComp;                                          // 0x0428(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             CrawlLoopComp;                                            // 0x0430(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              CrawlLoopVolume;                                          // 0x0438(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              WarmupTransition;                                         // 0x043C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             WarmupWaitLoopComp;                                       // 0x0440(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WarmupCountdownLoopComp;                                  // 0x0448(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              Intensity;                                                // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMusicEnabled;                                            // 0x0454(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0455(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndMusicManager");
		return ptr;
	}

};


// Class PWND.PwndNavArea_RocketJump
// 0x0000 (0x0040 - 0x0040)
class UPwndNavArea_RocketJump : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndNavArea_RocketJump");
		return ptr;
	}

};


// Class PWND.PwndNavigationQueryFilter_Generic
// 0x0000 (0x0048 - 0x0048)
class UPwndNavigationQueryFilter_Generic : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndNavigationQueryFilter_Generic");
		return ptr;
	}

};


// Class PWND.PwndNavigationQueryFilter_MonkeyBrain
// 0x0000 (0x0048 - 0x0048)
class UPwndNavigationQueryFilter_MonkeyBrain : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndNavigationQueryFilter_MonkeyBrain");
		return ptr;
	}

};


// Class PWND.PwndNetworkManager
// 0x0AD8 (0x0B00 - 0x0028)
class UPwndNetworkManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    MissionCompleteNotification;                              // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    XPGainedNotification;                                     // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FGuid>                               BlueprintProcessingNotifications;                         // 0x00B8(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0xA28];                                     // 0x00C8(0x0A28) MISSED OFFSET
	class UPwndChatFilter*                             PwndChatFilterInst;                                       // 0x0AF0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0AF8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndNetworkManager");
		return ptr;
	}


	void ReprocessInProgressNotifications();
	bool STATIC_IsPlatformConnected(class UPwndGameInstance* GameInst);
	bool IsCustomMatch();
	void DeletePlayerNotification(const struct FGuid& notificationID);
};


// Class PWND.PwndPawnFieldTagComponent
// 0x08B0 (0x1150 - 0x08A0)
class UPwndPawnFieldTagComponent : public UPwndFieldTagComponent
{
public:
	struct FPwndPawnFieldTagComponentMaterialSet       AllyMaterialSet;                                          // 0x08A0(0x02C0) (Edit, DisableEditOnInstance)
	struct FPwndPawnFieldTagComponentMaterialSet       EnemyMaterialSet;                                         // 0x0B60(0x02C0) (Edit, DisableEditOnInstance)
	struct FPwndPawnFieldTagComponentMaterialSet       NeutralMaterialSet;                                       // 0x0E20(0x02C0) (Edit, DisableEditOnInstance)
	struct FPwndPawnFieldTagComponentCachedInfo        CachedWorldInfo;                                          // 0x10E0(0x0020) (Transient, DuplicateTransient)
	struct FPwndPawnFieldTagComponentCachedInfo        CachedUIInfo;                                             // 0x1100(0x0020) (Transient, DuplicateTransient)
	struct FVector2D                                   PlayerNamePos;                                            // 0x1120(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerNameScale;                                          // 0x1128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PlayerRankPos;                                            // 0x112C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerRankScale;                                          // 0x1134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldNameFontScale;                                       // 0x1138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldNumberFontScale;                                     // 0x113C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DistanceToVerticalOffsetCurve;                            // 0x1140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPawnFieldTagComponent");
		return ptr;
	}

};


// Class PWND.PwndPersistentData
// 0x00B0 (0x00D8 - 0x0028)
class UPwndPersistentData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	class UFrontEndWidgetInterface*                    pWidgetInterface;                                         // 0x00A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPersistentData");
		return ptr;
	}

};


// Class PWND.PwndPickup
// 0x0060 (0x03E8 - 0x0388)
class APwndPickup : public AActor
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0388(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class UCapsuleComponent*                           CollisionComp;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PickupCollisionComp;                                      // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPwndBaseProjectileMovementComponent*        PickupMovement;                                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bAllowCrawlPickup;                                        // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowNonPlayerPickup;                                    // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPickupRequireLOS;                                        // 0x03BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03BB(0x0005) MISSED OFFSET
	class APwndPickupFactory*                          SpawningFactory;                                          // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPickedUp;                                                // 0x03C8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	TArray<struct FPwndPickupDroppedFrom>              DroppedFrom;                                              // 0x03D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              DroppedFromRePickupTime;                                  // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSpawnCollision;                                       // 0x03E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPickup");
		return ptr;
	}


	bool UseSpawnCollision();
	void SetSpawningFactory(class APwndPickupFactory* Factory);
	void SetDropVelocity(const struct FVector& vel);
	void Pickup(class AActor* Other);
	void OnRep_bPickedUp();
	void OnPickedUp();
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsPickedUp();
	class APwndPickupFactory* GetSpawningFactory();
	float GetServerTimeStamp();
	struct FVector GetDefaultDropVelocity();
	bool AllowPickup(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp);
	void AddDroppedFrom(class AActor* Act);
};


// Class PWND.PwndPickupFactoryGUTS
// 0x0030 (0x03B8 - 0x0388)
class APwndPickupFactoryGUTS : public AActor
{
public:
	struct FPwndPickupFactoryRepNonBase                RepNonBase;                                               // 0x0388(0x001C) (Edit, Net)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FPwndPickupFactoryRepAllBase                RepAllBase;                                               // 0x03A8(0x0010) (Edit, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPickupFactoryGUTS");
		return ptr;
	}


	struct FPwndPickupFactoryRepNonBase K2ReadRepNonePickupFactoryBase();
	struct FPwndPickupFactoryRepAllBase K2ReadRepAllPickupFactoryBase();
};


// Class PWND.PwndPickupFactory
// 0x0060 (0x0418 - 0x03B8)
class APwndPickupFactory : public APwndPickupFactoryGUTS
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x03B8(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x03C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class USceneComponent*                             PickupSpawner;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnPickupInitial;                                      // 0x03D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSpawnPickupCollision;                              // 0x03DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03DB(0x0005) MISSED OFFSET
	TArray<class UClass*>                              ValidGames;                                               // 0x03E0(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              InvalidGames;                                             // 0x03F0(0x0010) (Edit, ZeroConstructor)
	int                                                NumSpawned;                                               // 0x0400(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class APwndPickup*                                 SpawnedPickup;                                            // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartRespawnTimeStamp;                                    // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RespawnTimeStamp;                                         // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPickupFactory");
		return ptr;
	}


	float TimeUntilRespawn();
	void StartRespawn();
	class APwndPickup* SpawnPickup();
	void PickedUp(class APwndPickup* Pickup, class AActor* PickedUpBy);
	void OnRep_bEnabled();
	bool IsValidGame();
	float GetServerTimeStamp();
	float GetRespawnPercent();
	bool CanSpawnPickup();
	void CancelRespawn();
};


// Class PWND.PwndPickupHealth
// 0x0018 (0x0400 - 0x03E8)
class APwndPickupHealth : public APwndPickup
{
public:
	bool                                               bAllowPickupWhenFullHealth;                               // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	struct FRIntExp                                    Health;                                                   // 0x03EC(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPickupHealth");
		return ptr;
	}

};


// Class PWND.PwndPickupInventory
// 0x0030 (0x0418 - 0x03E8)
class APwndPickupInventory : public APwndPickup
{
public:
	TArray<class UClass*>                              InventoryClasses;                                         // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class APwndInventory*>                      Inventory;                                                // 0x03F8(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	class UClass*                                      PickupFXClass;                                            // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class APwndFX*                                     PickupFX;                                                 // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPickupInventory");
		return ptr;
	}


	class APwndFX* SpawnPickupFX();
	void OnRepPickupFXClass(class UClass* OldPickupFXClass);
	void OnInventoryGiven(class APwndCharacter* Other, class APwndInventory* Inv);
	void AddInventoryClass(class UClass* InvClass, bool bUnique);
	void AddInventory(class APwndInventory* Inv);
};


// Class PWND.PwndPickupInventoryDropped
// 0x0000 (0x0418 - 0x0418)
class APwndPickupInventoryDropped : public APwndPickupInventory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPickupInventoryDropped");
		return ptr;
	}

};


// Class PWND.PwndPlayerCameraManager
// 0x0160 (0x1CB0 - 0x1B50)
class APwndPlayerCameraManager : public APlayerCameraManager
{
public:
	float                                              FOVStart;                                                 // 0x1B50(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FOVTargetDelta;                                           // 0x1B54(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpawnCamFOV;                                              // 0x1B58(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDelayCamFOVTime;                                     // 0x1B5C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnOutCamFOVTime;                                       // 0x1B60(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnInCamFOVTime;                                        // 0x1B64(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInteractionCameraValid;                                  // 0x1B68(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1B69(0x0007) MISSED OFFSET
	struct FDynamicInteractionCameraEntry              InteractionCamera;                                        // 0x1B70(0x0100) (Transient)
	class APlayerState*                                SpectatePlayerState;                                      // 0x1C70(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CameraModeDistance;                                       // 0x1C78(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CameraModeMoveSpeed;                                      // 0x1C7C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CameraModeMovementDelta;                                  // 0x1C80(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    CameraModeRotationDelta;                                  // 0x1C8C(0x000C) (Transient, IsPlainOldData)
	float                                              ZoomPercentage;                                           // 0x1C98(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x1C9C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPlayerCameraManager");
		return ptr;
	}

};


// Class PWND.PwndPlayerController
// 0x02A0 (0x0AA0 - 0x0800)
class APwndPlayerController : public APwndBasePlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0800(0x0008) MISSED OFFSET
	class UInputComponent*                             PCInputComponent;                                         // 0x0808(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 pInGameHUD;                                               // 0x0810(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class APwndCharacterEventHelper*                   PwndCharacterEventHelper;                                 // 0x0818(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      PwndCharacterEventHelperClass;                            // 0x0820(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BaseTurnRate;                                             // 0x0828(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BaseLookUpRate;                                           // 0x082C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bRespawnTargetValid;                                      // 0x0830(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	class AActor*                                      RespawnTarget;                                            // 0x0838(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     RespawnLoc;                                               // 0x0840(0x000C) (Net, Transient, IsPlainOldData)
	struct FRotator                                    RespawnRot;                                               // 0x084C(0x000C) (Net, Transient, IsPlainOldData)
	float                                              RespawnDelayTimeStamp;                                    // 0x0858(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RespawnForceSpawnTimeStamp;                               // 0x085C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bClientReadyForSpawning;                                  // 0x0860(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	TArray<struct FPersistentReloadTimer>              PersistentReloadTimers;                                   // 0x0868(0x0010) (ZeroConstructor, Transient)
	bool                                               bCheatInvertShieldTeam;                                   // 0x0878(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0879(0x0003) MISSED OFFSET
	float                                              ServerControlRotationTimer;                               // 0x087C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    LastServerControlRotation;                                // 0x0880(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	TArray<class APwndAIController*>                   OwnedAIControllers;                                       // 0x0890(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               bDebugShowInput;                                          // 0x08A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x08A1(0x0003) MISSED OFFSET
	int                                                DebugWeaponLevel;                                         // 0x08A4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHideUMG;                                                 // 0x08A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHUDShowHealthBar;                                        // 0x08A9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHideFPWeapon;                                            // 0x08AA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawRadiusIndicator;                                     // 0x08AB(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CameraRoll;                                               // 0x08AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGodMode;                                                 // 0x08B0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPrimaryStartDesired;                                     // 0x08B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSpectateFromDynamicTeam;                                 // 0x08B2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x08B3(0x0001) MISSED OFFSET
	float                                              TimeSinceLastNetworkComm;                                 // 0x08B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoDash;                                                // 0x08B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeRocketJumpControlType>               RocketJumpControlType;                                    // 0x08B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x08BA(0x0002) MISSED OFFSET
	float                                              ReticleScale;                                             // 0x08BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PopupTextScaleCurve;                                      // 0x08C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinRespawnTimeForAllEnemiesDown;                          // 0x08C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinRespawnTimeForAllAlliesDown;                           // 0x08CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinRespawnTimeForLastManStanding;                         // 0x08D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDisplayAmbientSounds;                               // 0x08D4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowRegen;                                              // 0x08D5(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x08D6(0x0002) MISSED OFFSET
	float                                              ProjectileDebugExplosionTime;                             // 0x08D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsPlayerLeavingMatch;                                    // 0x08DC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x08DD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCarryStartedEvent;                                      // 0x08E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCarryCancelledEvent;                                    // 0x08F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPrePwnageStartedEvent;                                  // 0x0900(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPwnageStartedEvent;                                     // 0x0910(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPwnageScoredEvent;                                      // 0x0920(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPwnageCancelledEvent;                                   // 0x0930(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHumiliationStartedEvent;                                // 0x0940(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHumiliationCompletedEvent;                              // 0x0950(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHumiliationCancelledEvent;                              // 0x0960(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreReviveStartedEvent;                                  // 0x0970(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReviveStartedEvent;                                     // 0x0980(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReviveCompletedEvent;                                   // 0x0990(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReviveCancelledEvent;                                   // 0x09A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnActionStateUpdatedEvent;                            // 0x09B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPawnCompletedActionStateUpdatedEvent;                   // 0x09C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScoreUpdated;                                           // 0x09D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UUserWidget*                                 ScoreboardWidget;                                         // 0x09E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 InteractionAttackerWidget;                                // 0x09E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 InteractionTargetWidget;                                  // 0x09F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bNeedsToApplyCharacterDependentSettings;                  // 0x09F8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x09F9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPostEventTrigger;                                       // 0x0A00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbilityUsed;                                            // 0x0A10(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStuntAwarded;                                           // 0x0A20(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateUI;                                               // 0x0A30(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReceiveDamage;                                          // 0x0A40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInflictDamage;                                          // 0x0A50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReceiveHeal;                                            // 0x0A60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInflictHeal;                                            // 0x0A70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAwardRank;                                              // 0x0A80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetEndGameInfo;                                         // 0x0A90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPlayerController");
		return ptr;
	}


	void UpdateUI(class UObject* Changed);
	void ToggleSpectateFromDynamicTeam();
	void ToggleReadyForMatchStart();
	void ToggleFPWeapon();
	void ToggleDrawRadiusIndicator();
	void ToggleDebugDisplayAmbientSounds();
	void ToggleAutoDash();
	void SwitchTeams(int TeamNum);
	void Suicide();
	void StuntAwarded(class UClass* Stunt, int RatingAwarded, class UObject* RatingInstigator, class UObject* Other, const struct FName& StuntType);
	void StartInteractionWidgets(class UClass* AttackerWidget, class UClass* TargetWidget);
	void ShutdownInteractionWidgets();
	void ShowUMG();
	bool ShouldSpectateFromDynamicTeam();
	void SetReadyForMatchStart(bool bIsReady);
	void SetPwndCinematicMode(bool bInCinematicMode, bool bAffectUMG, bool bHidePlayer, bool bAffectsHUD, bool bShowHUDHealth, bool bAffectsMovement, bool bAffectsTurning);
	void SetProjectileDebugExplosionTime(float Time);
	void SetNextWeaponSkin(int Dir);
	void SetNextWeapon(int Dir);
	void SetNextSecondaryAbility(int Dir);
	void SetNextRevive(int Dir);
	void SetNextPwnStamp(int Dir);
	void SetNextPWN(int Dir);
	void SetNextPrimaryAbility(int Dir);
	void SetNextPerk(int Dir);
	void SetNextCharacterSkin(int Dir);
	void SetNextCharacter(int Dir);
	void SetDebugTargetLoc(const struct FVector& TargetLoc);
	void SetControlRotationReplicated(const struct FRotator& NewRotation);
	void SetCharacterByStr(const struct FString& Char);
	void SetCameraRoll(float Roll);
	void SetCameraModeSpectateThirdPerson();
	void SetCameraModeSpectateOrbit();
	void SetCameraModeSpectateFixedTracking();
	void SetCameraModeSpectateFixed();
	void SetCameraModeDefault();
	void ServerSetProjectileDebugExplosionTime(float Time);
	void ServerSetControlRotation(const struct FRotator& NewRotation);
	void ServerSetClientReadyForSpawning();
	void ServerSetClientLeavingMatch();
	void ServerSetAutoDash(bool bValue);
	void ServerDebugWeapons(int Level);
	void ServerCheatToggleRegeneration();
	void ServerCheatSpectate();
	void ServerCheatSpawnPwnable(int StackSize, int OverrideBounty, bool bEnemy, float OverrideDuration);
	void ServerCheatSkipWarmup();
	void ServerCheatSetTeamScore(int Score);
	void ServerCheatSetMatchTimeRemaining(float Time);
	void ServerCheatSetHealth(int Health);
	void ServerCheatReviveDurationMul(float Mul);
	void ServerCheatRespawn();
	void ServerCheatResetRank();
	void ServerCheatRemovePwnStamps();
	void ServerCheatRemoveBot(const struct FString& Char);
	void ServerCheatPwnRespawnTimeMul(float Mul);
	void ServerCheatPwnageDurationMul(float Mul);
	void ServerCheatKickPlayer(const struct FString& PlayerName);
	void ServerCheatInvertShieldTeam();
	void ServerCheatGodMode();
	void ServerCheatFinishCooldowns();
	void ServerCheatEndGame();
	void ServerCheatAwardRating(int Rating);
	void ServerCheatAwardRank();
	void ServerCheatAddBot(const struct FString& Char, TEnumAsByte<EeBotDifficulty> Difficulty);
	void ServerAdmin(const struct FString& Command);
	bool PostEventTrigger(const struct FPostedEventTrigger& Trig, bool bGoUpClassTree);
	void OnReviveStarted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void OnReviveCompleted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void OnReviveCancelled(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn, bool bDenied, class APwndCharacter* DenyerPawn);
	void OnRespawnStart();
	void OnRep_RespawnTarget(class AActor* OldRespawnTarget);
	void OnPwnageStarted(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void OnPwnageScored(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, bool bInstant);
	void OnPwnageCancelled(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, bool bSaved, class APwndCharacter* SaverPawn);
	void OnPreReviveStarted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void OnPrePwnageStarted(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void OnPawnCompletedActionStateUpdated(class APwndCharacter* Char, TEnumAsByte<EePawnActionState> State, bool bSuccess, const struct FPwndCharacterActionCompletion& ActionCompleted);
	void OnPawnActionStateUpdated(class APwndCharacter* Char, TEnumAsByte<EePawnActionState> NewState, TEnumAsByte<EePawnActionState> OldState);
	void OnHumiliationStarted(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void OnHumiliationCompleted(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void OnHumiliationCancelled(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void OnCarryStarted(class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn);
	void OnCarryCancelled(class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn, bool bSaved, float ThrowPower, class APwndCharacter* SaverPawn);
	void ListFriends();
	bool IsHUDHealthBarShowing();
	void InviteFriend(const struct FString& FriendDisplayName);
	void HideUMG();
	void GetTeamStatus(bool* bIsAllyPwnParty, bool* bIsEnemyPwnParty, bool* bAllEnemiesDown, bool* bAllAlliesDown, bool* bLastManStanding);
	TArray<float> GetTeamPotentialScore();
	TArray<float> GetTeamChargingScore();
	float GetServerTimeStamp();
	float GetRespawnDelayTime();
	float GetForceRespawnTime();
	class UPwndDamageHistoryComponent* GetDamageHistory();
	void ForceRespawn(float Delay, float Timer, bool bStartupSpawn);
	void DebugWeapons(int Level);
	void DebugShowInput(bool bShow);
	void ClientStuntAwarded(class UClass* Stunt, int RatingAwarded, class UObject* RatingInstigator, class UObject* Other, const struct FName& StuntType);
	void ClientSetEndGameInfo(TEnumAsByte<EndGameReason> Reason, bool bVictory, class APwndTeamInfo* WinningTeam, class APwndPlayerState* Winner, class AActor* ScoreActor);
	void ClientScoreUpdated(class APwndTeamInfo* ScoringTeam, int Score, int ScoreIncrement, float MatchRelativeTimeStamp);
	void ClientReviveStarted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void ClientReviveCompleted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void ClientReviveCancelled(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn, bool bDenied, class APwndCharacter* DenyerPawn);
	void ClientPwnageStarted(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void ClientPwnageScored(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, bool bInstant);
	void ClientPwnageCancelled(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn, bool bSaved, class APwndCharacter* SaverPawn);
	void ClientPreReviveStarted(class APwndCharacter* Reviver, class APwndCharacter* RevivedPawn);
	void ClientPrePwnageStarted(class APwndCharacter* Pwner, class APwndCharacter* PwndPawn);
	void ClientHumiliationStarted(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void ClientHumiliationCompleted(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void ClientHumiliationCancelled(class APwndCharacter* Humiliator, class APwndCharacter* HumiliatedPawn);
	void ClientEventTriggerPosted(const struct FPostedEventTrigger& Trig);
	void ClientDrawDebugString(const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FColor& TextColor, float Duration, bool bDrawShadow);
	void ClientCheatSpectate();
	void ClientCarryStarted(class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn);
	void ClientCarryCancelled(class APwndCharacter* Carrier, class APwndCharacter* CarriedPawn, bool bSaved, float ThrowPower, class APwndCharacter* SaverPawn);
	void ClientAddProjectileDebugExplosion(const struct FProjectileDebugExplosion& DebugExpl);
	void ChangeLocalization(const struct FString& Target);
	void CameraModeTurnAtRate(float val);
	void CameraModeMoveUp(float val);
	void CameraModeMoveRight(float val);
	void CameraModeMoveForward(float val);
	void CameraModeMoveFarther(float val);
	void CameraModeLookUpAtRate(float val);
	void CameraModeAddYawInput(float val);
	void CameraModeAddRollInput(float val);
	void CameraModeAddPitchInput(float val);
	void Admin(const struct FString& Command);
};


// Class PWND.PwndPlayerMetaProgression
// 0x0048 (0x0088 - 0x0040)
class UPwndPlayerMetaProgression : public UPwndGUIDObject
{
public:
	TArray<struct FMetaProgressionLevelEntry>          Levels;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                LevelsPerPrestige;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PrestigesPerBorderChange;                                 // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel;                                                 // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AccoladeFirstPlaceExperienceReward;                       // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AccoladeSecondPlaceExperienceReward;                      // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AccoladeThirdPlaceExperienceReward;                       // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstWinOfTheDayExperienceReward;                         // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MatchVictoryExperienceReward;                             // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MatchCompleteExperienceReward;                            // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstPlaceExperienceReward;                               // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SecondPlaceExperienceReward;                              // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ThirdPlaceExperienceReward;                               // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ExperiencePerRate;                                        // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ExperienceRateSeconds;                                    // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPlayerMetaProgression");
		return ptr;
	}

};


// Class PWND.PwndPlayerStart
// 0x00B0 (0x0468 - 0x03B8)
class APwndPlayerStart : public APlayerStart
{
public:
	bool                                               bEnabled;                                                 // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bPrimaryStart;                                            // 0x03B9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // 0x03BA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03BB(0x0005) MISSED OFFSET
	TArray<class UClass*>                              ValidGames;                                               // 0x03C0(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              InvalidGames;                                             // 0x03D0(0x0010) (Edit, ZeroConstructor)
	struct FHitResult                                  GroundHit;                                                // 0x03E0(0x0088) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPlayerStart");
		return ptr;
	}


	void SetTeamNum(unsigned char InTeamNum);
	void SetEnabled(bool bIsEnabled);
	void OnRep_bEnabled();
	bool IsValidGame();
};


// Class PWND.PwndPlayerState
// 0x0340 (0x0758 - 0x0418)
class APwndPlayerState : public APlayerState
{
public:
	struct FGuid                                       PlayerGuid;                                               // 0x0418(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, Transient, IsPlainOldData)
	struct FGuid                                       UserID;                                                   // 0x0428(0x0010) (Transient, IsPlainOldData)
	bool                                               bIsConnected;                                             // 0x0438(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	float                                              LoginTimestamp;                                           // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LogoutTimestamp;                                          // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class APwndTeamInfo*                               Team;                                                     // 0x0448(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class APwndStuntManager*                           StuntManager;                                             // 0x0450(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RankUpTimes[0x8];                                         // 0x0458(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                RatingByType[0x8];                                        // 0x0478(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReplicatedRatingByType[0x8];                              // 0x0498(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Rating;                                                   // 0x04B8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Rank;                                                     // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NextRankRating;                                           // 0x04C0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                LastRankRating;                                           // 0x04C4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                LastLastRankRating;                                       // 0x04C8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FPwndLoadoutInst                            CurrentLoadout;                                           // 0x04D0(0x0058) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	struct FPwndLoadout                                PendingLoadout;                                           // 0x0528(0x00B0) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	class UMaterialInterface*                          PlayerCrosshairMat;                                       // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bReadyForMatchStart;                                      // 0x05E0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET
	struct FPwndStatMap                                StatMap;                                                  // 0x05E8(0x00A0) (Transient)
	TMap<class UClass*, struct FPwndPerItemStats>      PerItemStatsMap;                                          // 0x0688(0x0050) (ZeroConstructor, Transient)
	class UMaterialInterface*                          OverrideWeaponMaterialIfc;                                // 0x06D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverrideWeaponMaterialFirstPerson;                       // 0x06E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOverrideWeaponMaterialThirdPerson;                       // 0x06E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x06E2(0x0002) MISSED OFFSET
	int                                                PwnsSinceSpawn;                                           // 0x06E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                RevivalsSinceSpawn;                                       // 0x06E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                KillsSinceSpawn;                                          // 0x06EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                DeathsSinceKill;                                          // 0x06F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ContinuousAirTime;                                        // 0x06F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ContinuousPwnTime;                                        // 0x06F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPwndPlayerStateReplicatedStats             RepStats;                                                 // 0x06FC(0x0024) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	bool                                               bIsPlayerBot;                                             // 0x0720(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsReplacementPlayerBot;                                  // 0x0721(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EeBotDifficulty>                       MonkeyModeDifficulty;                                     // 0x0722(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0723(0x0001) MISSED OFFSET
	int                                                MonkeyMode;                                               // 0x0724(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SetMonkeyTimer;                                           // 0x0728(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                RetainedBounty;                                           // 0x072C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RetainedBountyDecay;                                      // 0x0730(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	class UPwndDamageHistoryComponent*                 DamageHistory;                                            // 0x0738(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class APwndCharacter*>                      OwnedAIChars;                                             // 0x0740(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	int                                                SpectateCameraWeight;                                     // 0x0750(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0754(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPlayerState");
		return ptr;
	}


	void SetTeam(class APwndTeamInfo* NewTeam);
	void ServerToggleReadyForMatchStart();
	void ServerSwitchTeams(int TeamNum);
	void ServerSetWeaponSkin(const struct FGuid& WeaponSkin, bool bApplyImmediately);
	void ServerSetWeapon(const struct FGuid& Weapon, bool bApplyImmediately);
	void ServerSetSecondaryAbility(const struct FGuid& Ability, bool bApplyImmediately);
	void ServerSetRevive(const struct FGuid& Revive, bool bApplyImmediately);
	void ServerSetReadyForMatchStart(bool bReady);
	void ServerSetPwnStamp(const struct FGuid& PwnStamp, bool bApplyImmediately);
	void ServerSetPWN(const struct FGuid& PWN, bool bApplyImmediately);
	void ServerSetPrimaryAbility(const struct FGuid& Ability, bool bApplyImmediately);
	void ServerSetPerk(const struct FGuid& Perk, bool bApplyImmediately);
	void ServerSetNextWeaponSkin(int Dir, bool bApplyImmediately);
	void ServerSetNextWeapon(int Dir, bool bApplyImmediately);
	void ServerSetNextSecondaryAbility(int Dir, bool bApplyImmediately);
	void ServerSetNextRevive(int Dir, bool bApplyImmediately);
	void ServerSetNextPwnStamp(int Dir, bool bApplyImmediately);
	void ServerSetNextPWN(int Dir, bool bApplyImmediately);
	void ServerSetNextPrimaryAbility(int Dir, bool bApplyImmediately);
	void ServerSetNextPerk(int Dir, bool bApplyImmediately);
	void ServerSetNextCharacterSkin(int Dir, bool bApplyImmediately);
	void ServerSetNextCharacter(int Dir, bool bApplyImmediately);
	void ServerSetMonkeyMode(int NewMonkeyMode, TEnumAsByte<EeBotDifficulty> NewMonkeyModeDifficulty);
	void ServerSetLoadout(const struct FPwndLoadout& Loadout, bool bApplyImmediately);
	void ServerSetCharacterSkin(const struct FGuid& CharacterSkin, bool bApplyImmediately);
	void ServerSetCharacterByStr(const struct FString& Char, bool bApplyImmediately);
	void ServerSetCharacter(const struct FGuid& Character, bool bApplyImmediately);
	void ResetRank();
	bool PostEventTrigger(const struct FPostedEventTrigger& Trig, bool bGoUpClassTree);
	void OverrideWeaponMaterials(class UMaterialInterface* MatIfc, bool bFirstPerson, bool bThirdPerson);
	void OnRep_RepStats();
	void OnRep_ReplicatedRatingByType();
	void OnRep_bIsConnected();
	void MulticastAwardRank(class APwndPlayerState* PS, int NewRank, float NewRating, float NewNextRankRating);
	void ItemStats_Subtract(class UObject* _Item, const struct FName& _PropertyName, float _Value);
	void ItemStats_Min(class UObject* _Item, const struct FName& _PropertyName, float _Value);
	void ItemStats_Max(class UObject* _Item, const struct FName& _PropertyName, float _Value);
	void ItemStats_Add(class UObject* _Item, const struct FName& _PropertyName, float _Value);
	void ItemStats_Accumulate(class UObject* _Item, const struct FName& _PropertyName, float _Value);
	bool IsSmartMonkey();
	bool IsReadyForMatchStart();
	bool IsMonkey();
	bool IsConnected();
	float GetServerTimeStamp();
	float GetRankPercent(int* outRank);
	int GetRankForNameplate();
	class UClass* GetPwnerWidget();
	class UClass* GetPlayerReviveSelection();
	class UPwndPwnStamp* GetPlayerPwnStampSelectionInst();
	class UClass* GetPlayerPwnStampSelection();
	class UClass* GetPlayerPWNSelection();
	TEnumAsByte<EeBotDifficulty> GetMonkeyModeDifficulty();
	int GetMonkeyMode();
	float GetKDR();
	struct FString GetDecoratedPlayerName(bool bOnLeft);
	void GameStats_UseItem(class UObject* Item, float Value);
	void CommonStats_Subtract(const struct FName& _PropertyName, float _Value);
	void CommonStats_Set(const struct FName& _PropertyName, float _Value);
	void CommonStats_Min(const struct FName& _PropertyName, float _Value);
	void CommonStats_Max(const struct FName& _PropertyName, float _Value);
	void CommonStats_Add(const struct FName& _PropertyName, float _Value);
	void CommonStats_Accumulate(const struct FName& _PropertyName, float _Value);
	void CombatStats_Subtract(const struct FName& _PropertyName, float _Value, class UObject* Weap);
	void CombatStats_Min(const struct FName& _PropertyName, float _Value, class UObject* Weap);
	void CombatStats_Max(const struct FName& _PropertyName, float _Value, class UObject* Weap);
	void CombatStats_Add(const struct FName& _PropertyName, float _Value, class UObject* Weap);
	void CombatStats_Accumulate(const struct FName& _PropertyName, float _Value, class UObject* Weap);
	int AwardRatingValue(TEnumAsByte<EeRatingType> Type, int inRating, float inMod, class UObject* RatingInstigator, class UObject* Other, class UPwndStuntSequence* Stunt, const struct FName& StuntType, bool bForceReplication);
	void AwardRank();
};


// Class PWND.PwndProjectileGUTS
// 0x0BA0 (0x0F28 - 0x0388)
class APwndProjectileGUTS : public AActor
{
public:
	class UPwndProjectileSphereComponent*              CollisionComp;                                            // 0x0388(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           OverlapCollisionComp;                                     // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPwndProjectileMovementComponent*            ProjectileMovement;                                       // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FPwndDamageEvent                            DirectHitDamage;                                          // 0x03A0(0x0468) (Edit, BlueprintVisible)
	struct FPwndHealEvent                              DirectHitHeal;                                            // 0x0808(0x0470) (Edit, BlueprintVisible)
	TArray<struct FPwndProjectileDamageRing>           DamageRings;                                              // 0x0C78(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPwndProjectileHealRing>             HealRings;                                                // 0x0C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPwndProjectileRepNonSpeed                  RepNonSpeed;                                              // 0x0C98(0x002C) (Edit)
	struct FPwndProjectileRepAllSpeed                  RepAllSpeed;                                              // 0x0CC4(0x0008) (Edit, Net)
	struct FPwndProjectileRepNonBounce                 RepNonBounce;                                             // 0x0CCC(0x0020) (Edit)
	struct FPwndProjectileRepAllBounce                 RepAllBounce;                                             // 0x0CEC(0x0040) (Edit, Net)
	struct FPwndProjectileRepNonSticky                 RepNonSticky;                                             // 0x0D2C(0x0028) (Edit)
	struct FPwndProjectileRepAllSticky                 RepAllSticky;                                             // 0x0D54(0x0018) (Edit, Net)
	struct FPwndProjectileRepNonGuidance               RepNonGuidance;                                           // 0x0D6C(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0D6E(0x0002) MISSED OFFSET
	struct FPwndProjectileRepAllGuidance               RepAllGuidance;                                           // 0x0D70(0x001C) (Edit, Net)
	struct FPwndProjectileRepAllFlightPath             RepAllFlightPath;                                         // 0x0D8C(0x001C) (Edit, Net)
	struct FPwndProjectileRepNonCollision              RepNonCollision;                                          // 0x0DA8(0x0010) (Edit)
	struct FPwndProjectileRepAllCollision              RepAllCollision;                                          // 0x0DB8(0x0003) (Edit, Net)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0DBB(0x0001) MISSED OFFSET
	struct FPwndProjectileRepNonRange                  RepNonRange;                                              // 0x0DBC(0x002C) (Edit)
	struct FPwndProjectileRepNonCharge                 RepNonCharge;                                             // 0x0DE8(0x0012) (Edit)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0DFA(0x0006) MISSED OFFSET
	struct FPwndProjectileRepNonSpawnProj              RepNonSpawnProj;                                          // 0x0E00(0x00F0) (Edit)
	struct FPwndProjectileRepNonArming                 RepNonArming;                                             // 0x0EF0(0x0008) (Edit)
	struct FPwndProjectileRepAllArming                 RepAllArming;                                             // 0x0EF8(0x000A) (Edit, Net)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0F02(0x0006) MISSED OFFSET
	struct FGUTSAttributeModifierAccumulator           GUTSAccumulator;                                          // 0x0F08(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndProjectileGUTS");
		return ptr;
	}


	void OnTuneProjectile();
	void OnPostTuneProjectile();
	class APwndProjectileGUTS* ModifyRepNonSticky(const struct FPwndProjectileRepNonStickyAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonSpeed(const struct FPwndProjectileRepNonSpeedAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonSpawnProj(const struct FPwndProjectileRepNonSpawnProjAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonRange(const struct FPwndProjectileRepNonRangeAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonHealRing(const struct FPwndProjectileHealRingAttribute& Attr, int Ring, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonGuidance(const struct FPwndProjectileRepNonGuidanceAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonDirectHitHeal(const struct FPwndHealEventAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonDirectHitDamage(const struct FPwndDamageEventAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonDamageRing(const struct FPwndProjectileDamageRingAttribute& Attr, int Ring, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonCollision(const struct FPwndProjectileRepNonCollisionAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonCharge(const struct FPwndProjectileRepNonChargeAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonBounce(const struct FPwndProjectileRepNonBounceAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepNonArming(const struct FPwndProjectileRepNonArmingAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepAllSticky(const struct FPwndProjectileRepAllStickyAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepAllSpeed(const struct FPwndProjectileRepAllSpeedAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepAllGuidance(const struct FPwndProjectileRepAllGuidanceAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepAllFlightPath(const struct FPwndProjectileRepAllFlightPathAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepAllCollision(const struct FPwndProjectileRepAllCollisionAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepAllBounce(const struct FPwndProjectileRepAllBounceAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndProjectileGUTS* ModifyRepAllArming(const struct FPwndProjectileRepAllArmingAttribute& Attr, float PreMul, float Add, float PostMul);
	struct FPwndProjectileRepNonSticky K2ReadRepNoneProjectileSticky();
	struct FPwndProjectileRepNonSpeed K2ReadRepNoneProjectileSpeed();
	struct FPwndProjectileRepNonSpawnProj K2ReadRepNoneProjectileSpawnProj();
	struct FPwndProjectileRepNonRange K2ReadRepNoneProjectileRange();
	struct FPwndProjectileRepNonGuidance K2ReadRepNoneProjectileGuidance();
	struct FPwndProjectileRepNonCollision K2ReadRepNoneProjectileCollision();
	struct FPwndProjectileRepNonCharge K2ReadRepNoneProjectileCharge();
	struct FPwndProjectileRepNonBounce K2ReadRepNoneProjectileBounce();
	struct FPwndProjectileRepNonArming K2ReadRepNoneProjectileArming();
	struct FPwndProjectileRepAllSticky K2ReadRepAllProjectileSticky();
	struct FPwndProjectileRepAllSpeed K2ReadRepAllProjectileSpeed();
	struct FPwndProjectileRepAllGuidance K2ReadRepAllProjectileGuidance();
	struct FPwndProjectileRepAllFlightPath K2ReadRepAllProjectileFlightPath();
	struct FPwndProjectileRepAllCollision K2ReadRepAllProjectileCollision();
	struct FPwndProjectileRepAllBounce K2ReadRepAllProjectileBounce();
	struct FPwndProjectileRepAllArming K2ReadRepAllProjectileArming();
};


// Class PWND.PwndProjectile
// 0x0248 (0x1170 - 0x0F28)
class APwndProjectile : public APwndProjectileGUTS
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0F28(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0F38(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0F39(0x0007) MISSED OFFSET
	class AController*                                 InstigatorController;                                     // 0x0F40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APwndWeapon*                                 InstigatorWeapon;                                         // 0x0F48(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      WeaponArchetype;                                          // 0x0F50(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasSpawnedFromProjectile;                                // 0x0F58(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F59(0x0003) MISSED OFFSET
	float                                              DetonationTime;                                           // 0x0F5C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DetonationRange;                                          // 0x0F60(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bReplicatedDetonated;                                     // 0x0F64(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDetonated;                                               // 0x0F65(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // 0x0F66(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0F67(0x0001) MISSED OFFSET
	float                                              ChargePct;                                                // 0x0F68(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0F6C(0x0004) MISSED OFFSET
	struct FProjectileStuckInfo                        StuckInfo;                                                // 0x0F70(0x0030) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	struct FVector_NetQuantize                         BirthLocation;                                            // 0x0FA0(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	float                                              SpawnTimeStamp;                                           // 0x0FAC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InstigatorHeatPct;                                        // 0x0FB0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InstigatorSpecialMovementCapacityPct;                     // 0x0FB4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpawnProjInterval;                                        // 0x0FB8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                SpawnProjNumSpawned;                                      // 0x0FBC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                SpawnProjNumIntervals;                                    // 0x0FC0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bArmed;                                                   // 0x0FC4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0FC5(0x0003) MISSED OFFSET
	float                                              ArmTimeStamp;                                             // 0x0FC8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlightTime;                                               // 0x0FCC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlightDistance;                                           // 0x0FD0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LastNonZeroVelocity;                                      // 0x0FD4(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bGuidanceActive;                                          // 0x0FE0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0FE1(0x0007) MISSED OFFSET
	class AActor*                                      Seeking;                                                  // 0x0FE8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize                         SeekingTargetLoc;                                         // 0x0FF0(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0FFC(0x0004) MISSED OFFSET
	TArray<class APwndFX*>                             TrailFXActors;                                            // 0x1000(0x0010) (ZeroConstructor, Transient)
	struct FVector                                     ProjectileVisualRootOffsetDir;                            // 0x1010(0x000C) (Transient, IsPlainOldData)
	float                                              ProjectileVisualRootOffset;                               // 0x101C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ProjectileVisualRootVel;                                  // 0x1020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CurrentWiggleOffset;                                      // 0x1024(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     WiggleStart;                                              // 0x1030(0x000C) (Transient, IsPlainOldData)
	float                                              WiggleTimer;                                              // 0x103C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Health;                                                   // 0x1040(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1044(0x0004) MISSED OFFSET
	TArray<struct FExternalTimeDilation>               ExternalTimeDilations;                                    // 0x1048(0x0010) (ZeroConstructor, Transient)
	class USceneComponent*                             VisualRoot;                                               // 0x1058(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TrailFXRoot;                                              // 0x1060(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bAutoSpawnTrailFX;                                        // 0x1068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSpawnRandomTrailFX;                                  // 0x1069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x106A(0x0006) MISSED OFFSET
	TArray<class UClass*>                              TrailFXClasses;                                           // 0x1070(0x0010) (Edit, ZeroConstructor)
	bool                                               bAutoSpawnDetonationFX;                                   // 0x1080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSpawnRandomDetonationFX;                             // 0x1081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x1082(0x0006) MISSED OFFSET
	TArray<class UClass*>                              SubDetonationFXClasses;                                   // 0x1088(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              DetonationFXClasses;                                      // 0x1098(0x0010) (Edit, ZeroConstructor)
	bool                                               bAutoSpawnBounceFX;                                       // 0x10A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSpawnRandomBounceFX;                                 // 0x10A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x10AA(0x0002) MISSED OFFSET
	float                                              BounceFXVelocityThreshold;                                // 0x10AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              BounceFXClasses;                                          // 0x10B0(0x0010) (Edit, ZeroConstructor)
	struct FQVectorExp                                 WiggleOffset;                                             // 0x10C0(0x0030) (Edit)
	bool                                               bSpiralWiggle;                                            // 0x10F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x10F1(0x0003) MISSED OFFSET
	struct FQFloatExp                                  WiggleTravelTime;                                         // 0x10F4(0x0018) (Edit)
	bool                                               bFXSyncAlongTravel;                                       // 0x110C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFXSyncAlongTravelLateralOnly;                            // 0x110D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x110E(0x0002) MISSED OFFSET
	float                                              FXSyncAlongTravelMaxTime;                                 // 0x1110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQRotator                                   RotationRate;                                             // 0x1114(0x002C) (Edit)
	float                                              BounceRotationRateDecel;                                  // 0x1140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsPropDetonateStrength;                              // 0x1144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsPropDetonateStrengthMul;                           // 0x1148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsPropDetonateRadius;                                // 0x114C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 PhysicsPropDetonateFalloff;                               // 0x1150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPhysicsPropDetonateVelChange;                            // 0x1151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x1152(0x0002) MISSED OFFSET
	float                                              PhysicsPropImpulseFactor;                                 // 0x1154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FXDatabase;                                               // 0x1158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FOverlappingPhysicsComp>             OverlappingPhysicsComps;                                  // 0x1160(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndProjectile");
		return ptr;
	}


	void OnTeamUpdated(unsigned char NewTeamNum);
	void OnStuck();
	void OnRep_TeamNum(unsigned char OldTeamNum);
	void OnRep_StuckInfo();
	void OnRep_SeekingTargetLoc();
	void OnRep_Seeking();
	void OnRep_Health(int OldHealth);
	void OnRep_bReplicatedDetonated(bool bOldReplicatedDetonated);
	void OnRep_bArmed();
	void OnRep_ArmTimeStamp();
	void OnProjectileHidden();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnDetonate(const struct FVector& Location, const struct FHitResult& Hit, bool bDestroy);
	void OnBounce(const struct FHitResult& Hit);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBeginArming();
	void OnArmedUpdated(bool bIsArmed);
	void HideProjectile();
	float GetServerTimeStamp();
	void ForceDetonate(bool bDestroy);
	class APwndProjectile* STATIC_FireProjectile(class UClass* ProjectileClass, const struct FTransform& SpawnTransform, class UObject* FiringObject, float OverrideChargePct, int OverrideTeamNum, const struct FVector& OverrideVelocity);
};


// Class PWND.PwndProjectileMovementComponent
// 0x0060 (0x0320 - 0x02C0)
class UPwndProjectileMovementComponent : public UPwndBaseProjectileMovementComponent
{
public:
	int                                                MaxBounces;                                               // 0x02C0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                BounceCount;                                              // 0x02C4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize100                      InitialLaunchVelocity;                                    // 0x02C8(0x000C) (Net, Transient)
	struct FVector_NetQuantize100                      LaunchVelocity;                                           // 0x02D4(0x000C) (Net, Transient)
	struct FVector                                     HomingTargetLocation;                                     // 0x02E0(0x000C) (Transient, IsPlainOldData)
	float                                              FlightPathTimer;                                          // 0x02EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<float>                                      RandomRoll;                                               // 0x02F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	struct FVector                                     OverrideGravity;                                          // 0x0300(0x000C) (Net, Transient, IsPlainOldData)
	float                                              OverrideGravityTimer;                                     // 0x030C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OverrideGravityDuration;                                  // 0x0310(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OverrideGravityRevertTime;                                // 0x0314(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndProjectileMovementComponent");
		return ptr;
	}


	class APwndProjectile* GetPwndProjectileOwner();
};


// Class PWND.PwndProjectileSphereComponent
// 0x0000 (0x0830 - 0x0830)
class UPwndProjectileSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndProjectileSphereComponent");
		return ptr;
	}

};


// Class PWND.PwndPwnStamp
// 0x00C0 (0x0100 - 0x0040)
class UPwndPwnStamp : public UPwndGUIDObject
{
public:
	bool                                               bAllowSelection;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x0041(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	class UTexture2D*                                  PwnStamp_Icon;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PwnStamp_UIMaterial;                                      // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PwnStamp_DecalMaterial;                                   // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PwnStamp_LoadoutMaterial;                                 // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0068(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0080(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	TArray<class UClass*>                              LockBoxes;                                                // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ValidCharacters;                                          // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGuid>                               ValidCharacterGUIDs;                                      // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TAssetPtr<class UClass>                            LoadoutVisualizerClass;                                   // 0x00D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVector2D                                   VisualizerScale;                                          // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   VisualizerOffset;                                         // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPwnStamp");
		return ptr;
	}

};


// Class PWND.PwndPwnStampDecal
// 0x0030 (0x03B8 - 0x0388)
class APwndPwnStampDecal : public AActor
{
public:
	class UDecalComponent*                             DecalComp;                                                // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FDecalCreationInfo                          DecalInfo;                                                // 0x0390(0x0028) (BlueprintVisible, BlueprintReadOnly, Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndPwnStampDecal");
		return ptr;
	}


	void OnRep_DecalInfo(const struct FDecalCreationInfo& OldDecalInfo);
};


// Class PWND.PwndRichTextBlock
// 0x02C8 (0x0408 - 0x0140)
class UPwndRichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0140(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0158(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0168(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01E0(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x218];                                     // 0x01F0(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndRichTextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
};


// Class PWND.PwndRopeActor
// 0x0028 (0x03B8 - 0x0390)
class APwndRopeActor : public ASplineMeshActor
{
public:
	int                                                NumSegments;                                              // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                RopeSegments;                                             // 0x0398(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FVector>                             Points;                                                   // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndRopeActor");
		return ptr;
	}


	void UpdateRope();
	void SetStraightEx(const struct FVector& Start, const struct FVector& Target);
	void SetStraight(const struct FVector& Target);
	void SetSineWaveEx(const struct FVector& Start, const struct FVector& Target, float Height, float Width, float Cycles);
	void SetSineWave(const struct FVector& Target, float Height, float Width, float Cycles);
	void SetPoint(int Index, const struct FVector& Point);
	void SetMaterial(int ElementIndex, class UMaterialInterface* Material);
	struct FVector GetPoint(int Index);
};


// Class PWND.PwndShieldGUTS
// 0x00E8 (0x0480 - 0x0398)
class APwndShieldGUTS : public AStaticMeshActor
{
public:
	struct FPwndShieldRepNonBase                       RepNonBase;                                               // 0x0398(0x005C) (Edit)
	struct FPwndShieldRepAllCollisionEnemy             RepAllCollisionEnemy;                                     // 0x03F4(0x0006) (Edit, Net)
	struct FPwndShieldRepNonCollisionEnemy             RepNonCollisionEnemy;                                     // 0x03FA(0x0001) (Edit, Net)
	struct FPwndShieldRepAllCollisionAlly              RepAllCollisionAlly;                                      // 0x03FB(0x0006) (Edit, Net)
	struct FPwndShieldRepNonCollisionAlly              RepNonCollisionAlly;                                      // 0x0401(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0402(0x0002) MISSED OFFSET
	struct FPwndShieldRepNonDPS                        RepNonDPS;                                                // 0x0404(0x000C) (Edit)
	struct FPwndShieldRepNonHPS                        RepNonHPS;                                                // 0x0410(0x0014) (Edit)
	struct FPwndShieldRepNonDamageRamp                 RepNonDamageRamp;                                         // 0x0424(0x0014) (Edit)
	struct FPwndShieldRepNonPanel                      RepNonPanel;                                              // 0x0438(0x0028) (Edit)
	struct FGUTSAttributeModifierAccumulator           GUTSAccumulator;                                          // 0x0460(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndShieldGUTS");
		return ptr;
	}


	void Retune();
	void OnRetune();
	class APwndShieldGUTS* ModifyRepNonPanel(const struct FPwndShieldRepNonPanelAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndShieldGUTS* ModifyRepNonHPS(const struct FPwndShieldRepNonHPSAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndShieldGUTS* ModifyRepNonDPS(const struct FPwndShieldRepNonDPSAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndShieldGUTS* ModifyRepNonDamageRamp(const struct FPwndShieldRepNonDamageRampAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndShieldGUTS* ModifyRepNonCollisionEnemy(const struct FPwndShieldRepNonCollisionEnemyAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndShieldGUTS* ModifyRepNonCollisionAlly(const struct FPwndShieldRepNonCollisionAllyAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndShieldGUTS* ModifyRepNonBase(const struct FPwndShieldRepNonBaseAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndShieldGUTS* ModifyRepAllCollisionEnemy(const struct FPwndShieldRepAllCollisionEnemyAttribute& Attr, float PreMul, float Add, float PostMul);
	class APwndShieldGUTS* ModifyRepAllCollisionAlly(const struct FPwndShieldRepAllCollisionAllyAttribute& Attr, float PreMul, float Add, float PostMul);
	struct FPwndShieldRepNonPanel K2ReadRepNoneShieldPanel();
	struct FPwndShieldRepNonHPS K2ReadRepNoneShieldHPS();
	struct FPwndShieldRepNonDPS K2ReadRepNoneShieldDPS();
	struct FPwndShieldRepNonDamageRamp K2ReadRepNoneShieldDamageRamp();
	struct FPwndShieldRepNonCollisionEnemy K2ReadRepNoneShieldCollisionEnemy();
	struct FPwndShieldRepNonCollisionAlly K2ReadRepNoneShieldCollisionAlly();
	struct FPwndShieldRepNonBase K2ReadRepNoneShieldBase();
	struct FPwndShieldRepAllCollisionEnemy K2ReadRepAllShieldCollisionEnemy();
	struct FPwndShieldRepAllCollisionAlly K2ReadRepAllShieldCollisionAlly();
};


// Class PWND.PwndShield
// 0x0170 (0x05F0 - 0x0480)
class APwndShield : public APwndShieldGUTS
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0480(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0490(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                HealthMax;                                                // 0x0494(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DamageRampTimer;                                          // 0x0498(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPlacedInLevel;                                           // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartActiveInLevel;                                      // 0x049D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCollisionModifiers;                                // 0x049E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // 0x049F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x04A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bActive;                                                  // 0x04A1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	float                                              ShutdownTimer;                                            // 0x04A4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ShutdownDuration;                                         // 0x04A8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	TArray<struct FPawnTouchEntry>                     TouchingPawns;                                            // 0x04B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FProjectileTouchEntry>               TouchingProjectiles;                                      // 0x04C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FShieldImpactEntry>                  BlockingImpacts;                                          // 0x04D0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FShieldImpactEntry>                  NonBlockingImpacts;                                       // 0x04E0(0x0010) (ZeroConstructor, Transient)
	float                                              HealthDecayRate;                                          // 0x04F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HealthDecayFraction;                                      // 0x04F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFromProjectile;                                          // 0x04F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	struct FVector                                     SpawnNormal;                                              // 0x04FC(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     ReverseProjDir;                                           // 0x0508(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FQFloat                                     PanelMeshAnimAmount;                                      // 0x0514(0x0014) (Edit, BlueprintVisible)
	struct FQFloat                                     PanelMeshAnimSpeed;                                       // 0x0528(0x0014) (Edit, BlueprintVisible)
	struct FQFloat                                     PanelMeshImpactAnimOffset;                                // 0x053C(0x0014) (Edit, BlueprintVisible)
	struct FQFloat                                     PanelMeshImpactAnimOffsetSpeed;                           // 0x0550(0x0014) (Edit, BlueprintVisible)
	struct FRFloat                                     PanelMeshAnimStartScale;                                  // 0x0564(0x000C) (Edit, BlueprintVisible)
	struct FRFloat                                     PanelMeshAnimStartDelay;                                  // 0x0570(0x000C) (Edit, BlueprintVisible)
	struct FQFloat                                     PanelMeshAnimScaleSpeed;                                  // 0x057C(0x0014) (Edit, BlueprintVisible)
	struct FRFloat                                     MeshTransitionParamAnimDelay;                             // 0x0590(0x000C) (Edit, BlueprintVisible)
	struct FQFloat                                     MeshTransitionParamAnimSpeed;                             // 0x059C(0x0014) (Edit, BlueprintVisible)
	class AController*                                 InstigatorController;                                     // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      WeaponArchetype;                                          // 0x05B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ShieldDamageType;                                         // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSphericalPanelBounds;                                 // 0x05C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ValidGames;                                               // 0x05D0(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              InvalidGames;                                             // 0x05E0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndShield");
		return ptr;
	}


	void ShutdownShield(class AController* Damager, class UClass* DamageType, int ScaledDamageAmount, int RawDamageAmount);
	void SetShieldActive(bool _bActive);
	void Retune();
	void OnTeamUpdated(unsigned char NewTeamNum);
	void OnRep_TeamNum(unsigned char OldTeamNum);
	void OnRep_Active(bool OldActive);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool InitShield(bool _bFromProjectile, const struct FVector& _SpawnNormal, const struct FVector& _ReverseProjDir);
	float GetShieldTimerPct();
	float GetServerTimeStamp();
	void GetBestSpawnInfo(const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation, struct FRotator* OutRotation);
};


// Class PWND.PwndShieldBuckyBall
// 0x0190 (0x0780 - 0x05F0)
class APwndShieldBuckyBall : public APwndShield
{
public:
	struct FShieldPanel                                PentagonShieldPanel;                                      // 0x05F0(0x0068) (Edit, BlueprintVisible)
	struct FShieldPanel                                HexagonShieldPanel;                                       // 0x0658(0x0068) (Edit, BlueprintVisible)
	struct FShieldPanel                                HexagonShieldPanel2;                                      // 0x06C0(0x0068) (Edit, BlueprintVisible)
	TEnumAsByte<EShieldBuckyBall>                      BuckyBallType;                                            // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0729(0x0003) MISSED OFFSET
	struct FBoxSphereBounds                            PentagonShieldPanelBounds;                                // 0x072C(0x001C) (Transient, DuplicateTransient, IsPlainOldData)
	struct FBoxSphereBounds                            HexagonShieldPanelBounds;                                 // 0x0748(0x001C) (Transient, DuplicateTransient, IsPlainOldData)
	struct FBoxSphereBounds                            HexagonShieldPanel2Bounds;                                // 0x0764(0x001C) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndShieldBuckyBall");
		return ptr;
	}

};


// Class PWND.PwndShieldPanelComponent
// 0x0170 (0x0B20 - 0x09B0)
class UPwndShieldPanelComponent : public UStaticMeshComponent
{
public:
	class UClass*                                      ImpactFXClass;                                            // 0x09B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Health;                                                   // 0x09B8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastDamageTimeStamp;                                      // 0x09BC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class APwndFX*                                     PanelFX;                                                  // 0x09C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APwndFX*                                     PanelImpactFX;                                            // 0x09C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UPwndShieldPanelComponent*>           AdjacentPanels;                                           // 0x09D0(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FBoxSphereBounds                            PanelBounds;                                              // 0x09E0(0x001C) (Transient, IsPlainOldData)
	bool                                               bPanelActive;                                             // 0x09FC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPanelDestroyed;                                          // 0x09FD(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x09FE(0x0002) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            PanelMat;                                                 // 0x0A00(0x0010) (ZeroConstructor, Transient)
	float                                              CurrMeshTransitionParam;                                  // 0x0A10(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrMeshTransitionOutParam;                               // 0x0A14(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrPanelMeshAnim;                                        // 0x0A18(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrPanelMeshAnimOffset;                                  // 0x0A1C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrPanelMeshAnimScale;                                   // 0x0A20(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrPanelMeshAnimScaleDelay;                              // 0x0A24(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PanelMeshDirection;                                       // 0x0A28(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	TArray<struct FDelayedShieldPanelDamage>           PanelDelayedDamage;                                       // 0x0A38(0x0010) (ZeroConstructor, Transient)
	float                                              PanelHealthDecayFraction;                                 // 0x0A48(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PanelDelayedShutdownTimer;                                // 0x0A4C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AController*                                 PanelDelayedShutdownDamager;                              // 0x0A50(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      PanelDelayedShutdownDamageType;                           // 0x0A58(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PanelDelayedShutdownScaledDamageAmount;                   // 0x0A60(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PanelDelayedShutdownRawDamageAmount;                      // 0x0A64(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AController*                                 PanelShieldDestructInstigator;                            // 0x0A68(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      PanelShieldDestructDamageType;                            // 0x0A70(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PanelShieldDestructScaledDamageAmount;                    // 0x0A78(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PanelShieldDestructRawDamageAmount;                       // 0x0A7C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     InitialMeshTranslation;                                   // 0x0A80(0x000C) (Transient, IsPlainOldData)
	struct FQFloat                                     PanelMeshAnimAmount;                                      // 0x0A8C(0x0014) (Transient)
	struct FQFloat                                     PanelMeshAnimSpeed;                                       // 0x0AA0(0x0014) (Transient)
	struct FQFloat                                     PanelMeshImpactAnimOffset;                                // 0x0AB4(0x0014) (Transient)
	struct FQFloat                                     PanelMeshImpactAnimOffsetSpeed;                           // 0x0AC8(0x0014) (Transient)
	struct FQFloat                                     PanelMeshAnimScaleSpeed;                                  // 0x0ADC(0x0014) (Transient)
	struct FQFloat                                     MeshTransitionParamAnimSpeed;                             // 0x0AF0(0x0014) (Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class UPrimitiveComponent>>  LocalIgnoredComponents;                                   // 0x0B08(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0B18(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndShieldPanelComponent");
		return ptr;
	}


	void SetHealth(int NewHealth);
	void OnRep_LastDamageTimeStamp();
	void OnRep_Health(int OldHealth);
	void OnRep_bPanelDestroyed(bool OldbPanelDestroyed);
	void OnRep_bPanelActive(bool OldbPanelActive);
	void OnPanelSetActive(bool bActive);
	void OnPanelHealthChanged(int OldHealth, int NewHealth, float CurrentHealthPct);
	void OnPanelDestroyed(bool bDestroyed);
	void OnPanelDamaged();
	int GetMaxHealth();
	float GetHealthPct();
};


// Class PWND.PwndShieldWall
// 0x0068 (0x0658 - 0x05F0)
class APwndShieldWall : public APwndShield
{
public:
	struct FShieldPanel                                BaseShieldPanel;                                          // 0x05F0(0x0068) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndShieldWall");
		return ptr;
	}

};


// Class PWND.PwndSkeletalMeshComponent
// 0x0000 (0x0FF0 - 0x0FF0)
class UPwndSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndSkeletalMeshComponent");
		return ptr;
	}


	void SetAllBodiesBelowPhysicsBlendWeight_NotFinal(const struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
	bool K2IsPhysicsStateCreated();
};


// Class PWND.PwndSpectatorPawn
// 0x0008 (0x0418 - 0x0410)
class APwndSpectatorPawn : public ASpectatorPawn
{
public:
	int                                                SpeedStep;                                                // 0x0410(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	ESpectateCameraMode                                SpectateCameraMode;                                       // 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndSpectatorPawn");
		return ptr;
	}


	void SetSpectateCameraMode(ESpectateCameraMode NewMode);
	ESpectateCameraMode GetSpectateCameraMode();
};


// Class PWND.PwndSpringArmComponent
// 0x0000 (0x0470 - 0x0470)
class UPwndSpringArmComponent : public USpringArmComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndSpringArmComponent");
		return ptr;
	}

};


// Class PWND.PwndStatRecorder
// 0x00A8 (0x0430 - 0x0388)
class APwndStatRecorder : public AActor
{
public:
	struct FPwndStatMap                                StatMap;                                                  // 0x0388(0x00A0) (Transient)
	bool                                               bAutoSendStats;                                           // 0x0428(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStatsDirty;                                              // 0x0429(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x042A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndStatRecorder");
		return ptr;
	}


	bool ValidateStats(class APwndGameMode* GameMode, struct FString* OutErrorMessage);
	void SetSingle(const struct FName& StatName, float Value, bool bCreate);
	void STATIC_SendTelemetryEvent(struct FPwndTelemetryEvent* Event);
	bool SendTelemetry();
	void STATIC_SendSimpleTelemetryEvent(const struct FString& Type);
	void ResetStats();
	void ResetSingle(const struct FName& StatName, bool bCreate);
	void ResetAccumulator(const struct FName& StatName, bool bCreate);
	void MinSingle(const struct FName& StatName, float Value, bool bCreate);
	void MaxSingle(const struct FName& StatName, float Value, bool bCreate);
	int GetSingleInt(const struct FName& StatName, bool bRound);
	float GetSingleFloat(const struct FName& StatName);
	float GetAccumulatorTotal(const struct FName& StatName);
	float GetAccumulatorMin(const struct FName& StatName);
	float GetAccumulatorMax(const struct FName& StatName);
	float GetAccumulatorCurrent(const struct FName& StatName);
	int GetAccumulatorCount(const struct FName& StatName);
	float GetAccumulatorAverage(const struct FName& StatName);
	struct FPwndTelemetryEvent STATIC_CreateTelemetryEvent(const struct FString& Type);
	struct FPwndTelemetryEvent STATIC_AddTelemetryVector(const struct FString& Name, const struct FVector& Value, struct FPwndTelemetryEvent* Event);
	struct FPwndTelemetryEvent STATIC_AddTelemetryString(const struct FString& Name, const struct FString& Value, struct FPwndTelemetryEvent* Event);
	struct FPwndTelemetryEvent STATIC_AddTelemetryRotator(const struct FString& Name, const struct FRotator& Value, struct FPwndTelemetryEvent* Event);
	struct FPwndTelemetryEvent STATIC_AddTelemetryLoadoutInst(const struct FString& Prefix, const struct FPwndLoadoutInst& Value, struct FPwndTelemetryEvent* Event);
	struct FPwndTelemetryEvent STATIC_AddTelemetryLoadout(const struct FString& Prefix, const struct FPwndLoadout& Value, struct FPwndTelemetryEvent* Event);
	struct FPwndTelemetryEvent STATIC_AddTelemetryInt(const struct FString& Name, int Value, struct FPwndTelemetryEvent* Event);
	struct FPwndTelemetryEvent STATIC_AddTelemetryGuid(const struct FString& Name, const struct FGuid& Value, struct FPwndTelemetryEvent* Event);
	struct FPwndTelemetryEvent STATIC_AddTelemetryFloat(const struct FString& Name, float Value, struct FPwndTelemetryEvent* Event);
	struct FPwndTelemetryEvent STATIC_AddTelemetryBool(const struct FString& Name, bool Value, struct FPwndTelemetryEvent* Event);
	void AddSingle(const struct FName& StatName, float Value, bool bCreate);
	void AccumulateIncrementalFinish(const struct FName& StatName, bool bCreate);
	void AccumulateIncremental(const struct FName& StatName, float Value, bool bCreate);
	void Accumulate(const struct FName& StatName, float Value, bool bCreate);
};


// Class PWND.PwndStuntManager
// 0x0040 (0x03C8 - 0x0388)
class APwndStuntManager : public AInfo
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0388(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0398(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<class UClass*>                              StuntSequenceClasses;                                     // 0x03A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPwndStuntSequence*>                  StuntSequences;                                           // 0x03B0(0x0010) (ZeroConstructor, Transient)
	float                                              StuntTimer;                                               // 0x03C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndStuntManager");
		return ptr;
	}


	float GetServerTimeStamp();
};


// Class PWND.PwndStuntSequence
// 0x0058 (0x0080 - 0x0028)
class UPwndStuntSequence : public UObject
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0028(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x0040(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0058(0x0018) (Edit, DisableEditOnInstance)
	TArray<struct FPwndStuntSequenceAwardText>         AwardTexts;                                               // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndStuntSequence");
		return ptr;
	}


	void OnTick(float DeltaSeconds);
	void OnPostEventTrigger(TEnumAsByte<EeEventTrigger> Trigger, float Count, TArray<class UObject*> Others);
	bool IsSelf(class UObject* Other);
	bool IsOwnedAI(class UObject* Other);
	bool IsEnemy(class UObject* Other);
	bool IsAlly(class UObject* Other);
	struct FText GetStuntAwardText(int Rating, class UObject* RatingInstigator, class UObject* Other, const struct FName& StuntType);
	float GetServerTimeStamp();
	class APwndPlayerState* GetPwndPlayerState();
	class APwndCharacter* GetPwndCharacter();
	class APlayerState* GetPlayerState();
	class APawn* GetPawn();
	class AController* GetController();
	struct FText GetAwardText(int Rating, class UObject* RatingInstigator, class UObject* Other, const struct FName& StuntType);
	struct FString GetAwardString(int Rating, class UObject* RatingInstigator, class UObject* Other, const struct FName& StuntType);
	int AwardRatingValue(TEnumAsByte<EeRatingType> Type, int inRating, float inMod, class UObject* RatingInstigator, class UObject* Other, const struct FName& StuntType, bool bForceReplication, bool bPostEvent);
};


// Class PWND.PwndTargetDummy
// 0x0010 (0x0398 - 0x0388)
class APwndTargetDummy : public AActor
{
public:
	int                                                TotalHealth;                                              // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Health;                                                   // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndTargetDummy");
		return ptr;
	}


	void SetTeamNum(unsigned char NewTeamNum);
	void OnTeamUpdated(unsigned char NewTeamNum);
	void OnRep_TeamNum(unsigned char OldTeamNum);
	void OnRep_Health(int OldHealth);
	void OnHealthUpdated(int OldHealth, int NewHealth);
	float GetServerTimeStamp();
	float GetHealthPct();
};


// Class PWND.PwndTeamInfo
// 0x0040 (0x03C8 - 0x0388)
class APwndTeamInfo : public AInfo
{
public:
	bool                                               bWinningTeam;                                             // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // 0x0389(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x038A(0x0002) MISSED OFFSET
	float                                              Score;                                                    // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class APwndPlayerState*                            LastScorer;                                               // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      LastScoreActor;                                           // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class APwndPlayerState*                            LastScoreActorPS;                                         // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APwndPlayerState*>                    members;                                                  // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<struct FTimeStampedValue>                   ScoresOverTime;                                           // 0x03B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndTeamInfo");
		return ptr;
	}


	void SetScore(float inScore);
	void RemoveMember(class APwndPlayerState* Member);
	void RemoveAllMembers();
	bool IsWinningTeam();
	int GetSize(bool bPlayersOnly, bool bConnectedOnly);
	float GetServerTimeStamp();
	int GetMembers(bool bPlayersOnly, bool bConnectedOnly, TArray<class APwndPlayerState*>* OutMembers);
	class APwndPlayerState* GetMember(int I, bool bPlayersOnly, bool bConnectedOnly);
	float GetConnectedPct(bool bPlayersOnly);
	void AddMember(class APwndPlayerState* Member);
};


// Class PWND.PwndTimeBubble
// 0x0300 (0x1B60 - 0x1860)
class APwndTimeBubble : public APwndAOE
{
public:
	struct FPwndTimeBubbleRepAllDilation               RepAllDilation;                                           // 0x1860(0x0300) (Edit, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndTimeBubble");
		return ptr;
	}


	class APwndTimeBubble* ModifyRepAllDilation(const struct FPwndTimeBubbleRepAllDilationAttribute& Attr, float PreMul, float Add, float PostMul);
	struct FPwndTimeBubbleRepAllDilation K2ReadRepAllTimeBubbleDilation();
};


// Class PWND.PwndToken
// 0x0040 (0x03E0 - 0x03A0)
class APwndToken : public APwndGUIDActor
{
public:
	struct FString                                     Type;                                                     // 0x03A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       DisplayText;                                              // 0x03B0(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x03C8(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndToken");
		return ptr;
	}

};


// Class PWND.PwndUtil
// 0x0020 (0x0048 - 0x0028)
class UPwndUtil : public UObject
{
public:
	TAssetPtr<class UClass>                            PwndAssetDatabaseClass;                                   // 0x0028(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndUtil");
		return ptr;
	}


	struct FVector STATIC_VRLerp(const struct FVector& A, const struct FVector& B, float Interp, const struct FVector& Pivot);
	bool STATIC_ValidateClass(class UClass* SearchClass, TArray<class UClass*> ValidClasses, TArray<class UClass*> InvalidClasses);
	float STATIC_TickSpringFloat(float DeltaSeconds, struct FSpringFloat* Spring);
	float STATIC_TickFloatOscillator(float DeltaSeconds, struct FFloatOscillator* Oscillator);
	class UTexture2D* STATIC_SyncLoadIconByGUID(const struct FGuid& Guid);
	class UClass* STATIC_SyncLoadClassByGUID(const struct FGuid& Guid);
	class UPwndFOVIndependentParticleSystemComponent* STATIC_SpawnFOVIndependentEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	bool STATIC_ShouldPostEventTriggerToClient(TEnumAsByte<EeEventTrigger> Trig);
	void STATIC_SetAxis(int I, const struct FVector& Axis, struct FMatrix* Mat);
	int STATIC_ScanCollisionSphere(class UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& Origin, const struct FVector& BaseVector, const struct FVector& Axis, int NumChecks, int NumRings, float MaxDist, const struct FVector& Extent, bool bClipToNearest, bool bDebug, TArray<struct FHitResult>* ArcImpactInfo, int* NearestIndex);
	int STATIC_ScanCollisionAxis(class UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& Origin, const struct FVector& BaseVector, const struct FVector& Axis, int NumChecks, float MaxDist, const struct FVector& Extent, bool bClipToNearest, bool bDebug, bool bSkipBaseVectors, TArray<struct FHitResult>* ArcImpactInfo, int* NearestIndex);
	void STATIC_ResetQVectorExp(struct FQVectorExp* QVectorExp);
	void STATIC_ResetQVector2DExp(struct FQVector2DExp* QVector2DExp);
	void STATIC_ResetQVector2D(struct FQVector2D* QVector2D);
	void STATIC_ResetQVector(struct FQVector* QVector);
	void STATIC_ResetQRotatorExp(struct FQRotatorExp* QRotatorExp);
	void STATIC_ResetQRotator(struct FQRotator* QRotator);
	void STATIC_ResetQIntExp(struct FQIntExp* QIntExp);
	void STATIC_ResetQInt(struct FQInt* QInt);
	void STATIC_ResetQFloatExp(struct FQFloatExp* QFloatExp);
	void STATIC_ResetQFloat(struct FQFloat* QFloat);
	float STATIC_ResetFloatOscillator(bool bRandom, struct FFloatOscillator* Oscillator);
	struct FQuat STATIC_QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	bool STATIC_PushPointOutOfPawns(class UObject* WorldContextObject, const struct FVector& DesiredPos, float CollRadius, float CollHeight, bool bKeepInWorld, float ExtraRadiusBuffer, struct FVector* RetVal);
	struct FVector STATIC_PushPointOutOfComponent(class UPrimitiveComponent* Comp, const struct FVector& Point, const struct FVector& Axis);
	bool STATIC_PushPointIntoWorld(class UObject* WorldContextObject, const struct FVector& DesiredPos, float CollRadius, float CollHeight, struct FVector* RetVal);
	struct FVector STATIC_PredictTravel(const struct FVector& Loc, const struct FVector& vel, float MaxTime, class AActor* Act, bool bCollide, bool bStopOnCollision, bool bStopOnFloor, float TimeResolution);
	struct FVector STATIC_PredictProjectileTravel(class UClass* ProjClass, class AActor* Firer, class AActor* Target, float TimeOffset, bool bCollide, bool bStopOnCollision, bool bStopOnFloor, float TimeResolution, float SpeedMultiplier);
	struct FVector STATIC_PredictActorTravel(class AActor* Act, float MaxTime, bool bCollide, bool bStopOnCollision, bool bStopOnFloor, float TimeResolution);
	bool STATIC_PostEventTriggerToInline(class UObject* Obj, TEnumAsByte<EeEventTrigger> Trig, float TrigCount, class UObject* Other1, class UObject* Other2, class UObject* Other3, class UObject* Other4, class UObject* Other5, bool bAllowOwnedAI);
	bool STATIC_PostEventTriggerTo(class UObject* Obj, const struct FPostedEventTrigger& Trig, bool bAllowOwnedAI);
	bool STATIC_PostEventTriggerArrTo(class UObject* Obj, TArray<struct FPostedEventTrigger> Trigs, bool bAllowOwnedAI);
	float STATIC_PerformMath(TEnumAsByte<EeMathOperation> Op, float A, float B);
	bool STATIC_ParseEventTrigger_SpecialMovement(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Char);
	bool STATIC_ParseEventTrigger_Spawned_Shield_Encompass(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndShield** Shield, class APawn** Instigator, class AController** InstigatorController, class UClass** WeaponClass, class AActor** EncompassedActor);
	bool STATIC_ParseEventTrigger_Spawned_Shield(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndShield** Shield, class APawn** Instigator, class AController** InstigatorController, class UClass** WeaponClass);
	bool STATIC_ParseEventTrigger_Shield_Protected(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndShield** Shield, class AActor** Protected, class AController** EventInstigator, class AActor** DamageCauser, class UClass** DamageType);
	bool STATIC_ParseEventTrigger_Shield_PanelDestroyed(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndShield** Shield, class AController** EventInstigator, class AActor** DamageCauser, class UClass** DamageType);
	bool STATIC_ParseEventTrigger_Shield_Destroyed(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndShield** Shield, class AController** EventInstigator, class UClass** DamageType);
	bool STATIC_ParseEventTrigger_Shield_Deactivated(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndShield** Shield);
	bool STATIC_ParseEventTrigger_Shield_Damaged(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndShield** Shield, class AController** EventInstigator, class AActor** DamageCauser, class UClass** DamageType);
	bool STATIC_ParseEventTrigger_ScorePoints(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class UObject** Scorer, class UObject** ScoredObject);
	bool STATIC_ParseEventTrigger_RocketJump_Etc(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Char, class AActor** JumpOffActor, class UPrimitiveComponent** JumpOffComponent);
	bool STATIC_ParseEventTrigger_Revive_Started(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Reviver, class APwndCharacter** Revived);
	bool STATIC_ParseEventTrigger_Revive_Denied_Assist(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class UObject** Assister, class UObject** Killer, class APwndCharacter** Reviver, class APwndCharacter** Revived);
	bool STATIC_ParseEventTrigger_Revive_Denied(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Reviver, class APwndCharacter** Revived, class UObject** Denier, class UClass** WeaponClass, class UClass** DamageType);
	bool STATIC_ParseEventTrigger_Revive_Completed(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Reviver, class APwndCharacter** Revived);
	bool STATIC_ParseEventTrigger_Revive_Cancelled(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Reviver, class APwndCharacter** Revived);
	bool STATIC_ParseEventTrigger_PwnParty(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Pwner, class APwndCharacter** Pwnee);
	bool STATIC_ParseEventTrigger_PWN_Started_Etc(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Pwner, class APwndCharacter** Pwnee, bool* bStack);
	bool STATIC_ParseEventTrigger_PWN_Denied_Etc(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Pwner, class APwndCharacter** Pwnee, class UObject** Saver, class UClass** WeaponClass, class UClass** DamageType, bool* bStack);
	bool STATIC_ParseEventTrigger_PWN_Denied_Assist(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class UObject** Assister, class UObject** Killer, class APwndCharacter** Pwner, class APwndCharacter** Pwnee);
	bool STATIC_ParseEventTrigger_PWN_Completed_Etc(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Pwner, class APwndCharacter** Pwnee, bool* bInstant, bool* bStack);
	bool STATIC_ParseEventTrigger_PWN_Cancelled_Etc(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Pwner, class APwndCharacter** Pwnee, bool* bStack);
	bool STATIC_ParseEventTrigger_Overheated_Etc(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Char, bool* bCooledOff);
	bool STATIC_ParseEventTrigger_KillAssist(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class UObject** Assister, class UObject** Killer, class UObject** Killed);
	bool STATIC_ParseEventTrigger_Kill(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class UObject** Killer, class UObject** Killed, class UClass** WeaponClass, class UClass** DamageType);
	bool STATIC_ParseEventTrigger_EnterExit_Shield(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndShield** Shield, class AActor** Actor, bool* bEnter);
	bool STATIC_ParseEventTrigger_EnterExit_PwnZone(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndPwnZone** PwnZone, class AActor** Actor, bool* bEnter);
	bool STATIC_ParseEventTrigger_EnemyTeamDown(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class UObject** Killer, class UObject** Killed, class UClass** WeaponClass, class UClass** DamageType);
	bool STATIC_ParseEventTrigger_Damage_Etc(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class UObject** Damager, class UObject** Damaged, class UClass** WeaponClass, class UClass** DamageType, bool* bHeat);
	bool STATIC_ParseEventTrigger_Carry_Pickup(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Carrier, class APwndCharacter** Carried);
	bool STATIC_ParseEventTrigger_Carry_Drop(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Carrier, class APwndCharacter** Carried);
	bool STATIC_ParseEventTrigger_Carry_Denied(TEnumAsByte<EeEventTrigger> Type, TArray<class UObject*> Others, class APwndCharacter** Carrier, class APwndCharacter** Carried, class UObject** Denier, class UClass** WeaponClass, class UClass** DamageType);
	struct FRotator STATIC_OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	struct FRotator STATIC_OrientToNormal(const struct FVector& Normal, TEnumAsByte<EAxis> OrientAxis, const struct FRotator& InRotation);
	bool STATIC_IsValidGameFor(class UObject* Object);
	bool STATIC_IsSpectatingReplay(class UObject* Obj);
	bool STATIC_IsSpectatingFromDynamicTeam(class UObject* Obj);
	bool STATIC_IsSpectating(class UObject* Obj);
	bool STATIC_IsPlayInEditor(class UObject* WorldContextObject);
	bool STATIC_IsPlayer(class UObject* Obj, bool bIncludePlayerBots, bool bAllowOwnedAI);
	bool STATIC_IsOnlySpectating(class UObject* Obj);
	bool STATIC_IsLocalPS(class APlayerState* PS);
	bool STATIC_IsLocalPC(class APlayerController* PC);
	bool STATIC_IsLocalPawn(class APawn* P);
	bool STATIC_IsAssetGuid(const struct FGuid& Guid, bool bUseLoadingFallback);
	bool STATIC_IsAMDGPU();
	bool STATIC_HasLosToPoint(class AActor* Eyes, const struct FVector& TargetPos, class AActor* Target, bool bSimple, TEnumAsByte<ECollisionChannel> Channel);
	bool STATIC_HasLosPointToPoint(const struct FVector& EyePos, const struct FVector& TargetPos, class AActor* Eyes, class AActor* Target, TEnumAsByte<ECollisionChannel> Channel);
	bool STATIC_HasLOS(class AActor* Eyes, class AActor* Target, bool bSimple, TEnumAsByte<ECollisionChannel> Channel);
	bool STATIC_HasInteractLosToPoint(class AActor* Eyes, const struct FVector& TargetPos, class AActor* Target, bool bSimple);
	bool STATIC_HasInteractLosPointToPoint(const struct FVector& EyePos, const struct FVector& TargetPos, class AActor* Eyes, class AActor* Target);
	bool STATIC_HasInteractLos(class AActor* Eyes, class AActor* Target, bool bSimple);
	bool STATIC_HasDamageLosToPoint(class AActor* Eyes, const struct FVector& TargetPos, class AActor* Target, bool bSimple);
	bool STATIC_HasDamageLosPointToPoint(const struct FVector& EyePos, const struct FVector& TargetPos, class AActor* Eyes, class AActor* Target);
	bool STATIC_HasDamageLos(class AActor* Eyes, class AActor* Target, bool bSimple);
	class UWorld* STATIC_GetWorldFromContextObject(class UObject* WorldContextObject);
	class UClass* STATIC_GetWeaponArchetype(class UObject* Obj, bool bAllowPawnEquippedWeapon);
	class APwndWeapon* STATIC_GetWeapon(class UObject* Obj, class UClass* DesiredWeapArchetype, bool bAllowPawnEquippedWeapon);
	struct FHitResult STATIC_GetVisualGeometryFromHit(class UObject* WorldContextObject, const struct FHitResult& HitInfo, float BelowDistance, float AboveDistance, float Radius);
	struct FHitResult STATIC_GetVisualGeometry(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius);
	struct FString STATIC_GetVersionString();
	float STATIC_GetTeamRatio(class UObject* Obj, bool bPlayersOnly, bool bConnectedOnly);
	unsigned char STATIC_GetTeamNum(class UObject* Obj);
	class APwndTeamInfo* STATIC_GetTeamByNum(unsigned char TeamNum, class UObject* WorldContextObject);
	class APwndTeamInfo* STATIC_GetTeam(class UObject* Obj);
	struct FBoxSphereBounds STATIC_GetStaticMeshBounds(class UStaticMesh* Mesh, const struct FVector& Loc, const struct FRotator& Rot, const struct FVector& Scale);
	float STATIC_GetServerTimeStamp(class UObject* WorldContextObject);
	struct FVector STATIC_GetRVectorExp(const struct FRVectorExp& RVectorExp);
	struct FVector2D STATIC_GetRVector2DExp(const struct FRVector2DExp& RVector2DExp);
	struct FVector2D STATIC_GetRVector2D(const struct FRVector2D& RVector2D);
	struct FVector STATIC_GetRVector(const struct FRVector& RVector);
	struct FRotator STATIC_GetRRotatorExp(const struct FRRotatorExp& RRotatorExp);
	struct FRotator STATIC_GetRRotator(const struct FRRotator& RRotator);
	int STATIC_GetRIntExp(const struct FRIntExp& RIntExp);
	int STATIC_GetRInt(const struct FRInt& RInt);
	float STATIC_GetRFloatExp(const struct FRFloatExp& RFloatExp);
	float STATIC_GetRFloat(const struct FRFloat& RFloat);
	class UClass* STATIC_GetRepDmgWeaponArchetype(const struct FPwndReplicatedDamageEvent& DamageEvent);
	class APwndWeapon* STATIC_GetRepDmgWeapon(const struct FPwndReplicatedDamageEvent& DamageEvent);
	class UObject* STATIC_GetRepDmgDefender(const struct FPwndReplicatedDamageEvent& DamageEvent);
	class UObject* STATIC_GetRepDmgAttacker(const struct FPwndReplicatedDamageEvent& DamageEvent);
	struct FString STATIC_GetRealmStr();
	TEnumAsByte<EeRealm> STATIC_GetRealm();
	struct FVector STATIC_GetQVectorExp(struct FQVectorExp* QVectorExp);
	struct FVector2D STATIC_GetQVector2DExp(struct FQVector2DExp* QVector2DExp);
	struct FVector2D STATIC_GetQVector2D(struct FQVector2D* QVector2D);
	struct FVector STATIC_GetQVector(struct FQVector* QVector);
	struct FRotator STATIC_GetQRotatorExp(struct FQRotatorExp* QRotatorExp);
	struct FRotator STATIC_GetQRotator(struct FQRotator* QRotator);
	int STATIC_GetQIntExp(struct FQIntExp* QIntExp);
	int STATIC_GetQInt(struct FQInt* QInt);
	float STATIC_GetQFloatExp(struct FQFloatExp* QFloatExp);
	float STATIC_GetQFloat(struct FQFloat* QFloat);
	class UClass* STATIC_GetPwndDmgWeaponArchetype(const struct FPwndDamageEvent& PwndDamageEvent);
	class APwndWeapon* STATIC_GetPwndDmgWeapon(const struct FPwndDamageEvent& PwndDamageEvent);
	class APwndProjectile* STATIC_GetPwndDmgProjectile(const struct FPwndDamageEvent& PwndDamageEvent);
	class UObject* STATIC_GetPwndDmgDefender(const struct FPwndDamageEvent& PwndDamageEvent);
	class UObject* STATIC_GetPwndDmgAttacker(const struct FPwndDamageEvent& PwndDamageEvent);
	class APlayerState* STATIC_GetPS(class UObject* Obj, bool bAllowOwnedAI);
	class APlayerController* STATIC_GetPC(class UObject* Obj);
	class APawn* STATIC_GetPawn(class UObject* Obj);
	struct FGuid STATIC_GetNextGuidFiltered(TArray<struct FGuid> Guids, int Dir, const struct FGuid& Current, TArray<struct FGuid> FilterArray);
	struct FGuid STATIC_GetNextGuid(TArray<struct FGuid> Guids, int Dir, const struct FGuid& Current);
	bool STATIC_GetNearestSurface(class UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& Origin, float Distance, const struct FVector& Extent, const struct FVector& BaseVector, const struct FVector& Axis, int NumChecks, int NumRings, struct FHitResult* OutSurface);
	unsigned char STATIC_GetLocalTeamNum(class UObject* WorldContextObject);
	class APwndTeamInfo* STATIC_GetLocalTeam(class UObject* WorldContextObject);
	class APlayerState* STATIC_GetLocalPS(class UObject* WorldContextObject);
	class ULocalPlayer* STATIC_GetLocalPlayer(class UObject* WorldContextObject);
	class APlayerController* STATIC_GetLocalPC(class UObject* WorldContextObject);
	class APawn* STATIC_GetLocalPawn(class UObject* WorldContextObject);
	TArray<struct FGuid> STATIC_GetLoadoutGuids(const struct FPwndLoadout& Loadout);
	struct FText STATIC_GetItemRarityEnumDisplayText(TEnumAsByte<EeItemRarity> Rarity);
	TEnumAsByte<EeItemRarity> STATIC_GetItemRarity(class UObject* Obj);
	struct FText STATIC_GetHumanReadableTextClass(class UClass* Class, bool bAllowOwnedAI);
	struct FText STATIC_GetHumanReadableTextByGUID(const struct FGuid& Guid);
	struct FText STATIC_GetHumanReadableText(class UObject* Obj, bool bAllowOwnedAI);
	struct FString STATIC_GetHumanReadableNameClass(class UClass* Class, bool bAllowOwnedAI);
	struct FString STATIC_GetHumanReadableNameByGUID(const struct FGuid& Guid);
	struct FString STATIC_GetHumanReadableName(class UObject* Obj, bool bAllowOwnedAI);
	unsigned char STATIC_GetHudTeamNum(class UObject* WorldContextObject);
	class APwndTeamInfo* STATIC_GetHudTeam(class UObject* WorldContextObject);
	class APlayerState* STATIC_GetHudPS(class UObject* WorldContextObject);
	class APawn* STATIC_GetHudPawn(class UObject* WorldContextObject);
	int STATIC_GetGuidReferences(const struct FGuid& Guid, const struct FName& Type, bool bMustAllowSelection, bool bMustBeEnabledForPlay, TArray<struct FGuid>* GuidRefs);
	bool STATIC_GetGround(class UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& Origin, float Distance, const struct FVector& Extent, struct FHitResult* OutGround);
	class UGameInstance* STATIC_GetGameInstanceFromContextObject(class UObject* WorldContextObject);
	struct FGuid STATIC_GetExportGUID(class UObject* Obj);
	int STATIC_GetEnemyTeams(class UObject* Obj, TArray<class APwndTeamInfo*>* EnemyTeams);
	class APwndTeamInfo* STATIC_GetEnemyTeam(class UObject* Obj, bool bUseHighestScore, bool bIncludePotentialScore, bool bUseChargingScore);
	class UClass* STATIC_GetDmgWeaponArchetype(const struct FDamageEvent& DamageEvent);
	class APwndWeapon* STATIC_GetDmgWeapon(const struct FDamageEvent& DamageEvent);
	class APwndProjectile* STATIC_GetDmgProjectile(const struct FDamageEvent& DamageEvent);
	class UObject* STATIC_GetDmgDefender(const struct FDamageEvent& DamageEvent);
	class UObject* STATIC_GetDmgAttacker(const struct FDamageEvent& DamageEvent);
	struct FText STATIC_GetDisplayTextClass(class UClass* Class);
	struct FText STATIC_GetDisplayText(class UObject* Obj);
	struct FText STATIC_GetDisplayDescriptionClass(class UClass* Class);
	struct FText STATIC_GetDisplayDescription(class UObject* Obj);
	class UObject* STATIC_GetDefender(class UObject* Obj);
	class UObject* STATIC_GetDefaultObjectFromClass(class UClass* Class);
	class UPwndDamageHistoryComponent* STATIC_GetDamageHistoryComp(class UObject* Obj, bool bAllowOwnedAI);
	class AController* STATIC_GetController(class UObject* Obj, bool bAllowOwnedAI);
	struct FGuid STATIC_GetClassExportGUID(class UClass* Class);
	struct FVector STATIC_GetAxis(int I, struct FMatrix* Mat);
	void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	class UObject* STATIC_GetAttacker(class UObject* Obj);
	class UPwndAssetDatabase* STATIC_GetAssetDatabase();
	void STATIC_GetAllPawns(class UObject* WorldContextObject, TArray<class APawn*>* OutPawns);
	TArray<struct FGuid> STATIC_GetAllAvailableCharacters(bool bIncludeNonEnabledForPlay);
	int STATIC_GetAllAssetGuids(class UClass* ClassFilter, bool bMustAllowSelection, bool bMustBeEnabledForPlay, TArray<struct FGuid>* Guids);
	struct FVector STATIC_GetActorSpawnLocation(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& DesiredPos, bool bIncludePawnCollision);
	int STATIC_GeneratePointCloud(const struct FVector& SearchCenter, float Radius, float Resolution, TArray<struct FVector>* Points);
	int STATIC_FindClassMatch(class UClass* SearchClass, TArray<class UClass*> ClassArr, bool bExact);
	bool STATIC_EnabledForPlay(const struct FGuid& Guid);
	struct FRotator STATIC_CreateLookatRotation(const struct FVector& Direction, const struct FRotator& CurrentRotation, const struct FVector& UpHint, bool bForceUp);
	struct FPostedEventTrigger STATIC_CreateEventTriggerPost(TEnumAsByte<EeEventTrigger> Trig, float TrigCount, class UObject* Other1, class UObject* Other2, class UObject* Other3, class UObject* Other4, class UObject* Other5);
	float STATIC_ConvertTriangleToCircleTimer(float InTime);
	bool STATIC_ComputeWrapAroundDistance(class AActor* Target, class AActor* SearchActor, const struct FVector& SearchCenter, float Radius, float WrapAroundGridRadius, float* OutWrapAroundDist);
	float STATIC_ComputeTargetStrength(class AActor* Instigator, class AActor* Act, const struct FVector& StartTrace, const struct FRotator& AimRot, float MaxDistance, const struct FRotator& AngleExtents, const struct FVector2D& NearExtents, bool bAllowEnemies, bool bAllowAllies, bool bAllowCrawling, bool bAllowCloak, bool bRequireLOS, TEnumAsByte<EeMathOperation> CombineMathOp);
	TArray<class AActor*> STATIC_ComputeTargets(class AActor* Instigator, const struct FVector& StartTrace, const struct FRotator& AimRot, float MaxDistance, const struct FRotator& AngleExtents, const struct FVector2D& NearExtents, bool bAllowEnemies, bool bAllowAllies, bool bAllowCrawling, bool bAllowCloak, bool bRequireLOS, TEnumAsByte<EeMathOperation> CombineMathOp);
	int STATIC_ComputeSplashDamageTargets(class AActor* SearchActor, const struct FVector& SearchCenter, float Radius, const struct FHitResult& HitInfo, TArray<class AActor*> IgnoredActors, float WrapAroundGridRadius, bool bRequireLOS, bool bAllowWrapAround, TArray<struct FPwndSplashDamageTarget>* SplashDamageTargets);
	bool STATIC_ClosestPointOnPrimitiveCollision(class UPrimitiveComponent* Comp, const struct FVector& SearchPoint, bool bClampToOutside, struct FVector* OutPoint);
	bool STATIC_ClosestPointOnActorCollision(class AActor* Target, const struct FVector& SearchPoint, bool bClampToOutside, struct FVector* OutPoint, class UPrimitiveComponent** OutComp);
	bool STATIC_CheckObjectIsA(const struct FObjectIsA& ObjIsA, class UObject* Obj);
	bool STATIC_CheckEventTriggerStateIsA(class UObject* Other, const struct FEventTriggerStateIsA& ObjIsA);
	bool STATIC_CheckAnyObjectIsA(TArray<struct FObjectIsA> ArrObjIsA, class UObject* Obj);
	bool STATIC_CheckAllObjectIsA(TArray<struct FObjectIsA> ArrObjIsA, class UObject* Obj);
	void STATIC_ChangeLocalization(const struct FString& Target);
	bool STATIC_BroadcastEventTriggerInline(TEnumAsByte<EeEventTrigger> Trig, float TrigCount, class UObject* Other1, class UObject* Other2, class UObject* Other3, class UObject* Other4, class UObject* Other5);
	bool STATIC_BroadcastEventTrigger(const struct FPostedEventTrigger& Trig, class UObject* WorldContextObject);
	struct FVector STATIC_ApplyVelocityInheritance(TEnumAsByte<EeVelocityInheritance> Type, const struct FVector& Velocity, const struct FVector& InheritVelocity, float Percent);
	void STATIC_ApplyClientPhysicsImpulse(class AActor* SearchActor, const struct FVector& SearchCenter, float Radius, float Strength, TArray<class AActor*> IgnoredActors, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange, bool bRequireLOS);
};


// Class PWND.PwndVoiceBoxComponent
// 0x0020 (0x06D0 - 0x06B0)
class UPwndVoiceBoxComponent : public UAudioComponent
{
public:
	class UClass*                                      VoiceSetClass;                                            // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPwndVoiceSet*                               VoiceSet;                                                 // 0x06B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                lastPlayedVoiceOverPriority;                              // 0x06C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	struct FName                                       lastVoiceOverID;                                          // 0x06C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndVoiceBoxComponent");
		return ptr;
	}


	void StopVO(const struct FName& VoiceOverID, bool bReplicateToAll);
	void StopCustomVO(class USoundBase* customVO, bool bReplicateToAll);
	void PlayVO(const struct FName& VoiceOverID, bool bInterrupt, bool bReplicateToAll);
	void PlayCustomVO(class USoundBase* customVO, bool bInterrupt, bool bReplicateToAll, int VOPriority);
	void OnAudioFinishedCallback();
	void MulticastStopVO(const struct FName& VoiceOverID);
	void MulticastStopCustomVO(class USoundBase* customVO);
	void MulticastPlayVO(const struct FName& VoiceOverID, bool bInterrupt);
	void MulticastPlayCustomVO(class USoundBase* customVO, bool bInterrupt, int VOPriority);
	bool HasVO(const struct FName& VoiceOverID);
	float GetServerTimeStamp();
	void ClientStopVO(const struct FName& VoiceOverID);
	void ClientStopCustomVO(class USoundBase* customVO);
	void ClientPlayVO(const struct FName& VoiceOverID, bool bInterrupt);
	void ClientPlayCustomVO(class USoundBase* customVO, bool bInterrupt, int VOPriority);
	bool CanSpeak();
};


// Class PWND.PwndVoiceSet
// 0x0078 (0x00A0 - 0x0028)
class UPwndVoiceSet : public UObject
{
public:
	struct FGuid                                       ExportGUID;                                               // 0x0028(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bExportEnabled;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowSelection;                                          // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreloadOnStartup;                                        // 0x003A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	TArray<struct FVocalizationSet>                    VocalizationSets;                                         // 0x0040(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, struct FVocalizationSet>        MergedVocalizationSets;                                   // 0x0050(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndVoiceSet");
		return ptr;
	}

};


// Class PWND.PwndWeaponSkin
// 0x0138 (0x0178 - 0x0040)
class UPwndWeaponSkin : public UPwndGUIDObject
{
public:
	bool                                               bAllowSelection;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForPlay;                                          // 0x0041(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FPwndWeaponSkinMesh                         FirstPersonMesh;                                          // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FPwndWeaponSkinMesh>                 FirstPersonAccessoryMeshes;                               // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPwndWeaponSkinAttachment>           FirstPersonAttachments;                                   // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FPwndWeaponSkinMesh                         ThirdPersonMesh;                                          // 0x0080(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FPwndWeaponSkinMesh>                 ThirdPersonAccessoryMeshes;                               // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPwndWeaponSkinAttachment>           ThirdPersonAttachments;                                   // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, class UClass*>                  ReplacementFX;                                            // 0x00B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  SkinIcon;                                                 // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0110(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       DisplayDescription;                                       // 0x0128(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EeItemRarity>                          Rarity;                                                   // 0x0140(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	TArray<class UClass*>                              LockBoxes;                                                // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ValidWeapons;                                             // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGuid>                               ValidWeaponGUIDs;                                         // 0x0168(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndWeaponSkin");
		return ptr;
	}

};


// Class PWND.PwndWidgetInterfaceManager
// 0x0078 (0x0348 - 0x02D0)
class UPwndWidgetInterfaceManager : public UBaseWidgetInterface
{
public:
	class UClass*                                      InGamePwndHUD;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pInGameHUD;                                               // 0x02D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      CharacterInfoScreen;                                      // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pCharacterInfoScreen;                                     // 0x02E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      DebugLobbyScreen;                                         // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pDebugLobbyScreen;                                        // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      EscapeMenuScreen;                                         // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 pEscapeMenuScreen;                                        // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 pScoreBoardScreen;                                        // 0x0310(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                pGameplayCanvasPanel;                                     // 0x0318(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0320(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.PwndWidgetInterfaceManager");
		return ptr;
	}


	void UnBindUINavigationInputActions();
	void StoreCurrentMatchGUID();
	void ShowMainUI();
	void SetToBeTrainingLevel(bool isTrainingLevel);
	void SetToBeChallengeLevel(bool IsChallengeLevel);
	void RequestPostMatchScreen();
	void OnTrainingEscapeMenuRequested();
	void OnEscapePressed();
	void OnEscapeMenuRequested();
	void OnEscapeMenuCleared();
	bool IsSafeToExitWithoutPenalty();
	bool IsOnlineMatch();
	bool IsChallengeLevel();
	void HideMainUI();
	void GoToLobbyScreen();
	void GoToDebugLoadoutScreen();
	int GetNextMatchMakingPenaltyTime();
	void ExitMatch();
	void ClearUIScreens();
	void BindUINavigationInputActions();
};


// Class PWND.UI_ButtonHint
// 0x0048 (0x0278 - 0x0230)
class UUI_ButtonHint : public UUserWidget
{
public:
	struct FText                                       DisplayText;                                              // 0x0230(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	class UTexture2D*                                  pButtonTexture;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UImage*                                      pMainImage;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pMainText;                                                // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pMainButton;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_ButtonHint");
		return ptr;
	}


	void OnHintClicked();
};


// Class PWND.UI_ChatWidget
// 0x0028 (0x0258 - 0x0230)
class UUI_ChatWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0230(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_ChatWidget");
		return ptr;
	}


	void SendMessage(EChatChannelType Channel, const struct FString& Message);
	void OnSystemMessagesRecieved(TArray<struct FString> messages);
	void OnMessageRecieved(const struct FChatMessageStruct& ChatMessage);
	void OnAnnoucementsRecieved(TArray<struct FString> messages);
};


// Class PWND.UI_DropDownBase
// 0x0018 (0x0298 - 0x0280)
class UUI_DropDownBase : public UUI_MenuNavigable
{
public:
	class UUserWidget*                                 InitialFocusDropDownButton;                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UUI_DropDownButton*>                  DropDownWidgets;                                          // 0x0288(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_DropDownBase");
		return ptr;
	}


	void ToggleDropDownCallable();
	void ToggleDropDown();
	void SetInitialFocusWidget(class UUserWidget* DropDownButton);
	void ListUpdated(TArray<struct FText> UpdatedList, const struct FString& IndexString);
	void ClearDropDownWidgetList();
	void AddDropDownWidget(class UUI_DropDownButton* DropDownButton);
};


// Class PWND.UI_GeneralUseCaseButton
// 0x0280 (0x0500 - 0x0280)
class UUI_GeneralUseCaseButton : public UUI_MenuNavigable
{
public:
	class UTexture2D*                                  BaseTexture;                                              // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bInitiallyDisabled;                                       // 0x0288(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bCanBeSelected;                                           // 0x0289(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x028A(0x0002) MISSED OFFSET
	struct FLinearColor                                NormalState;                                              // 0x028C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                HoverState;                                               // 0x029C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                PressedState;                                             // 0x02AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                DisabledState;                                            // 0x02BC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                DisabledHover;                                            // 0x02CC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                SelectedState;                                            // 0x02DC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                SelectedHover;                                            // 0x02EC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              FontType;                                                 // 0x0300(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	struct FText                                       ButtonText;                                               // 0x0368(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	int                                                FontSize;                                                 // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	struct FSlateColor                                 ButtonTextColor;                                          // 0x0388(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	int                                                FontSizeWhenPressed;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FSlateSound                                 PressedSlateSound;                                        // 0x03B8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x03D0(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelected;                                               // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xA8];                                      // 0x0408(0x00A8) MISSED OFFSET
	class UButton*                                     pButton;                                                  // 0x04B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      pMainImage;                                               // 0x04B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBorder*                                     pMainBorder;                                              // 0x04C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pMainText;                                                // 0x04C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pAnimNormal;                                              // 0x04D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pAnimNormalToPressed;                                     // 0x04D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pAnimPressed;                                             // 0x04E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            pCurrentlyPlayingAnimation;                               // 0x04E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_GeneralUseCaseButton");
		return ptr;
	}


	void SetText(const struct FText& newText);
	void SetDisabledState(bool disable);
	void RegisterPressedAnimState(class UWidgetAnimation* pWidgetAnimation);
	void RegisterNormalToPressedAnimState(class UWidgetAnimation* pWidgetAnimation);
	void RegisterNormalAnimState(class UWidgetAnimation* pWidgetAnimation);
	void PassTextReferenceToCode(class UTextBlock* pTextReference);
	void PassImageReferenceToCode(class UImage* pImageReference);
	void PassButtonReferenceToCode(class UButton* pButtonReference);
	void PassBorderReferenceToCode(class UBorder* pBorderReference);
	void OnRightPressed_Local();
	void OnMouseUnHovered();
	void OnMouseReleased();
	void OnMousePressedDown();
	void OnMouseHovered();
	void OnLeftPressed_Local();
	void OnButtonPressed_Local();
	bool IsButtonDisabled();
	void Cosmetic_SelectedStateSet();
	void Cosmetic_SelectedHoverStateSet(bool bWasMouse);
	void Cosmetic_PressedStateSet();
	void Cosmetic_NormalStateSet();
	void Cosmetic_HoverStateSet(bool bWasMouse);
	void Cosmetic_DisabledStateSet();
	void Cosmetic_DisabledHoverStateSet();
};


// Class PWND.UI_DropDownButton
// 0x0000 (0x0500 - 0x0500)
class UUI_DropDownButton : public UUI_GeneralUseCaseButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_DropDownButton");
		return ptr;
	}

};


// Class PWND.UI_DropDownScalable
// 0x0038 (0x02B8 - 0x0280)
class UUI_DropDownScalable : public UUI_MenuNavigable
{
public:
	class UClass*                                      ButtonsToDynamicallyCreate;                               // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ButtonElementSize;                                        // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               ShouldAlwaysRemainOpen;                                   // 0x0290(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               ShouldButtonsBeSelectable;                                // 0x0291(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	int                                                indexOfDefaultSelectedElement;                            // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0298(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_DropDownScalable");
		return ptr;
	}


	void ToggleList();
	void SetupSelectionGroup(class UUI_SelectableGroup* pSelectionGroup);
	void RegisterForNavigation(class UFrontEnd_BaseScreen* pScreen);
	void PassVerticalBoxReference(class UVerticalBox* pVerBoxRef);
	void OpenList();
	void OnListElementSelected(const struct FDropDownElement& SelectedListItem);
	bool IsOpen();
	struct FText GetElementText(int Index);
	class UUserWidget* GetElement(int Index);
	void CloseList();
	void BuildListFromTextArray(TArray<struct FText> textArray);
	void BuildListFromStringArray(TArray<struct FString> stringArray);
};


// Class PWND.UI_EndOfMatchLoadout
// 0x00C0 (0x02F0 - 0x0230)
class UUI_EndOfMatchLoadout : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0230(0x0020) MISSED OFFSET
	class UTextBlock*                                  GameWinnerNameAlly;                                       // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  GameWinnerNameEnemy;                                      // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UTextBlock*>                          PlayerNameAlly;                                           // 0x0260(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UTextBlock*>                          PlayerNameEnemy;                                          // 0x0270(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UFrontEnd_UIButtonLoadoutItem*>       CharacterSkin;                                            // 0x0280(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UFrontEnd_UIButtonLoadoutItem*>       LauncherWeapon;                                           // 0x0290(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UFrontEnd_UIButtonLoadoutItem*>       PrimaryAbility;                                           // 0x02A0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UFrontEnd_UIButtonLoadoutItem*>       SecondaryAbility;                                         // 0x02B0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UFrontEnd_UIButtonLoadoutItem*>       Perk1;                                                    // 0x02C0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UFrontEnd_UIButtonLoadoutItem*>       Perk2;                                                    // 0x02D0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UFrontEnd_UIButtonLoadoutItem*>       Perk3;                                                    // 0x02E0(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_EndOfMatchLoadout");
		return ptr;
	}


	void OnUnHoveredByMouseRight();
	void OnUnHoveredByMouseLeft();
	void OnUnHoveredByMouseCenter();
	void OnHoveredByMouseRight();
	void OnHoveredByMouseLeft();
	void OnHoveredByMouseCenter();
};


// Class PWND.UI_EscapeMenu
// 0x0000 (0x0270 - 0x0270)
class UUI_EscapeMenu : public UFrontEnd_BaseScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_EscapeMenu");
		return ptr;
	}


	class UUI_GenericPopUp* SpawnAreYouSureYouWantToLeavePopUp();
	void RequestClose();
	void GetPlayersInVoipChannel(TArray<struct FPlayerVoipInfo>* playersInVoipChannel);
};


// Class PWND.UI_GenericPopUp
// 0x0088 (0x02F8 - 0x0270)
class UUI_GenericPopUp : public UFrontEnd_BaseScreen
{
public:
	struct FScriptMulticastDelegate                    OnOkayPressed;                                            // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelPressed;                                          // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInviteOkayPressed;                                      // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInviteCancelPressed;                                    // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTextBlock*                                  pTitleTextBlock;                                          // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBodyTextBlock;                                           // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_GeneralUseCaseButton*                    pOkayButton;                                              // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_GeneralUseCaseButton*                    pCancelButton;                                            // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x02D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_GenericPopUp");
		return ptr;
	}


	void UpdateTextBody(const struct FText& Text);
	void PassTitleTextBlockReference(class UTextBlock* pTitleText);
	void PassOkayButtonReference_Custom(class UUI_GeneralUseCaseButton* pButton);
	void PassOkayButtonReference(class UButton* pButton);
	void PassCancelButtonReference_Custom(class UUI_GeneralUseCaseButton* pButton);
	void PassCancelButtonReference(class UButton* pButton);
	void PassBodyTextBlockReference(class UTextBlock* pBodyText);
	void OnOkayButtonPressed();
	void OnCloseRequested();
	void OnCancelButtonPressed();
	void Close();
	void ClearPopUp();
};


// Class PWND.UI_LineGraph2D
// 0x00F8 (0x0328 - 0x0230)
class UUI_LineGraph2D : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	class UCanvasPanel*                                pGraphingPanel;                                           // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomFirstValue;                                        // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomSecondValue;                                       // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomThirdValue;                                        // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomFourthValue;                                       // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomFifthValue;                                        // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomSixthValue;                                        // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomSeventhValue;                                      // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomEighthValue;                                       // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pBottomNinthValue;                                        // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pSideFirstValue;                                          // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pSideSecondValue;                                         // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pSideThirdValue;                                          // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pSideFourthValue;                                         // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pSideFifthValue;                                          // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pSideSixthValue;                                          // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pSideSeventhValue;                                        // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLineName1;                                               // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLineName2;                                               // 0x02D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLineName3;                                               // 0x02D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLineName4;                                               // 0x02E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLineName5;                                               // 0x02E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      pLineColorAssociation1;                                   // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      pLineColorAssociation2;                                   // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      pLineColorAssociation3;                                   // 0x0300(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      pLineColorAssociation4;                                   // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      pLineColorAssociation5;                                   // 0x0310(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_LineGraph2D");
		return ptr;
	}

};


// Class PWND.UI_LobbyCharacterPlate
// 0x0030 (0x0260 - 0x0230)
class UUI_LobbyCharacterPlate : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	class UImage*                                      pCharacterIcon;                                           // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pTextPlayerName;                                          // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pTextCharacterName;                                       // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pReadyText;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_LobbyCharacterPlate");
		return ptr;
	}

};


// Class PWND.UI_MutePlayerButton
// 0x0000 (0x0230 - 0x0230)
class UUI_MutePlayerButton : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_MutePlayerButton");
		return ptr;
	}


	void ToggleMutePlayer(const struct FString& PlayerName, bool mute);
};


// Class PWND.UI_OptionButton
// 0x0028 (0x02A8 - 0x0280)
class UUI_OptionButton : public UUI_MenuNavigable
{
public:
	class UFrontEnd_OptionsScreen*                     OptionsScreen;                                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pMainButton;                                              // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             pWidget;                                                  // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FLinearColor                                PreviousColor;                                            // 0x0298(0x0010) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_OptionButton");
		return ptr;
	}


	void SetOptionsScreen(class UFrontEnd_OptionsScreen* Screen);
};


// Class PWND.UI_OptionToggle
// 0x0008 (0x0238 - 0x0230)
class UUI_OptionToggle : public UUserWidget
{
public:
	bool                                               bActive;                                                  // 0x0230(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_OptionToggle");
		return ptr;
	}


	void ActivateToggle();
};


// Class PWND.UI_PenaltyWidget
// 0x0008 (0x0238 - 0x0230)
class UUI_PenaltyWidget : public UUserWidget
{
public:
	class UPwndGameUserSettings*                       Settings;                                                 // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_PenaltyWidget");
		return ptr;
	}


	void UpdateMessage(int64_t secondsLeft);
	bool Initialize();
};


// Class PWND.UI_PostMatchCharacterProgress
// 0x0028 (0x0258 - 0x0230)
class UUI_PostMatchCharacterProgress : public UUserWidget
{
public:
	class UTextBlock*                                  pCharacterName;                                           // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLevelName;                                               // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  pLevelValue;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UProgressBar*                                pExperienceBar;                                           // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      pCharacterImage;                                          // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_PostMatchCharacterProgress");
		return ptr;
	}

};


// Class PWND.UI_SelectableGroup
// 0x0008 (0x0238 - 0x0230)
class UUI_SelectableGroup : public UUserWidget
{
public:
	class UUI_MenuNavigable*                           pCurrentlySelected;                                       // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_SelectableGroup");
		return ptr;
	}


	void SelectNewSelectable(class UUI_MenuNavigable* pNewlySelected);
	void GiveGroupReferenceToButton(class UUI_MenuNavigable* MenuNavigable);
	class UUI_MenuNavigable* GetCurrentlySelected();
};


// Class PWND.UI_SelectionHighlighter
// 0x0040 (0x0270 - 0x0230)
class UUI_SelectionHighlighter : public UUserWidget
{
public:
	struct FVector2D                                   SelectionOffset;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	float                                              MovementDesiredSpeed;                                     // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               FollowOnlyOnMouseClick;                                   // 0x023C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x023D(0x000B) MISSED OFFSET
	class UImage*                                      pHighlighterimage;                                        // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	TArray<class UFrontEnd_UIButton*>                  highlighterButtons;                                       // 0x0258(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UFrontEnd_UIButton*                          pCurrentlyHoveredOverButton;                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_SelectionHighlighter");
		return ptr;
	}


	void SetSelectionToRegisteredButton(class UUserWidget* pItemToHighlight);
	void RegisterButtonToHighlight(class UUserWidget* pFrontEndButtonWidget);
	void ClearButtonRegistrations();
};


// Class PWND.UI_TextureSwapButton
// 0x0090 (0x0310 - 0x0280)
class UUI_TextureSwapButton : public UUI_MenuNavigable
{
public:
	bool                                               DisableOnPress;                                           // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               UseImportedImageSize;                                     // 0x0281(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0282(0x0002) MISSED OFFSET
	struct FVector2D                                   CustomButtonSize;                                         // 0x0284(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	int                                                FontSize;                                                 // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FText                                       MainText;                                                 // 0x0290(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	struct FText                                       DisabledText;                                             // 0x02A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	class UTexture2D*                                  UnHoveredStateTexture;                                    // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UTexture2D*                                  HoveredStateTexture;                                      // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UTexture2D*                                  DisableStateTexture;                                      // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTextBlock*                                  pText;                                                    // 0x02E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      pButtonImage;                                             // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UButton*                                     pButton;                                                  // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UOverlay*                                    pTextOverlay;                                             // 0x0300(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_TextureSwapButton");
		return ptr;
	}


	void OnUnHovered();
	void OnHoveredByMouse();
	void OnClickedButton();
};


// Class PWND.UI_VerticalBarGraph
// 0x0018 (0x0248 - 0x0230)
class UUI_VerticalBarGraph : public UUserWidget
{
public:
	class UClass*                                      BarToUse;                                                 // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCanvasPanel*                                pCanvasPanel;                                             // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                pVerticalBoxBarGraphArea;                                 // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PWND.UI_VerticalBarGraph");
		return ptr;
	}


	void OnBarAdded(class UUserWidget* newBarWidget, int teamAffiliationIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
