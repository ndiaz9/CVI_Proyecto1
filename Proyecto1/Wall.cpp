// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"

// Sets default values
AWall::AWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Wall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Table"));
	cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	color1 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MlightColor.MlightColor'")).Object;
	color2 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MblackColor.MblackColor'")).Object;


	RootComponent = Wall;

	wall1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("wall1"));
	wall2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("wall2"));
	wall3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("wall3"));
	wall4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("wall4"));
	window1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("window1"));
	window2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("window2"));
	window3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("window3"));
	window4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("window4"));
	window5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("window5"));

	wall1->SetStaticMesh(cubeMesh);
	wall1->SetRelativeLocation(FVector(0, 0, 200));
	wall1->SetRelativeScale3D(FVector(10, 1, 4));
	wall1->SetupAttachment(RootComponent);
	wall1->SetMaterial(0, color1);

	wall2->SetStaticMesh(cubeMesh);
	wall2->SetRelativeLocation(FVector(0, 0, 1200));
	wall2->SetRelativeScale3D(FVector(10, 1, 4));
	wall2->SetupAttachment(RootComponent);
	wall2->SetMaterial(0, color1);

	wall3->SetStaticMesh(cubeMesh);
	wall3->SetRelativeLocation(FVector(-650, 0, 700));
	wall3->SetRelativeScale3D(FVector(3, 1, 14));
	wall3->SetupAttachment(RootComponent);
	wall3->SetMaterial(0, color1);

	wall4->SetStaticMesh(cubeMesh);
	wall4->SetRelativeLocation(FVector(650, 0, 700));
	wall4->SetRelativeScale3D(FVector(3, 1, 14));
	wall4->SetupAttachment(RootComponent);
	wall4->SetMaterial(0, color1);

	window1->SetStaticMesh(cubeMesh);
	window1->SetRelativeLocation(FVector(0, 0, 425));
	window1->SetRelativeScale3D(FVector(10, 1.5, 0.5));
	window1->SetupAttachment(RootComponent);
	window1->SetMaterial(0, color2);

	window2->SetStaticMesh(cubeMesh);
	window2->SetRelativeLocation(FVector(0, 0, 1025));
	window2->SetRelativeScale3D(FVector(10, 1.5, 0.5));
	window2->SetupAttachment(RootComponent);
	window2->SetMaterial(0, color2);

	window3->SetStaticMesh(cubeMesh);
	window3->SetRelativeLocation(FVector(475, 0, 700));
	window3->SetRelativeScale3D(FVector(0.5, 1.5, 6));
	window3->SetupAttachment(RootComponent);
	window3->SetMaterial(0, color2);

	window4->SetStaticMesh(cubeMesh);
	window4->SetRelativeLocation(FVector(-475, 0, 700));
	window4->SetRelativeScale3D(FVector(0.5, 1.5, 6));
	window4->SetupAttachment(RootComponent);
	window4->SetMaterial(0, color2);

	window5->SetStaticMesh(cubeMesh);
	window5->SetRelativeLocation(FVector(0, 0, 700));
	window5->SetRelativeScale3D(FVector(0.5, 1.5, 6));
	window5->SetupAttachment(RootComponent);
	window5->SetMaterial(0, color2);

}

// Called when the game starts or when spawned
void AWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

