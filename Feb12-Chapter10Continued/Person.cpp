#include "Person.h"


void Person::setName(std::string userSupplied_name)
{
	name = userSupplied_name; 
}

std::string Person::getName()
{
	return name;
}

Person::Person()
{
	//NOT a particularly good definition (because it's empty) 
	name = "TBD";
	Person::age = -989; 
	Person::income = -86753.09; 
}

Person::Person(std::string client_name, int client_age, double client_income)
{
	client_name = name; //WRONG! !!!!
	age = client_age; 
	income = client_income;
}

void Person::printAllMemberVars()
{
	//auto-generated stub 
	cout << Person::name << "\t"
		<< Person::age << "\t"
		<< income << endl; 
	//Person::printAllMemberVars(); 

}
