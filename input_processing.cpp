#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    double x = 0;
    double salary;
    double sum;
    int count = 0;
    double average;

    std::cout << "Enter a salary, -1 to finish" << std::endl;
    while (x != -1)
    {
        std::cin >> x;
        if (x != -1)
        {
            sum = sum + x;
            count++;
        }
    }
    if (count > 0)
        {
            average = sum / count;
            std::cout << "The average is " << std::setprecision(9) << average << std::endl;
        }
    else
    {
        std::cout << "No data" << std::endl;
    }





}






/*
    //look up std::vector (look at what it is and the push() function) and std::cerr


*/
