//============================================================================
// Name        : 05_HS_Logic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int month;
	cout << "Enter month:"<<endl;
	cin >> month;
	if (month>12 || month<1){
		cout<< "Wrong number"<<endl;
	} else if(month>=3 and month <=5){
		cout << "It is spring"<<endl;
	} else if(month>=6 and month <=8){
		cout << "It is summer"<<endl;
	} else if(month>=9 and month <=11){
		cout << "It is autumn"<<endl;
	} else {
		cout << "It is winter"<<endl;
	}


	return 0;
}
