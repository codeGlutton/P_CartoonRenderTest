#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TestInterface.generated.h"

UINTERFACE(MinimalAPI)
class UTestInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class P_TEST_API ITestInterface
{
	GENERATED_BODY()

public:
	virtual USkeletalMeshComponent* GetMeshCompByC() const = 0;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	USkeletalMeshComponent* GetMeshCompByBPNative() const;
};
