#include <iomanip>
#include <iostream>

int main(){
    double item_price;
    int denomination_paid;
    int dollar_coins;
    double pennies;
    double quarters;
    long amount_due;
    const double PENNIES_PER_DOLLAR = 100;
    const double PENNIES_PER_QUARTER = 25;

    // Enter the item's price
    std::cout << "Enter the item's price" << std::endl;
    std::cin >> item_price;

    // Enter the bill denomination paid
    std::cout << "Enter the bill denomination paid" << std::endl;
    std::cin >> denomination_paid;

    amount_due = (denomination_paid * PENNIES_PER_DOLLAR)
    - (item_price * PENNIES_PER_DOLLAR);
    dollar_coins = amount_due / PENNIES_PER_DOLLAR;
    pennies = amount_due % 100;
    quarters = pennies * 25;


    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The change received is $" << int(dollar_coins)
    << "." << int(pennies) << std::endl;


    return 0;
}
