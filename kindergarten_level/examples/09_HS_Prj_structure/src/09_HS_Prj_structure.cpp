#include <iostream>
#include <cstring>
#include <vector>
#include "animal.hpp"
#include "bird.hpp"
#include "sparrow.hpp"
#include "pigeon.hpp"

using namespace std;

int main() {

	/*
	 * without virtual functions:
	 *
	 *
	 */
	Sparrow sp{3.5,"Rich","Ukraine"};
	sp.Print();

	Sparrow sp2{2.4,"Romka","Russia"};
	sp2.Print();
	// copy
	Sparrow sp3{sp2};
	// move
	Sparrow sp5 = std::move(sp3);

	sp3.Print();

	Sparrow sp4{3.6,"Mike","Ukraine"};
	sp4 = sp2;
	sp4.Print();

	vector<Bird*> birds;
	birds.push_back(new Sparrow());
	birds.push_back(new Sparrow());
	birds.push_back(new Pigeon());
	birds.push_back(new Pigeon());
	birds.push_back(new Pigeon());

	for (auto b: birds){
		b->voice();
	}
	for (auto b: birds){
		delete b;
	}
	return 0;
}
