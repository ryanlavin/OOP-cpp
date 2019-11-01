#include <iostream>

/*
    * Consider the task of rearraning all values in an array so that the even numbers
    * come first. Otherwise, the order doesn't matter. For example, the array
    * { 1, 4, 14, 2, 1, 3, 5, 6, 23 }
    *                                 could be rearranged to:
    * { 4, 2, 14, 6, 1, 5, 3, 23, 1 }
    * Discover an algorithm that solves this task by swapping elements.
*/

void resortingFunction(int*, int); // I think this declares resortingFunction as a void function with global scope while simultaneously pointing to the beginning of the array with the first argument "int*"

int main(){
    const int SIZE = 9; // Sets the size of the array
    int array[SIZE] = { 1, 4, 14, 2, 1, 3, 5, 6, 23 }; // Initializes the array
    resortingFunction(array, SIZE); // Calls the function while passing the parameter variables for array (an int because the return values are integers) and SIZE
    for (int i = 0; i < SIZE; i++){ // Outputs the rearranged array after the function is called
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    return 0;
}

void resortingFunction(int array[], int SIZE){ // The function being called in int main
    int i = 0;
    int j = SIZE - 1;
    while (i < j){
        if (0 != array[i] % 2){
            int extraVariable = array[i]; // Third-party variable for swapping i and j
            array[i] = array[j]; //
            array[j] = extraVariable;
            j--;
        }
        else if(0 == array[i] % 2){
            i++;
        }
    }
}

/*
for (int z = 0; z < SIZE - 2; z++){
                array[z] = array[z + 1];
            }

    else if (0 == array[i] % 2){
            i++;
        }
*/
