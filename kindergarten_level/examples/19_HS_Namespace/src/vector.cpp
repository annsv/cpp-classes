#include <iostream>
#include "vector.h"

namespace vector
{
	int& vector::operator[](int index) {
		return vector[index];
	}
}
