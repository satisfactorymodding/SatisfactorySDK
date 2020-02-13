#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkAmbientSound
// 0x0040 (0x0370 - 0x0330)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0330(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x0342(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAudioBank
// 0x0008 (0x0030 - 0x0028)
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0040 - 0x0028)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x0210 (0x0470 - 0x0260)
class UAkComponent : public USceneComponent
{
public:
	class FString                                      EarlyReflectionAuxBusName;                                // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                EarlyReflectionOrder;                                     // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionBusSendGain;                               // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionMaxPathLength;                             // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionCollisionChannel;                                // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x027D(0x0007) MISSED OFFSET
	unsigned char                                      EnableSpotReflectors : 1;                                 // 0x0284(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	float                                              roomReverbAuxBusGain;                                     // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                diffractionMaxEdges;                                      // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                diffractionMaxPaths;                                      // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              diffractionMaxPathLength;                                 // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DrawFirstOrderReflections : 1;                            // 0x0298(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawSecondOrderReflections : 1;                           // 0x0298(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawHigherOrderReflections : 1;                           // 0x0298(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawGeometricDiffraction : 1;                             // 0x0298(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawSoundPropagation : 1;                                 // 0x0298(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	bool                                               StopWhenOwnerDestroyed;                                   // 0x029C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      EventName;                                                // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData04[0x170];                                     // 0x02C0(0x0170) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEventComplete;                                          // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x30];                                      // 0x0440(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}


	void UseReverbVolumes(bool* inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus** AuxBus, int* Order, float* BusSendGain, float* MaxPathLength, bool* SpotReflectors, class FString* AuxBusName);
	void Stop();
	void SetSwitch(class FString* SwitchGroup, class FString* SwitchState);
	void SetStopWhenOwnerDestroyed(bool* bStopWhenOwnerDestroyed);
	void SetRTPCValue(class FString* RTPC, float* Value, int* InterpolationTimeMs);
	void SetOutputBusVolume(float* BusVolume);
	void SetMultiplePositions(TArray<struct FVector>* Positions, EAkMultiPositionType* MultiPositionType);
	void SetListeners(TArray<class UAkComponent*>* Listeners);
	void SetAttenuationScalingFactor(float* Value);
	bool SeekOnEventBySeconds(class UAkAudioEvent** AkEvent, float* Seconds, bool* SeekToNearestMarker, int* playingId);
	bool SeekOnEventByPct(class UAkAudioEvent** AkEvent, float* Percent, bool* SeekToNearestMarker, int* playingId);
	void PostTrigger(class FString* Trigger);
	int PostAssociatedAkEvent();
	int PostAkEvent(class UAkAudioEvent** AkEvent);
	bool IsPlaying();
	float GetAttenuationRadius();
};


// Class AkAudio.AkAudioInputComponent
// 0x0010 (0x0480 - 0x0470)
class UAkAudioInputComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioInputComponent");
		return ptr;
	}


	int PostAssociatedAudioInputEvent();
};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0038 - 0x0028)
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAuxBus");
		return ptr;
	}

};


// Class AkAudio.AkCheckBox
// 0x0908 (0x0A28 - 0x0120)
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x298];                                     // 0x0120(0x0298) MISSED OFFSET
	ECheckBoxState                                     CheckedState;                                             // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x03BC(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x03D0(0x0580) (Edit, BlueprintVisible)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0950(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0951(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0952(0x0006) MISSED OFFSET
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                     // 0x0958(0x0010) (Edit)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x0968(0x0040) (Edit, Config, EditConst)
	struct FScriptMulticastDelegate                    AkOnCheckStateChanged;                                    // 0x09A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x09B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                        // 0x09C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x50];                                      // 0x09D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkCheckBox");
		return ptr;
	}


	void SetIsChecked(bool* InIsChecked);
	void SetCheckedState(ECheckBoxState* InCheckedState);
	void SetAkItemId(struct FGuid* ItemId);
	void SetAkBoolProperty(class FString* ItemProperty);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
	class FString GetAkProperty();
	struct FGuid GetAkItemId();
};


