#include <iostream>

int main(){
    int N;
    double mean;
    int minimum;
    int maximum;
    double sum = 0;
    int input;

    std::cout << "How many integers are you working with today, good sir?\n";
    std::cin >> N;

    std::cout<<"Please enter your "<<N<<"numbers\n";
    for (int i = 0; i < N; i++){
        std::cin>>input;
        sum += input; // sum = sum + input ... can also do sum /= input sum -=... sum *=
        if (i==0){
            minimum = input;
            maximum = input;
            continue;
        }else if(input > maximum){
            maximum = input;
        }else if(input < minimum){
            minimum = input;
        }else{
            continue;
        }
    }
    mean = sum / (double)N;
    int range = maximum - minimum;

    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Max: " << maximum << std::endl;
    std::cout << "Min: " << minimum << std::endl;
    std::cout << "Range: " << range << std::endl;
    return 0;
}
