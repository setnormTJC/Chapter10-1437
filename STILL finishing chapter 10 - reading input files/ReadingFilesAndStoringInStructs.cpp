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
        :x1(x1), y1(y1) {}
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

    while (!inputFile.eof())
    {
        //let's just print the ENTIRE contents (commas and all) for now
        int x1;
        char comma; 
        int y1; 

        inputFile >> x1 >> comma >> y1; 
        cout << x1 << "\t" << comma << "\t" << y1 << endl; 

    }
    //while(getline()
        

    //inputFile >> points[i[]]


    //Point firstPoint{ 1, 2 }; //the use of BRACES instead of () parens is a "modern C++" thing
    
    //points.push_back(firstPoint); 
    //points.push_back(Point{ 3, 4 });

    //printPoints(points); 



    //firstPoint.print(); 

    return 0;
}