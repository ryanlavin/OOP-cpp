#include <iostream>

int main(){
    int x;
    int sum = 0;

    do
    {
        std::cin >> x;
        sum = sum + x;
    }
    while (x != 0);

    std::cout << sum << std::endl;

    return 0;
}
