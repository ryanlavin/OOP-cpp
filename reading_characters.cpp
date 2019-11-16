#include <iostream>
#include <fstream>
#include <cctype>

int main(){

    std::ifstream in_file;
    in_file.open("textedit.txt");
    char ch;

    while(in_file.get(ch)){
        std::cout << ch;
    }
    in_file.close();
    std::cout << std::endl; std::cout << std::endl;

    std::ifstream i_file;
    i_file.open("textedit.txt");
    std::string line;
    while(getline(i_file, line)){
        std::cout << line << " ";
    }

    std::cout << std::endl;
    return 0;
}
