#ifndef Bird_HPP_
#define Bird_HPP_

#include "animal.hpp"

#include <iostream>
using namespace std;

class Bird: public Animal
{
public:
	void Print() const;
protected:
	void setName(string name);
private:
	string mName = "Pigeon";
};

#endif /* Bird_HPP_ */
