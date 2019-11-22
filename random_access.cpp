#include <sstream>
#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::fstream in_file;

    int getPosition = 4;
    int putPosition = getPosition + 2;
    in_file.seekg(getPosition);

    std::cout << putPosition << std::endl;

    in_file.open("textedit.txt", std::ios::in | std::ios::out | std::ios::binary);
    int input = in_file.get();
    std::cout << input << std::endl;
    //position = in_file.get();


    return 0;
}

/*
std::string birthday = "March 2, 2000";
    std::stringstream strm;
    strm.str(birthday);
    std::cout << strm.str() << std::endl;
    int position;
    strm.seekg(4);
    position = strm.get();
    std::cout << position << std::endl;
    */