// Class AkAudio.AkDebugging
// 0x0000 (0x0028 - 0x0028)
class UAkDebugging : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDebugging");
		return ptr;
	}

};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}


	void STATIC_UseReverbVolumes(bool* inUseReverbVolumes, class AActor** Actor);
	void STATIC_UseEarlyReflections(class AActor** Actor, class UAkAuxBus** AuxBus, int* Order, float* BusSendGain, float* MaxPathLength, bool* SpotReflectors, class FString* AuxBusName);
	void STATIC_UnloadBankByName(class FString* BankName);
	void STATIC_UnloadBankAsync(class UAkAudioBank** Bank, struct FScriptDelegate* BankUnloadedCallback);
	void STATIC_UnloadBank(class UAkAudioBank** Bank, class FString* BankName, struct FLatentActionInfo* LatentInfo, class UObject** WorldContextObject);
	void STATIC_StopSounds(class AActor** Actor);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAndDestroyComponent(class UAkComponent** inComp);
	void STATIC_StopAllSounds();
	void STATIC_StopAllAmbientSounds(class UObject** WorldContextObject);
	void STATIC_StartProfilerCapture(class FString* Filename);
	void STATIC_StartOutputCapture(class FString* Filename);
	void STATIC_StartAllAmbientSounds(class UObject** WorldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject** WorldContextObject, class UAkAudioEvent** AkEvent, struct FVector* Location, struct FRotator* Orientation, bool* AutoPost);
	void STATIC_SetSwitch(struct FName* SwitchGroup, struct FName* SwitchState, class AActor** Actor);
	void STATIC_SetState(struct FName* StateGroup, struct FName* State);
	void STATIC_SetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, class FString* DeviceShareset);
	void STATIC_SetPanningRule(EPanningRule* PanRule);
	void STATIC_SetOutputBusVolume(float* BusVolume, class AActor** Actor);
	void STATIC_SetOcclusionScalingFactor(float* ScalingFactor);
	void STATIC_SetOcclusionRefreshInterval(float* RefreshInterval, class AActor** Actor);
	void STATIC_SetMultiplePositions(class UAkComponent** GameObjectAkComponent, TArray<struct FVector>* Positions, EAkMultiPositionType* MultiPositionType);
	void STATIC_SetMultipleChannelEmitterPositions(class UAkComponent** GameObjectAkComponent, TArray<EAkChannelConfiguration>* ChannelMasks, TArray<struct FTransform>* Positions, EAkMultiPositionType* MultiPositionType);
	void STATIC_SetGlobalRTPCValue(struct FName* RTPC, float* Value, int* InterpolationTimeMs);
	void STATIC_SetBusConfig(class FString* BusName, EAkChannelConfiguration* ChannelConfiguration);
	void STATIC_SetActorRTPCValue(struct FName* RTPC, float* Value, int* InterpolationTimeMs, class AActor** Actor);
	void STATIC_PostTrigger(struct FName* Trigger, class AActor** Actor);
	class UAkComponent* STATIC_PostAkEventAttached(class UAkAudioEvent** AkEvent, class USceneComponent** SceneComp, struct FName* Socket, bool* bStopWhenAttachedToDestroyed);
	class UAkComponent* STATIC_PostAkEventAtLocation(class UObject** WorldContextObject, class UAkAudioEvent** AkEvent, struct FVector* Location, struct FRotator* Orientation);
	class UAkComponent* STATIC_PostAkEvent(class UAkAudioEvent** AkEvent, class AActor** Actor, bool* bStopWhenAttachedToDestroyed);
	void STATIC_LoadInitBank();
	void STATIC_LoadBanks(TArray<class UAkAudioBank*>* SoundBanks, bool* SynchronizeSoundBanks);
	void STATIC_LoadBankByName(class FString* BankName);
	void STATIC_LoadBankAsync(class UAkAudioBank** Bank, struct FScriptDelegate* BankLoadedCallback);
	void STATIC_LoadBank(class UAkAudioBank** Bank, class FString* BankName, struct FLatentActionInfo* LatentInfo, class UObject** WorldContextObject);
	bool STATIC_IsGame(class UObject** WorldContextObject);
	bool STATIC_IsEditor();
	void STATIC_GetSpeakerAngles(class FString* DeviceShareset, TArray<float>* SpeakerAngles, float* HeightAngle);
	float STATIC_GetOcclusionScalingFactor();
	float STATIC_GetGlobalRTPCValue(struct FName* RTPC);
	class UAkComponent* STATIC_GetAkComponentAttached(class USceneComponent** AttachToComponent, struct FName* Socket, bool* bAutoCreate);
	void STATIC_ExecuteActionOnEvent(class UAkAudioEvent** AkEvent, EAkActionOnEventType* ActionType, class AActor** Actor, int* TransitionDuration, EAkCurveInterpolation* FadeCurve, int* playingId);
	void STATIC_ClearBanks();
	void STATIC_AddOutputCaptureMarker(class FString* MarkerText);
};


