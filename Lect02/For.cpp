// This is a program demonstrating for loop
#include <iostream>
using namespace std;

int main() {
	// Both versions of for loop work the exactly the same

	// First version of for loop
	for(int x = 0; x < 10; x = x + 1)
		cout << x << "\n";

	// These three lines just create space between results from two for loop
	cout << "\n";
	cout << "\n";
	cout << "\n";
	
	// Second version of for loop
	int y = 0;
	for (; y < 10; y = y + 1)
		cout << y << "\n";

	return 0;

}
