#include <iostream>

int main(){
    double numbers;
    int input;
    double sum;


    std::cout << "Enter numbers, press any letter to quit" << std::endl;
    while (std::cin >> input){
        if (input >= 0 && 0 == input % 2){
            sum = sum + input;
        }
        else if (input < 0 || 0 != input % 2){
            sum = sum;
        }
    }
        std::cout << sum << std::endl;






    return 0;
}
