#include <iostream>

int main(){
    int cardDeck[52] = { "2-H", "3-H", "4-H", "5-H", "6-H", "7-H", "8-H", "9-H", "10-H", "J-H", "Q-H", "K-H", "A-H", "2-S", "3-S", "4-S", "5-S", "6-S", "7-S", "8-S", "9-S", "10-S", "J-S", "Q-S", "K-S", "A-S", "2-D", "3-D", "4-D", "5-D", "6-D", "7-D", "8-D", "9-D", "10-D", "J-D", "Q-D", "K-D", "A-D", "2-C", "3-C", "4-C", "5-C", "6-C", "7-C", "8-C", "9-C", "10-C", "J-C", "Q-C", "K-C", "A-C" }

}

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
