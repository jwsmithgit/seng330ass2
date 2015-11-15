#include "Factory.h"

// Array of prototypes for factory
GameEntity* Factory::Prototypes[] = {
	0, new Player, new Room
};

// Clones a copy of object in prototypes array
GameEntity* Factory::MakeGameEntity(int choice) {
	return Prototypes[choice]->Clone();
}
