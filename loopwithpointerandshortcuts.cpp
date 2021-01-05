#include<iostream>

using namespace std;

int main() {
	char my_string[] = "vaibhav";
	printf("My name is %s \n", my_string);

	char my_name[] = { 'v','a','i','b','h','a','v',0 }; // every string has 0 at end and in this type of string declaration we have to 0 at end compulsorily 
	printf("My name is %s \n", my_name);

	cout << ".......break1........\n";
	for (int i = 0; my_name[i] != 0; i++) {
		cout << "Character is:" << my_name[i] << endl;
	}
	cout << ".......break2........\n";
	for (int i = 0; my_string[i] != 0; i++) {
		cout << "Character is:" << my_name[i] << endl;
	}
	cout << ".......break3........\n";
	for (char* cp = my_string; *cp; cp++) {
		cout << "Character is:" << *cp << endl;
	}
	cout << ".......break4........\n";
	for (char i : my_name) {
		cout << "Character is:" << i << endl;
	}
	cout << ".......break5........\n";
	for (char i : my_string) {
		if (i == 0) {
			break;
		}
		cout << "Character is:" << i << endl;
	}
	return 0;
}