#include <iostream>
#include <cmath>

    double cube_volume(double side_length){
        double volume = pow(side_length, 3);
        return volume;
    }

    double square_area(double side_length2){
        double area = pow(side_length2, 2);
        return area;
    }
int main(){

    double results1 = cube_volume(2);
    double results2 = cube_volume(10);
    std::cout << "The volume of a cube with side length 2 is: " << results1 << std::endl;
    std::cout << "The volume of a cube with side length 10 is: " << results2 << std::endl;

    std::cout << "————————————————————————————————"<< std::endl;

    double results3 = square_area(5);
    std::cout << "The area of a square with a side length of 5 is: " << results3 << std::endl;
    return 0;
}
