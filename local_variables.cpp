#include <iostream>

int x;
int mystery(int x){
    int s = 0;
    for (int i = 0; i < x; i++){
        int x = i + 1;
        s = s + x;
    }
    return x;
}
int main(){
    x = 4;
    int s = mystery(x);
    std::cout << s << std::endl;
}
