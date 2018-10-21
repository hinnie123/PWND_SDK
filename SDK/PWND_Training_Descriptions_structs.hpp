#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Training_Descriptions.Training_Descriptions
// 0x0049
struct FTraining_Descriptions
{
	struct FText                                       Title_3_986BE15C4890CE9471719EBA22C38BE6;                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_5_EE0B8E05452B13C94E3F7E9A4580B9D2;           // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FString                                     Location_8_6A1439BB44528D8727B3B48CB06A007B;              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Image_19_B4B81FC945F1E7480FF858954F8EEC1E;                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Completed_15_A76A898043D8E6D88FB3F0B0604D4C59;            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
