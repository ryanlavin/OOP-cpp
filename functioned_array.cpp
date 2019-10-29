#include <iostream>

int sum(int array[], int capacity){
    int total = 0;
    capacity = 100;
    bool more = true;
    int input;
    int k = 0;
    std::cout << "Enter integers, Q to quit" << std::endl;
    while (more == true){
        std::cin >> input;
        array[k] = input;
        k++;
        if (std::cin.fail()){
        more = false;
        }
    }

    for (int i = 0; i < k; i++){
       total += array[i];
    }
    return total;
}

int main(){
    const int CAPACITY = 100;
    int array[CAPACITY];
    int total = sum(array, CAPACITY);
    std::cout << "The sum of the array is " << total << std::endl;
    return 0;
}
