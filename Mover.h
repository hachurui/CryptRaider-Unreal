// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mover.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAIDER_API UMover : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMover();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	UPROPERTY(EditAnywhere)
	FVector MoveOffset = FVector(0, 0, 0); //how far to move the object

	UPROPERTY(EditAnywhere)
	float MoveTime = 4; //how long it takes to move to the next location

	UPROPERTY(EditAnywhere)
	bool ShouldMove = false; //switched to true when player suffices move condition, moving the object

	FVector OriginalLocation;
};
