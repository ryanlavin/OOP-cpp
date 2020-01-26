#include <vector>
#include "SimpleFighterClass.h"

class FighterList{

public:
	FighterList(const char* filePath);

private:
	std::vector <Fighter> list;	

};
