#include <iostream>
#include <fstream>
#include <iomanip>

int main(){
    std::ofstream out_file;
    out_file.open("textedit.txt");
    std::cout << "Please input the time in hours" << std::endl;
    int hours;
    std::cin >> hours;
    std::cout << "Now please input the time in minutes" << std::endl;
    int minutes;
    std::cin >> minutes;
    out_file << std::setw(2) << std::setfill('0') << hours << ":" << std::setw(2) << minutes;
    out_file.close();

    return 0;
}
