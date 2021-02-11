// Fill out your copyright notice in the Description page of Project Settings.


#include "Lamp.h"

// Sets default values
ALamp::ALamp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Lamp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp"));
	coneMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'")).Object;
	cylinderMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'")).Object;
	sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")).Object;
	
	color1 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MblackColor.MblackColor'")).Object;
	color2 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MblueColor.MblueColor'")).Object;
	color3 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MyellowColor.MyellowColor'")).Object;


	RootComponent = Lamp;

	base = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("base"));
	support = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("support"));
	cover = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cover"));
	light = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("light"));

	if (Lamp && base && support && cover && light) {
		base->SetStaticMesh(cylinderMesh);
		base->SetRelativeLocation(FVector(0, 0, 0));
		base->SetRelativeScale3D(FVector(3, 3, 0.2));
		base->SetupAttachment(RootComponent);
		base->SetMaterial(0, color1);

		support->SetStaticMesh(cylinderMesh);
		support->SetRelativeLocation(FVector(0, 0, 600));
		support->SetRelativeScale3D(FVector(0.5, 0.5, 12));
		support->SetupAttachment(RootComponent);
		support->SetMaterial(0, color1);

		cover->SetStaticMesh(coneMesh);
		cover->SetRelativeLocation(FVector(0, 0, 1050));
		cover->SetRelativeScale3D(FVector(5, 5, 2));
		cover->SetRelativeRotation(FQuat::MakeFromEuler(FVector(0, 180, 0)));
		cover->SetupAttachment(RootComponent);
		cover->SetMaterial(0, color2);

		light->SetStaticMesh(sphereMesh);
		light->SetRelativeLocation(FVector(0, 0, 1200));
		light->SetRelativeScale3D(FVector(3, 3, 3));
		light->SetupAttachment(RootComponent);
		light->SetMaterial(0, color3);
	}

}

// Called when the game starts or when spawned
void ALamp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALamp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

