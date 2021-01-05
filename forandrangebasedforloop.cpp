#include<iostream>

using namespace std;

int main() {
	int my_num[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i <= 7; i++)
	{
		cout << my_num[i] << " ";
	}

	cout << endl << "Range Based for loop" << endl;
	for (int i : my_num)
	{
		cout << i << " ";
	}
	return 0;
}