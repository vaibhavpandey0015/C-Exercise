#include<iostream>

using namespace std;

int main() {

	int rating = 4;

	switch (rating)
	{
	case 1:
		puts("Very Poor Rating");
		break;
	case 2:
		puts("Poor Rating");
		break;
	case 3:
		puts("Average Rating");
		break;
	case 4:
		puts("Good Rating");
		break;
	case 5:
		puts("Awesome Poor Rating");
		break;
	default:
		puts("Rating is not Published");
		break;
	}

	return 0;
}