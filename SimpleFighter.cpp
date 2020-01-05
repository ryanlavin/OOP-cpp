#include "SimpleFighter.h"
#include <iostream>
#include <vector>
#include <sstream>

void simpleFighter::setHP(int hp){
    this->hp = hp;
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
    if(Bulbasaur.get_move_damage(input) < 0){
        Bulbasaur.setHP(Bulbasaur.get_HP() - Bulbasaur.get_move_damage(input));
    }
    else if(Bulbasaur.get_move_damage(input) >= 0){
        Pikachu.setHP(Pikachu.get_HP() - Bulbasaur.get_move_damage(input));
    }
}



void simpleFighter::heal(){
    this->hp += this->OriginalHP/2;
}

void simpleFighter::add_move(simpleFighter& Bulbasaur, std::string move, int move_damage){
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

