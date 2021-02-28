// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")).Object;
	color1 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MbrownColor.MbrownColor'")).Object;
	color2 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MblackColor.MblackColor'")).Object;


	RootComponent = Door;

	body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("body"));
	handle1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("handle1"));
	handle2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("handle2"));

	body->SetStaticMesh(cubeMesh);
	body->SetRelativeLocation(FVector(0, -400, 850));
	body->SetRelativeScale3D(FVector(1, 8, 16));
	body->SetupAttachment(RootComponent);
	body->SetMaterial(0, color1);

	handle1->SetStaticMesh(sphereMesh);
	handle1->SetRelativeLocation(FVector(70, -680, 850));
	handle1->SetRelativeScale3D(FVector(1, 1, 1));
	handle1->SetupAttachment(RootComponent);
	handle1->SetMaterial(0, color2);

	handle2->SetStaticMesh(sphereMesh);
	handle2->SetRelativeLocation(FVector(-70, -680, 850));
	handle2->SetRelativeScale3D(FVector(1, 1, 1));
	handle2->SetupAttachment(RootComponent);
	handle2->SetMaterial(0, color2);
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

