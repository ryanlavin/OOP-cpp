#include "familyHeader.h"
#include <iostream>
#include <string>
#include <fstream>

int main(){

    family grady("Grady", "cousin");
    std::cout << grady.get_name() << std::endl;
    std::cout << grady.get_relation() << std::endl;



    return 0;
}
