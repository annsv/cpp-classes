#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception
{
public:
	MyException(const char* errMessage) :m_ErrMessage(errMessage){}
	const char* what() const noexcept{ return m_ErrMessage; }
private:
	const char* m_ErrMessage;
};

class Car{
public:
	void OpenDoor()
	{
		is_open = true;
		cout<< "Door is open" <<endl;
	}
	void CloseDoor()
	{
		is_open = false;
		cout<< "Door is closed" <<endl;
	}
	void Drive()
	{
		if(is_open == true){
			throw MyException("You can't drive. Close the door, please.");
		}
		cout<< "Car moves" <<endl;
	}
private:
	bool is_open=false;
};

int main() {

	try{
		Car car1;
		car1.OpenDoor();
		car1.CloseDoor();
		car1.Drive();
		car1.OpenDoor();
		car1.Drive();
		// code below will not work
		car1.CloseDoor();
		car1.Drive();
	}
	catch(const MyException& ex){
		cout << ex.what() << " mine" <<endl;
	}
	catch(const exception& ex){
		cout << ex.what() <<" 111 standard"<< endl;
	}

	return 0;
}
