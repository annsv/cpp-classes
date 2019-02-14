/*
    Task:
    	There are some folder names as name1, name2, name3 and file name as file.txt
    	Write the program that prepare path in format .\name1\name2\name3\file.txt for Windows
    	and path in format ./name1/name2/name3/file.txt for Linux.
      	The format must be declared in compilation time as some compiler parameter.
    Optional:
    	Try output C++ standard that supports by your compiler (__cplusplus)
*/

#include <iostream>
using namespace std;


int main() {
#ifdef WINDOWS // compilation: C++ -DWINDOWS
	cout << "Windows: .\\name1\\name2\\name3\\file.txt" << endl;
#elif LINUX // compilation: C++ -DLINUX
	cout << "For Linux: ./name1/name2/name3/file.txt" << endl;
#else
	cout << "Unknown OS" << endl;
#endif

	cout<< __cplusplus;

	return 0;
}
