#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream lineOfText;
    lineOfText.open("textedit.txt");
    std::string mystr;
    lineOfText >> mystr;
    std::cout << mystr << std::endl;

    lineOfText.seekg(0,std::ios::beg);
    std::getline(lineOfText,mystr);
    std::cout << mystr << std::endl;

    lineOfText.seekg(0, std::ios::cur);
    std::getline(lineOfText,mystr);
    std::cout << mystr << std::endl;


    return 0;
}
