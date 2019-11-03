#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

/*
// The atoi function is working in the background and thus doesn't need to be re-declared
int my_atoi(const char s[]){
    char[] year = "2012";
    int y = atoi(year);
    return y;
}
*/

std::string uppercase(std::string str){
    std::string result = str;
    for (int i = 0; i < result.length(); i++){
        result[i] = toupper(result[i]); // Convert each character to uppercase
    }
    return result;
}

int main(){

    std::string year = "2012";
    int y = atoi(year.c_str());
    std::cout << y << std::endl; // Will output 2012

    std::string name = "harry";
    std::cout << name.substr(3, 2) << std::endl; // Will output "ry"

    std::string str = uppercase("harry");
    std::cout << str << std::endl;

    int output = strlen("Harry");
    std::cout << output << std::endl;

    std::cout << "Enter an integer, Q to quit" << std::endl;
    std::string input;
    std::cin >> input;
    if (input == "Q"){ return 1; }
    else{
        int answer = atoi(input.c_str());
        std::cout << "Your input as an integer is " << answer << "." << std::endl;
    }

    return 0;
}


