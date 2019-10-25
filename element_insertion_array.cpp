#include <iostream>

int main(){
    const int CAPACITY = 10;
    int rando[CAPACITY] = { 2, 5, 6, 8, 3};
    int current_size = 5;
    int pos;

    std::cout << "Choose the position of the array of \"2, 5, 6, 8, 3\" you would like to increment to insert a new number" << std::endl;
    std::cin >> pos;

if (current_size < CAPACITY){
    current_size++;
    for (int i = current_size - 1; i > pos; i--){
        rando[i] = rando[i - 1];
    }
}
    std::cout << "Now choose the number you would like to insert into that part of the array" << std::endl;
    std::cin >> rando[pos];

    for (int i = 0; i < current_size; i++){
        std::cout << rando[i] << " ";
    }

    std::cout << "\n";
    return 0;
}
