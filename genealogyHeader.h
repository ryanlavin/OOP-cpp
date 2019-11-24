#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class familyMember{

public:

// Get all the necessary values
    familyMember(int, std::string, bool, std::string, std::string);
    ~familyMember();
    int get_height();
    std::string get_nameA(); // Finding the relationship of this person TO the next person
    //std::string get_nameB(); // The person that we are comparing the first one to
    bool get_isMale();
    std::string get_motherName();
    std::string get_fatherName();

// Set all the necessary values
    void set_nameA(std::string);
    void set_nameB(std::string);
    void set_isMale(bool);
    void set_height(int);
    void set_motherName(std::string);
    void set_fatherName(std::string);

private:
    std::string nameA;
    bool genderA;
    int height;
    std::string motherA;
    std::string fatherA;
};

/*
    std::ifstream in_file;
    std::string line;
    in_file.open("FamilyGenealogy.txt");
    std::string name[11], gender[11], mother[11], father[11];
    std::string nameA, genderA, motherA, fatherA; // file streams data into these variables and then these vars are stores into an array of a similar name
    int height[11];
    int heightA;


*/
