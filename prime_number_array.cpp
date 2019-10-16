#include <iostream>

int main(){
//Defining an array of integers containing the first five prime numbers
    int number_printed = 0;
    int primes[5] = { 2, 3, 5, 7, 11};
    for (int i = 0; i < 5; i++){
        std::cout << primes[number_printed] << std::endl;
        number_printed++;
    }
    std::cout << "–––––––––––––––––––––––––––––––––––––" << std::endl;
    for (int i = 0; i < 2; i++){
        primes[4 - i] = primes[i];
    }
    std::copy(std::begin(primes), std::end(primes), std::ostream_iterator<int>(std::cout, "\n"));

std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;

// Writing a loop that prints the elements of the array values in reverse order, starting with the last element.
    const int CAPACITY = 10;
    int values[CAPACITY] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 1; i <= CAPACITY; i++){
        int z = CAPACITY - i;
        std::cout << values[z] << "  ";

    }
    std::cout << "\n";
    return 0;
}
