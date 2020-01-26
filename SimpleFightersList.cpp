#include "SimpleFightersList.h"
#include <fstream>
#include <sstream>
#include <filesystem>
#include <iostream>
#include <vector>

FighterList::FighterList(const char* filePath){
	std::ifstream stream;
	stream.open(filePath);
	if(!stream){
		std::cout << "Failed to open the file" << std::endl;
		return;
	}
	std::string line;
	std::stringstream current;
	while(std::getline(current, line)){
		current.clear();
		current << line;
		std::string name;
		int hp;
		current >> name;
		current >> hp;
		Fighter newFighter(name, hp);
		list.push_back(newFighter);
	
	}
std::cout << "Total count: " << list.size() << " Fighters" << std::endl;

}
