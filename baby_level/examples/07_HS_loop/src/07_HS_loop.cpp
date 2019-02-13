/*
    Task: Write a program that
        1. counts sum of numbers from 1 to 100
        2. output all numbers 1 to 100 that is multiply by 3 (3,6,9,12...)
*/

#include <iostream>
using namespace std;

int main() {

	int i, sum,j;
	for(i=1; i<=100; i++){
		sum = sum+i;
	}
	cout << sum<<"\n";

	for(j=3; j<=100; j+=3){
		cout << j <<"\n";
	}

	return 0;
}
