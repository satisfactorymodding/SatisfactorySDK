#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SparkParticles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_SparkParticles.Widget_SparkParticles_C
// 0x0020 (0x0250 - 0x0230)
class UWidget_SparkParticles_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    Container;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               mBounceOn;                                                // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	struct FVector2D                                   mMaxDistance;                                             // 0x0244(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SparkParticles.Widget_SparkParticles_C");
		return ptr;
	}


	void CreateSparks(int* NumberOfSparks);
	void OnSparkBounce(struct FVector2D* Position, struct FVector2D* Scale);
	void ExecuteUbergraph_Widget_SparkParticles(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
