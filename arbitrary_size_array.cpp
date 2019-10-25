#include <iostream>

int main(){

    int CAPACITY;
    double input;

    std::cout << "Please state the intended capacity, ideally under one million so there isn't a segmentation fault!" << std::endl;
    std::cin >> CAPACITY;

    double array[CAPACITY];

    std::cout << "Input" << std::endl;

    for (int current_size = 0; current_size < CAPACITY; current_size++){
        std::cin >> input;
        array[current_size] = input;
    }

    for (int i = 0; i < CAPACITY; i++){
        std::cout << array[i] << " ";
    }
    return 0;
}
