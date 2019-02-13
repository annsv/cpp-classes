#ifndef Bird_HPP_
#define Bird_HPP_

#include "animal.hpp"

#include <iostream>
using namespace std;

class Bird: public Animal
{
public:
	void Print() const;
	virtual void voice() = 0;
	virtual ~Bird();
protected:
	void setName(string name);
private:
	string mName = "Pigeon";
	int* mBuff = nullptr;
	size_t mSize = 0;
};

#endif /* Bird_HPP_ */
