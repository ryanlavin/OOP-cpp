#include <iostream>

int read_input(double*, int); // double* because this is simply a pointer to the beginning of the array

int main(){
    const int CAPACITY = 10; // good use of const
    double values[CAPACITY]; // have you looked into dynamic memory allocation yet?
    int input = read_input(values, CAPACITY);

    for (int i = 0; i < CAPACITY; i++){
        std::cout << values[i] << " ";
    }
    std::cout << "\n";
    return 0;
}


int read_input(double values[], int CAPACITY){ // notice here i indent to the same line is where int main() is...
    int current_size = 0;// you need to initialize this to 0 otherwise the compiler wont know where to start the value!!
    int input;
    std::cout << "Input integers" << std::endl;
    while(current_size < CAPACITY){ // btw -> this is an o(n) process. Look up runtime analysis when you get around to it
        std::cin >> input;
        values[current_size] = input;
        current_size++; // this means current_size = current_size + 1; but you dont say that current_size = 0 so what happens first run through?
    }
    return current_size;  // what really is the point of this variable being returned? you dont have to return a variable... just simply say function is void
    
}

/*  Few notes i have: make sure you are commenting out your code and describing what you are doing. Make sure specifically
 *  that you explain each logic block ie "The next 10 lines are used to assign and assess the value of the array"
 *
 *  you need to look into correct function declaration and indenting
 *
 *  also make sure when you are naming functions, you are naming them precisely. For instance i wouldnt have named it read_input.
 *  yes you are reading something but it could mean reading from a file etc. instead i would declare as getUserInput (camel casing) the name
 */














/*
int main(){
    const int CAPACITY = 10;
    double values[CAPACITY];
    int input = int read_input(values, CAPACITY);

    for (int i = 0; i < CAPACITY; i++){
        std::cout << values[i] << " ";
    }
    std::cout << "\n";
    return 0;
}


    int read_input(double values[], int CAPACITY){
    int current_size;
    int input;
    std::cout << "Input integers" << std::endl;
    while(current_size < CAPACITY){
        std::cin >> input;
        values[current_size] = input;
        current_size++;
    }
    return current_size;
}
*/


