#include<iostream>

using namespace std;

int main() {
	int my_number[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 8;
	do {
		cout << "Current number is:" << my_number[i] << endl;
		i = i + 1;
	} while (i < 4);
	return 0;
}