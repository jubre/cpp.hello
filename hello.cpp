#include <iostream>
using namespace std;

// main() is where program execution begins.

int main() {
	cout << "Hello World" << endl; // prints Hello World
	
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	
	typedef int feet;
	feet distance;
	cout << "Size of feet : " << sizeof(feet) << endl;
	
	return 0;
}

