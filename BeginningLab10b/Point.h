#pragma once //only include this header once (an include guard) 
//#ifndef Point_h //ANOTHER WAY to do it 
//
//#endif // !Point_h

class Point
{
public: 
	void setX1(int clientX1);  //function "declaration" (information hiding) 
	void setY1(int clientY1); 

	int getX1();
	int getY1(); 

	Point(); 
	Point(int, int); 

	double calcDistanceFromOrigin(); 


private:
	int x1;
	int y1;

};

