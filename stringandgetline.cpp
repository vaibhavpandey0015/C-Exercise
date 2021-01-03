#include<iostream>
#include <string>;
using namespace std;

int main() {

	string my_col;
	string my_another_col;
	/*cout << "Enter your fav. color:";
	cin >> my_col;
	cout << "Hey" << my_col << " is my fav. too...\n";*/
	cout << "Enter your another fav. color:";
	getline(cin, my_another_col);
	cout << "Hey " << my_another_col << " is my fav. too...\n";
	return 0;