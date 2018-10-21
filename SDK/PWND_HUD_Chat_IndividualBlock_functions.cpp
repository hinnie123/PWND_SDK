// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Chat_IndividualBlock.HUD_Chat_IndividualBlock_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_Chat_IndividualBlock_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_IndividualBlock.HUD_Chat_IndividualBlock_C.GetText_1");

	UHUD_Chat_IndividualBlock_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_Chat_IndividualBlock.HUD_Chat_IndividualBlock_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerController*   User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Speech                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            CurrentChatType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_Chat_IndividualBlock_C::Init(class APwndPlayerController* User, const struct FText& Speech, int CurrentChatType, const struct FText& UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat_IndividualBlock.HUD_Chat_IndividualBlock_C.Init");

	UHUD_Chat_IndividualBlock_C_Init_Params params;
	params.User = User;
	params.Speech = Speech;
	params.CurrentChatType = CurrentChatType;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
