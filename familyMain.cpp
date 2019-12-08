#include "familyHeader.h"
#include <iostream>
#include <string>
#include <fstream>

void find_relation(family ryan, family eric){
    if (ryan.get_name() == eric.get_name()){
        std::cout << "The two people are the same" << std::endl;
        return;
    }
    if (ryan.get_mother() == eric.get_mother()){
        std::cout << "The two people are siblings" << std::endl;
    }
    if (ryan.get_height() == eric.get_height() && ryan.get_mother() != eric.get_mother()){
        std::cout << "the two people are cousins" << std::endl;
    }
    if (ryan.get_height() > eric.get_height() && ((ryan.get_mother() != eric.get_name()))){
        std::cout << "Aunt/Uncle status" << std::endl;
    }

}

int main(){

    family ryan(3, "Ryan", 1, "Sue", "Tom");
    family jacqueline(3, "Jacqueline", 0, "Sue", "Tom");
    family sean(3, "Sean", 1, "Sue", "Tom");
    family quin(3, "Quin", 1, "Tracy", "Eric");
    family owen(3, "Owen", 1, "Tracy", "Eric");
    family sue(2, "Sue", 0, "Miriam", "Edward");
    family tom(2, "Tom", 1, "Barb", "Ed");
    family eric(2, "Eric", 1, "Miriam", "Edward");
    family tracy(2, "Tracy", 0, "Bob", "Lucy");
    family miriam(1, "Miriam", 0, "Miranda", "Eduardo");
    family edward(1, "Edward", 1, "Marilynn", "Lukas");


    find_relation(ryan, eric);



    return 0;
}


/*
   std::string line;
    int num;
    std::string name;
    int numGen;
    std::string mama;
    std::string papa;

    std::fstream in_file;
    in_file.open("FamilyGenealogy.txt");
    for(int i=0;i<11;i++){
        getline(in_file, line);
        in_file >> num >> name >> numGen >> mama >> papa;
    }

    //delete[] ptr;
*/
