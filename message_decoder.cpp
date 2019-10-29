#include <iostream>

/*
Write a program to read a number character by character and convert it to an integer,
using just one char variable and one int variable.
The number will have either three, four digits.
*/


int main(){

    std::cout << "Please input an integer of three, four, five, or six digits" << std::endl;
    char digitChar = std::cin.get();
    int number = (digitChar - '0')*100;
    digitChar = std::cin.get();
    number += (digitChar - '0')*10;
    digitChar = std::cin.get();
    number += (digitChar - '0');
    digitChar = std::cin.get();
    if (digitChar == '\n'){
        std::cout << "The integer inputted is: " << number << std::endl;
        return 1;
    }
    else{
        number = number*10 + (digitChar - '0');
    }
    digitChar = std::cin.get();
    if (digitChar == '\n'){
        std::cout << "The integer inputted is: " << number << std::endl;
        return 1;
    }
    else{
        number = number*10 + (digitChar - '0');
    }
    digitChar = std::cin.get();
    if (digitChar == '\n'){
        std::cout << "The number inputted is: " << number << std::endl;
        return 1;
    }
    else{
        number = number*10 + (digitChar - '0');
        std::cout << "The number inputted is: " << number << std::endl;
     }


    return 0;
}
