#include "SimpleFighter.h"
#include <iostream>

void simpleFighter::setHP(int hp){
    this->hp = hp;
}

void simpleFighter::set_OriginalHP(int OriginalHP){
    this->OriginalHP = OriginalHP;
}

// Make sure to pass the attacking pokemon first, where Bulbasaur is in this case
void simpleFighter::attack(simpleFighter& Bulbasaur, simpleFighter& Pikachu){
    Pikachu.setHP(Pikachu.get_HP() - Bulbasaur.get_TackleDamage());
}

void simpleFighter::heal(){
    this->hp += this->OriginalHP/2;
}

void simpleFighter::setTackleDamage(int tackle){
    this->tackle = tackle;
}

int simpleFighter::get_HP(){
    return this->hp;
}

int simpleFighter::get_OriginalHP(){
    return this->OriginalHP;
}

int simpleFighter::get_TackleDamage(){
    return this->tackle;
}
