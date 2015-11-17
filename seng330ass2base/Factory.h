#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "GameEntity.h"
#include "Player.h"
#include "Room.h"

class Factory {
	private:
		static GameEntity* Prototypes[3];
	public:
		static GameEntity* MakeGameEntity(int choice);
};

#endif // __FACTORY_H__