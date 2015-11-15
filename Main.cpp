// my first program in C++
#include "GameEntity.h"
#include "Factory.h"

#include <iostream>
#include <vector>

#include "GameEntity.pb.h"
#include <fstream>

int main(int argc, char* argv[]){

	std::vector<GameEntity*> entities;
	int choice;
	std::string name;

	while (true) {
		std::cout << "Player(1) Room(2) Go(0): ";
		std::cin >> choice;
		if (choice == 0)
			break;

		std::cout << "Enter name of object: ";
		std::cin >> name;

		GameEntity* Entity = Factory::MakeGameEntity(choice);
		Entity->SetName(name);

		entities.push_back(Entity);	
	}

	for (int i = 0; i < entities.size(); ++i)
		entities[i]->PrintName();
	std::fstream output("myfile", std::ios::out | std::ios::binary);
	//for (int i = 0; i < entities.size(); ++i)
		//entities[i]->SerializeToOstream(&output);
	for (int i = 0; i < entities.size(); ++i)
		delete entities[i];

	std::cout << "Press enter to exit: ";
	std::cin.get();
	std::cin.get();
}