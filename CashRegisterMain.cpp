#include <iostream>
#include "CashRegister.h"

int main(){
    CashRegister register1;
    CashRegister register2;
    register1.clear();
    register1.add_item(1.80);
    register1.add_item(0.10);
    register2.clear();
    register2.add_item(4.50);


    std::cout << register1.get_total() << std::endl;
    std::cout << register1.get_count() << std::endl;
    std::cout << "\n";

    std::cout << register2.get_total() << std::endl;
    std::cout << register2.get_count() << std::endl;

    return 0;
}
