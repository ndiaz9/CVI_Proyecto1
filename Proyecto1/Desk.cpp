// Fill out your copyright notice in the Description page of Project Settings.


#include "Desk.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ADesk::ADesk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Table = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Table"));
	cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	color = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MbrownColor.MbrownColor'")).Object;
	

	RootComponent = Table;

	top1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("top1"));
	leg1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leg1"));
	leg2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leg2"));
	leg3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leg3"));
	leg4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leg4"));

	top1->SetStaticMesh(cubeMesh);
	top1->SetRelativeLocation(FVector(0, 0, 550));
	top1->SetRelativeScale3D(FVector(10, 5, 1));
	top1->SetupAttachment(RootComponent);
	top1->SetMaterial(0, color);

	leg1->SetStaticMesh(cubeMesh);
	leg1->SetRelativeLocation(FVector(450, 200, 250));
	leg1->SetRelativeScale3D(FVector(1, 1, 5));
	leg1->SetupAttachment(RootComponent);
	leg1->SetMaterial(0, color);

	leg2->SetStaticMesh(cubeMesh);
	leg2->SetRelativeLocation(FVector(-450, 200, 250));
	leg2->SetRelativeScale3D(FVector(1, 1, 5));
	leg2->SetupAttachment(RootComponent);
	leg2->SetMaterial(0, color);

	leg3->SetStaticMesh(cubeMesh);
	leg3->SetRelativeLocation(FVector(450, -200, 250));
	leg3->SetRelativeScale3D(FVector(1, 1, 5));
	leg3->SetupAttachment(RootComponent);
	leg3->SetMaterial(0, color);

	leg4->SetStaticMesh(cubeMesh);
	leg4->SetRelativeLocation(FVector(-450, -200, 250));
	leg4->SetRelativeScale3D(FVector(1, 1, 5));
	leg4->SetupAttachment(RootComponent);
	leg4->SetMaterial(0, color);
}

// Called when the game starts or when spawned
void ADesk::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADesk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

