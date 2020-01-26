#include <iostream>
#include <vector>

class simpleFighter{
public:
    void setHP(int hp);
    void setName(std::string name);
    void set_OriginalHP(int OriginalHP);
    void attack(simpleFighter& Bulbasaur, simpleFighter& Pikachu, int input);
    void add_move(simpleFighter& Bulbasaur, std::string move, int moves_damage, double successRate);
    void display();
    void setHitChance(double successRate);

    int get_HP();
    int get_OriginalHP();
    int get_move_damage(int input);
    void get_input(int input);
    double getHitChance();
    std::string get_name();



private:
    int hp;
    std::string fighter_name;
    int OriginalHP;
    std::vector<std::string> moves;
    int move_choice;
    std::vector<int> moves_damage;
    double hitChance;
};

class FighterInstantiation{
    public:

// Getters that will be used to stream into simpleFighter class
	int getHP();
	void setHP(int health);
//	void getMoveOneHitChance;
//	void getMoveTwoHitChance;
//	void getMoveThreeHitChance;
//	void getMoveFourHitChance;
//	void getMoveOneDamage;
//	void getMoveTwoDamage;
//	void getMoveThreeDamage;
	std::string  getFighterName();
	void setFighterName(std::string fighterName);
//	void getMoveOne();
//	void getMoveTwo();
//	void getMoveThree();
//	void getMoveFour();
	void ReadFromFile(int lineIndex);

    private:
	int hp1;
	std::string FighterName;
	std::vector<std::string> moves1;
	std::vector<int> moves_damage1;
	std::vector<double> moves_hitChance;	
	int lineIndex;	
};
