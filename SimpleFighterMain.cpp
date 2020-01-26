#include <iostream>
#include "SimpleFighter.h"
#include <string>
#include <fstream>



int main(){
    int input; // This input will be used by the player to determine what move they would like to use
    srand(time(NULL)); // For random chance
    std::ifstream inData;
    char comma = ',';
    simpleFighter Pikachu;
    Pikachu.setHP(50);
    Pikachu.setName("Pikachu");
    Pikachu.set_OriginalHP(50);
    Pikachu.add_move(Pikachu, "Tackle", 20, 0.90);
    Pikachu.add_move(Pikachu, "Bite", 40, 0.70);
    Pikachu.add_move(Pikachu, "Heal", -0.5*(Pikachu.get_HP()), 0.50);
    //Pikachu.display();
    std::vector<FighterInstantiation> vectorOfFighters;
    FighterInstantiation Pikachu1, Bulbasaur1;
    vectorOfFighters.push_back(Pikachu1);
    vectorOfFighters.push_back(Bulbasaur1);
   // Pikachu1.ReadFromFile();
    for(int i = 0; i < vectorOfFighters.size(); i++){
	(vectorOfFighters[i]).ReadFromFile(i); 
	FighterInstantiation *ptr = &(vectorOfFighters[i]);
	std::cout << ptr->(vectorOfFighters[i]).getHP() << std::endl;
   	std::cout << ptr->(vectorOfFighters[i]).getFighterName() << std::endl;
	std::cout << ptr->(vectorOfFighters[i]).getHP() << std::endl;	
    }
  //  std::cout << Pikachu1.getFighterName() << std::endl;
  // std::cout << Pikachu1.getHP() << std::endl;

   // Bulbasaur1.ReadFromFile();
   // std::cout << Bulbasaur1.getFighterName() << std::endl;
  //  std::cout << Bulbasaur1.getHP() << std::endl;

    simpleFighter Bulbasaur;
    Bulbasaur.setHP(60);
    Bulbasaur.setName("Bulbasaur");
    Bulbasaur.set_OriginalHP(60);
    Bulbasaur.add_move(Bulbasaur, "Bite", 30, 0.70);
    Bulbasaur.add_move(Bulbasaur, "Tackle", 15, 0.90);
    Bulbasaur.add_move(Bulbasaur, "Heal", -0.5*Bulbasaur.get_HP(), 0.50);
    //Bulbasaur.display();
    //std::cout << Pikachu.get_OriginalHP() << std::endl; // Just for testing
    //Bulbasaur.attack(Bulbasaur, Pikachu, 2);

    //std::cout << "Pikachu's HP: " << Pikachu.get_HP() << std::endl << "Bulbasaur's HP: " << Bulbasaur.get_HP() << std::endl; // Just for testing



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
