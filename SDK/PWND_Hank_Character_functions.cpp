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

// Function Hank_Character.Hank_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHank_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hank_Character.Hank_Character_C.UserConstructionScript");

	AHank_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hank_Character.Hank_Character_C.OnRocketJump
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FReplicatedRocketJump*  JumpInfo                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHank_Character_C::OnRocketJump(struct FReplicatedRocketJump* JumpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hank_Character.Hank_Character_C.OnRocketJump");

	AHank_Character_C_OnRocketJump_Params params;
	params.JumpInfo = JumpInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hank_Character.Hank_Character_C.ExecuteUbergraph_Hank_Character
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHank_Character_C::ExecuteUbergraph_Hank_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hank_Character.Hank_Character_C.ExecuteUbergraph_Hank_Character");

	AHank_Character_C_ExecuteUbergraph_Hank_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
