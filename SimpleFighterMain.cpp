#include <iostream>
#include "SimpleFighter.h"


int main(){
    simpleFighter Pikachu;
    Pikachu.setHP(50);
    Pikachu.set_OriginalHP(50);
    Pikachu.setTackleDamage(20);
    simpleFighter Bulbasaur;
    Bulbasaur.setHP(60);
    Bulbasaur.set_OriginalHP(60);

    std::cout << Bulbasaur.get_OriginalHP() << std::endl;
    Bulbasaur.setTackleDamage(15);
    std::cout << "Pikachu's HP: " << Pikachu.get_HP() << std::endl << "Bulbasaur's HP: " << Bulbasaur.get_HP() << std::endl;
    Pikachu.attack(Pikachu, Bulbasaur);
    Pikachu.attack(Pikachu, Bulbasaur);
    std::cout << "\n";
    std::cout << Bulbasaur.get_OriginalHP() << std::endl;
    Bulbasaur.heal();
    Bulbasaur.attack(Bulbasaur, Pikachu);
    Bulbasaur.attack(Bulbasaur, Pikachu);
    Pikachu.heal();

    std::cout << "Pikachu's HP: " << Pikachu.get_HP() << std::endl << "Bulbasaur's HP: " << Bulbasaur.get_HP() << std::endl;

    return 0;
}
