// PUBG FULL SDK - Generated By Respecter (5.3.4.11 [06/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MicVolumeUnitMeter_Standalone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.GetGamePadHelpWidgetClass
// ()
// Parameters:
// class UClass*                  GuideClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MicVolumeUnitMeter_Standalone_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.GetGamePadHelpWidgetClass");

	UBP_MicVolumeUnitMeter_Standalone_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.TickTest
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MicVolumeUnitMeter_Standalone_C::TickTest(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.TickTest");

	UBP_MicVolumeUnitMeter_Standalone_C_TickTest_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.OnAnimFinish
// ()

void UBP_MicVolumeUnitMeter_Standalone_C::OnAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.OnAnimFinish");

	UBP_MicVolumeUnitMeter_Standalone_C_OnAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.UpdateVolumeMeterValue
// ()
// Parameters:
// float*                         Volume_Level_in_Decimal        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MicVolumeUnitMeter_Standalone_C::UpdateVolumeMeterValue(float* Volume_Level_in_Decimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.UpdateVolumeMeterValue");

	UBP_MicVolumeUnitMeter_Standalone_C_UpdateVolumeMeterValue_Params params;
	params.Volume_Level_in_Decimal = Volume_Level_in_Decimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.GetQualityName
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_MicVolumeUnitMeter_Standalone_C::GetQualityName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.GetQualityName");

	UBP_MicVolumeUnitMeter_Standalone_C_GetQualityName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.Construct
// (BlueprintCosmetic, Event)

void UBP_MicVolumeUnitMeter_Standalone_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.Construct");

	UBP_MicVolumeUnitMeter_Standalone_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.UpdateVolumeUnitMeter
// (Event)
// Parameters:
// float*                         Energy                         (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MicVolumeUnitMeter_Standalone_C::UpdateVolumeUnitMeter(float* Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.UpdateVolumeUnitMeter");

	UBP_MicVolumeUnitMeter_Standalone_C_UpdateVolumeUnitMeter_Params params;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.ExecuteUbergraph_BP_MicVolumeUnitMeter_Standalone
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MicVolumeUnitMeter_Standalone_C::ExecuteUbergraph_BP_MicVolumeUnitMeter_Standalone(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MicVolumeUnitMeter_Standalone.BP_MicVolumeUnitMeter_Standalone_C.ExecuteUbergraph_BP_MicVolumeUnitMeter_Standalone");

	UBP_MicVolumeUnitMeter_Standalone_C_ExecuteUbergraph_BP_MicVolumeUnitMeter_Standalone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
