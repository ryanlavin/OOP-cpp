#include <iostream>

int main(){
    int var = 8;
    int* ptr = &var;
    std::cout << ptr << std::endl;
    std::cout << var << std::endl;
    *ptr = 10;
    std::cout << var << std::endl;

    int example[5];
    for (int i = 0; i < 5; i++)
    {
        example[i] = i+1; // means that every element in array will be value of 5
        std::cout << example[2] << std::endl;
    }

    example[2] = 5;

    std::cout << *example << std::endl;
    std::cout << &example[2] << std::endl;


    return 0;
}

