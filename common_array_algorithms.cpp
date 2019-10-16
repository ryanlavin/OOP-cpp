#include <iostream>
#include <cmath>

int main(){
// Filling Algorithm
    const int CAPACITY = 10;
    int squared[CAPACITY];
    for (int i = 0; i < CAPACITY; i++){
        squared[i] = i * i;
        std::cout << squared[i] << " | ";
    }
    std::cout << "\n";

    std::cout << "––––——————––––––––––––––Below is a copying algorithm––––——————––––––––––––––" << std::endl;
// Copying Algorithm
    int first_array[7] = { 42, 56, 24, 13, 63, 95, 45 };
    int second_array[7];
    for (int i = 0; i <= 7; i++){
        second_array[i] = first_array[i];
    }
    std::copy(std::begin(second_array), std::end(second_array), std::ostream_iterator<int>(std::cout << " " << "\n"));
    std::cout << "\n";

    std::cout << "––––——————––––––––––––––Below is a maximum & minimum algorithm––––——————––––––––––––––" << std::endl;


    std::cout << "Input the maximum size of the array you would like to use" << std::endl;
    int first_input;
    std::cin >> first_input;
    const int MAX_SIZE = first_input;
    int values[MAX_SIZE];
    int largest = values[0];
    int input;
    std::cout << "Please input any amount of positive integers, -1 to exit." << std::endl;
        for (int i = 0; i < MAX_SIZE; i++){
            std::cin >> input;
            values[i] = input;
            if (input > largest){
                largest = values[i];
        }
            }
        std::cout << "The largest value is " << largest << std::endl;
    return 0;
}
