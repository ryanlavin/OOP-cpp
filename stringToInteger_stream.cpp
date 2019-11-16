#include <sstream>
#include <iostream>
#include <string>

int string_to_int(std::string strang){
    std::stringstream strm(strang);
    int n;
    strm >> n;
    return n;
}

std::string int_to_string(int n){
    std::stringstream ss;
    ss << n;
    std::string mystr;
    ss >> mystr;
    return mystr;
}

int main(){
    std::string strang;
    int n;
    std::cout<<"Enter a value for n" << std::endl;
    std::getline(std::cin, strang);
    std::stringstream strm(strang);
    strm >> n;
    std::cout << "\"" << strang << "\"" <<" as an integer is " << n << std::endl;
    std::cout << "\"" << strang  << "\"" << " as an integer is " << strm.str() << std::endl;

    return 0;
}
