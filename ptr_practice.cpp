#include <iostream>

int strlength(const char s[]){
    int i = 0;
    while (s[i] != '\0') { i++; } // Count character before the null terminator
    return i;
}

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

    const char* name = "Harry";
    std::cout << *(name+1) << std::endl;

    char char_array[] = "Robby";
    char_array[0] = 'B';
    std::cout << *char_array << *(char_array+1) << *(char_array+2) << *(char_array+3) << *(char_array+4) << *(char_array+5) << std::endl;
    return 0;
}


