#include <iostream>

int main(){
    const int CAPACITY = 8;
    int array[CAPACITY];
    int input;
    int zero_counter = 0;
    std::cout << "Please input integers" << std::endl;

    for (int current_size = 0; current_size < CAPACITY; current_size++){
        std::cin >> input;
        array[current_size] = input;
        if (input == 0){
            zero_counter++;
        }
    }
    std::cout << zero_counter << std::endl;



    return 0;
}
