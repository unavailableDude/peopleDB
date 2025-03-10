#include "../include/PeopleCRUD.hpp"


PeopleCRUD::PeopleCRUD(std::string dbFilepath){
	std::cout << "PeopleCRUD object created\n";
	this->dbFilepath = dbFilepath;
}

// PeopleCRUD::~PeopleCRUD(){
// 	std::cout << "PeopleCRUD object destroyed\n";
// }

void PeopleCRUD::CreatePerson(Person newPerson){
	std::cout << "Creating person\n";
}