#include <iostream>
    // Compute the number of medals of any specific country
int main(){
    const int COUNTRIES = 4;
    const int MEDALS = 4;
    int count[COUNTRIES][MEDALS] = {
                      { 15, 3, 7, 13 },
                      { 7, 10, 11, 8 },
                      { 9, 6, 7, 12 },
                      { 4, 9, 11, 1 },
                      };
    int total = 0;
    int input;
    std::cout << "Input which of the four countries you would like to know the medal total for, numbered 1-4" << std::endl;
    std::cin >> input;
    for (int i = 0; i < MEDALS; i++){
        total += count[input-1][i];
    }
    std::cout << "The amount of medals country 3 earned: " << total << std::endl;
    return 0;
}
