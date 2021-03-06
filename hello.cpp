#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cstring>

using namespace std;
using std::setw;

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
	
	// Arrays
	int n[ 10 ]; // n is an array of 10 integers
   	
	// initialize elements of array n to 0          
	for ( int i = 0; i < 10; i++ ) {
		n[ i ] = i + 100; // set element at location i to i + 100
	}
	cout << "Element" << setw( 13 ) << "Value" << endl;

	// output each array element's value                      
	for ( int j = 0; j < 10; j++ ) {
		cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
	}
	
	// Strings
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	cout << "Greeting message: ";
	cout << greeting << endl;
	
	char str1[10] = "Hello";
	char str2[10] = "World";
	char str3[10];
	int  len ;

	// copy str1 into str3
	strcpy( str3, str1);
	cout << "strcpy( str3, str1) : " << str3 << endl;

	// concatenates str1 and str2
	strcat( str1, str2);
	cout << "strcat( str1, str2): " << str1 << endl;

	// total lenghth of str1 after concatenation
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;
	
	// Pointers
	
	int  var1;
   	char var2[10];

   	cout << "Address of var1 variable: ";
	cout << &var1 << endl;

	cout << "Address of var2 variable: ";
	cout << &var2 << endl;
	
	int  var = 20;   // actual variable declaration.
	int  *ip;        // pointer variable 

	ip = &var;       // store address of var in pointer variable

	cout << "Value of var variable: ";
	cout << var << endl;

	// print the address stored in ip pointer variable
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// access the value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout << *ip << endl;
		
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

