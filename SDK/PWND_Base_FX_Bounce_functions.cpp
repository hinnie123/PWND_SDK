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

// Function Base_FX_Bounce.Base_FX_Bounce_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_FX_Bounce_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FX_Bounce.Base_FX_Bounce_C.UserConstructionScript");

	ABase_FX_Bounce_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
