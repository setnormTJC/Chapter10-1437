#include "Person.h"

/// <summary>
/// This function sets the name of the `Person` object
/// </summary>
/// <param name="userSupplied_name">-> an int that does this</param>
void Person::setName(std::string userSupplied_name)
{
	name = userSupplied_name; 
}

std::string Person::getName()
{
	return name;
}

Person::Person() //default constructor
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

void Person::printAllMemberVars() //scope resolution operator ::
{
	//auto-generated stub 
	cout << Person::name << "\t"
		<< Person::age << "\t"
		<< income << endl; 
	//Person::printAllMemberVars();
}

void Person::makePersonOlder(int howMuchOlder)
{
	Person::age = age + howMuchOlder; 
}

