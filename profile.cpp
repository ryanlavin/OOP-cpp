#include "profileHeader.h"

profile::profile(std::string name, int age, std::string birthplace){
    this->person_name = name;
    this->person_age = age;
    this->person_birthplace = birthplace;
}

profile::~profile(){
    // Nothing to delete so this is empty
}

std::string profile::get_name(){
    return this->person_name;
}
int profile::get_age(){
    return this->person_age;
}
std::string profile::get_birthplace(){
    return this->person_birthplace;
}

void profile::set_name(std::string input){
    this->person_name = input;
    return;
}
void profile::set_age(int input){
    this->person_age = input;
    return;
}
void profile::set_birthplace(std::string input){
    this->person_birthplace = input;
    return;
}

