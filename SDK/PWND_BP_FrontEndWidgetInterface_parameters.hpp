#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.GetPlayerNamePlate
struct UBP_FrontEndWidgetInterface_C_GetPlayerNamePlate_Params
{
	class UBP_PlayerNameplate_C*                       Instance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnFail_1F5E05A54C193DBD94E6F981102DA1E6
struct UBP_FrontEndWidgetInterface_C_OnFail_1F5E05A54C193DBD94E6F981102DA1E6_Params
{
	class UTexture2DDynamic*                           Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnSuccess_1F5E05A54C193DBD94E6F981102DA1E6
struct UBP_FrontEndWidgetInterface_C_OnSuccess_1F5E05A54C193DBD94E6F981102DA1E6_Params
{
	class UTexture2DDynamic*                           Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Construct
struct UBP_FrontEndWidgetInterface_C_Construct_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToMainMenu
struct UBP_FrontEndWidgetInterface_C_OnArrivedToMainMenu_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToLobby
struct UBP_FrontEndWidgetInterface_C_OnArrivedToLobby_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Hide Player Name Plate
struct UBP_FrontEndWidgetInterface_C_Hide_Player_Name_Plate_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Show Player Name Plate
struct UBP_FrontEndWidgetInterface_C_Show_Player_Name_Plate_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToLoginScreen
struct UBP_FrontEndWidgetInterface_C_OnArrivedToLoginScreen_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToCreateAccountScreen
struct UBP_FrontEndWidgetInterface_C_OnArrivedToCreateAccountScreen_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.UpdatePlayerNamePlateData
struct UBP_FrontEndWidgetInterface_C_UpdatePlayerNamePlateData_Params
{
	struct FText*                                      PlayerName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               numberOfCredits;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               rankLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             experiencePercentage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 pAvatarImage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Play Transition
struct UBP_FrontEndWidgetInterface_C_Play_Transition_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToEulaNdaScreen
struct UBP_FrontEndWidgetInterface_C_OnArrivedToEulaNdaScreen_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.DisplayBackendRelatedError
struct UBP_FrontEndWidgetInterface_C_DisplayBackendRelatedError_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Body;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnOkayPressed_Event_3
struct UBP_FrontEndWidgetInterface_C_OnOkayPressed_Event_3_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnArrivedToPreLoginScreen
struct UBP_FrontEndWidgetInterface_C_OnArrivedToPreLoginScreen_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedPartyInvite
struct UBP_FrontEndWidgetInterface_C_OnReceivedPartyInvite_Params
{
	struct FString*                                    friendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FGuid*                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceiveNewPartyVersion
struct UBP_FrontEndWidgetInterface_C_OnReceiveNewPartyVersion_Params
{
	TArray<struct FOnlineFriendSocialBPData>*          CurrentParty;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnPartyDisbanded
struct UBP_FrontEndWidgetInterface_C_OnPartyDisbanded_Params
{
	bool*                                              intentionalReasons;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnLeaveMainMenuScreen
struct UBP_FrontEndWidgetInterface_C_OnLeaveMainMenuScreen_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedNoticeOfInParty
struct UBP_FrontEndWidgetInterface_C_OnReceivedNoticeOfInParty_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedNoticeOfNotInParty
struct UBP_FrontEndWidgetInterface_C_OnReceivedNoticeOfNotInParty_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnKickedFromParty
struct UBP_FrontEndWidgetInterface_C_OnKickedFromParty_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Mission Complete
struct UBP_FrontEndWidgetInterface_C_Mission_Complete_Params
{
	struct FGuid                                       NotificationGuid;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FMissionInfo                                MissionInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Achievement Pop Up
struct UBP_FrontEndWidgetInterface_C_Achievement_Pop_Up_Params
{
	struct FText                                       Achievement_Name;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Achievement_Desc;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Credit_Reward;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Reward_Image;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Notification_GUID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.Notification Finished
struct UBP_FrontEndWidgetInterface_C_Notification_Finished_Params
{
	struct FGuid                                       Notification_GUID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnLoggedInSuccessfully
struct UBP_FrontEndWidgetInterface_C_OnLoggedInSuccessfully_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReturnedFromMatch
struct UBP_FrontEndWidgetInterface_C_OnReturnedFromMatch_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnInviteOkayPressed_Event
struct UBP_FrontEndWidgetInterface_C_OnInviteOkayPressed_Event_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FGuid                                       PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnInviteCancelPressed_Event
struct UBP_FrontEndWidgetInterface_C_OnInviteCancelPressed_Event_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FGuid                                       PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.XP Gained
struct UBP_FrontEndWidgetInterface_C_XP_Gained_Params
{
	struct FGuid                                       NotificationGuid;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FText                                       Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnMatchFound
struct UBP_FrontEndWidgetInterface_C_OnMatchFound_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnICustomMatchnviteOkayPressed_Event
struct UBP_FrontEndWidgetInterface_C_OnICustomMatchnviteOkayPressed_Event_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FGuid                                       PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnCustomMatchInviteCancelPressed_Event
struct UBP_FrontEndWidgetInterface_C_OnCustomMatchInviteCancelPressed_Event_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FGuid                                       PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.OnReceivedCustomMatchInvite
struct UBP_FrontEndWidgetInterface_C_OnReceivedCustomMatchInvite_Params
{
	struct FString*                                    friendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FGuid*                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ExecuteUbergraph_BP_FrontEndWidgetInterface
struct UBP_FrontEndWidgetInterface_C_ExecuteUbergraph_BP_FrontEndWidgetInterface_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.MatchFound__DelegateSignature
struct UBP_FrontEndWidgetInterface_C_MatchFound__DelegateSignature_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ClosedMOTD__DelegateSignature
struct UBP_FrontEndWidgetInterface_C_ClosedMOTD__DelegateSignature_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ArrivedToLobby__DelegateSignature
struct UBP_FrontEndWidgetInterface_C_ArrivedToLobby__DelegateSignature_Params
{
};

// Function BP_FrontEndWidgetInterface.BP_FrontEndWidgetInterface_C.ArrivedToMainMenu__DelegateSignature
struct UBP_FrontEndWidgetInterface_C_ArrivedToMainMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
