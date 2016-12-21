#include <iostream>
using namespace std;

// main() is where program execution begins.

// Local Variable declaration:
extern int a, b;

// Definiendo constantes  
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

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
	
	enum color { red, green, blue } c;
	c = blue;
	
	cout << "color c:" << c << endl;
	
	// Local Variable definition:
	int a, b;
	a = 10;
	b = 20;
	
	return 0;
}

