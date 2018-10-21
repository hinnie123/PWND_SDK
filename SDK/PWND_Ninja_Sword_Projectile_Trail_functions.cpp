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

// Function Ninja_Sword_Projectile_Trail.Ninja_Sword_Projectile_Trail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANinja_Sword_Projectile_Trail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ninja_Sword_Projectile_Trail.Ninja_Sword_Projectile_Trail_C.UserConstructionScript");

	ANinja_Sword_Projectile_Trail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
