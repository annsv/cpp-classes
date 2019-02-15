/*
    Task: Create own "small" vector implementation in own namespace.
    Creating vector as "stl vector" is long task.
    So we have next restrictions:
        Your vector has 10 elements only (no dynamic allocation).
        operation[] is implemented only.
*/

#include <iostream>
#include "vector.h"
using namespace std;

int main() {
	vector::vector v;
	v[5] = 7;
	cout << v[5]<<" "<< v[4] << endl;
	return 0;
}
