#include "../include/Person.hpp"


Person::Person(std::string firstName, int8_t age){
	this->firstName = firstName;
	this->age = age;
}

// Person::~Person(){

std::string Person::GetFirstName(){
	return this->firstName;
}

int8_t Person::GetAge(){
	return this->age;
}

void Person::SetFirstName(std::string firstName){
	this->firstName = firstName;
}

void Person::SetAge(int8_t age){
	this->age = age;
}

void Person::ListInfo(){
	std::cout << "First name: " << this->firstName << "\n";
	std::cout << "Age: " << (int)this->age << "\n";
}
