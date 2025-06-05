/*
Iterative Power : Given an integer x and a positive number y, write a function that computes xy under following conditions. 
a) Time complexity of the function should be O(Log y) 
b) Extra Space is O(1) 
*/

// Iterative C program to implement pow(x, n)
#include <iostream>
using namespace std;

/* Iterative Function to calculate (x^y) in O(logy) */
int power(int x, unsigned int y)
{
	int res = 1; // Initialize result

	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1)
			res = res * x;

		// y must be even now
		y = y >> 1; // y = y/2
		x = x * x; // Change x to x^2
	}
	return res;
}

// Driver program to test above functions
int main()
{
	int x = 3;
	unsigned int y = 5;

	cout<<"Power is "<<power(x, y);

	return 0;
}