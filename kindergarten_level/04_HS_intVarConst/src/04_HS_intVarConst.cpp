/*
    Task: Investigate float and double literal constants. Please write a program that:
    1. Outputs size of float and double
    2. Outputs minimum and maximum values for float and double.
    3. Tries initiate double variable by literal with exponential format and without it
    4. Tries assign float to int. How it will be done: by truncation or rounding?
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
	float a = 1.2;
	double b = 2.67;

	cout<<"size of float a: "<<sizeof(a)<<endl;//truncation
	cout<<"size of double b: "<<sizeof(b)<<endl;//truncation

	//min max
	cout<<"min max float: " << numeric_limits<float>::min()<<" " << numeric_limits<float>::max()<<endl;
	cout<<"min max double: " << numeric_limits<double>::min()<<" " << numeric_limits<double>::max()<<endl;


	double ee = 124435457878E+10;
	double e =  124435457878;
	cout<<"size of ee: "<<ee<<endl;//truncation
	cout<<"size of e: "<<e<<endl;//truncation

	int c = 3.9;
	cout<<static_cast<float>(c)<<endl;//truncation
	return 0;
}
