#include "Factory.h"

GameEntity* Factory::Prototypes[] = {
	0, new Player, new Room
};
GameEntity* Factory::MakeGameEntity(int choice) {
	return Prototypes[choice]->Clone();
}
