#include <iostream>
#include <fstream>
#include <sstream>

int main(){
    std::istringstream stream;
    stream.str("March 2, 2000");
    std::string month;
    int day;
    std::string comma;
    int year;
    stream >> month >> day >> comma >> year;
    std::cout << "It is the year " << year << " and the date is " << month << " " << day << std::endl;


    return 0;
}
