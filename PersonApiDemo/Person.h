#pragma once //makes it to where this header is ONLY included ONCE

#include<iostream>

#include<string>

using std::cout;
using std::endl;

//#ifndef Person_H //an alternative to #pragma once that's fine


//this header file is called a "specification" file!
//spec.
class Person
{
	//private:
	//member variables: 
	std::string name = "asdfasdfasdf";
	double income = 2345.06;
	int age = 2345;


public:
	//member functions: 
	//setters are sometimes called "mutator" 
	void setName(std::string userSupplied_name); //function declaration
	std::string getName();//"accessor" method 


	Person(); //declares the existence of the default `Person` constructor

	//an overload of the constructor that takes params: 
	Person(std::string asdfasd, int clientSupplied_Age, double client_income);


	void printAllMemberVars();
};

