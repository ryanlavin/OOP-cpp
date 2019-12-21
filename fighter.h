#include <vector>
#include <iostream>
#include <string>

class fighter{
public:
    virtual void display();
    virtual void tackle();
    virtual void heal();
    virtual void bite();
    virtual void setHP(std::vector<int> hp);
    virtual void addMove();

private:
    vector<int> hp, damage;
    vector <std::string> choices;
    bool HitMiss;
};

class thunderbolt{
public:
    void thunderbolt();
};

class ember{
public:
    void ember();
};

class surf{
public:
    void surf();
};

class vineWhip{
public:
    void vineWhip();
};

class Pikachu : public fighter, thunderbolt{
public:
    virtual void display();
    virtual void tackle();
    virtual void bite();
};

class Charmander : public fighter, ember{
public:
    virtual void display();
};

class Squirtle : public fighter, surf{
public:
    virtual void display();
    virtual void tackle();
    virtual void bite();
};

class Bulbasaur : public fighter, vineWhip{
public:
    virtual void display();
    virtual void tackle();
    virtual void bite();
};



