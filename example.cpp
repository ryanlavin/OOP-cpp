#include <iostream>
#include <cmath>


std::string list[3] = {"i", "love", "popcorn"};

int main(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < list[i].length(); j++){
            std::cout << list[i][j];
        }
        std::cout<<std::endl;
    }

    std::cout << "$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;


    for (int i = 4; i > 0; --i){
        for (int j = 0; j < i; j++){
            std::cout << "#";
        }
        std::cout << "\n";
    }
std::cout << "–––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;

    for (int row = 1; row <= 7; row++){
        for (int hashNum = 1; hashNum <= 4 - abs(row - 4) ; hashNum++){
            std::cout << "#";
        }
        std::cout << "\n";
    }




/*
    for (int i = 7; i > 0; --i){
        for (int j = 0; 7 == i + j; ++j){
            std::cout << "#";
        }
        std::cout << "\n";

 }
*/


    return 0;


}
