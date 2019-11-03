#include <iostream>
#include <string>


int main(){



    double broseph_account = 0;
    double joint_account = 2000;
    double* account_pointer = &broseph_account;

    *account_pointer = 1000;
    *account_pointer = *account_pointer - 100;
    std::cout << "Balance: " << *account_pointer << std::endl;

    account_pointer = &joint_account;
    *account_pointer = *account_pointer - 100;
    std::cout << "Balance: " << *account_pointer << std::endl;




    return 0;
}
