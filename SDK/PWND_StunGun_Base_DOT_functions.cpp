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

// Function StunGun_Base_DOT.StunGun_Base_DOT_C.OnTuneCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class APwndCharacter**         Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStunGun_Base_DOT_C::OnTuneCharacter(class APwndCharacter** Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function StunGun_Base_DOT.StunGun_Base_DOT_C.OnTuneCharacter");

	UStunGun_Base_DOT_C_OnTuneCharacter_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StunGun_Base_DOT.StunGun_Base_DOT_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UStunGun_Base_DOT_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StunGun_Base_DOT.StunGun_Base_DOT_C.ReceiveBeginPlay");

	UStunGun_Base_DOT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StunGun_Base_DOT.StunGun_Base_DOT_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStunGun_Base_DOT_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function StunGun_Base_DOT.StunGun_Base_DOT_C.ReceiveEndPlay");

	UStunGun_Base_DOT_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StunGun_Base_DOT.StunGun_Base_DOT_C.ExecuteUbergraph_StunGun_Base_DOT
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStunGun_Base_DOT_C::ExecuteUbergraph_StunGun_Base_DOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StunGun_Base_DOT.StunGun_Base_DOT_C.ExecuteUbergraph_StunGun_Base_DOT");

	UStunGun_Base_DOT_C_ExecuteUbergraph_StunGun_Base_DOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
