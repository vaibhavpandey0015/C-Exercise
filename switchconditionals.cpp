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


// break()  throw the execution outside the curly brace
//          if we don't write break() and case matches true then all the below cases runs untils till another break() comes
//          try it onece with out break() function