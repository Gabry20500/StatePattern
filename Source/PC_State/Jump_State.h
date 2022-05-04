#pragma once

#include "State.h"
#include "Jump_State.generated.h"

UCLASS(BlueprintSpawnableComponent)
class UJumpState : public UState
{
    GENERATED_BODY()
        friend class UStateProcessor;
public:
    UJumpState();

    virtual void Start(UStateProcessor*) override;

    virtual UState* Update(UStateProcessor*) override;

    virtual void Exit(UStateProcessor*) override;
};
