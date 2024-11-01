// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Product.generated.h"

UCLASS()


class GOBBOSHOPSIM_API AProduct : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProduct();

	FString GetLabel();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
		class UStaticMeshComponent* BaseProductMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
		class UMaterial* BaseProductMat;

	FString ProductLabel;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BinProduct();
};