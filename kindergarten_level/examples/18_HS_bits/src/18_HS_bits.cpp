/*
    Task: "Old style output".
     There is some digital value.
     Write a function that outputs this value in bit format.
     Restriction: using of bitset is disable.
     You could use loop and shift operations.
*/

#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
	uint8_t bt = 0b10101010;
	string str = "";
	for(size_t i=0; i <8; i++)
	{
		int8_t intbit= static_cast<int>(bt);
		if (intbit<0){
			str+="1";
		}
		else {
			str+="0";
		}
		bt<<=1;

	}
	cout << str << endl;

	return 0;
}
