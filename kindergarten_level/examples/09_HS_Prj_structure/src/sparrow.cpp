/*
    Task "Herarhy-3": Get previous project ("Herarhy-2")
    Increase classes by
    	Dynamic data  with allocation/ releasing
		constructor
		copy constructor
		move constructor
		operator=
		destructor
*/
#include <cstring>
#include "animal.hpp"
#include "bird.hpp"
#include "sparrow.hpp"

unsigned int Sparrow::msCounter = 0;

Sparrow::Sparrow(double weight, string name,string region):
	mRegion{region}
{
	msId = msCounter++;
	setWeight(weight);
	setName(name);
}

Sparrow::Sparrow(const Sparrow& ms)
{
	msId = msCounter++;
	cout << "Call copy " << msId << endl;
	mSize = ms.mSize;
	mBuff = new int[mSize];
	memcpy(mBuff,ms.mBuff,mSize*sizeof(int));
}

Sparrow::Sparrow(Sparrow&& ms)
{
	msId = msCounter++;
	cout << "Call move " << msId << endl;
	mSize = ms.mSize;
	mBuff = ms.mBuff;
	ms.mBuff = nullptr;
	ms.mSize = 0;
}

Sparrow& Sparrow::operator= (const Sparrow& ms){
	msId = msCounter++;
	cout << "Call operator= " << msId << endl;
	if(this != &ms){
		mSize = ms.mSize;
		mBuff = new int[mSize];
		memcpy( mBuff, ms.mBuff, mSize*sizeof(int) );
	}
	return *this;
}

Sparrow::~Sparrow()
{
	cout << "Call ~Sparrow " << msId << endl;
	delete[] mBuff;
	mBuff = nullptr;
	mSize = 0;
}

void Sparrow::Print() const
{
	Animal::Print();
	Bird::Print();
	cout <<"This is Sparrow. It is from "<< mRegion << endl;
}
void Sparrow::voice() {cout << "Guli! Guli!\n";}
