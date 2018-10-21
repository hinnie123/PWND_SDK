#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WallRun_CameraModifier.WallRun_CameraModifier_C
// 0x0048 (0x0090 - 0x0048)
class UWallRun_CameraModifier_C : public UCameraModifier
{
public:
	struct FSpringFloat                                Roll;                                                     // 0x0048(0x003C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RollCurve;                                                // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WallRun_CameraModifier.WallRun_CameraModifier_C");
		return ptr;
	}


	void GetDesiredRoll(const struct FRotator& VIewRot, float* Roll);
	void BlueprintModifyCamera(float* DeltaTime, struct FVector* ViewLocation, struct FRotator* ViewRotation, float* FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
