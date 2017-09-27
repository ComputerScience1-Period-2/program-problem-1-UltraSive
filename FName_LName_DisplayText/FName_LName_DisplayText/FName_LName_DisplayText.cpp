/* Heading
Aidan Perry - 9/21/2017 - Period 2
Assignment Name : Display Text
Introduction into C++ IDE Visual Studios 2015
Create New Project and Display Text to Console
*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	cout << '\n';
}

// MAIN
void main() {
	const char* a = "Period 2";
	// Display Text
	cout << "Aidan Perry" << endl;
	cout << a << endl;
	cout << "Hello World!" << endl;
	pause(); // pauses to see the displayed text
			 // return statment closes the console and ends the program
	return;
}

