#include "familyHeader.h"
#include <string>
#include <iostream>

family::family(std::string name, std::string relation){
    this->theirName = name;
    this->relationToMe = relation;
}
family::~family(){
    // Empty bc nothing needs to be deleted
}

std::string family::get_name(){
    return this->theirName;
}

std::string family::get_relation(){
    return this->relationToMe;
}

void family::set_name(std::string input){
    this->theirName = input;
    return;
}

void family::set_relation(std::string input){
    this->relationToMe = input;
    return;
}
