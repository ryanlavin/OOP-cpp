#include "SimpleFighter.h"
#include <iostream>
#include <vector>
#include <sstream>

void simpleFighter::setHP(int hp){
    this->hp = hp;
}

void simpleFighter::set_OriginalHP(int OriginalHP){
    this->OriginalHP = OriginalHP;
}

// Make sure to pass the attacking pokemon first, where Bulbasaur is in this case
void simpleFighter::attack(simpleFighter& Bulbasaur, simpleFighter& Pikachu){
    Pikachu.setHP(Pikachu.get_HP() - Bulbasaur.get_move_damage());
}

void simpleFighter::heal(){
    this->hp += this->OriginalHP/2;
}
/*
void simpleFighter::setTackleDamage(int tackle){
    this->tackle = tackle;
}
*/
void simpleFighter::add_move(simpleFighter& Bulbasaur, std::string move, int move_damage){
    moves.push_back(move);
    moves_damage.push_back(move_damage);
//    this->moves_damage = move_damage;
    std::ostringstream stream;
    stream << move;
    stream << moves.size();
    std::string num_str = stream.str();

}

int simpleFighter::get_move_damage(){
    return this->moves_damage;
}

int simpleFighter::get_HP(){
    return this->hp;
}

int simpleFighter::get_OriginalHP(){
    return this->OriginalHP;
}
/*
int simpleFighter::get_TackleDamage(){
    return this->tackle;
}
*/
