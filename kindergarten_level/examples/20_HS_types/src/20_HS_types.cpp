/*
    Task: Create type alias for 3D matrix based on vector.
     	  Fill the matrix3 of size 2x2x2 elements by values
     	  {{111, 112}, {121, 122}}, {{211, 212}, {221, 222}}
     	  Output matrix.
*/

#include <iostream>
#include <vector>
using namespace std;

//typedef vector <vector < vector<int> > >  matrix3;
using matrix3 = vector <vector < vector<int> > >;

int main() {

	matrix3 m3 {{{111, 112}, {121, 122}}, {{211, 212}, {221, 222}}};

	for(auto st: m3){
		for( auto el: st){
			for( auto el3: el){
				cout << el3 << " ";}
		}
		cout << endl;}
	return 0;
}
