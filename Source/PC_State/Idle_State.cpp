
#include "Idle_State.h"

#include "State_Processor.h"


UIdleState::UIdleState()
{
}

void UIdleState::Start(UStateProcessor*)
{
}

UState* UIdleState::Update(UStateProcessor* thisProcessor)
{
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Blue, TEXT("Idle"));
	return thisProcessor->Run;
}

void UIdleState::Exit(UStateProcessor*)
{
}