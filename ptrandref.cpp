#include<iostream>
#include<string>
using namespace std;

int main() {

	string person1 = "john";
	string person2 = "rita";

	string vip = person2;

	cout << "First Person is: " << person1 << endl;
	cout << "Seond Person is: " << person2 << endl;
	cout << "VIP person is: " << vip << endl;

	string* myptr;  //initilization the pointer
	myptr = &vip;   // store the address of vip in myp


	cout << "Address of VIP person is:" << myptr << endl;  // Print the address stored in myp
	cout << "VIP person is:" << *myptr << endl;  //Print the data of address stored in myp ==> It is also called Reference

	 //....................................................................................................
	cout << "...................................................." << endl;
	cout << "...................................................." << endl;

	string& another_address = vip;      // Now address of another_address and vip  is same 
	cout << "Address of VIP person is:" << &another_address << endl;
	cout << "VIP person is:" << another_address << endl;

	another_address = person1;  // if i change the value of another_adddress , vip will also change
								// any change in Reference changes a actual value
	cout << "Now VIP person is:" << vip << endl;
	cout << "Now VIP person is:" << another_address << endl;
	cout << "Now Address of VIP person is:" << &another_address << endl;

	cout << "VIP person is:" << *myptr << endl;

	return 0;
}