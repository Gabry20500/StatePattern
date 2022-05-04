#include "Moving_State.h"

#include "State_Processor.h"


UMovingState::UMovingState()
{
}

void UMovingState::Start(UStateProcessor*)
{
}

UState* UMovingState::Update(UStateProcessor* thisProcessor)
{
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Blue, TEXT("Moving"));
	return thisProcessor->Jump;
}

void UMovingState::Exit(UStateProcessor*)
{
}