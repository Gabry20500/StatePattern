#pragma once
#include "State.generated.h"

class UStateProcessor;
class AMyActor {};


UCLASS(Blueprintable, BlueprintType)
class UState : public UObject
{
	GENERATED_BODY()

		UPROPERTY()
		AMyActor* MyPgRef;

public:
	friend class UStateProcessor;


	virtual void Start(UStateProcessor*);

	virtual UState* Update(UStateProcessor*);

	virtual void Exit(UStateProcessor*);
};