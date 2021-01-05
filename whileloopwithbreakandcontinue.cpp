#include<iostream>

using namespace std;

int main() {
	int my_number[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	while (i < 4) {

		if (i == 4) {
			break;
		}
		if (i == 3) {

			cout << "skip " << i << " value." << endl;
			i++;
			continue;
		}
		cout << "Current number is:" << my_number[i] << endl;
		i = i + 1;

	}
	return 0;
}