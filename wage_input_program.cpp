#include <iomanip>
#include <iostream>
#include <string>


int main(){

// Give first and last name

    std::cout << "Enter your first name" << std::endl;
    std::string first_name;
    std::cin >> first_name;

    std::cout << "Enter your last name" << std::endl;
    std::string last_name;
    std::cin >> last_name;
    std::string full_name = first_name + " " + last_name;


// List wage

    std::cout << "Enter your hourly wage" << std::endl;
    double hourly_wage;
    std::cin >> hourly_wage;

// List how many hours a week your work

    std::cout << "Enter how many hours per week you work" << std::endl;
    double weekly_hours;
    std::cin >> weekly_hours;

// Enter your state's income tax:

    std::cout << "Enter your state's income tax" << std::endl;
    double income_tax;
    std::cin >> income_tax;

// Calculate wage earned after tax

    std::cout << std::fixed << std::setprecision(2);
    double weekly_wage = (hourly_wage * weekly_hours);
    double final_wage = weekly_wage - (weekly_wage * income_tax);
    std::cout << full_name << " " << "earns $" << double(final_wage) << " every week after tax." << std::endl;


    return 0;
}
