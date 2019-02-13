/*
    Task: Write a program that
        1. inputs some numbers from console and store them in vector (use push_back function)
        2. zero number cause end of input
        3. outputs numbers in file "number.txt"
        After ending of the program find the file in your system
        (it could be present in the binary execution folder)
        and verify content.
*/

#include <iostream>
#include <vector>
//#include <utility>
#include <fstream>
#include <iosfwd>

using namespace std;

int main() {
	cout << "Inputs some numbers: " << endl;

	int num;
	vector<int> v;

	do{
		cin >> num;
		v.push_back(num);
	}
	while(num);

	for(size_t i=0;i<v.size();++i){
		cout << v[i] <<endl;
	}

	string fname{"numbers.txt"};

	ofstream ofile (fname);

	for(size_t i=1;i<v.size();++i){
		ofile << v[i] <<endl;
	}

	return 0;
}
