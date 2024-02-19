#pragma once //means that this header will ONLY get #included ONCE
#include <string>

using namespace std; 

class Inventory
{
private: //explicit  
	std::string itemName; 
	double itemPrice; //USD 
	int unitsAvailable;

		//begin public member function declarations:;; 
public: 
	void setItemName(string); 
	//insert OTHER setters (setter functions) for the other two member vars


	//getters: (accessors)
	double getItemPrice(); //function declaration here 
							//for func. def - see .cpp file

	Inventory();//DEFAULT constructor (takes no args./inputs) 
	//this 
	//insert OTHER constructor here ...


	/*
	* This function multiplies the total units available by their price
	* @param - no parameters
	*/
	double calculateTotalValue(); 
};

