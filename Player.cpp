#include "Player.h"

Player::Player() : GameEntity() {
	std::cout << "Created a player..." << std::endl;
}

Player::Player(int id, std::string name) : GameEntity(id, name){
    std::cout << "Created a player..." << std::endl;
}

Player::Player(int id, std::string name, std::string description) : GameEntity(id, name, description) {
	std::cout << "Created a player..." << std::endl;
}

Player::~Player() {
    std::cout << "Destroyed a player..." << std::endl;
}

Player* Player::Clone() {
	std::cout << "Cloned a player.." << std::endl;
	return new Player;
}