#include <iostream>
#include <string>

class student{

public:
    student(std::string, int);
    ~student();

    std::string get_name(); // get the value
    int get_id();

    void set_name(std::string); // set the value
    void set_id(int);

private:
    std::string student_name;
    int student_id;
};
