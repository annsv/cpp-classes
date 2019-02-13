/*
    Task: Please write a program that:
    1. Creates a dynamic array and fills it by all small chars of English alphabet a-z
    2. Enters zero after 'z' ( it can be integer 0 or symbol '\0' ) to finish the string.
    3. Outputs the array as string
    4. Frees the array memory before the program ends
*/

#include <iostream>
using namespace std;

int main() {
	const int size = 27;
	char *pArray = nullptr;
	pArray = new char[size];
	pArray[27]=0;
	int i = 0;

	for (char c='a'; c<'z'; ++c){
		pArray[i] = c;
		i++;
	}

	cout<<pArray<< endl;

	delete[] pArray;

	return 0;
}
