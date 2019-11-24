#include <iostream>

class CashRegister{
public:
    double get_total();
    int get_count();

    void clear();
    void add_item(double price);


private:
    double total_price;
    int item_count;
};
