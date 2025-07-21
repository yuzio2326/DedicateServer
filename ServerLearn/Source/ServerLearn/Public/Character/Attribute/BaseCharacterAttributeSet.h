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
	* 각 요소들은 Server에서 계산해야 핵 방지 가능 
	* 그러면 몬스터 위치도 전부 Server에 보내야 하나?
	*/

	// 체력
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData HP;
	// 최대 체력
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MaxHP;
	// MP
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MP;
	// MaxMP
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MaxMP;
	// 공격력
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData ATK;
	// 방어력
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData DEF;
	// Speed
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData Speed;


	
};
