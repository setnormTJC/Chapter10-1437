#include <iostream>

using namespace std;

void printStaticAndAutomaticVars()
{
    static int staticFunctionCallCount = 0;
    int nonStaticVar = 0;
    staticFunctionCallCount++;
    nonStaticVar--;
    cout << "static var value: " << staticFunctionCallCount
        << "\tnonstatic (automatic) var value: " << nonStaticVar << endl;
}

class SomeClass
{
public:
    static int x;
    int y; //nonstatic (automatic) 
    //-> auto means automatically deallocated at the end of a scope (block)
};



int SomeClass::x;

class Math
{
   // const static double PI = 3.14; //?

    int otherVariable; 

    void doSomething(); 
};

int main()
{
    //printStaticAndAutomaticVars(); 

    //printStaticAndAutomaticVars();

    //printStaticAndAutomaticVars();

    SomeClass scObject; 

    SomeClass sc1;
    sc1.x = 1;
    sc1.y = 2;

    SomeClass sc2;
    sc2.x = 3;
    sc2.y = 4;
    
    cout << sc1.x << ", " << sc1.y << endl;
    cout << sc2.x << ", " << sc2.y << endl;


    return 0;
}