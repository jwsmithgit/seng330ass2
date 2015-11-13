#include "Player.hpp"

Player::Player( int id, std::string name ) : GameEntity(id, name){
    std::cout << "Created a player..." << std::endl;
}

Player::~Player(  ) {
    std::cout << "Destroyed a player..." << std::endl;
}

Player* Player::Clone() {
	std::cout << "Cloned a player.." << std::endl;
	return new Player(*this);
}