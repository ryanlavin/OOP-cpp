#include <iostream>
#include <iomanip>
#include <cmath>


int main(){

/*
    int digit;
    int sum;
    std::cout << "Please enter a single digit number 0-9" << std::endl;
    std::cin >> digit;
    int doubleDigit = digit * 2;
    if (doubleDigit >= 10){sum = 1 + doubleDigit % 10;}
    else{sum = doubleDigit;}
    return sum;
*/
std::cout << "——————————————————————————————" << "\n";

/*
char digit;
std::cout << "Enter a single digit number 0-9" << "\n";
std::cin >> digit;
int sum = digit - '0';
std::cout << sum << "\n";
*/

int checksum = 0;
char digits;
int doubleDigit;
    std::cout << "Enter a six digit number" << std::endl;

    for (int position = 1; position <= 6; position++){
        std::cin >> digits;
        if (0 == position % 2){
            checksum += digits - '0';
        }
        else checksum += doubleDigit*(digits - '0');
        /*if (1 == position % 2){
            int doubleDigit = digits * 2;
                if (doubleDigit >= 10){checksum = 1 + doubleDigit % 10;}
                else {checksum = doubleDigit;}
        ^This is my version of the code enacted right above it
        */
        }
        checksum += digits - '0';

    std::cout << "Checksum is: " << checksum << std::endl;
    if (checksum % 10 == 0){
        std::cout << "Input is valid" << std::endl;
    }
    else
        std::cout << "Input is invalid" << std::endl;









}
