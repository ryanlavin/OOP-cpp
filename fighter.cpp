#include "fighter.h"
#include <iostream>
#include <string>
#include <random>
#include <ctime>

fighter::fighter(){

}

fighter::display(){
    std::cout << "HP: " << this->hp << std::endl;
    //std::cout << "1. Tackle" << std::endl;
    //std::cout << "2. Heal" << std::endl;
    //std::cout << "3. Bite" << std::endl;
}

fighter::tackle(){
    this->HitMiss = (rand() % 100) < 90;
    if (this->HitMiss == true){
        this->damage = 85;
        this->hp -= this->damage;
    }
    else if(this->HitMiss == false){
        break;
    }
}

fighter::heal(){
    this->HitMiss = (rand() % 100) < 60;
    if (this->HitMiss == true){
        this->hp += this->hp/2;
    }
    else if (this->HitMiss == false){
        break;
    }
}

fighter::bite(){
    this->HitMiss = (rand() % 100) < 80;
    if (this->HitMiss == true){
        this->damage = 70;
        this->hp -= this->damage
    }
    else if (this->HitMiss == false){
        break;
    }
}

fighter::setHP(std::vector<int> hp){
    this->hp = hp;
}

void Pikachu::display(){
    Pikachu::display();
    for(int i = 0; i < choices.size(); i++){
        std::cout << i+1 << ": " << choices[i] << std::endl;
    }
    return;
}

