/*
    Task: Write a program that demonstrates working with classes
        1.Choose some subject that is interesting for you
        2. The class have to have 2 fields: string and double
        3. The class have to have output function
        4. Create 2 objects of this class
        5. Output them
*/

#include <iostream>
#include <vector>

using namespace std;

class CVegetable
{
public:
	CVegetable(const string& name, double weight);
	~CVegetable();
	void Print();

private:
	string mName;
	double mWeight;
};
CVegetable::CVegetable(const string& name, double weight):
	mName(name),
	mWeight(weight)
{
	cout<< "We create class sample " <<endl;
}
CVegetable::~CVegetable()
{
	cout<< "We destroy class sample " <<endl;
}

void CVegetable::Print()
{
	cout << "Our vegetable:" << mName<< "\nOur vegetable weight:"<< mWeight<< endl;
}

int main() {

	CVegetable tomato {"Tomato", 3.5};
	CVegetable potato {"Potato", 1.5};
	tomato.Print();
	potato.Print();

	return 0;
}
