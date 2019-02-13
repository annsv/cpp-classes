/*
    Task1: Make some investigations
        1. Create two any functions and find difference between its pointers
        2. Declare and define two double variables and find difference between its pointers
    Task 2:
        1. Fill vector by some numbers, find the minimum value using "?:" operator
*/

#include <iostream>
#include <vector>
using namespace std;

int sum(int a, int b){
	return a+b;
}

int mult(int a, int b){
	return a*b;
}
double a = 1.3;
double b = 2.4;

double* pa = &a;
double* pb = &b;

vector<int> v{10,2,3,4,8};

int main() {


	cout << (uint64_t)(sum) - (uint64_t)(mult) << endl;
	cout << (uint64_t)(pa) - (uint64_t)(pb) << endl;

	int min = v[0];
	for(size_t j=0;j<v.size();++j){
		v[j]>min? min : v[j+1];
	}

	cout << min << endl;

	return 0;
}
