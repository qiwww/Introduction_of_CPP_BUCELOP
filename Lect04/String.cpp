// This is a program demonstrating using a character array to present string literals

#include <iostream>
using namespace std;

int main() {
	char helloworld[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0' };

	char helloworld1[] = "Hello, world!";

	cout << helloworld << endl;

	return 0;
}