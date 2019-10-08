#include <iostream>
#include <iomanip>
#include <string>

int main(){
    std::string input;
    double input2;
    bool answer = true;
    double final_answer = 0;

    std::string conversions[2] = {"centimeters", "inches"};
    const double convert[2] = {2.54, 1 / 2.54};

    for (int i = 0; i < 2; i++){
    std::cout << "Would you like to convert to " << conversions[i] << "?" << std::endl;
    std::cin >> input;

        if (input == "yes"){
            answer = true;
            std::cout << "How much would you like to convert?" << std::endl;
            std::cin >> input2;
            final_answer = convert[i] * input2;
            std::cout << "Your answer is " << final_answer << " " << conversions[i] << std::endl;
            return 1;
        }
        else if (input == "no"){
            answer = false;
        }

    }







    return 0;
}
