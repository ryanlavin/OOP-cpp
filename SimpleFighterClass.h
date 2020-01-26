#include <string>


class Fighter {
public:
	Fighter(std::string name, int hp);

	
	std::string GetName();
	int GetHP();



private:
	int hp;
	std::string name;

};
