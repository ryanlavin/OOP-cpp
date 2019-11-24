#include <iostream>
#include <string>
#include "profileHeader.h"

int main(){
    profile ryan("Ryan", 19, "New Orleans");
    profile ben("Ben", 20, "Cincinatti");
    profile jordan("Jordan", 19, "Seattle");

    std::cout << "\n";
    std::cout << ryan.get_name() << std::endl;
    std::cout << ryan.get_age() << std::endl;
    std::cout << ryan.get_birthplace() << std::endl;
    std::cout << "\n";

    std::cout << jordan.get_name() << std::endl;
    std::cout << jordan.get_age() << std::endl;
    std::cout << jordan.get_birthplace() << std::endl;
    std::cout << "\n";

    std::cout << ben.get_name() << std::endl;
    std::cout << ben.get_age() << std::endl;
    std::cout << ben.get_birthplace() << std::endl;
    std::cout << "\n";
    return 0;
}
