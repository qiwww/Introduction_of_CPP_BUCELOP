#include <iostream>

int sum(const int x, const int y) {
	return x + y;
}

int main() {
	std :: cout << sum(sum(1, 2), 3); // Should print 6
	return 0;
}
