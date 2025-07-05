#include "TestCharacter.h"

ATestCharacter::ATestCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

USkeletalMeshComponent* ATestCharacter::GetMeshCompByC() const
{
	return GetMesh();
}

USkeletalMeshComponent* ATestCharacter::GetMeshCompByBPNative_Implementation() const
{
	return GetMesh();
}

