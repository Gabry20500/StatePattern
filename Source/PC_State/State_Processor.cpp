#include "State_Processor.h"

#include "Idle_State.h"
#include "Moving_State.h"
#include "Jump_State.h"


UStateProcessor::UStateProcessor()
{
}

UStateProcessor::UStateProcessor(AMyActor* Character)
{
	MyPG = Character;
}

void UStateProcessor::BeginPlay()
{
	Super::BeginPlay();
	Idle = NewObject<UIdleState>();
	Run = NewObject<UMovingState>();
	Jump = NewObject<UJumpState>();

	CurrentState = Idle;
	PrimaryComponentTick.bCanEverTick = true;
	CurrentState->Start(this);
}


void UStateProcessor::Update()
{
	NewState = CurrentState->Update(this);
	ChangeState(NewState);
}