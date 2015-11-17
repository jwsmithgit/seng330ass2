#ifndef __ROOM_H__
#define __ROOM_H__

#include "GameEntity.h"

class Room : public GameEntity {

private:

public:
	Room();
	Room(int id, std::string description);
	Room(int id, std::string name, std::string description);
	~Room();

	Room* Clone();

};

#endif // __ROOM_H__