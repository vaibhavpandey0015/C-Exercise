#include<iostream>

using namespace std;

int main() {

	int rating = 4;
	if (rating == 5) {
		puts("5 star rated\n");
	}
	else if (rating == 4) {
		puts("Only 4 Star rated");
	}
	else {
		puts("Not 5 star rated\n");
	}

	// false == NULL == 0
	// true == any integer other than 0

	if (false || 0 || NULL) {
		puts("It never gone to be execute");
	}
	else if (true || 11) {
		puts("Always go for Execution");
	}
	else {
		puts("something..");
	}

	return 0;
}