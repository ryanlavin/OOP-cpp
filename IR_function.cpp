#include <iostream>
#include <cmath>

double balance(int years, double interest_rate, double initial_balance) {
    double new_balance;
    for (int i = 0; i < years; ++i){
        new_balance = initial_balance + (initial_balance * pow(interest_rate, years));
        }
        return new_balance;
}
int main(){
    int years;
    double interest_rate;
    double initial_balance;
    std::cout << "Please input the initial balance of your account" << std::endl;
    std::cin >> initial_balance;
    std::cout << "Please input the number of years you would like to save for." << std::endl;
    std::cin >> years;
    std::cout << "Please input the interest rate you have earned" <<std::endl;
    std::cin >> interest_rate;
    std::cout << "Your new balance after " << years << " years with an interest rate of " << interest_rate << " is $" << balance(years, interest_rate, initial_balance) << std::endl;
    return 0;
}
