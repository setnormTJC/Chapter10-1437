#include <iostream>
#include <string>

using namespace std;




//class Person
//{
//
//private: //intentionally being EXPLICIT about access modifier 
//    //member variables
//    std::string name; 
//    int age; 
//    double income; 
//
//public: 
//    void setName(string userSupplied_name)
//    {
//        if (userSupplied_name.length() > 6)
//        {
//            cout << "That's too long of a name - setting to 'Bob'" << endl; 
//            name = "Bob";
//        }
//        else
//        {
//            name = userSupplied_name;
//        }
//    }
//
//    string getName()
//    {
//        //only return the first name (assuming a full name was entered) 
//        return name; 
//    }
//
//    //CONSTRUCTOR FUNCTION!
//    Person() //this is a "DEFAULT" constructor (ie: takes no params) 
//    {
//        name = "TBD";
//        age = -999; 
//        income = 0.01; 
//    }
//
//    //this is NOT a default constructor function (because it has args)
//    Person(string userSuppliedName, int userSuppliedAge, double userSuppliedIncome)
//    {
//        name = userSuppliedName; 
//        age = userSuppliedAge; 
//        income = userSuppliedIncome; 
//
//    }
//
//
//    void doSomething();//this is a function "declaration"
//
//    void print()
//    {
//        cout << name << "\t" << age << "\t" << income << endl; 
//    }
//
//
//}; //end `Person` class def.



int main()
{
    int a; //variable declaration -> "asks" the OS to make 4 Bytes of memory avaible
    //sqrt(42);
    
    //std is a "namespace" 
    //std::cout << 

    //name = "asdfasd";
    //m_name

    Person p1; //this line of code "makes" a `Person` object
    //p1.name = "Joe"; //PRIVATE - inaccessible -> "encapsulation" 
    

    p1.setName("Joe12345");
    //cout << p1.getName() << endl; 
    p1.print(); 
    
    p1.doSomething(); 


    Person p2; //this calls the DEFAULT constructor 
    
    Person p3("Alice", 21, 86753.09);

    cout << "\n\nP3's member vars are: " << endl; 
    p3.print(); 
    
    return 0;
}
//
//void Person::doSomething() //a definition of a member function OUTSIDE of the class def.
//{
//    cout << "Person is doing something" << endl; 
//
//}
