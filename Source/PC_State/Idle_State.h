#pragma once
#include "State.h"
#include "Idle_State.generated.h"

class UStateProcessor;

UCLASS(meta = (BlueprintSpawnableComponent))
class UIdleState : public UState
{
	GENERATED_BODY()

protected:
	UIdleState();

	virtual void Start(UStateProcessor*) override;

	virtual UState* Update(UStateProcessor*) override;

	virtual void Exit(UStateProcessor*) override;

};