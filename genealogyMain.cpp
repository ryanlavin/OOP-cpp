#include "genealogyHeader.h"

/*
    * The goal of this program is to be able to calculate the
    * relationship between any two individuals in my family
*/

int main(){
    std::ifstream in_file;
    std::string line;
    in_file.open("FamilyGenealogy.txt");
    std::string name[11], mother[11], father[11];
    bool gender[11];
    bool genderA;
    std::string nameA, motherA, fatherA; // file streams data into these variables and then these vars are stores into an array of a similar name
    int height[11];
    int heightA;
    for (int i = 0; i < 11; i++){
       getline(in_file, line);
       in_file >> heightA >> nameA >> genderA >> motherA >> fatherA;
       height[i] = heightA;
       father[i] = fatherA;
       mother[i] = motherA;
       gender[i] = genderA;
       name[i] = nameA;
       std::cout << height[i] << " " << name[i] << " " << gender[i] << " " << mother[i] << " " << father[i] << std::endl;
    }

    familyMember *Ryan = new familyMember(height[0], name[0], gender[0], mother[0], father[0]);
    familyMember *Jacqueline = new familyMember(height[1], name[1], gender[1], mother[1], father[1]);
    familyMember *Sean = new familyMember(height[2], name[2], gender[2], mother[2], father[2]);
    familyMember *Quin = new familyMember(height[3], name[3], gender[3], mother[3], father[3]);
    familyMember *Owen = new familyMember(height[4], name[4], gender[4], mother[4], father[4]);
    familyMember *Sue = new familyMember(height[5], name[5], gender[5], mother[5], father[5]);
    familyMember *Eric = new familyMember(height[6], name[6], gender[6], mother[6], father[6]);
    familyMember *Tom = new familyMember(height[7], name[7], gender[7], mother[7], father[7]);
    familyMember *Tracy = new familyMember(height[8], name[8], gender[8], mother[8], father[8]);
    familyMember *Miriam = new familyMember(height[9], name[9], gender[8], mother[9], father[9]);
    familyMember *Edward = new familyMember(height[10], name[10], gender[10], mother[10], father[10]);


    return 0;
}
/*
    new familyMember nameA[i];
        nameA[i].get_nameA();
        std::cout << nameA[i].getnameA() << std::endl;
        nameA[i].get_isMale();
        nameA[i].get_height();
        nameA[i].getmotherName();
        nameA[i].getfatherName();
*/



















/*
    for (int i = 0; i < 11; i++){
        getline(in_file, line);
        in_file >> five >> one >> two >> three >> four;
        one[i] = one;
        two[i] = two;
        three[i] = three;
        four[i] = four;
        five[i] = five;
    }


    std::ifstream in_file;
    std::string line;
    in_file.open("FamilyGenealogy.txt");
    std::string name[11], gender[11], mother[11], father[11];
    std::string nameA, genderA, motherA, fatherA; // file streams data into these variables and then these vars are stores into an array of a similar name
    int height[11];
    int heightB;
*/


