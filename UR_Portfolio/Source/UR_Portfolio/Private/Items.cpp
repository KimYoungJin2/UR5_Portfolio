// Fill out your copyright notice in the Description page of Project Settings.


#include "Items.h"
#include "DrawDebugHelpers.h"
#include "UR_Portfolio/UR_Portfolio.h"
//#define THIRTY 30//그냥 만들어봄




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


	//SetActorLocation(FVector(0.f, 0.f, 100.f));	//셋로케이션을통한 아이템 액터위치잡기

	//
	//FVector Forward = GetActorForwardVector();




	//----------------------------------------------------------------------------------------------------------
	//UE_LOG(LogTemp, Warning, TEXT("Begin_Play_Called!!!"));
	//UE_LOG(LogTemp, Warning, TEXT("Hi_im_first!"));//출력로그 노란색으로 뜨게 하고싶을때

	//GEngine;//출력로그에 나오는게아니라 화면에 메시지 프린트하고싶을때

	//if (GEngine)	//G엔진 체크하는방법!//널값으로되어있을수도있기때문에 체크해보자
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





	//UE_LOG(LogTemp, Warning, TEXT("DeltaTime : %f "),DeltaTime);//출력로그에 델타타임으로 도배되는것을 볼수있다

	//if (GEngine)	//G엔진 체크하는방법!//널값으로되어있을수도있기때문에 체크해보자
	//{
	//	FString Name = GetName();
	//	FString Message = FString::Printf(TEXT("DeltaTime : %f"	), *Name	);//FString은 Unreal Engine의 문자열 처리를 위한 고유한 데이터 형식이며, 표준 C++ 라이브러리의 std::string과 비슷한 역할을 수행하지만 몇 가지 차이가 있습니다
	//	GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan,Message);
	//}


}

