#include <iostream>

class CashRegister{
public:
    void clear();
    void add_item(double price);

    double get_total() const;
    int get_count() const;

private:
    const int item_count;
    const double total_price;
};
