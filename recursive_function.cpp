#include <iostream>

void print_triangle(int side_length){
    if (side_length < 0){return;}
    print_triangle(side_length - 10);
    for (int i = 0; i < side_length; i++){
        std::cout << "[]";
    }
    std::cout << "\n";
}

int main(){

    int side_length;
    std::cout << "Please input a starter side length" << "\n";
    std::cin >> side_length;
    print_triangle(side_length);


    return 0;
}
