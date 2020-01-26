#include "ObjStrPrac.h"
#include <iostream>
#include <vector>

int main(){
	Person Ryan, Maxwell, Theo;
	std::ifstream inFile;

	inFile.open("ObjStrPrac.txt");
	if(!inFile){
		throw "Error opening file, please try again";
	}
	std::string NamePlaceholder;
	int agePlaceholder;
	for(int i=0; i < 3; i++){
		std::vector<Person> PersonVector;
		PersonVector.push_back(Ryan);
	}
	inFile >> NamePlaceholder >> agePlaceholder;
	Ryan.SetAge(agePlaceholder);
	Ryan.SetName(NamePlaceholder);
	inFile >> NamePlaceholder >> agePlaceholder;
	Maxwell.SetAge(agePlaceholder);
	Maxwell.SetName(NamePlaceholder);
	inFile >> NamePlaceholder >> agePlaceholder;
	Theo.SetAge(agePlaceholder);
	Theo.SetName(NamePlaceholder);
	std::vector<Person> NameVector;
	std::vector<Person> AgeVector;
	NameVector.push_back(std::ref(Ryan));
	AgeVector.push_back(std::ref(Ryan));
	inFile >> NamePlaceholder >> agePlaceholder;
	std::cout << Ryan.GetName() << std::endl;
	std::cout << Ryan.GetAge() << std::endl;
	std::cout << Maxwell.GetName() << std::endl;
	std::cout << Maxwell.GetAge() << std::endl;
	std::cout << Theo.GetName() << std::endl;
	std::cout << Theo.GetAge() << std::endl;
	return 0;
}
















int GetLineCount(){
	inFile.open("ObjStrPrac.txt");
	if(!inFile){
		throw "Error opening file, please try again";
	}
	std::string line;
	int lineCount;
	while(std::getline(inFile, line){
		inFile >> line;
		lineCount++;	
			}
	return lineCount;
}
