#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include "GameEntity.hpp"

class Player: public GameEntity{

private:

public:
    Player( int id, std::string name);
    ~Player(  );

	Player* Clone();

};

#endif 
