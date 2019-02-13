/*
    Task "Parsing to map":
		There is txt file, that has string format <name>=<integer value>
		The names are unique
		Read and parse the file.
		Store content in some map collection.
		Output map content
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map< string, size_t > dictionary;
	string text;
	string str;

	ifstream myfile("list.txt");

	while (getline(myfile, str))
		text += ' ' + str;

	myfile.close();

	for (auto el: dictionary)
	{
		cout << el.first << " : " << el.second << endl;
	}

	return 0;
}
