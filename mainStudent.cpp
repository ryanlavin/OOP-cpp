#include "student.h"

int main(){
    student ben("Ben",1864);
    student abby("Abby",12341234);
    student jon("Jon",1231232312);
    student lauren("Lauren",232312);

    std::cout<<ben.get_name()<<std::endl;
    std::cout<<ben.get_id()<<std::endl;
    return 1;
}
