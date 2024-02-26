#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    Point defaultPoint; //default consturctor
    Point otherPoint{ 1, 1 };

    cout << "distance of the point: " 
        << defaultPoint.getX1() << " , " << defaultPoint.getY1() 
        << " from origin: "
        << defaultPoint.calcDistanceFromOrigin() << endl;

    cout << "distance of other point: " << endl; 
    cout << otherPoint.calcDistanceFromOrigin() << endl; 



    return 0;
}