#include<iostream>

using namespace std;

int main() {

	/*Array Declaration*/

	int arr1[10];   //Declaration by specifying size
	int arr2[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }; //Declaration by specifying size and initializing elements
	int arr3[] = { 31,33,35,37 }; //Declaration by initializing elements

	/*Inserting element in array*/

	arr3[2] = 55;

	for (int i = 0; i < 10; i++) {
		arr1[i] = i + 1;
	}

	/*Access an array elements */
	cout << arr1[0] << " ";
	cout << arr1[1] << " ";
	cout << arr1[2] << " ";
	for (int i = 3; i < 10; i++) {
		cout << arr1[i] << " ";
	}

	return 0;
}