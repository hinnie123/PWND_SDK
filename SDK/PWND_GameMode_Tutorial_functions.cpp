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

// Function GameMode_Tutorial.GameMode_Tutorial_C.Replace Control Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Source                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   New_Text                       (Parm, OutParm)

void AGameMode_Tutorial_C::Replace_Control_Text(const struct FText& Source, struct FText* New_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.Replace Control Text");

	AGameMode_Tutorial_C_Replace_Control_Text_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Text != nullptr)
		*New_Text = params.New_Text;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.PlayerCanRestart
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameMode_Tutorial_C::PlayerCanRestart(class APlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.PlayerCanRestart");

	AGameMode_Tutorial_C_PlayerCanRestart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.GetDataTables
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Segment_1                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_2                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_3                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_4                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_5                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_6                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_7                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_8                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_9                      (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           Segment_10                     (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           ActionHeaders                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FText>           ActionBody                     (Parm, OutParm, ZeroConstructor)
// int                            MaxSegments                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGameMode_Tutorial_C::GetDataTables(TArray<struct FText>* Segment_1, TArray<struct FText>* Segment_2, TArray<struct FText>* Segment_3, TArray<struct FText>* Segment_4, TArray<struct FText>* Segment_5, TArray<struct FText>* Segment_6, TArray<struct FText>* Segment_7, TArray<struct FText>* Segment_8, TArray<struct FText>* Segment_9, TArray<struct FText>* Segment_10, TArray<struct FText>* ActionHeaders, TArray<struct FText>* ActionBody, int* MaxSegments)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.GetDataTables");

	AGameMode_Tutorial_C_GetDataTables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Segment_1 != nullptr)
		*Segment_1 = params.Segment_1;
	if (Segment_2 != nullptr)
		*Segment_2 = params.Segment_2;
	if (Segment_3 != nullptr)
		*Segment_3 = params.Segment_3;
	if (Segment_4 != nullptr)
		*Segment_4 = params.Segment_4;
	if (Segment_5 != nullptr)
		*Segment_5 = params.Segment_5;
	if (Segment_6 != nullptr)
		*Segment_6 = params.Segment_6;
	if (Segment_7 != nullptr)
		*Segment_7 = params.Segment_7;
	if (Segment_8 != nullptr)
		*Segment_8 = params.Segment_8;
	if (Segment_9 != nullptr)
		*Segment_9 = params.Segment_9;
	if (Segment_10 != nullptr)
		*Segment_10 = params.Segment_10;
	if (ActionHeaders != nullptr)
		*ActionHeaders = params.ActionHeaders;
	if (ActionBody != nullptr)
		*ActionBody = params.ActionBody;
	if (MaxSegments != nullptr)
		*MaxSegments = params.MaxSegments;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameMode_Tutorial_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.UserConstructionScript");

	AGameMode_Tutorial_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.SetTrainingType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TrainingType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Tutorial_C::SetTrainingType(int TrainingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.SetTrainingType");

	AGameMode_Tutorial_C_SetTrainingType_Params params;
	params.TrainingType = TrainingType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.SetSegmentText
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Tutorial_C::SetSegmentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.SetSegmentText");

	AGameMode_Tutorial_C_SetSegmentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.SetCurrentText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TextIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Tutorial_C::SetCurrentText(int TextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.SetCurrentText");

	AGameMode_Tutorial_C_SetCurrentText_Params params;
	params.TextIndex = TextIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.RespawnPlayer
// (BlueprintCallable, BlueprintEvent)

void AGameMode_Tutorial_C::RespawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.RespawnPlayer");

	AGameMode_Tutorial_C_RespawnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.ExecuteUbergraph_GameMode_Tutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGameMode_Tutorial_C::ExecuteUbergraph_GameMode_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.ExecuteUbergraph_GameMode_Tutorial");

	AGameMode_Tutorial_C_ExecuteUbergraph_GameMode_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMode_Tutorial.GameMode_Tutorial_C.Set Training Type__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGameMode_Tutorial_C::Set_Training_Type__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_Tutorial.GameMode_Tutorial_C.Set Training Type__DelegateSignature");

	AGameMode_Tutorial_C_Set_Training_Type__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
