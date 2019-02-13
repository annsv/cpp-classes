/*
    Task: Please write a program that:
    1. Initiates some vector by some integer values.
    2. Includes 2 functions:
    	a) for output a vector content
    	b) for swapping  neighbors even and odd elements (example 1,2,3,4 => 2,1,4,3)
    	   the function returns true, if replacing all elements is possible (even number of elements)
    	   and false if the last element can not be swapped (odd number of elements)
   	3. Outputs vector content before and after swapping.
*/

#include <iostream>
#include <vector>
using namespace std;

void output_data(vector<int>v){
	for(size_t i=0;i<v.size();++i){
		cout << v[i] <<"\t";
	}
	cout <<endl;
}

void swap_data( vector<int> &v){
	for(size_t i=0;i<v.size();i+=2){
		if(v[i]<v[i+1]){
			int temp = v[i];
			v[i] = v[i+1];
			v[i+1] = temp;
		}
	}

}


int main() {

	vector<int> v{1,-2,3,-4,5};
	output_data(v);

	swap_data(v);
	output_data(v);

	return 0;
}
