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

// Function PauseChallengeObject_BPInterface.PauseChallengeObject_BPInterface_C.PauseChallengeObject
// (Public, BlueprintCallable, BlueprintEvent)

void UPauseChallengeObject_BPInterface_C::PauseChallengeObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseChallengeObject_BPInterface.PauseChallengeObject_BPInterface_C.PauseChallengeObject");

	UPauseChallengeObject_BPInterface_C_PauseChallengeObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
