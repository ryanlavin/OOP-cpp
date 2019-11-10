#include <iostream>
#include <fstream>
#include <string>
#include <system_error>
#include <cerrno>

void processName(std::ifstream& in_file, int& rank){
    std::string male_name;
    std::string female_name;
    double male_frequency;
    double female_frequency;
    std::getline(in_file,male_name);
    in_file >> rank >> male_name >> female_name;
        /*
        if (!in_file){
            char array[256];
            in_file.exceptions ( std::ifstream::eofbit | std::ifstream::failbit | std::ifstream::badbit );
            while (in_file){
            in_file.getline (array,100);
            std::cout << array << std::endl;
            }

        }
        */
    if (in_file.fail()){ std::cout << "You failed" << std::endl; }
}

int main(){
    std::ifstream in_file;
    in_file.open("birthnames.txt");
    if (in_file.fail()){ return 1;}
    int rank;
    std::string rando;

    for (int i = 0; i < 100; i++){
        in_file.seekg(0, std::ios::beg);
        std::getline(in_file, rando);
        in_file >> rank;
        std::cout << rank << " ";
        processName(in_file,rank);
    }

    //if (in_file.fail()){ std::cout << "Failed" << std::endl; return 1; }
    std::cout << std::endl;
    std::cout << "\n";
    return 0;
}
