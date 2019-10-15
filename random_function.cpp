#include <iostream>
#include <cmath>
#include <stdbool.h>

void isPowerOfTwo(int& x){
    x = sqrt(x);
    if (0 == x % 2){
         std::cout << "True" << std::endl;
     }
     else if(0 != x % 2){
        std::cout << "False" << std::endl;
     }
}

int main(){
    int x;
    std::cout << "Please output a number" << std::endl;
    std::cin >> x;
    isPowerOfTwo(x);

    return 0;
}
