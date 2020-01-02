#include "fighter.h"

int main(){
    Pikachu pikachu;
    Charmander charmander;
    Squirtle squirtle;
    Bulbasaur bulbasaur;
    std::vector<int> HP(3);
    for(int i=0; i<HP.size();i++){
        int randoHP = 175;
        pikachu.setHP(randoHP);
        charmander.setHP(randoHP+25);
        squirtle.setHP(randoHP+50);
        bulbasaur.setHP(randoHP-25);
    }


    return 0;
}
