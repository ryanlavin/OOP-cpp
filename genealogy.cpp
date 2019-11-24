#include "genealogyHeader.h"
#include <iostream>

familyMember::familyMember(int familyTreeHeight, std::string personA, bool isMale, std::string MotherID, std::string FatherID){
    this->height = familyTreeHeight;
    this->nameA = personA;
    this->genderA = isMale;
    this->motherA = MotherID;
    this->fatherA = FatherID;
}

familyMember::~familyMember(){
    // Nothing to delete
}

std::string familyMember::get_nameA(){
    return this->nameA;
}

bool familyMember::get_isMale(){
    return this->genderA;
}

int familyMember::get_height(){
    return this->height;
}

std::string familyMember::get_motherName(){
    return this->motherA;
}

std::string familyMember::get_fatherName(){
    return this->fatherA;
}



/*
    std::ifstream in_file;
    std::string line;
    in_file.open("FamilyGenealogy.txt");
    std::string name[11], gender[11], mother[11], father[11];
    std::string nameA, genderA, motherA, fatherA; // file streams data into these variables and then these vars are stores into an array of a similar name
    int height[11];
    int heightB;


*/

