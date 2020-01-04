#include <iostream>
#include <vector>

class simpleFighter{
public:
    void setHP(int hp);
    void set_OriginalHP(int OriginalHP);
    //void setTackleDamage(int tackle);
    void attack(simpleFighter& Bulbasaur, simpleFighter& Pikachu);
    void heal();
    void add_move(simpleFighter& Bulbasaur, std::string move, int moves_damage);

    int get_HP();
    //int get_TackleDamage();
    int get_OriginalHP();
    int get_move_damage();

private:
    int hp;
    //int tackle;
    int OriginalHP;
    std::vector<std::string> moves;
    std::vector<int> moves_damage;
};
