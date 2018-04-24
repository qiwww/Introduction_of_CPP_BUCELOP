// This is a program demonstrating same output for "for loop" and "while" flow
#include <iostream>
using namespace std;

int main() {
	for(int x = 0; x < 10; x = x + 1)
		cout << x << "\n";

	// These three lines just create space between two results 
	cout << "\n";
	cout << "\n";
	cout << "\n";

	int y = 0;
	while (y < 10) {
		cout << y << "\n";
		y = y + 1;
	}

	return 0;
}
