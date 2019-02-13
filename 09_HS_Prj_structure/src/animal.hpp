#ifndef Animal_HPP_
#define Animal_HPP_

#include <iostream>
using namespace std;

class Animal
{
public:
	void Print() const;
protected:
	void setWeight(double weight){
		mWeight = weight;
	}
private:
	double mWeight = 1;
};

#endif /* A_HPP_ */
