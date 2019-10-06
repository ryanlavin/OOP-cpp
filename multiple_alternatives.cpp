#include <iostream>
#include <string>

int main(){
 const double RATE1 = 0.10;
 const double RATE2 = 0.25;
 const double RATE1_SINGLE_LIMIT = 32000;
 const double RATE1_MARRIED_LIMIT = 64000;
 double tax1 = 0;
 double tax2 = 0;


// State your income
    std::cout << "Please state your income: " << std::endl;
    double income;
    std::cin >> income;

// State your marital status
    std::cout << "Please state your marital status: s for single or m for married" << std::endl;
    std::string marital_status;
    std::cin >> marital_status;

    if (marital_status == "s")
    {
        if (income <= RATE1_SINGLE_LIMIT)
        {
            tax1 = RATE1 * income;
        }
        else
        {
            tax1 = RATE1 * RATE1_SINGLE_LIMIT;
            tax2 = RATE2 * (income - RATE1_SINGLE_LIMIT);
        }
    }
    else
    {
        if (income <= RATE1_MARRIED_LIMIT)
        {
            tax1 = RATE1 * income;
        }
        else
        {
            tax1 = RATE1 * RATE1_MARRIED_LIMIT;
            tax2 = RATE2 * (income - RATE1_MARRIED_LIMIT);
        }
    }
    double total_tax = tax1 + tax2;
    std::cout << "Your taxes paid are: $" << double(total_tax) << std::endl;

    return 0;
}
