// Fill out your copyright notice in the Description page of Project Settings.


#include "Items.h"
#include "DrawDebugHelpers.h"
#include "UR_Portfolio/UR_Portfolio.h"
//#define THIRTY 30//�׳� ����




// Sets default values
AItems::AItems()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItems::BeginPlay()
{
	Super::BeginPlay();

	UWorld *World = GetWorld();
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();



	DRAW_SPHERE(Location)
	DRAW_LINE(Location, Location + Forward * 100.f)


	//SetActorLocation(FVector(0.f, 0.f, 100.f));	//�·����̼������� ������ ������ġ���

	//
	//FVector Forward = GetActorForwardVector();




	//----------------------------------------------------------------------------------------------------------
	//UE_LOG(LogTemp, Warning, TEXT("Begin_Play_Called!!!"));
	//UE_LOG(LogTemp, Warning, TEXT("Hi_im_first!"));//��·α� ��������� �߰� �ϰ������

	//GEngine;//��·α׿� �����°Ծƴ϶� ȭ�鿡 �޽��� ����Ʈ�ϰ������

	//if (GEngine)	//G���� üũ�ϴ¹��!//�ΰ����εǾ����������ֱ⶧���� üũ�غ���
	//{
	//	GEngine->AddOnScreenDebugMessage(1, 60.f,FColor::Cyan, FString("Item_onScreen_Message!"));
	//}
	//----------------------------------------------------------------------------------------------------------



	
}

// Called every frame
void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);




	//AddActorLocalOffset(FVector(1.f, 0.f, 0.f));

	
		//AddActorLocalOffset(FVector(1.f, 0.f, 0.f));
	
		//SetActorLocation(FVector(0.f, 0.f, 100.f));





	//UE_LOG(LogTemp, Warning, TEXT("DeltaTime : %f "),DeltaTime);//��·α׿� ��ŸŸ������ ����Ǵ°��� �����ִ�

	//if (GEngine)	//G���� üũ�ϴ¹��!//�ΰ����εǾ����������ֱ⶧���� üũ�غ���
	//{
	//	FString Name = GetName();
	//	FString Message = FString::Printf(TEXT("DeltaTime : %f"	), *Name	);//FString�� Unreal Engine�� ���ڿ� ó���� ���� ������ ������ �����̸�, ǥ�� C++ ���̺귯���� std::string�� ����� ������ ���������� �� ���� ���̰� �ֽ��ϴ�
	//	GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan,Message);
	//}


}

