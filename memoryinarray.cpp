#include<iostream>
using namespace std;

int main() {

	cout << "Size of Interger data type is: " << sizeof(int) << " bytes" << endl;

	int interger_array[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	cout << "Address of First value (0th index) of an Array: " << interger_array << endl;   // It gives the address of initial value of an array
	cout << "First Value (0th index) of an Array: " << *interger_array << endl << endl;  // Dereferance the address of initial value of an array

	int* home = interger_array;


	for (int i = 0; i < 10; i++) {
		cout << "Value at Address " << home + i << " is " << *(home + i) << endl << endl;
	}
	return 0;
}