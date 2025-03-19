#ifndef PEOPLECRUD_HPP
#define PEOPLECRUD_HPP


#include <iostream>
#include "Person.hpp"


class PeopleCRUD{
private:
	std::string dbFilepath;

public:
	PeopleCRUD(std::string dbFilepath);
//	~PeopleCRUD();
	void CreatePerson(Person newPerson);
	void ReadPerson(Person targetPerson);
	void UpdatePerson(Person targetPerson);
	void DeletePerson(Person targetPerson);
	void ListDB();
	void FlushDB();

private:
	void OpenDB();
	void CloseDB();
};

#endif