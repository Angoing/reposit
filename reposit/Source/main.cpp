#include <iostream>
#include "../Headers/simpleClass.h"
using namespace std;

// main function
int main() {
	simple_class sc1;
	simple_class sc2(10);
	simple_class sc3(12);
	
	cout <<"Small test";
	cout <<"Another one";

	cout << sc1.get_value() << endl;
	cout << sc2.get_value() << endl;
	cout << sc3.get_value() << endl;
	
	return 0;
}
