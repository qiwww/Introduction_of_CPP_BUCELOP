#include <iostream>
using namespace std;

/*
 * Question 1. 
 * relationship(int a, int b) prints the relationship(>, < or =) between two given integers a, b. 
 * You should print out one full sentence.
 */
void relationship(int a, int b) {
	// Your code here:
}


/* Question 2.
 * sum(int N) returns the sum 1 + 2 + 3 + ... + N with a given N
 */ 
int sum(int N) {
	// Your code here:
}

/* Question 3.
 * rotate1(int *a, int *b, int *c) will rotate the value of given three integers a, b, and c,
 * where a's value becomes c's value,
 * b's value becomes a's value,
 * c's value becomes b's value.
 */ 
void rotate1(int *a, int *b, int *c) {
	// Your code here:
}

/* Question 4.
 * rotate2(int &a, int &b, int &c) will rotate the value of given three integers a, b, and c,
 * where a's value becomes c's value,
 * b's value becomes a's value,
 * c's value becomes b's value.
 */
void rotate2(int &a, int &b, int &c) {
	// Your code here:
}

/* Question 5.
 *  max(int arr[], int length) returns the max integer in given integer array
 */
int max(int arr[], int length) {
	// Your code here:
}

int main() {
	// Test result for Question 1
	int a = 14;
	int b = 23;

	cout << "Relationship between integer a and integer b is: " << "\n";
	relationship(a, b);

	// Test result for Question 2
	int N = 18;
	cout << "The sum from 1 + 2 + 3 +... + N for N = 18 is " << sum(N) << "\n";

	// Test result for Question 3 
	int a = 11;
	int b = 22;
	int c = 33;
	rotate1(&a, &b, &c);
	count << "Integer a becomes " << a << "\n"; 	// a should be 22
	count << "Integer b becomes " << b << "\n"; 	// b should be 33
	count << "Integer c becomes " << c << "\n"; 	// c should be 11

	// Test result for Question 4
	rotate2(a, b, c);
	count << "Integer a becomes " << a << "\n"; 	// a should be 33
	count << "Integer b becomes " << b << "\n"; 	// b should be 11
	count << "Integer c becomes " << c << "\n"; 	// c should be 22


	// Test result for Question 5
	int intArr[] = {2, 4, 5, 3, 6, 1, 10, 8, 9, 0};
	cout << "The maximum integer in the integer array is: " << max(intArr, 10) << "\n";

}


