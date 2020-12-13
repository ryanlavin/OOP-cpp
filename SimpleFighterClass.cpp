#include <vector>
#include "SimpleFighterClass.h"
#include <iostream>

Fighter::Fighter(std::string name, int hp){
	Fighter::name = name;
	Fighter::hp = hp;
}

std::string Fighter::GetName(){
	return this->name;
}

int Fighter::GetHP(){
	return this->hp;
}
