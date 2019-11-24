#include <iostream>
#include <string>
#include "rapperHeader.h"

int main(){
    rapperProfile outkast("Andre 3000 & Big Boi", 1991);
    rapperProfile jungleBrothers("Mike Gee, Afrika Baby Bam & DJ Sammy B", 1987);

    std::cout << "\n";
    std::cout << outkast.get_name() << std::endl;
    std::cout << outkast.get_yearFormed() << std::endl;
    std::cout << "\n";
    std::cout << jungleBrothers.get_name() << std::endl;
    std::cout << jungleBrothers.get_yearFormed() << std::endl;
    std::cout << "\n";
    return 0;
}
