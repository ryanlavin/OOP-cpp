#include "ObjStrPrac.h"
#include <fstream>


void Person::SetName(std::string name){
	this->name = name; 
}

void Person::SetAge(int age){
	this->age = age;
}

int Person::GetAge(){
	return this->age;
}

std::string Person::GetName(){
	return this->name;
}
