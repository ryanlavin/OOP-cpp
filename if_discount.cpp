#include <iostream>

int main(){
    double discount;
    double amount_spent;
    double final_price;

    std::cout << "Enter the amount spent in a transaction" << std::endl;
    std::cin >> amount_spent;

    if (amount_spent < 128)
    {
        discount = (amount_spent) - (amount_spent * 0.08);
    }
    else
        discount = (amount_spent) - (amount_spent * 0.16);
    final_price = discount;

    std::cout << final_price << std::endl;

return 0;
}
