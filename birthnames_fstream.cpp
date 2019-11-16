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

    in_file.open("birthnames.txt");
    if (in_file.fail()){ return 1;}
    int rank;
    std::string mname;
    int male_1frequency;
    int male_2frequency;
    int maleFrequency;
    char comma1;
    char comma2;
    std::string fname;
    int female_1frequency;
    int female_2frequency;
    int femaleFrequency;
    maleFrequency = male_1frequency*1000 + male_2frequency;
    femaleFrequency = female_1frequency*1000 + female_2frequency;
    std::string line;
    std::stringstream strm;
    //strm.str()
    //getline(in_file, line);
    //in_file >> rank >> mname >> male_1frequency >> comma1 >> male_2frequency >> fname >> female_1frequency >> comma2 >> female_2frequency;
    //std::cout << female_2frequency << std::endl;
    int rank_array[200];
    std::string male_name_array[200];
    std::string female_name_array[200];
    int male_freq_array[200];
    int female_freq_array[200];
    for (int i = 0; i < 200; i++){
    getline(in_file, line);
    in_file >> rank >> mname >> male_1frequency >> comma1 >> male_2frequency >> fname >> female_1frequency >> comma2 >> female_2frequency;
    maleFrequency = male_1frequency*1000 + male_2frequency;
    femaleFrequency = female_1frequency*1000 + female_2frequency;
    rank_array[i] = rank;
    male_name_array[i] = mname;
    female_name_array[i] = fname;
    male_freq_array[i] = maleFrequency;
    female_freq_array[i] = femaleFrequency;
    }
    std::cout << "Choose what rank out of 200 you would like to see the statistics for" << std::endl;
    int input;
    std::cin >> input;
    std::cout << "The male name at rank " << input << " is " << male_name_array[input-1] << " and the female name at rank " << input << " is " << female_name_array[input-1] << std::endl;
    std::cout << male_name_array[input-1] << "'s frequency is " << male_freq_array[input-1] << " and " << female_name_array[input-1] << "'s frequency is " << female_freq_array[input-1] << std::endl;

    strm >> male_1frequency >> comma1 >> male_2frequency;
    maleFrequency = male_1frequency*1000 + male_2frequency;
    //std::cout << "The first boy's frequency is " << strm << std::endl;
    //std::cout << line << std::endl;

/*
    while (getline(in_file, line)) {
        //in_file >> rank >> mname >> male_1frequency >> comma >> male_2frequency >> fname >> female_1frequency >> comma >> female_2frequency;
        //std::cout << "the male 1 frequency: " << male_1frequency << std::endl;
        //std::cout << "the comma: " << comma << std::endl;
        std::cout << "line: " << line << std::endl;
        in_file >> rank >> mname >> male_1frequency >> comma >> male_2frequency >> fname >> female_1frequency >> comma >> female_2frequency;
        std::cout << male_1frequency << std::endl;
        std::cout << female_1frequency << std::endl;

    }
*/
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
