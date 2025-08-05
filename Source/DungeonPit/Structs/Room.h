#pragma once

#include "CoreMinimal.h"
#include "Room.generated.h"

USTRUCT(BlueprintType)
struct FRoom
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint Size;

	// ✅ Constructor por defecto
	FRoom()
		: Position(FIntPoint::ZeroValue), Size(FIntPoint::ZeroValue) {}

	// ✅ Constructor con parámetros
	FRoom(FIntPoint InPosition, FIntPoint InSize)
		: Position(InPosition), Size(InSize) {}

	// ✅ Método estático con tipo de retorno
	static bool Intersect(const FRoom& A, const FRoom& B);
};
