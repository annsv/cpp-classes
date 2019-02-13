/*
    Task: Write a program that
        1. inputs numbers
        2. calculate sum of them
        3. Output result and exit after enter of zero
        4. use "break" for exit from while loop
*/
#include <iostream>
using namespace std;

int main() {
	/*int i=2;
	int a = i<2?1:3;
	cout << a << endl;
	*/

	int sum=0;
	int num;
	cout<< "Enter numbers" << endl;

	while(num){
		cin>>num;
		sum+=num;
		cout<< sum << endl;
	}
	return 0;
}
