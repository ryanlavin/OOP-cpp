#include <string>
#include <iostream>


int main(){
	std::string str = "catepillar";
	char start = str[0];
	

	int j = str.length() - 1;
	std::cout << str << std::endl;
	for(int i = 0; i <= j; i++){
		char strCopy = str[i];
		str[i] = str[j];
		str[j] = strCopy;
		j--;
	}
	std::cout << str << std::endl;

	return 0;
}
