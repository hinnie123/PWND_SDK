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

// Function BodyPile_FX.BodyPile_FX_C.GetGroundLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OffsetFromGround               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 GroundLocation                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 GroundNormal                   (Parm, OutParm, IsPlainOldData)

void ABodyPile_FX_C::GetGroundLocation(float OffsetFromGround, struct FVector* GroundLocation, struct FVector* GroundNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.GetGroundLocation");

	ABodyPile_FX_C_GetGroundLocation_Params params;
	params.OffsetFromGround = OffsetFromGround;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroundLocation != nullptr)
		*GroundLocation = params.GroundLocation;
	if (GroundNormal != nullptr)
		*GroundNormal = params.GroundNormal;
}


// Function BodyPile_FX.BodyPile_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABodyPile_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.UserConstructionScript");

	ABodyPile_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyPile_FX.BodyPile_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABodyPile_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.ReceiveBeginPlay");

	ABodyPile_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyPile_FX.BodyPile_FX_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABodyPile_FX_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.OnSetActive");

	ABodyPile_FX_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyPile_FX.BodyPile_FX_C.OnPostInt
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABodyPile_FX_C::OnPostInt(struct FName* Name, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.OnPostInt");

	ABodyPile_FX_C_OnPostInt_Params params;
	params.Name = Name;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyPile_FX.BodyPile_FX_C.OnSetTeamNum
// (Event, Protected, BlueprintEvent)
// Parameters:
// unsigned char*                 OldTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABodyPile_FX_C::OnSetTeamNum(unsigned char* OldTeamNum, unsigned char* NewTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.OnSetTeamNum");

	ABodyPile_FX_C_OnSetTeamNum_Params params;
	params.OldTeamNum = OldTeamNum;
	params.NewTeamNum = NewTeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyPile_FX.BodyPile_FX_C.OnPostObject
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABodyPile_FX_C::OnPostObject(struct FName* Name, class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.OnPostObject");

	ABodyPile_FX_C_OnPostObject_Params params;
	params.Name = Name;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyPile_FX.BodyPile_FX_C.OnPostBool
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          val                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABodyPile_FX_C::OnPostBool(struct FName* Name, bool* val)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.OnPostBool");

	ABodyPile_FX_C_OnPostBool_Params params;
	params.Name = Name;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyPile_FX.BodyPile_FX_C.ExecuteUbergraph_BodyPile_FX
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABodyPile_FX_C::ExecuteUbergraph_BodyPile_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyPile_FX.BodyPile_FX_C.ExecuteUbergraph_BodyPile_FX");

	ABodyPile_FX_C_ExecuteUbergraph_BodyPile_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
