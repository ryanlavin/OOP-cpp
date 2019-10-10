#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>


    srand(time(NULL));
int main(){
    for (int i = 0; i <= 3; ++i){
        int d1 = rand() % (6 + 1);
        int d2 = rand() % (6 + 1);
        std::cout << d1 << " " << d2 << "\n";
    }
    return 0;
}
