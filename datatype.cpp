#include<iostream>
using namespace std;

int main() {
	cout << "See the World..!\n";
	// It is single line Comment.
	/* This is multi line comments
		this is second line */

	bool isValid = true;
	char initial = 'v';
	int Number = 123;
	float decimalValue = 4.0008;
	double bigDecimalValue = 6.00000000000000000005;
	printf("Size of Boolean datatype is %ld bits. \n", sizeof(bool) * 8);
	printf("Size of Character datatype is %ld bits. \n", sizeof(char) * 8);
	printf("Size of Integer datatype is %ld bits. \n", sizeof(int) * 8);
	printf("Size of short Integer datatype is %ld bits. \n", sizeof(short int) * 8);
	printf("Size of long Integer datatype is %ld bits. \n", sizeof(long int) * 8);
	printf("Size of long long Integer datatype is %ld bits. \n", sizeof(long long int) * 8);
	printf("Size of long datatype is %ld bits. \n", sizeof(long) * 8);
	printf("Size of long long datatype is %ld bits. \n", sizeof(long long) * 8);
	printf("Size of Float datatype is %ld bits. \n", sizeof(float) * 8);
	printf("Size of Double datatype is %ld bits. \n", sizeof(double) * 8);

	return 0;
}