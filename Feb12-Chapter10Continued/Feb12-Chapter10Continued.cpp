#include <iostream>
#include <string>
#include "Person.h"



using namespace std;


void doSomethingElse(); //function declaration 


int main()
{
    Person p1; 
    p1.setName("Johnny Law");
    Person p2 = p1; 
    p1.printAllMemberVars(); 
    p2.setName("Sarah Law");

    p2.printAllMemberVars(); 

    //int a; //variable declaration -> "asks" the OS to make 4 Bytes of memory avaible
    //sqrt(42);
    
    //std is a "namespace" 
    //std::cout << 

    //name = "asdfasd";
    //m_name

    //Person p1; //this line of code "makes" a `Person` object
    //p1.name = "Joe"; //PRIVATE - inaccessible -> "encapsulation" 
    

    //p1.setName("Joe12345");
    ////cout << p1.getName() << endl; 
    //p1.print(); 
    //
    //p1.doSomething(); 


    ////Person p2; //this calls the DEFAULT constructor 
    //
    ////Person p3("Alice", 21, 86753.09);

    //cout << "\n\nP3's member vars are: " << endl; 
    ////p3.print(); 
    //
    ////if (42)
    ////{
    ////    int a = 123; 
    ////}

    //cout << a << endl; 

    return 0;
}
//
//void Person::doSomething() //a definition of a member function OUTSIDE of the class def.
//{
//    cout << "Person is doing something" << endl; 
//}

void doSomethingElse() //THIS is a function DEFINITION 
{
    cout << "adsfasdf" << endl; 

}
