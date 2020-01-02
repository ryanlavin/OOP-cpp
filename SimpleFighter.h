class simpleFighter{
public:
    void setHP(int hp);
    void set_OriginalHP(int OriginalHP);
    void setTackleDamage(int tackle);
    void attack(simpleFighter& Bulbasaur, simpleFighter& Pikachu);
    void heal();

    int get_HP();
    int get_TackleDamage();
    int get_OriginalHP();

private:
    int hp;
    int tackle;
    int OriginalHP;
};
