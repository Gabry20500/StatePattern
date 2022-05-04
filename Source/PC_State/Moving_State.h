#pragma once
#include "State.h"
#include "Moving_State.generated.h"


UCLASS(BlueprintSpawnableComponent)
class UMovingState : public UState
{
	GENERATED_BODY()
		friend class UStateProcessor;
public:
	UMovingState();

	virtual void Start(UStateProcessor*) override;

	virtual UState* Update(UStateProcessor*) override;

	virtual void Exit(UStateProcessor*) override;

};
