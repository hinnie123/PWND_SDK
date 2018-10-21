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

// Function BP_AchievementPopUp.BP_AchievementPopUp_C.Set Achievement Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Achievement_Name               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Achievement_Desc               (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Credit_Reward                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial*               Reward_Image                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Notification_GUID              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_AchievementPopUp_C::Set_Achievement_Info(const struct FText& Achievement_Name, const struct FText& Achievement_Desc, int Credit_Reward, class UMaterial* Reward_Image, const struct FGuid& Notification_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementPopUp.BP_AchievementPopUp_C.Set Achievement Info");

	UBP_AchievementPopUp_C_Set_Achievement_Info_Params params;
	params.Achievement_Name = Achievement_Name;
	params.Achievement_Desc = Achievement_Desc;
	params.Credit_Reward = Credit_Reward;
	params.Reward_Image = Reward_Image;
	params.Notification_GUID = Notification_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AchievementPopUp.BP_AchievementPopUp_C.ExecuteUbergraph_BP_AchievementPopUp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AchievementPopUp_C::ExecuteUbergraph_BP_AchievementPopUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementPopUp.BP_AchievementPopUp_C.ExecuteUbergraph_BP_AchievementPopUp");

	UBP_AchievementPopUp_C_ExecuteUbergraph_BP_AchievementPopUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AchievementPopUp.BP_AchievementPopUp_C.MessageEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Notification_GUID              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_AchievementPopUp_C::MessageEnd__DelegateSignature(const struct FGuid& Notification_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AchievementPopUp.BP_AchievementPopUp_C.MessageEnd__DelegateSignature");

	UBP_AchievementPopUp_C_MessageEnd__DelegateSignature_Params params;
	params.Notification_GUID = Notification_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
