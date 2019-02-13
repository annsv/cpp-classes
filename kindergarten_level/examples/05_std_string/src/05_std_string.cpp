#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void ReplaceString(string& str, const string& search, const string& replace) {
    size_t pos = 0;
    while((pos = str.find(search, pos)) != static_cast<int>(string::npos))
    {
         str.replace(pos, search.length(), replace);
         pos += replace.length();
    }
}

int main() {

	string str1 {"Boris is a good boy!\nHe studies C++!\n"};
	string str2 {"C++ is excellent!"};
	string concat = str1+str2;
	cout << concat << endl;

	str1[0] = 'T';
	cout << str1.substr(0,6) << endl;
	cout << "first of "<<concat.find_first_of("C++") << " " << concat.find_last_of("C++") << endl;
	ReplaceString(concat,"C++","Python");
	cout << concat << endl;

	//converting
	stringstream buff;
	buff << "Boris " << 25 << " years old" << endl;
	cout << buff.str() << endl;
	string name,bbb;
	int age = 0;
	buff >> name >> age>>bbb;
	cout << "Name:" << name << "\nAge:" << age <<" "<< bbb<< endl;
	cout<< name.c_str() << "\n "<< static_cast<int>(string::npos) << endl;

	return 0;
}
