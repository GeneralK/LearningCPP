/*
Write a program that asks the user to enter two integers, one named smaller, the other named larger.
If the user enters a smaller value for the second integer, use a block and a temporary variable to swap the smaller and larger values.
Then print the values of the smaller and larger variables. Add comments to your code indicating where each variable dies.
Note: When you print the values, smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.

The program output should match the following:
Enter an integer: 4
Enter a larger integer: 2
Swapping the values
The smaller value is 2
The larger value is 4

Learn CPP 7.3
*/

#include <string>
#include <iostream>
#include <optional> // library for handling function outcomes in C++17

struct mySimpleCompare {
	int smallerInt{ 0 };
	int largerInt{ 0 };
	int valueCompare(int a, int b);
	int valueSwap();
};


void Exercise09() {

}



std::optional<int> valueCompare(int a, int b) {
	if (a == b) {
		std::cout << "They are the same, please try again.";
		return std::nullopt; 
	}
	return a > b ? a : b;
}

int valueSwap(int comparisonResult) {

}