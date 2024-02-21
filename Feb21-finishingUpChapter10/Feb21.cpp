#include <iostream>

using namespace std;

enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};


struct Date {
	int y, d; // year, month, day
	//string m; 
	//char m[3]; 
	Month m; 
	Date(int y, Month m, int d)
		:y(y), m(m), d(d)
	{
	}
};



int main()
{

	//cout << sizeof(int) << "\t" << sizeof(string) << endl;
	
	cout << sizeof(Date) << endl; 

	//Date otherDate{}
	//Date someDate{ 1776, 744 , 4 };
	Date invalidDate{ 4, Month::jul, 1776 };
	//cout << Month::jul << end;; 
	cout << "YEar: " << invalidDate.y << "/Month" <<(int) invalidDate.m << "/Day" << invalidDate.d << endl;

   // cout << "dfasdfads";
    return 0;
}