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
//#include <optional> // library for handling function outcomes in C++17
//Syntax: std::optional<int> structure::foo() { return std::nullopt; }

struct simpleCompare {
	int smallerInt{ 0 };
	int largerInt{ 0 };
	void valueSwap();

};


void Exercise09() {
	simpleCompare mysimpleCompare;
	std::cout << "Enter an integer: \n";
	std::cin >> mysimpleCompare.smallerInt;
	std::cout << "Enter a larger integer: \n";
	std::cin >> mysimpleCompare.largerInt;
	mysimpleCompare.valueSwap();


}



void simpleCompare::valueSwap() {
	if (smallerInt == largerInt) {
		std::cout << "They are the same, please try again.";
	}
	if (smallerInt > largerInt) {
		int swap{ 0 };
		swap = largerInt;
		largerInt = smallerInt;
		smallerInt = swap;
	}
	else if (largerInt > smallerInt) {
		int swap{ 0 };
		swap = smallerInt;
		smallerInt = largerInt;
		largerInt = swap;
	}
	// return smallerInt > largerInt ? smallerInt : largerInt; //ternary operatory my beloved. I cannot use you everywhere. 
}
