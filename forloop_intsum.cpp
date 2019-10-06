#include <iostream>

int main(){
    int n;
    int i;
    int sum = 0;

    std::cout << "Please state the number with which you want the integers added up" << std::endl;
    std::cin >> n;


for (i = 0; i <= n; i++)
    {
        sum = sum + i;

    }
    std::cout << sum << std::endl;

    return 0;
}
