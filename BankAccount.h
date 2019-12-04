#include <string>

class BankAccount{
public:

    //BankAccount();
    //~BankAccount();
// Get the values
    double get_balance();
    double get_deposit();
    std::string get_account();

    void set_deposit(double amount);
    void withdraw_amount(double amount);
    void deposit_amount(double amount);
    void set_account(std::string account_name);


private:
    double balance;
    std::string accountName;
};

class CheckingAccount : public BankAccount{
public:


}
