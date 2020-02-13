#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_LocomotiveAnim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_LocomotiveAnim.BP_LocomotiveAnim_C
// 0x21F8 (0x2C08 - 0x0A10)
class UBP_LocomotiveAnim_C : public UFGRailRoadVehicleAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D3B97E3D470690B3FF0A57911A814EC1;      // 0x0A18(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9936BE3745AB8A0705A60CA21F550B76;// 0x0A38(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F360F4ED4612734E294966A2EE2C8BA5;// 0x0B40(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4AB8E98B4A84A03C49F1CCA32A94564D;// 0x0C48(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6F7748C54923DEA6C625ECB7F5D22409;// 0x0C68(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DF35E53444E83252B97ED4A89DDF4EE9;// 0x0D70(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5795EE174196D9C2962BB999DF489E08;// 0x0E78(0x0020)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6459E6494A2B7C5DD85AA5AD90C183FF;// 0x0E98(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63D4F62F4A17E11F0A7A569E03F5020C;// 0x0F60(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0458FCD941C259D155CF07A81D31CCFA;// 0x0FD8(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB4CC1BE4C618CD6146BE080CC7C5387;// 0x10E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_690F4FBF4BB0B2081030DB809CFCF8DF;// 0x1108(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_529397FC4A88F612A00A378E05AEABE0;// 0x1130(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6110D25D4D15AEE3B203789951C41D41;// 0x1158(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C9F6E28A4C8EB25CE38412A08D32BBD3;// 0x1180(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6B8D48A4D7D52237453198643EFAE5D;// 0x11A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DB4B4CC4013628B6AD1419F67D35596;// 0x11D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6366E78742771D5FBAC647B7F85D7292;// 0x11F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C694F07F45EC38B3E8C5BB973D04A73D;// 0x1220(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B5A292B74A31BCDDEB23199DE6D80C29;// 0x1248(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47645BFC44484F516BF3E69010DBA019;// 0x1290(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CF173ED0457B80A2937017971F366E85;// 0x1308(0x00B8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EA299B4A469DB11641267EA6A1C68388;// 0x13C0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8003E9F044530A4C33CFA7BDAA68528C;// 0x13E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_74C7A87A4813C9091E5554ABA27D9C49;// 0x1458(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF9A4157410E84CE95C1B1A477EAD778;// 0x1478(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD6AA3C5453C0988E655E4B7B3CF5355;// 0x14F0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B0DD334546A8BF48DAAB83B90CCEC3E7;// 0x1568(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0869A48D4C1FF14870BED8A430E9C0D0;// 0x1608(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0E8320DA4947D0B8999AE988BFBEB431;// 0x1628(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B93225404FBE3B0CE5F8849FA69ED5CA;// 0x16A0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EC2990694D22CB69615548B099FA708B;// 0x1718(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5D28C93041742487964419AC80A1FF1F;// 0x17B8(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3BA6DBDC4450760A2F38C5B41B4DFDAE;// 0x17D8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_56CA3475458629C570C7168C19D69CD5;// 0x1820(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63F8D574438A51C0172CCE8F965909CB;// 0x18E8(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DB2D43764CEA639C505DA7BB781CFDD9;// 0x1960(0x00B8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0C943B944E6DEBDE4C24909D3A66F5D8;// 0x1A18(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2A127D054E35F9952D3657881E13ADDF;// 0x1A60(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B5B28CBE40DA9DFC953C8388C4225965;// 0x1A80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EEFD7CEC447C305D1D3A428738351D86;// 0x1AA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3507BAB74535EAE4A4B81EA2BB5ACBD4;// 0x1AD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C862F8F84B8DF9675A2148AB7350EE69;// 0x1AF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A96A39F4862B9AAC01414B9CE5B1380;// 0x1B20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7230A1A849532CA3804332B2F26D5A84;// 0x1B48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B569AF9400782FCBC07C6BDD5F5A656;// 0x1B70(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_730E72B74EAA090C1EF4DA944C9F3376;// 0x1B98(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2B1FBD304C0F4F99BF9B5C826E340E65;// 0x1BB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A13A22F491546644F3E4CA6C2D90F81;// 0x1BD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A535BFC64C9615BCC4845C8BC0489F54;// 0x1C48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_401B752A4C10534556942D8CAF38A693;// 0x1C68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3AB9CBE74A9565EBACDD1E88998955D9;// 0x1CE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D8936274E6358BC1EB6049C819C5CD0;// 0x1D00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E820481344213137B4CA21A592FB8518;// 0x1D78(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_738A46C14C9EAE8BD01590BBD76A84D6;// 0x1D98(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AA9A8BDE49F4EE24A1714CB5522199DC;// 0x1E48(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F8FFA57540C56A3068ADB4886772D950;// 0x1E68(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_817F24634D3F037EFD80DFADEBB9D60A;// 0x1F18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F47003B84F97C965A1A437BC1047AD7F;// 0x1F40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74021C9A4039AE85678B0DA767CD2FE5;// 0x1F68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C0B4C6A24DC35EED78E2438BFC01E3CB;// 0x1F90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17FA3E9E45625C8BE20A75BF69F22684;// 0x1FB8(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6D04868344FE5452018228980D34C8B5;// 0x1FE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB6E7290461C76E4DAE5F98508F4DCB2;// 0x2000(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_607654A0473A1689F0504EA1D5B504AD;// 0x2078(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6EBF262D441D131EC5F72A9045B9282E;// 0x2098(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E683940246D038DB7A9C9A89F837DD6F;// 0x2110(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6EAD126144D8E7EE018D72A4A05BE763;// 0x2130(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_09384E2C410798E542A004A94163BF3A;// 0x2178(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0E70334948BE9DD4994B7CA241B7BE76;// 0x2198(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_51ABB0664F7077D2D7205EA5023D2A92;// 0x2248(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_77A8D343494B806B2B4FEC888F806E7D;// 0x2300(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B0BD2FF0425C84B2A5D3EB9912B4178C;// 0x23A0(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_651477BB41F191F5918BB191F689D6B8;// 0x23C8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5E2FC7D64A2D90E2DF86449AB8F766CF;// 0x24D0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1B4937BA49DED2737CAC58B56B2BE89B;// 0x25D8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_05619830432376EE5F6CCFAC6273D89D;// 0x26E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EAD882D24E7A1DCFF31DFBBED4304D51;// 0x27E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EB7D1E644C3905D6ACE652A01F5AE4B1;// 0x28F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_73789E4A4B9615E5940A248C72A10C28;// 0x29F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FE83549D4BFC9D6283B373A181C36808;// 0x2B00(0x0108)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_LocomotiveAnim.BP_LocomotiveAnim_C");
		return ptr;
	}


	void AnimNotify_EnterHandBrake_01();
	void AnimNotify_KillHandBrake_01();
	void AnimNotify_EnterHandBrake_02();
	void AnimNotify_KillHandBrake_02();
	void AnimNotify_TriggerhandbrakeVFX();
	void ExecuteUbergraph_BP_LocomotiveAnim(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
