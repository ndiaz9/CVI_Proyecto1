// Fill out your copyright notice in the Description page of Project Settings.


#include "Flower.h"

// Sets default values
AFlower::AFlower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Flower = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flower"));
	cylinderMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'")).Object;
	sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")).Object;
	coneMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'")).Object;
	color1 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MdarkbrownColor.MdarkbrownColor'")).Object;
	color2 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MgreenColor.MgreenColor'")).Object;
	color3 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MpinkColor.MpinkColor'")).Object;
	color4 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MlightColor.MlightColor'")).Object;


	RootComponent = Flower;

	base1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("base1"));
	base2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("base2"));
	stem = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("stem"));
	petal1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("petal1"));
	petal2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("petal2"));
	petal3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("petal3"));
	petal4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("petal4"));
	petal5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("petal5"));
	petal6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("petal6"));
	core = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("core"));

	base1->SetStaticMesh(cylinderMesh);
	base1->SetRelativeLocation(FVector(0, 0, 50));
	base1->SetRelativeScale3D(FVector(1, 1, 1));
	base1->SetupAttachment(RootComponent);
	base1->SetMaterial(0, color1);

	base2->SetStaticMesh(cylinderMesh);
	base2->SetRelativeLocation(FVector(0, 0, 110));
	base2->SetRelativeScale3D(FVector(1.2, 1.2, 0.2));
	base2->SetupAttachment(RootComponent);
	base2->SetMaterial(0, color1);

	stem->SetStaticMesh(cylinderMesh);
	stem->SetRelativeLocation(FVector(-5, 10, 170));
	stem->SetRelativeScale3D(FVector(0.05, 0.05, 1.5));
	stem->SetRelativeRotation(FQuat::MakeFromEuler(FVector(10, 0, 0)));
	stem->SetupAttachment(RootComponent);
	stem->SetMaterial(0, color2);

	core->SetStaticMesh(sphereMesh);
	core->SetRelativeLocation(FVector(-10, 20, 230));
	core->SetRelativeScale3D(FVector(0.1, 0.3, 0.3));
	core->SetupAttachment(RootComponent);
	core->SetMaterial(0, color4);

	petal1->SetStaticMesh(coneMesh);
	petal1->SetRelativeLocation(FVector(-9, 20, 215.75));
	petal1->SetRelativeScale3D(FVector(0.01, 0.3, 0.5));
	petal1->SetRelativeRotation(FQuat::MakeFromEuler(FVector(0, 0, 0)));
	petal1->SetupAttachment(RootComponent);
	petal1->SetMaterial(0, color3);

	petal2->SetStaticMesh(coneMesh);
	petal2->SetRelativeLocation(FVector(-9, 5, 223.75));
	petal2->SetRelativeScale3D(FVector(0.01, 0.3, 0.5));
	petal2->SetRelativeRotation(FQuat::MakeFromEuler(FVector(50, 0, 0)));
	petal2->SetupAttachment(RootComponent);
	petal2->SetMaterial(0, color3);

	petal3->SetStaticMesh(coneMesh);
	petal3->SetRelativeLocation(FVector(-9, 7, 238.75));
	petal3->SetRelativeScale3D(FVector(0.01, 0.3, 0.5));
	petal3->SetRelativeRotation(FQuat::MakeFromEuler(FVector(120, 0, 0)));
	petal3->SetupAttachment(RootComponent);
	petal3->SetMaterial(0, color3);

	petal4->SetStaticMesh(coneMesh);
	petal4->SetRelativeLocation(FVector(-9, 20, 243.75));
	petal4->SetRelativeScale3D(FVector(0.01, 0.3, 0.5));
	petal4->SetRelativeRotation(FQuat::MakeFromEuler(FVector(190, 0, 0)));
	petal4->SetupAttachment(RootComponent);
	petal4->SetMaterial(0, color3);

	petal5->SetStaticMesh(coneMesh);
	petal5->SetRelativeLocation(FVector(-9, 33.88, 234.75));
	petal5->SetRelativeScale3D(FVector(0.01, 0.3, 0.5));
	petal5->SetRelativeRotation(FQuat::MakeFromEuler(FVector(-120, 0, 0)));
	petal5->SetupAttachment(RootComponent);
	petal5->SetMaterial(0, color3);

	petal6->SetStaticMesh(coneMesh);
	petal6->SetRelativeLocation(FVector(-9, 33, 222.75));
	petal6->SetRelativeScale3D(FVector(0.01, 0.3, 0.5));
	petal6->SetRelativeRotation(FQuat::MakeFromEuler(FVector(-50, 0, 0)));
	petal6->SetupAttachment(RootComponent);
	petal6->SetMaterial(0, color3);

}

// Called when the game starts or when spawned
void AFlower::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

