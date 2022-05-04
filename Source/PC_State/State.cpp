#pragma once

class UStateProcessor;
class AMyCharacter;

UCLASS(Blueprintable, BlueprintType)
class UState : public UObject
{

		UPROPERTY()
		AMyCharacter* MyPgRef;

public:


	FORCEINLINE virtual void Start(UStateProcessor*) {};

	FORCEINLINE virtual UState* Update(UStateProcessor*)
	{
		return nullptr;
	};

	FORCEINLINE virtual void End(UStateProcessor*) {};
};