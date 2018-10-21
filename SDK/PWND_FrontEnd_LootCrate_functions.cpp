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

// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AFrontEnd_LootCrate_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_0__FinishedFunc");

	AFrontEnd_LootCrate_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AFrontEnd_LootCrate_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_0__UpdateFunc");

	AFrontEnd_LootCrate_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AFrontEnd_LootCrate_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_1__FinishedFunc");

	AFrontEnd_LootCrate_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AFrontEnd_LootCrate_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Timeline_1__UpdateFunc");

	AFrontEnd_LootCrate_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontEnd_LootCrate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.ReceiveBeginPlay");

	AFrontEnd_LootCrate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.CamMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  ActorRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_LootCrate_C::CamMove(const struct FTransform& Position, class AActor* ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.CamMove");

	AFrontEnd_LootCrate_C_CamMove_Params params;
	params.Position = Position;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.NoCrates
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_LootCrate_C::NoCrates()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.NoCrates");

	AFrontEnd_LootCrate_C_NoCrates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.HasCrate
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_LootCrate_C::HasCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.HasCrate");

	AFrontEnd_LootCrate_C_HasCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Set Crate Rarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EeItemRarity>      Highest_Rarity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_LootCrate_C::Set_Crate_Rarity(TEnumAsByte<EeItemRarity> Highest_Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.Set Crate Rarity");

	AFrontEnd_LootCrate_C_Set_Crate_Rarity_Params params;
	params.Highest_Rarity = Highest_Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.RE Set Loot Camera
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_LootCrate_C::RE_Set_Loot_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.RE Set Loot Camera");

	AFrontEnd_LootCrate_C_RE_Set_Loot_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.ExecuteUbergraph_FrontEnd_LootCrate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_LootCrate_C::ExecuteUbergraph_FrontEnd_LootCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEnd_LootCrate.FrontEnd_LootCrate_C.ExecuteUbergraph_FrontEnd_LootCrate");

	AFrontEnd_LootCrate_C_ExecuteUbergraph_FrontEnd_LootCrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
