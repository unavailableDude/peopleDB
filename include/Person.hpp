#ifndef PERSON_HPP
#define PERSON_HPP


#include <iostream>
#include <string>
#include <stdint.h>


class Person{
private:
	std::string firstName;
	// std::string lastName;
	// std::string address;
	// std::string phone;
	int8_t age;

public:
	Person(std::string firstName, int8_t age);
	//~Person();
	std::string GetFirstName();
	int8_t GetAge();
	void SetFirstName(std::string firstName);
	void SetAge(int8_t age);
	void DebugInfo();
	std::string GetFormattedInfo();
};

#endif