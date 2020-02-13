#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_AudioMixer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SynthComponent
// 0x0410 (0x0670 - 0x0260)
class USynthComponent : public USceneComponent
{
public:
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x0268(0x02E8) (Edit, BlueprintVisible)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x0550(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0558(0x0050) UNKNOWN PROPERTY: SetProperty AudioMixer.SynthComponent.ConcurrencySet
	class USoundClass*                                 SoundClass;                                               // 0x05A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x05B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // 0x05B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                 // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsUISound : 1;                                           // 0x05F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsPreviewSound : 1;                                      // 0x05F0(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05F1(0x0003) MISSED OFFSET
	int                                                EnvelopeFollowerAttackTime;                               // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnvelopeFollowerReleaseTime;                              // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAudioEnvelopeValue;                                     // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0610(0x0020) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x0630(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0638(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0640(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}


	void Stop();
	void Start();
	void SetVolumeMultiplier(float* VolumeMultiplier);
	void SetSubmixSend(class USoundSubmix** Submix, float* SendLevel);
	bool IsPlaying();
};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}


	class USoundWave* STATIC_StopRecordingOutput(class UObject** WorldContextObject, EAudioRecordingExportType* ExportType, class FString* Name, class FString* Path, class USoundSubmix** SubmixToRecord, class USoundWave** ExistingSoundWaveToOverwrite);
	void STATIC_StopAnalyzingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToStopAnalyzing);
	void STATIC_StartRecordingOutput(class UObject** WorldContextObject, float* ExpectedDuration, class USoundSubmix** SubmixToRecord);
	void STATIC_StartAnalyzingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToAnalyze, EFFTSize* FFTSize, EFFTPeakInterpolationMethod* InterpolationMethod, EFFTWindowType* WindowType, float* HopSize);
	void STATIC_SetBypassSourceEffectChainEntry(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, int* EntryIndex, bool* bBypassed);
	void STATIC_ResumeRecordingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToPause);
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, int* EntryIndex);
	void STATIC_RemoveMasterSubmixEffect(class UObject** WorldContextObject, class USoundEffectSubmixPreset** SubmixEffectPreset);
	void STATIC_PauseRecordingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToPause);
	void STATIC_GetPhaseForFrequencies(class UObject** WorldContextObject, TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze, TArray<float>* Phases);
	int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain);
	void STATIC_GetMagnitudeForFrequencies(class UObject** WorldContextObject, TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze, TArray<float>* Magnitudes);
	void STATIC_ClearMasterSubmixEffects(class UObject** WorldContextObject);
	void STATIC_AddSourceEffectToPresetChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, struct FSourceEffectChainEntry* Entry);
	void STATIC_AddMasterSubmixEffect(class UObject** WorldContextObject, class USoundEffectSubmixPreset** SubmixEffectPreset);
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (0x00B8 - 0x0040)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings* InSettings);
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0088 - 0x0040)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectSubmixEQSettings* InSettings);
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00D0 - 0x0040)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x009C(0x0034) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect** InReverbEffect, float* WetLevel, float* DryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings* InSettings);
};


// Class AudioMixer.SynthSound
// 0x0020 (0x0310 - 0x02F0)
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
