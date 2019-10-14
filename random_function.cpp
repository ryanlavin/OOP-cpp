#include <iostream>
#include <cmath>
#include <stdbool.h>

int isPowerOfTwo(int x){
    if (x == pow(2, 4)){
         std::cout << "True" << std::endl;
     }
     else if(x != pow(2, 4)){
        std::cout << "False" << std::endl;
     }
     return 1;
}

int main(){
    int x;
    std::cout << "Please output a number" << std::endl;
    std::cin >> x;
    int isPowerOfTwo(x);

    return 0;
}
