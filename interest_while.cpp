#include <iostream>

int main()
{
    const double INITIAL_BALANCE = 10000;
    const double RATE = 10;
    const int TARGET = INITIAL_BALANCE * 2;
    int year = 0;
    double balance = INITIAL_BALANCE;

    while (balance < TARGET){
        year++;
        double interest = balance * (RATE / 100);
        balance = interest + balance;
        std::cout << "The balance after " << year
        << " years is $" << balance << std::endl;
    }
    std::cout << "The initial investment doubled after "
    << year << " years." << std::endl;

    return 0;
}



