#include <string>
#include <iostream>

class family{

public:
    family(int, std::string, bool, std::string, std::string);
    ~family();

// Gets the values
    int get_height();
    std::string get_name();
    bool get_gender();
    std::string get_mother();
    std::string get_father();

// Sets the values
    void set_height(int);
    void set_name(std::string);
    void set_gender(bool);
    void set_mother(std::string);
    void set_father(std::string);


private:
    int theirHeight;
    std::string theirName;
    bool theirGender;
    std::string theirMother;
    std::string theirFather;
};
