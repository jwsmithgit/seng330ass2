/**
* Jacob Smith
* V00700979
* Seng 330
* Assignment 2
*/

/**
* included files
*/
#include "GameEntity.h"
#include "Factory.h"

#include <iostream>
#include <vector>

//#include "GameEntity.pb.h"
//#include <fstream>

int main(int argc, char* argv[]){

	/**
	* setup variables
	*/
	std::vector<GameEntity*> entities;
	int choice;
	std::string name;

	/**
	* get user input and create clones
	*/
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

	/**
	* print out all clones created before exiting
	*/
	for (int i = 0; i < entities.size(); ++i)
		entities[i]->PrintName();

	/**
	* google protocol buffer output, not working, commented out
	*/
	//std::fstream output("myfile", std::ios::out | std::ios::binary);
	//for (int i = 0; i < entities.size(); ++i)
		//entities[i]->SerializeToOstream(&output);
	
	/**
	* delete all the created clones
	*/
	for (int i = 0; i < entities.size(); ++i)
		delete entities[i];

	/**
	* allow user to see output before exiting
	*/
	std::cout << "Press enter to exit: ";
	std::cin.get();
	std::cin.get();
}