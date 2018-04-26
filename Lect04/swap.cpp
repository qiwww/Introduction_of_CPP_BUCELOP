// THis is an example demonstrating pass by reference
#include <iostream>
using namespace std;

void swap(int &a, int &b){
	// Your code
	int c = a;
	a = b;
	b = c;
}

int main() {
	int m = 5;
	int n = 3;
	swap(m, n);
	cout << "m value becomes to " << m << "\n";
	cout << "n value becomes to " << n << "\n";
}