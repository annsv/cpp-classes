/*
    Task: Write a program that
        1. initiates vector by some integer negative and positive numbers
        2. calculates sum of negative numbers
        3. replaces all negative numbers by there absolute velues
        4. outputs results
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vect{1,3,-5,-8,-24,-5,67,7,8,9,-12,-3};

	int sum = 0;

	for (size_t i=1;i<vect.size();++i){
		if (vect[i]<0){
			sum+=vect[i];
		}
	}
	cout <<sum << endl;

	int j = 0;
	for (size_t i=1;i<vect.size();++i){
		if (vect[i]<0){
			j=vect[i]*-1;
			cout <<j << endl;
		}
	}

	return 0;
}
