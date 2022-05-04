#pragma once

#include "CoreMinimal.h"
#include "Component/actorcomponent"

#include "State.h"


#include "State_Processor.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STM_TEST_API UStateProcessor : public UActorComponent
{
	GENERATED_BODY()

		UPROPERTY()
		UState* NewState = nullptr;

	    UPROPERTY(EditAnywhere)
		AMyActor* MyPG;


public:
	explicit UStateProcessor();
	explicit UStateProcessor(AMyActor* Character);

	FORCEINLINE void ChangeState(UState* LocalNewState)
	{
		CurrentState->Exit(this);
		CurrentState = NewState;
		NewState->Start(this);
	}

protected:
	virtual void BeginPlay() override;

public:
	virtual void Update();

public:
	UPROPERTY(VisibleAnywhere)
		UState* CurrentState;

	UPROPERTY(EditAnywhere)
		UState* Idle;

	UPROPERTY(EditAnywhere)
		UState* Run;

	UPROPERTY(EditAnywhere)
		UState* Jump;
};