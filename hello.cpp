#include <iostream>

void print_bottle(){
int bottle = 6;
std::cout << bottle << std::endl;
}

void greeting(){
std::cout << "Yo yo yo what up it's ya boi Max B" << std::endl;
}

void number_value(){
double number_value = 6.5;
    std::cout << number_value << std::endl;
}

    void cans_per_pack(){
    int cans_per_pack = 6;
    cans_per_pack = cans_per_pack + 2;
    std::cout << cans_per_pack << std::endl;
}

    void variable(){
    int variable = 9;
    std::cout << variable << std::endl;
}

    void variable_pos(){
    int variable_pos = 1000000;
    std::cout << variable_pos << std::endl;
}

    void a(){
    char a = 65;
    std::cout << a << std::endl;
}

int result()
{
    int result = 3 * 2;
    std::cout << result << std::endl;
    return result;
}

double one_billion()
{
    double one_billion = 1000000000 * 2;
    std::cout << one_billion << std::endl;
    return one_billion;
}

int main(){
    std::cout << "hello world" << std::endl;
    print_bottle();
    greeting();
    number_value();
    cans_per_pack();
    variable();
    variable_pos();
    a();
    result();
    one_billion();
    return 0;
}




