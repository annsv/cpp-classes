/*
    Task:
    	Create template function "last" that returns position of
    	the last element of vector of any elements type.
    	Write a program that demonstrate its work
*/

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T last(vector<T> v){
	//return v.back();
	return v[v.size()-1];
}

int main() {
	vector<int> vec{1,27,5,3,9,12};
	cout << "Vector 1 last element: " << last(vec)<<endl;

	vector<double> vec2{1.4,2.7,5.3,9,1.2};
	cout << "Vector 2 last element: " << last(vec2)<<endl;
	return 0;
}