// Class AkAudio.AkCallbackInfo
// 0x0008 (0x0030 - 0x0028)
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                                AkComponent;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkEventCallbackInfo
// 0x0008 (0x0038 - 0x0030)
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                playingId;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventID;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEventCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0008 (0x0040 - 0x0038)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMIDIEventCallbackInfo");
		return ptr;
	}


	EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	unsigned char GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
};


// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int                                                Identifier;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Position;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      Label;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMarkerCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                              Duration;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EstimatedDuration;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AudioNodeID;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MediaID;                                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStreaming;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDurationCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (0x0070 - 0x0030)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                playingId;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAkSegmentInfo                              SegmentInfo;                                              // 0x0034(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	EAkCallbackType                                    MusicSyncType;                                            // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class FString                                      UserCueName;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMusicSyncCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemBoolPropertiesConv");
		return ptr;
	}


	struct FText STATIC_Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl* INAkBoolPropertyToControl);
	class FString STATIC_Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl* INAkBoolPropertyToControl);
};


// Class AkAudio.AkItemBoolProperties
// 0x0040 (0x0148 - 0x0108)
class UAkItemBoolProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                        // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemBoolProperties");
		return ptr;
	}


	void SetSearchText(class FString* newText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};


// Class AkAudio.AkItemPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemPropertiesConv");
		return ptr;
	}


	struct FText STATIC_Conv_FAkPropertyToControlToText(struct FAkPropertyToControl* INAkPropertyToControl);
	class FString STATIC_Conv_FAkPropertyToControlToString(struct FAkPropertyToControl* INAkPropertyToControl);
};


// Class AkAudio.AkItemProperties
// 0x0040 (0x0148 - 0x0108)
class UAkItemProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                        // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemProperties");
		return ptr;
	}


	void SetSearchText(class FString* newText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};


// Class AkAudio.AkLateReverbComponent
// 0x0040 (0x02A0 - 0x0260)
class UAkLateReverbComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      AuxBusName;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SendLevel;                                                // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return ptr;
	}

};


// Class AkAudio.AkListernerComponent
// 0x0000 (0x0470 - 0x0470)
class UAkListernerComponent : public UAkComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkListernerComponent");
		return ptr;
	}

};


// Class AkAudio.AkObject
// 0x0008 (0x0030 - 0x0028)
class UAkObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkObject");
		return ptr;
	}


	void SetSwitch(class FString* SwitchGroup, class FString* SwitchState);
	void SetRTPCValue(class FString* RTPC, float* Value, int* InterpolationTime);
	int PostEvent(class UAkAudioEvent** AkEvent);
};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x03A0 - 0x0368)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0368(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0370(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class FString                                      AuxBusName;                                               // 0x0378(0x0010) (ZeroConstructor, Deprecated)
	float                                              SendLevel;                                                // 0x0388(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x038C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Priority;                                                 // 0x0390(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      LateReverbComponent;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}

};


// Class AkAudio.AkRoomComponent
// 0x0020 (0x0280 - 0x0260)
class UAkRoomComponent : public USceneComponent
{
public:
	class UAkRoomComponent*                            NextLowerPriorityComponent;                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              Priority;                                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallOcclusion;                                            // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0048 (0x0070 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseSoundBankFolder;                                     // 0x0040(0x0010) (Edit, Config)
	bool                                               bEnableMultiCoreRendering;                                // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                         // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x0052(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}

};


// Class AkAudio.AkSettingsPerUser
// 0x0028 (0x0050 - 0x0028)
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0028(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0038(0x0010) (Edit, Config)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0048(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettingsPerUser");
		return ptr;
	}

};


// Class AkAudio.AkSlider
// 0x0428 (0x0530 - 0x0108)
class UAkSlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FSliderStyle                                WidgetStyle;                                              // 0x0120(0x0340) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x0464(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0474(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x0484(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x0485(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0486(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	struct FAkPropertyToControl                        ThePropertyToControl;                                     // 0x0490(0x0010) (Edit, EditConst)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x04A0(0x0040) (Edit, Config, EditConst)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                        // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0510(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSlider");
		return ptr;
	}


	void SetValue(float* InValue);
	void SetStepSize(float* InValue);
	void SetSliderHandleColor(struct FLinearColor* InValue);
	void SetSliderBarColor(struct FLinearColor* InValue);
	void SetLocked(bool* InValue);
	void SetIndentHandle(bool* InValue);
	void SetAkSliderItemProperty(class FString* ItemProperty);
	void SetAkSliderItemId(struct FGuid* ItemId);
	float GetValue();
	class FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};


