#include <iostream>

    double cube_volume(double side_length){
        double volume = side_length * side_length * side_length;
        return volume;

    }
int main(){

    double results1 = cube_volume(2);
    double results2 = cube_volume(10);
    std::cout << results1 << std::endl;
    std::cout << results2 << std::endl;


    return 0;
}
