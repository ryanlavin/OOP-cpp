#include "familyHeader.h"
#include <string>
#include <iostream>

family::family(int height, std::string name, bool gender, std::string mother, std::string father){
    this->theirHeight = height;
    this->theirName = name;
    this->theirGender = gender;
    this->theirMother = mother;
    this->theirFather = father;
}
family::~family(){
    // Empty bc nothing needs to be deleted
}

int family::get_height(){
    return this->theirHeight;
}

std::string family::get_name(){
    return this->theirName;
}

bool family::get_gender(){
    return this->theirGender;
}

std::string family::get_mother(){
    return this->theirMother;
}

std::string family::get_father(){
    return this->theirFather;
}

//Member functions
void family::set_height(int input){
    this->theirHeight = input;
    return;
}

void family::set_name(std::string input){
    this->theirName = input;
    return;
}

void family::set_gender(bool input){
    this->theirGender = input;
    return;
}

void family::set_mother(std::string input){
    this->theirMother = input;
    return;
}

void family::set_father(std::string input){
    this->theirFather = input;
    return;
}
