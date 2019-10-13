#include <iostream>
#include <string>
#include <iomanip>


    double euro_to_usd(double euro){
    double usd_converted = euro * 1.10;
    return usd_converted;
    }

    double usd_to_euro(double usd){
        double euro_converted = usd * 0.91;
        return euro_converted;
    }

    void rando_char(int char1){
        for (int i = 0; i < 3; ++i) { std::cout << "-"; }
            std::cout << "\n";
        for (int i = 0; i < 10; ++i) { std::cout << "$";}
            std::cout << "\n";
    }

int main(){
std::string input;
std::string input2;
    std::cout << "Would you like to convert euros to dollars? Answer \"yes\" or \"no\"" << std::endl;
    std::cin >> input;

    if (input == "yes"){
        double euros2;
        std::cout << "Please input the amount of euros you would like converted" << std::endl;
        std::cin >> euros2;
        double results1 = euro_to_usd(euros2);
        std::cout << std::setprecision(4) << euros2 << " euros is $" << std::setprecision(4) << results1 << std::endl;
        return 1;
    }
    if (input == "no"){
        std::cout << "Would you like to convert dollars to euros? Answer \"yes\" or \"no\"" << std::endl;
        std::cin >> input2;
    }
    else if (input != "yes" && input != "no"){
        std::cout << "Error, please restart the program and try again" << std::endl;
    }
        if (input2 == "yes"){
            double usd2;
            std::cout << "Please input the amount of dollars you would like converted" << std::endl;
            std::cin >> usd2;
            double results2 = usd_to_euro(usd2);
            std::cout << usd2 << " dollars in euros is €" << std::setprecision(4) << results2 << std::endl;
        }
        else if (input2 == "no"){
            return 1;
        }
        else if (input2 != "yes" && input2 != "no"){
        std::cout << "Error, please restart the program and try again" << std::endl;
    }

    double char1;
    rando_char(char1);

    return 0;
}
