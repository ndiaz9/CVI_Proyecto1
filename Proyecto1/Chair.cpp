// Fill out your copyright notice in the Description page of Project Settings.


#include "Chair.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AChair::AChair()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Chair = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Chair"));
	cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	color = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MbrownColor.MbrownColor'")).Object;

	RootComponent = Chair;

	seat = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("seat"));
	back = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("back"));
	leg1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leg1"));
	leg2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leg2"));
	leg3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leg3"));
	leg4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leg4"));

	seat->SetStaticMesh(cubeMesh);
	seat->SetRelativeLocation(FVector(0, 0, 325));
	seat->SetRelativeScale3D(FVector(4, 4, 0.5));
	seat->SetupAttachment(RootComponent);
	seat->SetMaterial(0, color);

	back->SetStaticMesh(cubeMesh);
	back->SetRelativeLocation(FVector(0, 220, 600));
	back->SetRelativeRotation(FQuat::MakeFromEuler(FVector(100, 0, 0)));
	back->SetRelativeScale3D(FVector(4, 6, 0.5));
	back->SetupAttachment(RootComponent);
	back->SetMaterial(0, color);

	leg1->SetStaticMesh(cubeMesh);
	leg1->SetRelativeLocation(FVector(175, 175, 125));
	leg1->SetRelativeScale3D(FVector(0.5, 0.5, 3.5));
	leg1->SetupAttachment(RootComponent);
	leg1->SetMaterial(0, color);

	leg2->SetStaticMesh(cubeMesh);
	leg2->SetRelativeLocation(FVector(-175, 175, 125));
	leg2->SetRelativeScale3D(FVector(0.5, 0.5, 3.5));
	leg2->SetupAttachment(RootComponent);
	leg2->SetMaterial(0, color);

	leg3->SetStaticMesh(cubeMesh);
	leg3->SetRelativeLocation(FVector(175, -175, 125));
	leg3->SetRelativeScale3D(FVector(0.5, 0.5, 3.5));
	leg3->SetupAttachment(RootComponent);
	leg3->SetMaterial(0, color);

	leg4->SetStaticMesh(cubeMesh);
	leg4->SetRelativeLocation(FVector(-175, -175, 125));
	leg4->SetRelativeScale3D(FVector(0.5, 0.5, 3.5));
	leg4->SetupAttachment(RootComponent);
	leg4->SetMaterial(0, color);
}

// Called when the game starts or when spawned
void AChair::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChair::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

