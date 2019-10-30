#include <iostream>

/*
Write a program to read a number character by character and convert it to an integer,
using just one char variable and two int variables.
The number will have either three or four digits.
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

/*
int main(){
    std::cout << "Input a number with either three or four digits" << std::endl;
    char digitChar = std::cin.get();
    int fourDigitNumber = (digitChar - '0')*1000;
    int threeDigitNumber = (digitChar - '0')*100;

    digitChar = std::cin.get();
    fourDigitNumber += ((digitChar - '0')*100);
    threeDigitNumber += ((digitChar - '0')*10);

    digitChar = std::cin.get();
    fourDigitNumber += ((digitChar - '0')*10);
    threeDigitNumber += (digitChar - '0');

    digitChar = std::cin.get();
    if (digitChar == '\n'){
        std::cout << "The three digit number entered is: " << threeDigitNumber << std::endl;
    }
    else{
        fourDigitNumber += (digitChar - '0');
        std::cout << "The four digit number entered is: " << fourDigitNumber << std::endl;
    }


    char digitChar = std::cin.get();
    int digit = (digitChar - '0')*100;
    int overallnumber =+ digit;
    digitChar = std::cin.get();
    digit = (digitChar - '0')*10;
    overallnumber += digit;
    digitChar = std::cin.get();
    overallnumber += (digitChar - '0');
    std::cout << "Your number as an integer: " << overallnumber << std::endl;
    */

    return 0;
}
