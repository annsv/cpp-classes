#ifndef Sparrow_HPP_
#define Sparrow_HPP_

#include "bird.hpp"
#include <iostream>
using namespace std;

class Sparrow: public Bird
{
public:
	Sparrow(double weight, string name,string region);

	Sparrow(const Sparrow& ms);

	Sparrow(Sparrow&& ms);

	Sparrow& operator= (const Sparrow& ms);

	~Sparrow();

	void Print() const;

private:
	string mRegion;
	int* mBuff = nullptr;
	size_t mSize = 0;
	unsigned int msId;
	static unsigned int msCounter;
};

#endif /* Sparrow_HPP_ */
