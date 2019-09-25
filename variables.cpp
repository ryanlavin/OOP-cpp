# include <iostream>
# include <cmath>









/*
This program computes the volume (in liters) of
six-pack of soda cans and the total volume of a
six-pack and a two-liter bottle.
*/


int main(){
    int cans_per_pack = 6;
    const double CAN_VOLUME = 0.355; //Liters in a 12-ounce can
    double total_volume = cans_per_pack * CAN_VOLUME;

    std::cout << "A six-pack of 12-ounce cans contains "
    << total_volume << " liters." << std::endl;

    const double BOTTLE_VOLUME = 2; // Two-liter bottle
    total_volume = total_volume + BOTTLE_VOLUME;
    std::cout << "A six-pack and a two-liter bottle contain "
    << total_volume << " liters." << std::endl;

    const double WAGE = 8.50;
    int hours_per_week = 55;
    double weekly_wage = hours_per_week * WAGE;
    std::cout << "I earned $" << double(WAGE) << "0 an hour and I would work around "
    << hours_per_week << " hours every week, so on average I would earn about $"
    << weekly_wage << "0 on a good week." << std::endl;


    int pennies = 1729;
    int dollars = pennies / 100; // converts pennies to dollars
    int cents = pennies % 100; // change remaining

    std::cout << "After a summer of hard saving, I had $" << int(dollars) << " and "
    << int(cents) << " cents saved!" << std::endl;

    int number = 64;
    int sqrt_number = sqrt(number);
    std::cout << int(sqrt_number) << std::endl;

    double number2 = 15;
    double new_number2 = pow(number2, 2);
    std::cout << double(new_number2) << std::endl;

    double interest_rate = 0.05;
    double balance = 5000;
    double year = 1;
    double interest = balance + year * (balance * interest_rate);
    std::cout << interest << std::endl;

    std::cout << "Please display this message"; // Display prompt




    return 0;
}

