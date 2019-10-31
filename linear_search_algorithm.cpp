#include <iostream>

/*
 A function that returns the sixth position of an element in an array,
 or -1 if the element is not present. Use a linear search algorithm.
*/

int GetUserInput(double*, int); // Not exactly sure what this is doing to be honest


int main(){
    const int CAPACITY = 25; // Setting the size of the array
    double array[CAPACITY]; // Initializing the array with size CAPACITY
    int input = GetUserInput(array, CAPACITY);
    return 0;
}
// The next   lines contain the linear search algorithm in the function GetUserInput
int GetUserInput(double array[], int CAPACITY){ // initializing function GetUserInput and passing the parameter variables array[] and CAPACITY through it
    std::cout << "Input integers, Q to quit" << std::endl; //
    bool reached = false;
    int current_size = 0;
    int input;
    while(!reached && current_size < CAPACITY){
        std::cin >> input;
        array[current_size] = input;
        current_size++;
    }
    if (std::cin.fail()){
        if (current_size >= 6){
        reached = true;
        std::cout << array[6 - 1] << std::endl;
        return array[6];
    }
    else if(current_size <= 6){
        std::cout << "There is not stored value inside the sixth position of the array, please try again" << std::endl;
        return -1;
        }
    }

    return -1;
}
