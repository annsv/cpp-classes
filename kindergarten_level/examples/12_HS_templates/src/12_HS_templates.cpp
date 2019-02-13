/*
 	Task: Make class-template of 2-dimensional Point that
 		  1. can store point as 2 digital values
 		  2. has constructor with 2 parameters for x and y
 		  3. Print function, that outputs x,y to cout
*/

#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T x;
	T y;
public:
	Point(T mx, T my)
	{
		x = mx;
		y = my;
	}

	void Print(){
		cout << "Point: "<<x<<" "<<y << endl;
	}

};

int main() {

	Point<int> p1{1,2};
	p1.Print();

}
