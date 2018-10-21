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

// Function HUD_Chat_IndividualBlock.HUD_Chat_IndividualBlock_C.GetText_1
struct UHUD_Chat_IndividualBlock_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD_Chat_IndividualBlock.HUD_Chat_IndividualBlock_C.Init
struct UHUD_Chat_IndividualBlock_C_Init_Params
{
	class APwndPlayerController*                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Speech;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                CurrentChatType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
