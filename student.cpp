#include "student.h"

student::student(std::string name, int id){
    this->student_name = name;
    this->student_id = id;
}
student::~student(){
    //nothing to delete so this is empty
}

std::string student::get_name(){
    return this->student_name;
} // get the value
int student::get_id(){
    return this->student_id;
}
void student::set_name(std::string input){
    this->student_name = input;
    return;
} // set the value
void student::set_id(int input){
    this->student_id = input;
    return;
}
