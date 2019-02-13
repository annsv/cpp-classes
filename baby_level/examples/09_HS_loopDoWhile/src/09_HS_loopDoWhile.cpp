/*
    Task: Write a program that do the same as in previous example
        1. inputs numbers
        2. calculate sum of them
        3. Output result and exit after enter of zero
        4. use condition inside while for exit from while loop
*/

#include <iostream>
using namespace std;

int main() {
	int sum =0;
	int num;
	do {
		cout << "Enter number:" << endl;
		cin >>num;
		sum+=num;
		cout << sum << endl;
	} while(num);

	return 0;
}
