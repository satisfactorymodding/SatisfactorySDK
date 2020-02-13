#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_GeometryCollectionEngine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x01F0 (0x0520 - 0x0330)
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                              // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                     // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0340(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}


	bool RaycastSingle(struct FVector* Start, struct FVector* End, struct FHitResult* OutHit);
};


// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (0x0050 - 0x0028)
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack                     RecordedData;                                             // 0x0028(0x0010)
	class UGeometryCollection*                         SupportedCollection;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompatibleCollectionState;                                // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x0110 (0x06B0 - 0x05A0)
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGeometryCollection*                         RestCollection;                                           // 0x05A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGeometryCollection*                         DynamicCollection;                                        // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AFieldSystemActor*                           FieldSystem;                                              // 0x05B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Simulating;                                               // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectTypeEnum                                    ObjectType;                                               // 0x05C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableClustering;                                         // 0x05C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05C3(0x0001) MISSED OFFSET
	int                                                MaxClusterLevel;                                          // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      DamageThreshold;                                          // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EImplicitTypeEnum                                  ImplicitType;                                             // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x05DA(0x0002) MISSED OFFSET
	int                                                MinLevelSetResolution;                                    // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MassAsDensity;                                            // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumMassClamp;                                         // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionParticlesFraction;                               // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bouncyness;                                               // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearSleepingThreshold;                                  // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSleepingThreshold;                                 // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x0608(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x0614(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGeomComponentCacheParameters               CacheParameters;                                          // 0x0620(0x0038) (Edit)
	class UBoxComponent*                               DummyBoxComponent;                                        // 0x0658(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0660(0x0020) MISSED OFFSET
	int                                                InteriorMaterialID;                                       // 0x0680(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoneSelectedMaterialID;                                   // 0x0684(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0688(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x0020 (0x0350 - 0x0330)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	float                                              PointThickness;                                           // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTextShadow;                                              // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              TextScale;                                                // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalScale;                                              // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransformScale;                                           // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowScale;                                               // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0090 (0x0630 - 0x05A0)
class UGeometryCollectionDebugDrawComponent : public UMeshComponent
{
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                         // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSet;                         // 0x05A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawLevelSet;                                       // 0x05B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRenderLevelSetAtOrigin;                                  // 0x05B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05B2(0x0002) MISSED OFFSET
	int                                                LevelSetIndex;                                            // 0x05B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawTransform;                                      // 0x05B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawTransformIndex;                                 // 0x05B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawBoundingBox;                                    // 0x05BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05BB(0x0001) MISSED OFFSET
	struct FLinearColor                                GeometryColor;                                            // 0x05BC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawProximity;                                      // 0x05CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawBreakingFace;                                   // 0x05CD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawBreakingRegionData;                             // 0x05CE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x05CF(0x0001) MISSED OFFSET
	struct FLinearColor                                BreakingColor;                                            // 0x05D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawFace;                                           // 0x05E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawFaceIndex;                                      // 0x05E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawFaceNormal;                                     // 0x05E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawSingleFace;                                     // 0x05E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SingleFaceIdx;                                            // 0x05E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FaceColor;                                                // 0x05E8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawVertex;                                         // 0x05F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawVertexIndex;                                    // 0x05F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawVertexNormal;                                   // 0x05FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x05FB(0x0001) MISSED OFFSET
	struct FLinearColor                                VertexColor;                                              // 0x05FC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x24];                                      // 0x060C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollection
// 0x0050 (0x0078 - 0x0028)
class UGeometryCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0030(0x0010) (ZeroConstructor)
	struct FGuid                                       PersistentGuid;                                           // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateGuid;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                InteriorMaterialIndex;                                    // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoneSelectedMaterialIndex;                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x00A0 (0x03D0 - 0x0330)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   RayMarchMaterial;                                         // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceTolerance;                                         // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Isovalue;                                                 // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RenderVolumeBoundingBox;                                  // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x86];                                      // 0x034A(0x0086) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}

};


// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0040 (0x0138 - 0x00F8)
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	bool                                               Simulating;                                               // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectTypeEnum                                    ObjectType;                                               // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	float                                              Mass;                                                     // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x0104(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreshold;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bouncyness;                                               // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
