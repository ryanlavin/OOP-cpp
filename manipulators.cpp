#include <iomanip>
#include <iostream>



int main()
{
    // Read price per pack

    std::cout << "Please enter the price for a six-pack" << std::endl;
    double pack_price;
    std::cin >> pack_price;

    // Read can volume

    std::cout << "please enter the volume for each can (in ounces): " << std::endl;
    double can_volume;
    std::cin >> can_volume;

    // Compute pack volume

    const double CANS_PER_PACK = 6;
    double pack_volume = can_volume * CANS_PER_PACK;

    // Compute and print price per ounce

    double price_per_ounce = pack_price / pack_volume;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Price per ounce: " << price_per_ounce << std::endl;

    return 0;
}

