#include "BankAccount.h"
#include <iostream>
#include <fstream>

int main(){
    std::fstream in_file;
    in_file.open("BankAccounts.txt");
    std::string account_name;
    double balance;
    std::string answer1;
    in_file >> account_name;
    in_file >> balance;
    BankAccount *account1 = new BankAccount;
    (*account1).set_account(account_name);
    (*account1).deposit_amount(balance);

    std::cout << "Would you like to input money to " << account_name << "?" << std::endl;
    std::cin >> answer1;
    if (answer1 == "yes"){
            std::cout << "Input any amount to deposit, q to quit" << std::endl;
            double deposited_amt;
            double input;
            while (!std::cin.fail()){
                std::cin >> input;
                deposited_amt = input;
                (*account1).deposit_amount(deposited_amt);
            }
    }
    else if (answer1 == "no"){
        std::cout << "Would you like to withdraw money from " << account_name << "?" << std::endl;
        std::string answer2;
        std::cin >> answer2;
        if (answer2 == "yes"){
            std::cout << "Input any amount to withdraw, q to quit" << std::endl;
            while(!std::cin.fail()){
                double withdrawn_amt;
                double input;
                std::cin >> input;
                withdrawn_amt = input;
                (*account1).withdraw_amount(withdrawn_amt);
            }
        }
    }
    else {return 1;}
    std::fstream out_file;
    out_file.open("BankAccounts.txt");
    std::cout << account_name << " now has a balance of $" << (*account1).get_balance() << std::endl;
    out_file << account_name << std::endl;
    out_file << (*account1).get_balance();
    delete account1;

/*
    std::cout << "Would you like to create an account? Reply \"yes\" or \"no\"" << std::endl;
    std::string answer1;
    std::string answer2;
    std::cin >> answer1;
    if (answer1 == "yes"){
        BankAccount (*account1) = new BankAccount;
        std::cout << "Would you like to input money?" << std::endl;
        std::cin >> answer2;
        if (answer2 == "yes"){
            std::cout << "Input an amount, q to quit" << std::endl;
            double deposited_amt;
            double input = 0;
            while (!std::cin.fail()){
                std::cin >> input;
                deposited_amt = input;
                (*account1).deposit_amount(deposited_amt);
            }
            std::cout << "Your account now has a balance of $" << (*account1).get_balance() << std::endl;

        }
    }
    //std::cout << (*account1).get_balance() << std::endl;
*/
/*
    //BankAccount (*new_balance);
    std::cout << "Input an amount, -1 to quit" << std::endl;
    double deposited_amt;
    double input;
    while (input > -1){
        std::cin >> input;
        deposited_amt = input;
        (*account1).deposit_amount(deposited_amt);
    }
    std::cout << (*account1).get_balance() << std::endl;
*/

    return 0;
}
