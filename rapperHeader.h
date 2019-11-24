#include <iostream>
#include <string>

class rapperProfile{

public:
    rapperProfile(std::string, int);
    ~rapperProfile();
// Get the values
    std::string get_name();
    int get_yearFormed();

// Set the values
    void set_name(std::string);
    void set_yearFormed(int);

private:
    std::string rapper_name;
    int rapper_yearFormed;
};
