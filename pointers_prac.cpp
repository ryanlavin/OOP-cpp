#include <iostream>

int main(){
    double jimmys_account = 0;
    double joint_account = 2000;
    double* account_pointer = &jimmys_account;

    *account_pointer = 1000;
    *account_pointer = *account_pointer - 100;
    std::cout << "Balance: " << *account_pointer << std::endl;

    account_pointer = &joint_account;

    *account_pointer = *account_pointer - 100;
    std::cout << "Balance: " << *account_pointer << std::endl;

}
