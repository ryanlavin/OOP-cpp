#include <iostream>

int main(){
    std::cout << "Enter a two digit number: ";
   char digitChar = std::cin.get();
   int overallnumber = (digitChar - '0')*10;
   digitChar = std::cin.get();
   overallnumber += (digitChar - '0');
    std::cout << "That number as an integer is: " << overallnumber << std::endl;
    return 0;
}
