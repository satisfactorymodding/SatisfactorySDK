#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DirectionalSubtitlesContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C
// 0x0058 (0x0288 - 0x0230)
class UWidget_DirectionalSubtitlesContainer_C : public UUserWidget
{
public:
	class UVerticalBox*                                mContainer;                                               // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<class AActor*, class UWidget_DirectionalSubtitles_C*> mActiveActors;                                            // 0x0238(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C");
		return ptr;
	}


	void StopSubtitle(class AActor** Instigator);
	void GetFurthestActor(class AActor** Actor);
	void OnSubtitleDestruct(class UWidget_DirectionalSubtitles_C** InstigatingSubtitle);
	void CreateSubtitle(struct FText* Subtitle, class AActor** Instigator, float* Duration, bool* UseDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
