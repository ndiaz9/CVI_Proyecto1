// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lamp.generated.h"

class UStaticMeshComponent;

UCLASS()
class PROYECTO1_API ALamp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALamp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMesh* coneMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMesh* cylinderMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMesh* sphereMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Lamp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* base;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* support;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* cover;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* light;

	class UMaterial* color1;
	class UMaterial* color2;
	class UMaterial* color3;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
