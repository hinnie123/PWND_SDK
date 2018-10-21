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

// Function Ninja_Sword_Base_First_Person_SwordMesh_HackAcc.Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANinja_Sword_Base_First_Person_SwordMesh_HackAcc_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Base_First_Person_SwordMesh_HackAcc.Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_C.UserConstructionScript");

	ANinja_Sword_Base_First_Person_SwordMesh_HackAcc_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Base_First_Person_SwordMesh_HackAcc.Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_C.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Base_First_Person_SwordMesh_HackAcc_C::OnSetActive(bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Base_First_Person_SwordMesh_HackAcc.Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_C.OnSetActive");

	ANinja_Sword_Base_First_Person_SwordMesh_HackAcc_C_OnSetActive_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ninja_Sword_Base_First_Person_SwordMesh_HackAcc.Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_C.ExecuteUbergraph_Ninja_Sword_Base_First_Person_SwordMesh_HackAcc
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANinja_Sword_Base_First_Person_SwordMesh_HackAcc_C::ExecuteUbergraph_Ninja_Sword_Base_First_Person_SwordMesh_HackAcc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Base_First_Person_SwordMesh_HackAcc.Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_C.ExecuteUbergraph_Ninja_Sword_Base_First_Person_SwordMesh_HackAcc");

	ANinja_Sword_Base_First_Person_SwordMesh_HackAcc_C_ExecuteUbergraph_Ninja_Sword_Base_First_Person_SwordMesh_HackAcc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
