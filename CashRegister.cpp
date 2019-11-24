#include "CashRegister.h"
#include <iostream>

double CashRegister::get_total(){
    return this->total_price;
}

int CashRegister::get_count(){
    return this->item_count;
}

void CashRegister::clear(){
    item_count = 0;
    total_price = 0;
}

void CashRegister::add_item(double price){
    item_count++;
    total_price += price;
    return;
}
