#include "bird.hpp"

void Bird::Print() const
{
	cout <<"This is bird "<<mName<< endl;
}

Bird::~Bird()
{
	cout << "Call ~Bird " << endl;
	delete[] mBuff;
	mBuff = nullptr;
	mSize = 0;
}
void Bird::setName(string name){
	mName = name;
}
