#include "Room.h"

// Room Constructors, use GameEntity constructor
Room::Room() : GameEntity() {
	std::cout << "Created a room..." << std::endl;
}

Room::Room(int id, std::string name) : GameEntity(id, name) {
	std::cout << "Created a room..." << std::endl;
}

Room::Room(int id, std::string name, std::string description) : GameEntity(id, name, description) {
	std::cout << "Created a room..." << std::endl;
}

// Room Deconstructor
Room::~Room() {
	std::cout << "Destroyed a room..." << std::endl;
}


// Clones a room, returns empty object
Room* Room::Clone() {
	std::cout << "Cloned a room..." << std::endl;
	return new Room;
}