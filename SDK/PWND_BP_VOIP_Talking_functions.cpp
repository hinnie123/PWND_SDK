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

// Function BP_VOIP_Talking.BP_VOIP_Talking_C.RemoveFromChatbox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SearchName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_VOIP_Talking_C::RemoveFromChatbox(const struct FString& SearchName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_Talking.BP_VOIP_Talking_C.RemoveFromChatbox");

	UBP_VOIP_Talking_C_RemoveFromChatbox_Params params;
	params.SearchName = SearchName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_Talking.BP_VOIP_Talking_C.AddToChatBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_VOIP_Talking_C::AddToChatBox(const struct FString& inString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_Talking.BP_VOIP_Talking_C.AddToChatBox");

	UBP_VOIP_Talking_C_AddToChatBox_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_Talking.BP_VOIP_Talking_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_VOIP_Talking_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_Talking.BP_VOIP_Talking_C.Construct");

	UBP_VOIP_Talking_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_Talking.BP_VOIP_Talking_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VOIP_Talking_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_Talking.BP_VOIP_Talking_C.Tick");

	UBP_VOIP_Talking_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_Talking.BP_VOIP_Talking_C.On VOIP Talking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_VOIP_Talking_C::On_VOIP_Talking(bool isTalking, const struct FString& UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_Talking.BP_VOIP_Talking_C.On VOIP Talking");

	UBP_VOIP_Talking_C_On_VOIP_Talking_Params params;
	params.isTalking = isTalking;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VOIP_Talking.BP_VOIP_Talking_C.ExecuteUbergraph_BP_VOIP_Talking
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VOIP_Talking_C::ExecuteUbergraph_BP_VOIP_Talking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VOIP_Talking.BP_VOIP_Talking_C.ExecuteUbergraph_BP_VOIP_Talking");

	UBP_VOIP_Talking_C_ExecuteUbergraph_BP_VOIP_Talking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
