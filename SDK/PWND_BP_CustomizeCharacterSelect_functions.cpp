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

// Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_CustomizeCharacterSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Construct");

	UBP_CustomizeCharacterSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Set World Progress
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   Levels_Completed               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Level_Coins                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Total_Levels                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Total_Levels_Completed         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Total_Coins_Found              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeCharacterSelect_C::Set_World_Progress(TArray<bool> Levels_Completed, TArray<int> Level_Coins, int Total_Levels, int Total_Levels_Completed, int Total_Coins_Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Set World Progress");

	UBP_CustomizeCharacterSelect_C_Set_World_Progress_Params params;
	params.Levels_Completed = Levels_Completed;
	params.Level_Coins = Level_Coins;
	params.Total_Levels = Total_Levels;
	params.Total_Levels_Completed = Total_Levels_Completed;
	params.Total_Coins_Found = Total_Coins_Found;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Set Character
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_CustomizeCharacterSelect_C::Set_Character(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.Set Character");

	UBP_CustomizeCharacterSelect_C_Set_Character_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.ExecuteUbergraph_BP_CustomizeCharacterSelect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomizeCharacterSelect_C::ExecuteUbergraph_BP_CustomizeCharacterSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomizeCharacterSelect.BP_CustomizeCharacterSelect_C.ExecuteUbergraph_BP_CustomizeCharacterSelect");

	UBP_CustomizeCharacterSelect_C_ExecuteUbergraph_BP_CustomizeCharacterSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
