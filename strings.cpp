#include <string>
#include <iostream>

int main(){
    std::string ig = "Instagram";
    std::cout << "Yo check me out on the " << ig.substr(5, 8) << std::endl;

    return 0;
}
