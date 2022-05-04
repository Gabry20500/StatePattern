#include "Jump_State.h"

#include "State_Processor.h"


UJumpState::UJumpState()
{

}

void UJumpState::Start(UStateProcessor* StateProcessor)
{

}

UState* UJumpState::Update(UStateProcessor* StateProcessor)
{
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Blue, TEXT("Jump"));
	return StateProcessor->Idle;
}

void UJumpState::Exit(UStateProcessor* StateProcessor)
{

}