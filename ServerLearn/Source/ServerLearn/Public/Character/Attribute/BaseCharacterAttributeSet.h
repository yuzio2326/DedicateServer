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
	* �� ��ҵ��� Server���� ����ؾ� �� ���� ���� 
	* �׷��� ���� ��ġ�� ���� Server�� ������ �ϳ�?
	*/

	// ü��
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData HP;
	// �ִ� ü��
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MaxHP;
	// MP
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MP;
	// MaxMP
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData MaxMP;
	// ���ݷ�
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData ATK;
	// ����
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData DEF;
	// Speed
	UPROPERTY(VisibleAnywhere, Replicated)
	FGameplayAttributeData Speed;


	
};
