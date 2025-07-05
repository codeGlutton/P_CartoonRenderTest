#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class P_TEST_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static USkeletalMeshComponent* FindMeshCompByC(AActor* Actor);

	UFUNCTION(BlueprintCallable)
	static USkeletalMeshComponent* FindMeshCompByBPNative(AActor* Actor);
};
