#ifndef Sparrow_HPP_
#define Sparrow_HPP_

#include "bird.hpp"
#include <iostream>
using namespace std;

class Sparrow: public Bird
{
public:
	Sparrow(double weight=2.6, string name="Boris",string region="Poland");

	Sparrow(const Sparrow& ms);

	Sparrow(Sparrow&& ms); ///move

	Sparrow& operator= (const Sparrow& ms);

	virtual ~Sparrow();

	void Print() const;

	virtual void voice() override;

private:
	string mRegion;
	int* mBuff = nullptr;
	size_t mSize = 0;
	unsigned int msId;
	static unsigned int msCounter;
};

#endif /* Sparrow_HPP_ */
