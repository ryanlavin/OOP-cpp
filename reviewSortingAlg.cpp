#include <iostream>

int main(){

    std::cout << "Choose the size of the array" << std::endl;
    int ARRAY_SIZE;
    std::cin >> ARRAY_SIZE;
    int* array = new int[ARRAY_SIZE];
    std::cout << "Input an array of " << ARRAY_SIZE << " values in any order and the sorting algorithm will sort through the array and reorder it lowest to highest" << std::endl;
    for (int i = 0; i <= ARRAY_SIZE - 1; i++){
        int input;
        std::cin >> input;
        array[i] = input;
    }

    std::cout << "Here is the unsorted array:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++){
        std::cout << array[i] << " ";
    }

    int* placeholderArray = new int[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        placeholderArray[i] = array[i];
    }


    std::cout << "\n" << std::endl;

    for (int i = 0; i <= ARRAY_SIZE - 1; i++){
        for (int j = ARRAY_SIZE - 1; j > i; j--){
            if (array[i] > array[j]){
                int placeholder;
                placeholder = array[i];
                array[i] = array[j];
                array[j] = placeholder;
            }
        }
    }

    std::cout << "Here is the sorted array from lowest to highest:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++){
        std::cout << array[i] << " ";
    }
    std::cout << "\n" << std::endl;


    for (int i = 0; i < ARRAY_SIZE; i++){
        for (int j = ARRAY_SIZE-1; j > i; j--){
            if (placeholderArray[i] < placeholderArray[j]){
                int placeholder;
                placeholder = placeholderArray[i];
                placeholderArray[i] = placeholderArray[j];
                placeholderArray[j] = placeholder;
            }
            int placeholder;
        }
    }
    std::cout << "Here is the sorted array from highest to lowest:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++){
        std::cout << placeholderArray[i] << " ";
    }
    std::cout << "\n" << std::endl;

    delete[] array;
    delete[] placeholderArray;
    return 0;
}
