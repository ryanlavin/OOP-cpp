#include <iostream>

int main(){

    int numbers;
    int input;
    std::cout << "Input, as an integer, the size of the array you would like to use" << std::endl;
    std::cin >> input;
    const int ARRAY_SIZE = input;
    int values[ARRAY_SIZE];

    std::cout << "List integers" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++){
        std::cin >> numbers;
        values[i] = numbers;
        if (i > 0){
            std::cout << " | ";
        }
        std::cout << values[i];
    }



    return 0;
}
