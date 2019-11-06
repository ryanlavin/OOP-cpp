#include <fstream>
#include <iostream>


int main(){
    std::ofstream out_file;
    out_file.open("/Users/ryantlavin/Downloads/textedit.txt");
    std::string name = "ryan";
    out_file << name << std::endl;
    out_file << "hey hey hey what's goin on " << name << "?" << std::endl;

    return 0;
}
