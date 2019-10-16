#include <iostream>

int main(){
//Define an array of integers containing the first five prime numbers
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

    return 0;
}
