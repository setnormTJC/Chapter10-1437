#include "Point.h"

#include<iostream>

void Point::setX1(int clientX1)
{
	x1 = clientX1; 
}

void Point::setY1(int clientY1)
{
	y1 = clientY1; 
}

int Point::getX1()
{
	return 0;
}

int Point::getY1()
{
	return 0;
}

/*DEFAULT constructor
* @param - NONE!
*/
Point::Point()
{
	x1 = 0; 
	y1 = 0; 
}

Point::Point(int clientX1, int clientY1)
{
	x1 = clientX1; 
	y1 = clientY1;
}

double Point::calcDistanceFromOrigin()
{
	//^ is XOR (exclusive OR) in C++  -> computer org.
	return sqrt((x1 * x1) + pow(y1, 2));
}
