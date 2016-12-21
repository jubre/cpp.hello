#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// function declaration
int max(int num1, int num2);

// Global Variable declaration:
int a, b;

int count = 10;
//extern void write_extern();

// Definiendo constantes  
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

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
	
	enum color { red, green, blue } c;
	c = blue;
	
	cout << "color c:" << c << endl;
	
	// Local Variable definition:
	int a, b;
	a = 10;
	b = 20;
	
	// using constants
	const int LENGTH2 = 10;
	const int WIDTH2  = 5;
	const char NEWLINE2 = '\n';
	int area;
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;
	
	// signed and unsigned
	short int i;           // a signed short integer
	short unsigned int j;  // an unsigned short integer
  	j = 50000;
   	i = j;
	cout << i << " " << j << endl;	
	
	// using extern -- fallo
	//count = 5; -- tampoco deja utilizar la variable global
   	// write_extern();
	
	// local variable declaration:
	a = 100;
	b = 200;
	int ret;

	// calling a function to get max value.
	ret = max(a, b);
   	cout << "Max value is : " << ret << endl;
	
	//using random
	// set the seed
	srand( (unsigned)time( NULL ) );
  	
	/* generate 10  random numbers. */
	for( i = 0; i < 10; i++ ) {
		// generate actual random number
		j = rand();
		cout <<" Random Number : " << j << endl;
	}
	
	
	return 0;
}

int max(int num1, int num2)  {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

