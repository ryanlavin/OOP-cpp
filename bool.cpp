#include <iostream>

int main(){
    int x = 0;
    int y = 9;

    if ((x != 0 && y == 0) || (x == 0 && y != 0))
    {
        std::cout << "EXACTLY ONE IS = 0" << std::endl;
    }
    else
    {
        std::cout << "BOTH OR NEITHER ARE EQUAL TO 0" << std::endl;
    }

    return 0;
}
