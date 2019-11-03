#include <iostream>

int main(){
    std::cout << "Choose the size of the array" << std::endl;
    int input;
    std::cin >> input;
    int array[input];
    int *n = new int[input];
    int *integer = new int;

    std::cout << "Input the values of the array" << std::endl;
    for (int i = 0; i < input; i++){
        int input2;
        std::cin >> input2;
        array[i] = input2;
    }

    for (int i = 0; i < input; i++){
        std::cout << array[i] << " ";
    }

    delete integer;
    delete[] n;

    return 0;
}
