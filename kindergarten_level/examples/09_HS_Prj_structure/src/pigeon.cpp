#include <cstring>
#include "animal.hpp"
#include "bird.hpp"
#include "pigeon.hpp"

Pigeon::Pigeon(double weight, string region):
	mRegion{region}
{

	setWeight(weight);

}

Pigeon::~Pigeon()
{
	cout << "Call ~Sparrow " << endl;
	delete[] mBuff;
	mBuff = nullptr;
	mSize = 0;
}

void Pigeon::Print() const
{
	Animal::Print();
	Bird::Print();
	cout <<"This is Sparrow. It is from "<< mRegion << endl;
}

void Pigeon::voice() {cout << "Cur! Cur!\n";};
