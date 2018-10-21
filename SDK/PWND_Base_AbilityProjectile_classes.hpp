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

// BlueprintGeneratedClass Base_AbilityProjectile.Base_AbilityProjectile_C
// 0x0008 (0x11A8 - 0x11A0)
class ABase_AbilityProjectile_C : public ABase_CPP_Projectile_C
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x11A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_AbilityProjectile.Base_AbilityProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
