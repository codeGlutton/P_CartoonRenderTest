#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestInterface.h"
#include "TestCharacter.generated.h"

UCLASS()
class P_TEST_API ATestCharacter : public ACharacter, public ITestInterface
{
	GENERATED_BODY()

public:
	ATestCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	virtual USkeletalMeshComponent* GetMeshCompByC() const override;
	virtual USkeletalMeshComponent* GetMeshCompByBPNative_Implementation() const override;
};
