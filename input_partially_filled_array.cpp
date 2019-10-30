#include <iostream>

int main(){
    const int CAPACITY = 10;
    double values[CAPACITY];
    int input = int read_input(values, CAPACITY);

    for (int i = 0; i < CAPACITY; i++){
        std::cout << values[i] << " ";
    }
    std::cout << "\n";
    return 0;
}


    int read_input(double values[], int CAPACITY){
    int current_size;
    int input;
    std::cout << "Input integers" << std::endl;
    while(current_size < CAPACITY){
        std::cin >> input;
        values[current_size] = input;
        current_size++;
    }
    return current_size;
}



