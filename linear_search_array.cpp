#include <iostream>
#include <string>

int main(){
    //Search for the position of the first element equal to 100

    int pos = 0;
    int position[7] = { 1, 3, 2, 50, 3, 4, 3};
    bool found = false;
    int postnum = 0;
    std::string post_num[7] = { "st", "nd", "rd", "th", "th", "th", "th"};
    while (pos <= position[6] || !found){
        if (position[pos] == 50){
            found = true;
            std::cout << "The value of 50 is at the " << pos + 1 << post_num[postnum] << " position of the array" << std::endl;
            return 1;
        }
        else if (position[pos] != 50){
            pos++;
            postnum++;
            std::string post_num[postnum];
            found = false;
        }
    }
    if (found == false){
        std::cout << "The position of 50 was never found" << std::endl;
    }

return 0;
}
