/*
	main.cpp
	Created on: 11.03.2025
*/


//C++
#include <iostream>
#include <stdint.h>
#include <vector>

//3rd party
#include "../include/SDL2/SDL.h"

//1st party
#include "../include/PeopleCRUD.hpp"
#include "../include/Person.hpp"


int main(int argc, char* argv[]){
	std::cout << "Hello!\n";
	Person p1("John", 25);
	Person p2("Hannah", 22);
	Person p3("Martin", 30);

	p1.ListInfo();
	p2.ListInfo();
	p3.ListInfo();

	return 0;
}