// Class AkAudio.AkWaapiCalls
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiCalls");
		return ptr;
	}


	struct FAKWaapiJsonObject STATIC_UNSUBSCRIBE(struct FAkWaapiSubscriptionId* SubscriptionId, bool* UnsubscriptionDone);
	struct FAKWaapiJsonObject STATIC_SubscribeToWaapi(struct FAkWaapiUri* WaapiUri, struct FAKWaapiJsonObject* WaapiOptions, struct FScriptDelegate* Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void STATIC_SetSubscriptionID(struct FAkWaapiSubscriptionId* Subscription, int* ID);
	bool STATIC_RegisterWaapiProjectLoadedCallback(struct FScriptDelegate* Callback);
	bool STATIC_RegisterWaapiConnectionLostCallback(struct FScriptDelegate* Callback);
	int STATIC_GetSubscriptionID(struct FAkWaapiSubscriptionId* Subscription);
	struct FText STATIC_Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId* INAkWaapiSubscriptionId);
	class FString STATIC_Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId* INAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject STATIC_CallWaapi(struct FAkWaapiUri* WaapiUri, struct FAKWaapiJsonObject* WaapiArgs, struct FAKWaapiJsonObject* WaapiOptions);
};


// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (0x0028 - 0x0028)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SAkWaapiFieldNamesConv");
		return ptr;
	}


	struct FText STATIC_Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames* INAkWaapiFieldNames);
	class FString STATIC_Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames* INAkWaapiFieldNames);
};


// Class AkAudio.AkWaapiJsonManager
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiJsonManager");
		return ptr;
	}


	struct FAKWaapiJsonObject STATIC_SetStringField(struct FAkWaapiFieldNames* FieldName, class FString* FieldValue, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetObjectField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* FieldValue, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetNumberField(struct FAkWaapiFieldNames* FieldName, float* FieldValue, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetBoolField(struct FAkWaapiFieldNames* FieldName, bool* FieldValue, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetArrayStringFields(struct FAkWaapiFieldNames* FieldName, TArray<class FString>* FieldStringValues, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_SetArrayObjectFields(struct FAkWaapiFieldNames* FieldName, TArray<struct FAKWaapiJsonObject>* FieldObjectValues, struct FAKWaapiJsonObject* Target);
	class FString STATIC_GetStringField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	struct FAKWaapiJsonObject STATIC_GetObjectField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	float STATIC_GetNumberField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	int STATIC_GetIntegerField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	bool STATIC_GetBoolField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	TArray<struct FAKWaapiJsonObject> STATIC_GetArrayField(struct FAkWaapiFieldNames* FieldName, struct FAKWaapiJsonObject* Target);
	struct FText STATIC_Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject* INAKWaapiJsonObject);
	class FString STATIC_Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject* INAKWaapiJsonObject);
};


// Class AkAudio.AkWaapiUriConv
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiUriConv");
		return ptr;
	}


	struct FText STATIC_Conv_FAkWaapiUriToText(struct FAkWaapiUri* INAkWaapiUri);
	class FString STATIC_Conv_FAkWaapiUriToString(struct FAkWaapiUri* INAkWaapiUri);
};


// Class AkAudio.AkWwiseTree
// 0x0040 (0x0148 - 0x0108)
class UAkWwiseTree : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDragged;                                            // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWwiseTree");
		return ptr;
	}


	void SetSearchText(class FString* newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	class FString GetSearchText();
};


// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (0x0168 - 0x0108)
class UAkWwiseTreeSelector : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDragged;                                            // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0128(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWwiseTreeSelector");
		return ptr;
	}

};


// Class AkAudio.AnimNotify_AkEvent
// 0x0018 (0x0050 - 0x0038)
class UAnimNotify_AkEvent : public UAnimNotify
{
public:
	struct FName                                       SocketName;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               audioEvent;                                               // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFollow;                                                  // 0x0048(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AnimNotify_AkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	class FString                                      Param;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (0x01C8 - 0x00E0)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET
	class UAkAudioEvent*                               Event;                                                    // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RetriggerEvent;                                           // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	int                                                ScrubTailLengthMs;                                        // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopAtSectionEnd;                                         // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class FString                                      EventName;                                                // 0x0138(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0148(0x0020) MISSED OFFSET
	float                                              MaxSourceDuration;                                        // 0x0168(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class FString                                      MaxDurationSourceID;                                      // 0x0170(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0180(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0068(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x0070 - 0x0070)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0160 (0x0240 - 0x00E0)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	class FString                                      Name;                                                     // 0x00E0(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x00F0(0x0080)
	struct FMovieSceneFloatChannelSerializationHelper  FloatChannelSerializationHelper;                          // 0x0170(0x0030)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x01A0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x0070 - 0x0070)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
