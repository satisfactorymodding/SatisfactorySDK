#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_Engine_classes.hpp"
#include "FG_CoreUObject_classes.hpp"
#include "FG_OpenColorIO_classes.hpp"
#include "FG_MovieScene_classes.hpp"
#include "FG_MovieSceneTracks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Composure.ECompPassConstructionType
enum class ECompPassConstructionType : uint8_t
{
	Unknown                        = 0,
	EditorConstructed              = 1,
	BlueprintConstructed           = 2,
	CodeConstructed                = 3,
	ECompPassConstructionType_MAX  = 4
};


// Enum Composure.ETargetUsageFlags
enum class ETargetUsageFlags : uint8_t
{
	USAGE_None                     = 0,
	USAGE_Input                    = 1,
	USAGE_Transform                = 2,
	USAGE_Output                   = 3,
	USAGE_Persistent               = 4,
	USAGE_Intermediate0            = 5,
	USAGE_Intermediate1            = 6,
	USAGE_MAX                      = 7
};


// Enum Composure.EInheritedSourceType
enum class EInheritedSourceType : uint8_t
{
	Inherited                      = 0,
	Override                       = 1,
	EInheritedSourceType_MAX       = 2
};


// Enum Composure.ESceneCameraLinkType
enum class ESceneCameraLinkType : uint8_t
{
	Inherited                      = 0,
	Override                       = 1,
	Unused                         = 2,
	ESceneCameraLinkType_MAX       = 3
};


// Enum Composure.EExrCompressionOptions
enum class EExrCompressionOptions : uint8_t
{
	Compressed                     = 0,
	Uncompressed                   = 1,
	EExrCompressionOptions_MAX     = 2
};


// Enum Composure.EParamType
enum class EParamType : uint8_t
{
	UnknownParamType               = 0,
	ScalarParam                    = 1,
	VectorParam                    = 2,
	TextureParam                   = 3,
	MediaTextureParam              = 4,
	EParamType_MAX                 = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Composure.CompositingParamPayload
// 0x00A0
struct FCompositingParamPayload
{
	TMap<struct FName, float>                          ScalarParamOverrides;                                     // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FLinearColor>            VectorParamOverrides;                                     // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct Composure.NamedCompMaterialParam
// 0x0008
struct FNamedCompMaterialParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Composure.CompositingMaterial
// 0x00B8 (0x0158 - 0x00A0)
struct FCompositingMaterial : public FCompositingParamPayload
{
	class UMaterialInterface*                          Material;                                                 // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FName>                   ParamPassMappings;                                        // 0x00A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FNamedCompMaterialParam> RequiredMaterialParams;                                   // 0x00F8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CachedMID;                                                // 0x0150(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Composure.ComposureUVMapSettings
// 0x00A0
struct FComposureUVMapSettings
{
	struct FMatrix                                     PreUVDisplacementMatrix;                                  // 0x0000(0x0040) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     PostUVDisplacementMatrix;                                 // 0x0040(0x0040) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DisplacementDecodeParameters;                             // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    DisplacementTexture;                                      // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDisplacementBlueAndAlphaChannels : 1;                 // 0x0090(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0091(0x000F) MISSED OFFSET
};

// ScriptStruct Composure.ComposurePostMoveSettings
// 0x0018
struct FComposurePostMoveSettings
{
	struct FVector2D                                   Pivot;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Translation;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationAngle;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Composure.MovieSceneComposureExportPass
// 0x0014
struct FMovieSceneComposureExportPass
{
	struct FName                                       TransformPassName;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRenamePass;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       ExportedAs;                                               // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Composure.MovieSceneComposureExportSectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneComposureExportSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneComposureExportPass              Pass;                                                     // 0x0020(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Composure.MovieSceneComposurePostMoveSettingsSectionTemplate
// 0x03C8 (0x0410 - 0x0048)
struct FMovieSceneComposurePostMoveSettingsSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     Pivot[0x2];                                               // 0x0048(0x00A0)
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x0188(0x00A0)
	struct FMovieSceneFloatChannel                     RotationAngle;                                            // 0x02C8(0x00A0)
	struct FMovieSceneFloatChannel                     Scale;                                                    // 0x0368(0x00A0)
	EMovieSceneBlendType                               BlendType;                                                // 0x0408(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
