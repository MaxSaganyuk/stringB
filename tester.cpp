#include <iostream>
#include <cstdlib>
#include <ctime>

#include "stringB.h"

int main(){
	srand(time(nullptr));

	stringB a = "aaaaa";
	std::cout << a << "\n";	
	a.printIds();

	a.erase(rand() % a.size(), 1);
	
	std::cout << a << "\n";
	a.printIds();	
	
}