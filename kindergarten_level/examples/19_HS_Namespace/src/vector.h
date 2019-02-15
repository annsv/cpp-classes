#include <iostream>

namespace vector
{
	class vector{
	public:
		int& operator[] (int index);
	private:
		int vector[10]{0};
	};
}
