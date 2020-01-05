#include <iostream>
#include <vector>

class simpleFighter{
public:
    void setHP(int hp);
    void setName(std::string name);
    void set_OriginalHP(int OriginalHP);
    void attack(simpleFighter& Bulbasaur, simpleFighter& Pikachu, int input);
    void heal();
    void add_move(simpleFighter& Bulbasaur, std::string move, int moves_damage);
    void display();

    int get_HP();
    int get_OriginalHP();
    int get_move_damage(int input);
    void get_input(int input);
    std::string get_name();



private:
    int hp;
    std::string fighter_name;
    int OriginalHP;
    std::vector<std::string> moves;
    int move_choice;
    std::vector<int> moves_damage;
};
