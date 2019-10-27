#include <iostream>

int main(){
    //2. Dropping the last digit
   const int CC_CAPACITY = 16;
    const int NEW_CAPACITY = 15;
    int cc[CC_CAPACITY] = { 5, 5, 9, 7, 6, 8, 6, 3, 6, 8, 7, 4, 3, 5, 0, 0 };
    int new_cc[NEW_CAPACITY];
    for (int i = 0; i < NEW_CAPACITY; i++){
        new_cc[i] = cc[i];
    }
    for (int i = 0; i < NEW_CAPACITY; i++){
        std::cout << new_cc[i] << " ";
    }
    std::cout << "\n";

    //3. Reverse the digit
    int j = NEW_CAPACITY;
    for (int i = 0; i < j; i++){
        int third_party_var = new_cc[i];
        new_cc[i] = new_cc[j - 1];
        new_cc[j - 1] = third_party_var;
        --j;
    }
    for (int i = 0; i < NEW_CAPACITY; i++){
        std::cout << new_cc[i] << " ";
    }

    //4. Multiply odd digits by 2, subtract 9 from numbers over 9, and then add them together
    std::cout << "\n";
    for (int i = 1; i <= NEW_CAPACITY; i++){
        if (0 != i % 2){
            new_cc[i-1] = new_cc[i-1]*2;
            if (new_cc[i-1] >= 10){
                new_cc[i-1] = new_cc[i-1] - 9;
            }
        }
    }
    int sum;
    for (int i = 0; i < NEW_CAPACITY; i++){
        sum = sum + new_cc[i];
    }
    for (int i = 0; i < NEW_CAPACITY; i++){
        std::cout << new_cc[i] << " ";
    }
    std::cout << "\n";
    std::cout << sum;
    std::cout << "\n";
    int checksum = sum % 10;
    if (checksum == cc[CC_CAPACITY - 1]){
        std::cout << "The CC number is valid" << std::endl;
    }
    else if(checksum != cc[CC_CAPACITY - 1]){
        std::cout << "The CC number is not valid" << std::endl;
    }
    return 0;
}
