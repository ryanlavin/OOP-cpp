#include "SimpleFighter.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <random>
#include <ctime>
#include <fstream>

void simpleFighter::setHP(int hp){
    this->hp = hp;
}

void simpleFighter::setHitChance(double successRate){
    this->hitChance = successRate;
}

void simpleFighter::setName(std::string name){
    this->fighter_name = name;
}

void simpleFighter::set_OriginalHP(int OriginalHP){
    this->OriginalHP = OriginalHP;
}

void simpleFighter::get_input(int input){
    this->move_choice = input;
}


// Make sure to pass the attacking pokemon first, where Bulbasaur is in this case
void simpleFighter::attack(simpleFighter& Bulbasaur, simpleFighter& Pikachu, int input){
    //srand(time(NULL)); // For random chance
    double j = rand() % (100);
    std::cout << j/100 << std::endl;
    if((j/100) < Bulbasaur.getHitChance()){
        std::cout << "The attack missed!" << std::endl;
    }
    else if((j/100) >= Bulbasaur.getHitChance()){
        std::cout << "The attack landed and did " << Bulbasaur.get_move_damage(input) << " damage!" << std::endl;
        if(Bulbasaur.get_move_damage(input) < 0){
            Bulbasaur.setHP(Bulbasaur.get_HP() - Bulbasaur.get_move_damage(input));
        }
        else if(Bulbasaur.get_move_damage(input) >= 0){
            Pikachu.setHP(Pikachu.get_HP() - Bulbasaur.get_move_damage(input));
        }
    }

}

void simpleFighter::add_move(simpleFighter& Bulbasaur, std::string move, int move_damage, double successRate){
    simpleFighter::setHitChance(successRate);
    moves.push_back(move);
    moves_damage.push_back(move_damage);
    std::ostringstream stream;
    stream << move;
    stream << moves.size();
    std::string str = stream.str();

}

int simpleFighter::get_move_damage(int input){
    for(int i = 0; i < moves.size(); i++){

        if(input-1 == i){
            return this->moves_damage[i];
        }
        else if(input-1 != i){
            continue;
        }
    }
    return 1;
}

double simpleFighter::getHitChance(){
    return this->hitChance;
}

void simpleFighter::display(){
    std::cout << "\n";
    std::cout << simpleFighter::get_name() << "'s moves: " << std::endl;
    for(int i = 0; i < moves.size(); i++){
        std::cout << i+1 << ": " << moves[i] << std::endl;
    }
}

int simpleFighter::get_HP(){
    return this->hp;
}

int simpleFighter::get_OriginalHP(){
    return this->OriginalHP;
}

std::string simpleFighter::get_name(){
    return this->fighter_name;
}

//Below this is the implementation of FighterInstantiation class

void FighterInstantiation::ReadFromFile(int lineIndex){
	std::ifstream inFile;
	inFile.open("SimpleFighter.txt");
	if(!inFile){
		throw "Error opening file, please try again.";
	}
	std::string line;
	while(std::getline(inFile, line)){
		std::string fighterName;	
		int health;
		inFile >> fighterName >> health;
		FighterInstantiation::setHP(health);
		FighterInstantiation::setFighterName(fighterName);
		this->lineIndex++;
}
}
void FighterInstantiation::setHP(int health){
	this->hp1 = health;
}

int FighterInstantiation::getHP(){
	return this->hp1;
}

//void FighterInstantiation::getMoveOneHitChance{
//	this->
//}

void FighterInstantiation::setFighterName(std::string fighterName){
	this->FighterName = fighterName;
}
std::string FighterInstantiation::getFighterName(){
	return this->FighterName;
}


