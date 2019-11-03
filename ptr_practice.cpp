#include <iostream>

int main(){
    int b = 4;
    int* a = &b;
    std::cout << &a << std::endl;
    int** z = &a;
    std::cout << **z << std::endl;
    int*** y = &z;
    std::cout << ***y << std::endl;


    int balance = 1000;
    int* checking = &balance;
    std::cout << *checking << std::endl;




    return 0;
}
