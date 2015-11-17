#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "GameEntity.h"

class Player: public GameEntity{

private:

public:
	Player();
    Player(int id, std::string name);
	Player(int id, std::string name, std::string description);
    ~Player();

	Player* Clone();

};

#endif 
