#include <iostream>
#include "SimpleFighter.h"


int main(){
    simpleFighter Pikachu;
    Pikachu.setHP(50);
    Pikachu.set_OriginalHP(50);
    //Pikachu.setTackleDamage(20);
    Pikachu.add_move(Pikachu, "Tackle", 20);
    simpleFighter Bulbasaur;
    Bulbasaur.setHP(60);
    Bulbasaur.set_OriginalHP(60);
    //Bulbasaur.setTackleDamage(15);



// This is an example of part of a battle, only two moves right now, tackle (called by attack member function) and heal (called by heal member function)
/*
    std::cout << Bulbasaur.get_OriginalHP() << std::endl; // Just for testing
    std::cout << "Pikachu's HP: " << Pikachu.get_HP() << std::endl << "Bulbasaur's HP: " << Bulbasaur.get_HP() << std::endl; // Just for testing
    Pikachu.attack(Pikachu, Bulbasaur);
    Pikachu.attack(Pikachu, Bulbasaur);
    std::cout << "\n";
    std::cout << Bulbasaur.get_OriginalHP() << std::endl; // For testing
    Bulbasaur.heal();
    Bulbasaur.attack(Bulbasaur, Pikachu);
    Bulbasaur.attack(Bulbasaur, Pikachu);
    Pikachu.heal();

    std::cout << "Pikachu's HP: " << Pikachu.get_HP() << std::endl << "Bulbasaur's HP: " << Bulbasaur.get_HP() << std::endl; // For testing
*/
    return 0;
}
