#include <iostream>
#include <iomanip>

int main(){
    const double RATE = 5;
    const double INITIAL_BALANCE = 10000;
    double balance = INITIAL_BALANCE;
    double interest;
    int years;
    int nyears;

    std::cout << "Please print the number of years you would like to save for" << std::endl;
    std::cin >> nyears;


    for (years = 1; years <= nyears; years++)
    {
        balance = balance * (1 + RATE / 100);
        balance = balance;
        std::cout << balance << std::endl;
    }



    return 0;
}
