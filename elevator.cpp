#include <iostream>

int main(){
    int floor;
    int actual_floor;

    std::cout << "Please input the desired floor" << std::endl;
    std::cin >> floor;

    if((floor > 0) && (floor < 20))
    {
       if (floor > 13)
       {
        actual_floor = floor - 1;
       }
       else
       {
        actual_floor = floor;
       }
    }
    else
    {
        std::cout << "Invalid floor, please try again." << std::endl;
        return 1;
    }



    std::cout << "The actual floor you are going to is the " <<
    actual_floor << "th floor" << std::endl;


    return 0;
}
