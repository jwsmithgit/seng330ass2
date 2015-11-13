#ifndef __ROOM_H__
#define __ROOM_H__

#include <iostream>
#include "GameEntity.hpp"

class Room : public GameEntity {

private:

public:
	Room(int id, std::string description);
	~Room();

	Room* Clone();

};

#endif // __ROOM_H__