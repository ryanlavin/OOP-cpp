#include <iostream>
using namespace std;
int main(){
  /*  int x = 0;
    std::cout << x << endl;
    std::cout << &x << endl;
    int array[5] = { 0, 1, 2, 3, 4 };
    for (int i = 0; i < 5; i++){
        std::cout << &array[i]<<std::endl;
    }
    */


    int addy = 0;
    int *ptr = &addy;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << &ptr << std::endl;

    return 0;
}
