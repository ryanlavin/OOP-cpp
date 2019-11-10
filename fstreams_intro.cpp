#include <fstream>
#include <iostream>


int main(){

    char data[10];
    std::ofstream out_file;
    out_file.open("textedit.txt");
    std::cout << "Input your name: ";
    std::cin.getline(data, 10);
    out_file << data << std::endl;
    std::cout << "Input your favorite number: ";
    std::cin >> data;
    std::cin.ignore();
    out_file << data << std::endl;


    std::ifstream input_from_file;
    input_from_file.open("textedit.txt");
    if (input_from_file.is_open()){ std::cout << "Okay proceed with program" << std::endl; }
    std::string convo;
    if (input_from_file.fail()){ return 1; }
    input_from_file >> data;
    std::cout << data << std::endl;
    input_from_file >> data;
    std::cout << data << std::endl;

    return 0;
}



















/*

*/
