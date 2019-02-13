/*
    Task: Try calculate
    	c = (a * b) / (d * e)
    	where a, b, c, d, e are int type.
		a = 2000000000; b = 2000000000; d = 2000000; e = 2000000;
		Do we have correct result?
		If not, how change the formula without changing variables type for getting right answer?
*/

#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e;
	a = 20;
	b = 30;
	d = 4;
	e = 5;

	c = (a * b) / (d * e);
//same as that:
	//c = (a/d)*(b/e);//but this variant works with int correctly if numbers are more than int can show
	cout << c << endl; // prints
	return 0;
}
