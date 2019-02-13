#ifndef Pigeon_HPP_
#define Pigeon_HPP_

#include "bird.hpp"
#include <iostream>
using namespace std;

class Pigeon: public Bird
{
public:
	Pigeon(double weight=3, string region="Ukraine");

	virtual ~Pigeon();

	void Print() const;

	virtual void voice() override;

private:
	string mRegion;
	int* mBuff = nullptr;
	size_t mSize = 0;
};

#endif /* Sparrow_HPP_ */
