#include <iostream>
#include <cstring>
#include "animal.hpp"
#include "bird.hpp"
#include "sparrow.hpp"

using namespace std;

int main() {

	Sparrow sp{3.5,"Rich","Ukraine"};
	sp.Print();

	Sparrow sp2{2.4,"Romka","Russia"};
	sp2.Print();
//copy
	Sparrow sp3{sp2};
	sp3.Print();
//move
	Sparrow sp4{3.6,"Mike","Ukraine"};
	sp4 = sp2;
	sp4.Print();

	return 0;
}
