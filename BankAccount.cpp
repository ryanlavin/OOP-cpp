#include "BankAccount.h"

/*
BankAccount::BankAccount(double new_balance){
    this->balance = new_balance;
    }

BankAccount::~BankAccount(){
        // Nothing to delete
    }
*/

double BankAccount::get_balance(){
    return this->balance;
}
double BankAccount::get_deposit(){
    return this->balance;
}
std::string BankAccount::get_account(){
    return this->accountName;
}

void BankAccount::deposit_amount(double amount){
    this->balance += amount;
    return;
}

void BankAccount::withdraw_amount(double amount){
    this->balance -= amount;
    return;
}

void BankAccount::set_account(std::string account_name){
    this->accountName = account_name;
    //sBankAccount *accountName;
    return;
}


