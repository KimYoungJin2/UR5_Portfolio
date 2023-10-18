// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define DRAW_SPHERE(Location)if (GetWorld())DrawDebugSphere(GetWorld(),Location,25.f,12,FColor::Red,true);//매크로를 만들어서 손쉽게 대체하였다
#define DRAW_LINE(StartLocation,EndLocation)if(GetWorld())DrawDebugLine(GetWorld(),StartLocation,EndLocation,FColor::Red,true,-1.0f,0,1.f );
