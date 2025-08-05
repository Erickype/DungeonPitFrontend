#include "C:\Repositories\UnrealProjects\DungeonPit\Intermediate\Build\Win64\x64\DungeonPitEditor\Development\UnrealEd\SharedPCH.UnrealEd.Project.ValApi.Cpp20.InclOrderUnreal5_3.h"
#include "Room.h"

bool FRoom::Intersect(const FRoom& A, const FRoom& B)
{
	return !(
	A.Position.X >= (B.Position.X + B.Size.X) ||
	(A.Position.X + A.Size.X) <= B.Position.X ||
	A.Position.Y >= (B.Position.Y + B.Size.Y) ||
	(A.Position.Y + A.Size.Y) <= B.Position.Y
);
}
