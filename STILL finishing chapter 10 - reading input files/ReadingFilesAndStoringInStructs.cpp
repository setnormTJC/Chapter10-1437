#include "Point.h"
#include <iostream>
#include <vector>

#include<fstream>
#include <string>

using namespace std;

struct Point
{
    //public member variables:
    int x1; 
    int y1; 


    //begin member functions: 
    Point(int x1, int y1)
        :x1(x1), y1(y1) {} //"initializer list syntax" 

    void print()
    {
        cout << x1 << "\t" << y1 << endl; 
    }
};


void printPoints(vector<Point>& points)
{
    //for (int i = 0; i < adsfasdfadsf)
    for (auto& point : points) //"range-based for loop"
    {
        point.print(); 
    }
}

double calcAverageXValue(vector<Point>& points)
{
    double sum = 0; 
    for (auto& point : points)
    {
        int x = point.x1; 
        sum += x; 
    }
    return sum / points.size(); 
}

int main()
{
    int x{}; //EMPOWER

    //cout << x << endl; 
    vector<Point> points; 

    ifstream inputFile{ "C:/Users/Work/Desktop/Spring2024/1437/pointsFile.csv" };

    if (!inputFile)
    {
        cout << "Input file not found :[" << endl;
        return -123; 
    }

    //getline(inputFile, line, ','); //ONE Option
    while (!inputFile.eof())
    {
        //let's just print the ENTIRE contents (commas and all) for now
        int x1;
        char comma; 
        int y1; 

        inputFile >> x1 >> comma >> y1; 
        //cout << x1 << "\t" << comma << "\t" << y1 << endl; 

        points.push_back(Point{ x1, y1 });
    }

    printPoints(points); 
    cout << "Average x value is: " << calcAverageXValue(points) << endl; 

    //while(getline()
        
    //endline endl inline
    // 
    // 
    //inputFile >> points[i[]]


    //Point firstPoint{ 1, 2 }; //the use of BRACES instead of () parens is a "modern C++" thing
    
    //points.push_back(firstPoint); 
    //points.push_back(Point{ 3, 4 });

    //printPoints(points); 



    //firstPoint.print(); 

    return 0;
}