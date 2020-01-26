#include <iostream>
#include <fstream>
#include <vector>

class Person{
    public:
	void SetName(std::string name);
	void SetAge(int age);
	std::string GetName();
	int GetAge();
    
    private:
	int age;
	std::string name;
	std::vector<Person> myVector;

};

