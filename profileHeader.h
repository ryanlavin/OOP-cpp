#include <iostream>
#include <string>

class profile{
public:
    profile(std::string, int, std::string);
    ~profile();
// getting the values
    std::string get_name();
    int get_age();
    std::string get_birthplace();

// setting the values
    void set_name(std::string);
    void set_age(int);
    void set_birthplace(std::string);

private:
    std::string person_name;
    int person_age;
    std::string person_birthplace;
};
