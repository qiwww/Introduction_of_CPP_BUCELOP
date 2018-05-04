#include <iostream>
int n = 2;

int doubleNumber(int num) {
	num = num * 2;
	return num;
}

int main() {
	int num = 35;
	//doubleNumber(num);
	num = doubleNumber(num);
	std :: cout << num; // Should print 70
	return 0;
}