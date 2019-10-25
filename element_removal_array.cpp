#include <iostream>

int main(){

    int current_size = 6;
    int pos;
    std::cout << "Please choose which position you would like to remove from the array, positioned 1-6, 367214" << std::endl;
    std::cin >> pos;
    pos -= 1;
    int values[7] = { 3, 6, 7, 2, 1, 4};
    for (int i = pos + 1; i <= 6; i++){
        values[i - 1] = values[i];
        current_size--;
    }

    std::copy(std::begin(values), std::end(values), std::ostream_iterator<int>(std::cout << "\n"));
    std::cout << "\n";
    return 0;


}
