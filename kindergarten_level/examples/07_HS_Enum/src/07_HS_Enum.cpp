/*
    Task "Traffic light Modeling". Write the program that
        1. Declares Traffic light colors "red", "yellow", "green", "blinking green" as enum.
        2. Enters number of Traffic light loops.
        3. Enters initial state (with verification that state is possible)
        4. Output loops result.
        5. Example
         	 Input:
         	 	 loops number: 3
         	 	 initial: yellow
         	 Output:
				 yellow -> green -> blinking green -> red
				 yellow -> green -> blinking green -> red
				 yellow -> green -> blinking green -> red
*/
#include <iostream>
using namespace std;

int main()
{
	enum class Etl {red, yellow, green, blinking_green};
	int l = sizeof(Etl);

	Etl tl = Etl::red;
	int loops_number = 0;
 	int initial_state = 0;
	cout << "Enter loops number: " << endl;
	cin >> loops_number;
	cout << "Enter initial state: " << endl;
	cin>>initial_state;
	while(loops_number){

		for (int i=initial_state;i<l;i++){
			cout << tl <<" "<<l << endl;
		}
		loops_number--;
	}

	return 0;
}
