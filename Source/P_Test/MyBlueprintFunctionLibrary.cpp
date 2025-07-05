#include "MyBlueprintFunctionLibrary.h"
#include "TestInterface.h"

USkeletalMeshComponent* UMyBlueprintFunctionLibrary::FindMeshCompByC(AActor* Actor)
{
	auto* TestActor = Cast<ITestInterface>(Actor);
	if (TestActor != nullptr)
	{
		return TestActor->GetMeshCompByC();
	}
	return nullptr;
}

USkeletalMeshComponent* UMyBlueprintFunctionLibrary::FindMeshCompByBPNative(AActor* Actor)
{
	if (Actor->GetClass()->ImplementsInterface(UTestInterface::StaticClass()) == true)
	{
		return ITestInterface::Execute_GetMeshCompByBPNative(Actor);
	}
	return nullptr;
}
