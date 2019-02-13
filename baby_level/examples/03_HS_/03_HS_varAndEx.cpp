#include<iostream>
using namespace std;

int main(){
	//check if signed/unsigned
	unsigned char b = -1;
	cout<<static_cast<int>(b)<<endl;
	//unsigned char b = -1; output 255
	//How many letters in the English alphabet
	char a = 'a';
	char z = 'z';

	cout << (z-a+1) << endl;
}
