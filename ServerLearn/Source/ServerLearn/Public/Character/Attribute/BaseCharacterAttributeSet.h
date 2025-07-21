// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "BaseCharacterAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class UBaseCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	/* 
	* Each Of Things Have To Cal in Server Reson why? Client Edit Cheater
	* So Should I Replicate All monster's Position?
	*/



	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData HP;
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MaxHP;
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MP;
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MaxMP;
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData ATK;
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData DEF;
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData Speed;


	
};
