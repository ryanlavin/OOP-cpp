#include <iostream>
#include <fstream>
#include <string>
#include <system_error>
#include <cerrno>
#include <sstream>
/*
void processName(std::ifstream& in_file, int& rank){
    std::string male_name;
    std::string female_name;
    double male_frequency;
    double female_frequency;
    std::getline(in_file,male_name);
    in_file >> rank >> male_name >> female_name;

    if (in_file.fail()){ std::cout << "You failed" << std::endl; }
}
*/
int main(){
    std::ifstream in_file;
    std::istringstream in_file;
    in_file.open("birthnames.txt");
    if (in_file.fail()){ return 1;}
    int rank;
    std::string mname;
    int male_1frequency;
    int male_2frequency;
    std::string comma;
    std::string fname;
    int female_1frequency;
    int female_2frequency;
    std::string line;

    while (getline(in_file, line)) {
        //in_file >> rank >> mname >> male_1frequency >> comma >> male_2frequency >> fname >> female_1frequency >> comma >> female_2frequency;
        //std::cout << "the male 1 frequency: " << male_1frequency << std::endl;
        //std::cout << "the comma: " << comma << std::endl;
        std::cout << "line: " << line << std::endl;

    }
    in_file.close();




/*
    for (int i = 0; i < 100; i++){
        in_file.seekg(0, std::ios::beg);
        std::getline(in_file, rando);
        in_file >> rank;
        std::cout << rank << " ";
        processName(in_file,rank);
    }
*/
    //if (in_file.fail()){ std::cout << "Failed" << std::endl; return 1; }
    std::cout << std::endl;
    return 0;
}
