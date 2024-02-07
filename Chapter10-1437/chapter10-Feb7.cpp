#include <iostream>

using namespace std;

struct SomeStruct //ENCAPSULATION! 
{
    //public: //This (along with "public") is called an "access specifier" 
                //or an "access modifier" 
    int a = 42; 
    double b = 3.14; 

    void multiplyABy2()
    {
        a = a * 2; // 84 == 42
    }

    //


};

class SomeClass
{
//private: 
    char letter = 'z'; 
    string word = "wordo";

public:
    int doTouchThis = 91; 

private: 
    int c; 

};



int main()
{
    SomeStruct someStructObject; 

    cout << someStructObject.a << "\t" << someStructObject.b << endl; 
    someStructObject.multiplyABy2(); 

    cout << "UPDATED? value of a: " << someStructObject.a << endl; 

    //SomeClass someCLASSobject; 
    //someCLASSobject.word = "aksdfhaksldjfhalksjdfh";
    //cout << someCLASSobject.letter << "\t" << someCLASSobject.word << endl;

    return 0;
}