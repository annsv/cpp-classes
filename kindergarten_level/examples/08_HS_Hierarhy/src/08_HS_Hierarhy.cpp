/*
    Task "Herarhy-1": Chose some topic for herarhy. Some examples:
    	plant -> tree -> oak
    	animal -> bird -> sparrow
    	language -> program language -> Python
    	etc.
    	Write a program that demonstrates herarhy using
*/

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	void Print() {cout << "Weight: " << mWeight<< endl;}
protected:
	void setWeight(double weight){
		mWeight = weight;
	}
private:
	double mWeight = 1;
};

class Bird: public Animal
{
public:
	void Print() {cout <<"This is bird "<<mName<< endl;}
protected:
	void setName(string name){
		mName = name;
	}
private:
	string mName = "Pigeon";
};

class Sparrow: public Bird
{
public:
	Sparrow(double weight, string name,string region):
		mRegion{region}
	{
		setWeight(weight);
		setName(name);
	}


	void Print() {
		Animal::Print();
		Bird::Print();
		cout <<"This is Sparrow. It is from "<< mRegion << endl;
	}

private:
	string mRegion;
};


int main() {

	Sparrow Sp{3.5,"Rich","Ukraine"};
	Sp.Print();
	return 0;
}
