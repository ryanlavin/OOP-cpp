#include <iostream>
#include <iomanip>
#include <string>

int main(){
    double total_cost;
    double placeholder = 0;
    const double menuToppingPrices[6] = {.15, .37, .24, .1, .1, .1};
    std::string input;
    bool answer = false;
    std::string menuToppings[6] = {"LETTUCE", "TOMATO", "PICKLES", "KETCHUP", "MAYO", "MUSTARD"};



        for (int i = 0; i < 6; i++)
        {
            std::cout << "Would you like " << menuToppings[i] << " as a topping?" << std::endl;
            std::cin >> input;

            if (input == "yes"){
                answer = true;
                total_cost = total_cost + menuToppingPrices[i];
            }
            else if (input == "no")
            {
                answer = false;
                total_cost = total_cost + placeholder;
            }
            else
            {
                return 1;
            }


        }

        double pattie_price = 4.5;
        double bun_price = 1.0;
        total_cost = total_cost + bun_price + pattie_price;
        std::cout << "The price of your burger is $" << std::setprecision(4) << double(total_cost) << std::endl;


        }



