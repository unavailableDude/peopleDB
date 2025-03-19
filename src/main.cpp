/*
	main.cpp
	Created on: 11.03.2025
*/


//C++
#include <iostream>
#include <stdint.h>
// #include <vector>

//3rd party
#include "../include/SDL2/SDL.h"

//1st party
#include "../include/PeopleCRUD.hpp"
#include "../include/Person.hpp"


int main(int argc, char* argv[]){
	Person p1("John", 25);
	Person p2("Hannah", 22);
	Person p3("Martin", 30);

	p1.DebugInfo();
	p2.DebugInfo();
	p3.DebugInfo();

	PeopleCRUD peopleCRUD("db/people.txt");
	peopleCRUD.CreatePerson(p1);

	return 0;
}
