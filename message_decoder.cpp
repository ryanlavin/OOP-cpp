#include <iostream>

int main(){
/*
Write a program to read a number character by character and convert it to an integer,
using just one char variable and one int variable.
The number will have either three, four digits.
*/

/*
Steps:
    * Read character by character until we reach an end-of-line.
    * Convert a series of characters representing a number to an integer
    * Convert an integer 1-26 into an uppercase letter
    * Convert an integer 1-26 into a lowercase letter.
    * Convert an integer 1-8 into a punctuation symbol based on Table 2-3.
    * Track a decoding mode.
*/
// Convert a series of characters representing a number to an integer
/*
    std::cout << "Please input an integer of three, four, five, or six digits" << std::endl;
    char digitChar = std::cin.get();
    int number = (digitChar - '0')*100;
    digitChar = std::cin.get();
    number += (digitChar - '0')*10;
    digitChar = std::cin.get();
    number += (digitChar - '0');
    digitChar = std::cin.get();
    while (digitChar != '\n'){
        number = number*10 + (digitChar - '0');
        digitChar = std::cin.get();
        number = std::cin.get();
    }
    std::cout << "Your number as an integer: " << number << std::endl;
*/

// Convert an integer 1-26 into an uppercase letter
/*
    int number;
    std::cin >> number;
    char outputCharacter = number + 'A' - 1;
    std::cout << outputCharacter << std::endl;
*/
// Convert an integer 1-26 into a lowercase letter
/*
    int number;
    std::cin >> number;
    char outputCharacter = number + 'A' + 31;
    std::cout << outputCharacter << std::endl;
*/
// Convert an integer 1-8 into a punctuation symbol based on Table 2-3.
/*
    int number;
    char outputCharacter;
    std::cin >> number;
    switch (number){
        case 1: outputCharacter = '!'; break;
        case 2: outputCharacter = '?'; break;
        case 3: outputCharacter = ','; break;
        case 4: outputCharacter = '.'; break;
        case 5: outputCharacter = ' '; break;
        case 6: outputCharacter = ';'; break;
        case 7: outputCharacter = '"'; break;
        case 8: outputCharacter = '\''; break;
    }
    std::cout << outputCharacter << std::endl;
*/
    char outputCharacter;
    enum debuggingMode { UPPERCASE, LOWERCASE, PUNCTUATION }; {
    std::cout << "Please input an integer of three, four, five, or six digits" << std::endl;
    char digitChar;
    debuggingMode mode = UPPERCASE;
    do
        {
        digitChar = std::cin.get();
        int number = (digitChar - '0');
        digitChar = std::cin.get();
        while ((digitChar != '\n') && (digitChar != ',')) {
            number = number*10 + (digitChar - '0');
            digitChar = std::cin.get();
        }
        switch (mode){
            case UPPERCASE:
                number = number % 27;
                outputCharacter = number + 'A' - 1;
                if (number == 0){
                    mode = LOWERCASE;
                    continue;
                }
                break;
            case LOWERCASE:
                number = number % 27;
                outputCharacter = number + 'a' - 27;
                if (number == 0){
                    std::cout << "Switch to punctuation: " << std::endl;
                    mode = PUNCTUATION;
                    continue;
                }
                break;
            case PUNCTUATION:
                number = number % 9;
                switch (number){
                    case 1: outputCharacter = '!'; break;
                    case 2: outputCharacter = '?'; break;
                    case 3: outputCharacter = ','; break;
                    case 4: outputCharacter = '.'; break;
                    case 5: outputCharacter = ' '; break;
                    case 6: outputCharacter = ';'; break;
                    case 7: outputCharacter = '"'; break;
                    case 8: outputCharacter = '\''; break;
                }
                if (number == 0){
                    std::cout << "Switch to uppercase: " << std::endl;
                    mode = UPPERCASE;
                    continue;
                }
                break;
            }
            std::cout << outputCharacter;
        } while(digitChar != '\n');
        std::cout << "\n";
}
    return 0;
}
