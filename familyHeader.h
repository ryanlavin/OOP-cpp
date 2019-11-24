#include <string>
#include <iostream>

class family{

public:
    family(std::string, std::string);
    ~family();

// Gets the values
    std::string get_name();
    std::string get_relation();

// Sets the values
    void set_name(std::string);
    void set_relation(std::string);


private:
    std::string theirName;
    std::string relationToMe;
};
