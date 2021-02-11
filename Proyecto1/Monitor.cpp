// Fill out your copyright notice in the Description page of Project Settings.


#include "Monitor.h"

// Sets default values
AMonitor::AMonitor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Monitor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Monitor"));
	cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	cylinderMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'")).Object;
	color1 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MblackColor.MblackColor'")).Object;
	color2 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MblueColor.MblueColor'")).Object;


	RootComponent = Monitor;

	base = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("base"));
	support = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("support"));
	backscreen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("back"));
	screen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("screen"));

	if (Monitor && base && support && backscreen && screen) {
		base->SetStaticMesh(cylinderMesh);
		base->SetRelativeLocation(FVector(0, 0, 0));
		base->SetRelativeScale3D(FVector(2, 2, 0.2));
		base->SetupAttachment(RootComponent);
		base->SetMaterial(0, color1);

		support->SetStaticMesh(cylinderMesh);
		support->SetRelativeLocation(FVector(0, 80, 60));
		support->SetRelativeScale3D(FVector(0.2, 0.2, 2));
		support->SetupAttachment(RootComponent);
		support->SetMaterial(0, color1);

		backscreen->SetStaticMesh(cubeMesh);
		backscreen->SetRelativeLocation(FVector(0, 70, 200));
		backscreen->SetRelativeRotation(FQuat::MakeFromEuler(FVector(100, 0, 0)));
		backscreen->SetRelativeScale3D(FVector(4, 3, 0.2));
		backscreen->SetupAttachment(RootComponent);
		backscreen->SetMaterial(0, color1);

		screen->SetStaticMesh(cubeMesh);
		screen->SetRelativeLocation(FVector(0, 60, 200));
		screen->SetRelativeRotation(FQuat::MakeFromEuler(FVector(100, 0, 0)));
		screen->SetRelativeScale3D(FVector(3.6, 2.6, 0.1));
		screen->SetupAttachment(RootComponent);
		screen->SetMaterial(0, color2);
	}

}

// Called when the game starts or when spawned
void AMonitor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonitor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

