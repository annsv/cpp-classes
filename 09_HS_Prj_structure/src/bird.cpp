#include "bird.hpp"

void Bird::Print() const
{
	cout <<"This is bird "<<mName<< endl;
}
void Bird::setName(string name){
	mName = name;
}
