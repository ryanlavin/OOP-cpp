#include "rapperHeader.h"

rapperProfile::rapperProfile(std::string name, int year){
    this->rapper_name = name;
    this->rapper_yearFormed = year;
}
rapperProfile::~rapperProfile(){
    //Nothing to delete
}

// Get the values
std::string rapperProfile::get_name(){
    return this->rapper_name;
}
int rapperProfile::get_yearFormed(){
    return this->rapper_yearFormed;
}

// Set the values
void rapperProfile::set_name(std::string input){
    this->rapper_name = input;
    return;
}
void rapperProfile::set_yearFormed(int input){
    this->rapper_yearFormed = input;
    return;
}
